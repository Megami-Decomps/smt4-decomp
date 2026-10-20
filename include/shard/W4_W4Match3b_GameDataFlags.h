/* The flag word at g_gameDataBlocks + 0x18 and the byte at +2 that mirrors "no flag set" (smt4). */
#ifndef SHARD_W4_W4MATCH3B_GAMEDATAFLAGS_H
#define SHARD_W4_W4MATCH3B_GAMEDATAFLAGS_H

#include "common.h"

typedef struct GameDataFlagsView {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u8 noFlags;     /* 1 when `flags` is zero */
    /* 0x03 */ u8 unk03[0x15];
    /* 0x18 */ u32 flags;
} GameDataFlagsView;

extern "C" GameDataFlagsView g_gameDataBlocks;

#endif
