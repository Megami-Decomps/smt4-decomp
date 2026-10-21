#ifndef SHARD_W6_W6MATCH2_SAVE_FLAGS_H
#define SHARD_W6_W6MATCH2_SAVE_FLAGS_H

#include "shard/GameDataBlocks.h"

struct SaveFlagWork {
    u8 unk00000[0x24b3c]; // 0x00000
    u8 flags[63];          // 0x24b3c
};

struct SaveFlagImage {
    u8 header[0x88]; // 0x00
    SaveFlagWork work; // 0x88
};

#endif
