#ifndef SHARD_W6_W6MATCH4_RELATIVEDIRECTORY_H
#define SHARD_W6_W6MATCH4_RELATIVEDIRECTORY_H

#include "common.h"

struct DirectoryRecord {
    u32 id; // 0x00
    u32 size; // 0x04
    u32 dataOffset; // 0x08
    u32 unk0c;
};
struct RelativeDirectory {
    u8 unk00[0x10];
    s32 count; // 0x10
    u32 recordsOffset; // 0x14
};

#endif
