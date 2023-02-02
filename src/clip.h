#pragma once
static constexpr auto RPLY_MAGIC = 0x52504C59; //YLPR
static constexpr auto HEADER_SIZE = 2768;
static constexpr auto HEADER_VERSION = 4;
static constexpr auto HEADER_START = 8;
static constexpr auto BLOCK_SIZE = 0x400000; // 4194304;

struct tHeader
{
    uint32_t magic;
    uint32_t version;
    uint32_t headerSize;
    uint32_t subVersion;
    char buildDate[12];
    char buildTime[9];
    char pad_datetime[0x03];
    float recordedTime; //not really
    char pad[8];
    uint32_t numberOfBlocks;
    char pad2[8];
    char recordDate[12];
    char pad3[2690];
};

struct tClipFileHeader
{
    uint32_t crcOfHeader;
    uint32_t crcOfData;
    tHeader header;
};

#pragma pack(push, 1)
struct tBlockHeader
{
    uint64_t sizeOfBlockHeader; //should be 36 as of now
    uint32_t compressedSize; //0 if not compressed
    uint8_t v19; //1 = normal block?, 2 = last block?
    uint8_t isUncompressed; //IS IT REALLY?
    uint16_t blockIdx; //index of this block
    uint32_t lastPacketPos; //relative position of the last packet of the block has the id 0, with size 12, see CPacket::Header size info
    uint32_t freeSpace;

    struct
    {
        int p1;
        int p2;
    } v23; //the sum of these 2 gives a value close to BLOCK_SIZE

    char pad[4];
};
#pragma pack(pop)

struct CPacket
{
    struct Header
    {
        uint16_t id;
        char pad_0x02[2];
        uint16_t size;
        uint16_t unk;
        uint32_t aa;

        //packet header likely ends with 0xAAAAAAAA
        bool isValid()
        {
            return aa == 0xAAAAAAAA;
        }
    }; //supposed to be size 12 as the smallest packet, the block trailing one with type id 0, is only 12 bytes

    Header header;
    char* data;

    CPacket(Header _header)
    {
        header = _header;
        data = new char[header.size];
    }

    void SetData(char* _data)
    {
        memcpy(data, _data, header.size - sizeof(Header));
    }

    ~CPacket()
    {
        delete[] data;
    }
};

struct tBlock
{
    char data[BLOCK_SIZE];

    tBlock()
    {
        memset(data, 0, BLOCK_SIZE);
    }
};