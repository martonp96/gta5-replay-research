#pragma once

#include <fstream>
#include <filesystem>
#include <iostream>

class FileWrap
{
    std::filesystem::path path;
    std::ifstream* stream;
    size_t streamSize;

public:
	FileWrap(const std::filesystem::path& _path) : path(_path)
    {
        stream = new std::ifstream(path, std::ios::binary | std::ios::ate);
        if (!stream || !stream->is_open()) return;

        streamSize = stream->tellg();
        stream->seekg(0);

        std::cout << path.string() << " loaded." << std::endl;
    }

    ~FileWrap()
    {
        if (stream || stream->is_open())
        {
            stream->close();
            delete stream;
        }
    }

    bool IsOpen()
    {
        return stream && stream->is_open();
    }

    void Seek(size_t pos)
    {
        if (pos < streamSize)
            stream->seekg(pos);
    }

    size_t Tell()
    {
        return stream->tellg();
    }

    size_t Size()
    {
        return streamSize;
    }

    template<typename T>
    void Read(T& buf, size_t size = sizeof(T))
    {
        stream->read((char*)&buf, size);
    }
};

class StreamWrap
{
	char* stream;
	size_t streamSize;
	size_t streamPos;

public:
	StreamWrap(char* _stream, size_t size)
	{
		stream = _stream;
		streamSize = size;
		streamPos = 0;
	}

	void Seek(size_t pos)
	{
		if (pos < streamSize)
			streamPos = pos;
	}

	size_t Tell()
	{
		return streamPos;
	}

	size_t Size()
	{
		return streamSize;
	}

	template<typename T>
	void Read(T& buf, size_t size = sizeof(T))
	{
		if (size + streamPos > streamSize)
		{
			std::cout << "Read overflow! " << size << " " << streamPos << " " << streamSize << std::endl;
			return;
		}

		memcpy((char*)&buf, &stream[streamPos], size);
		streamPos += size;
	}
};