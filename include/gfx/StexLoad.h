#ifndef GFX_STEXLOAD_H
#define GFX_STEXLOAD_H
#include "shard/W6_W6Match5_TextureEntry.h"
#include "shard/S1AsdTexTable.h"
#include <stddef.h>
struct StexHeader {
    char magic[4];
    u32 version;
    u32 target;
    s32 width;
    s32 height;
    u32 type;
    u32 format;
    u32 unk1C;
    u32 dataOffset;
    u32 external;
};
struct StexLoadPacket {
    StexHeader *data;
    u32 unk04;
    u32 bytes;
};
typedef char StexHeaderOffsets[(offsetof(StexHeader, dataOffset) == 0x20 && sizeof(StexHeader) == 0x28) ? 1 : -1];
#endif
