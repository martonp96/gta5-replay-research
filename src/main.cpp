#include <lz4.h>

#include "crc.h"
#include "file.h"
#include "clip.h"

std::vector<tBlock*> blocks;
std::vector<CPacket*> packets;

void main()
{
    FileWrap file("clip7.clip");

    tClipFileHeader rpl;

    file.Read(rpl.crcOfHeader);
    file.Read(rpl.crcOfData);
    file.Read(rpl.header.magic);

    if (rpl.header.magic != RPLY_MAGIC)
    {
        std::cout << "Invalid clip header" << std::endl;
        return;
    }

    file.Read(rpl.header.version);
    if (rpl.header.version != HEADER_VERSION)
    {
        std::cout << "Invalid header version" << std::endl;
        return;
    }

    file.Read(rpl.header.headerSize);
    if (rpl.header.headerSize != HEADER_SIZE)
    {
        std::cout << "Invalid header start size" << std::endl;
        return;
    }

    file.Seek(HEADER_START);
    file.Read(rpl.header);

    if (CRC32::Calc((char*)&rpl.header, HEADER_SIZE) != rpl.crcOfHeader)
    {
        std::cout << "Invalid header crc" << std::endl;
        return;
    }

    std::cout << "Header successfully parsed!" << std::endl;
    std::cout << "- Game build date: " << rpl.header.buildDate << " " << rpl.header.buildTime << std::endl;
    std::cout << "- Clip record date: " << rpl.header.recordDate << std::endl;
    std::cout << "- Number of blocks: " << rpl.header.numberOfBlocks << std::endl;

    while (file.Tell() != file.Size())
    {
        tBlockHeader v10;
        file.Read(v10);

        if (v10.v23.p2 != (v10.lastPacketPos ^ v10.freeSpace ^ v10.v23.p1 ^ v10.v19 ^ v10.blockIdx))
        {
            std::cout << "Some shit does not match" << std::endl;
            return;
        }

        tBlock* block = new tBlock();
        if (v10.compressedSize)
        {
            char* zblock = new char[v10.compressedSize];

            file.Read(zblock[0], v10.compressedSize);
            if (LZ4_decompress_safe(zblock, block->data, v10.compressedSize, BLOCK_SIZE) < 0)
            {
                std::cout << "Block " << v10.blockIdx << " has incorrect compression" << std::endl;
            }

            delete[] zblock;
        }
        else
        {
            file.Read(block->data[0], BLOCK_SIZE);
        }

        blocks.push_back(block);

        std::cout << "Block " << v10.blockIdx << " successfully parsed " << std::endl;
    }

    for (auto block : blocks)
    {
        StreamWrap stream(block->data, BLOCK_SIZE);

        bool lastPacketFound = false;
        while (!lastPacketFound)
        {
            CPacket::Header pktHeader;
            stream.Read(pktHeader);

            if (!pktHeader.isValid())
            {
                std::cout << "Not a packet header!" << std::endl;
                return;
            }

            if (pktHeader.id == 0)
                lastPacketFound = true;

            auto buf = new char[pktHeader.size];
            stream.Read(buf[0], pktHeader.size - sizeof(CPacket::Header));

            CPacket* pkt = new CPacket(pktHeader);
            pkt->SetData(buf);
            delete[] buf;

            packets.push_back(pkt);
        }
    }

    std::cout << "Clip parsed successfully. Number of packets: " << packets.size() << std::endl;
    getchar();
}