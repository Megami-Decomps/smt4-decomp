/* Table of game-data block pointers and small flags at g_gameDataBlocks (0x43e2a8). */
#ifndef SHARD_GAMEDATABLOCKS_H
#define SHARD_GAMEDATABLOCKS_H

#include "common.h"

typedef struct GameDataBlocks {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ u8 unk01;
    /* 0x02 */ s8 unk02;
    /* 0x03 */ u8 unk03;
    /* 0x04 */ u8 *unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u16 *unk0C;
    /* 0x10 */ u32 unk10;
} GameDataBlocks;

/* Apocalypse's persistent 32-bit stats flag set, stored bytewise. */
struct StatsFlagView {
    /* 0x000 */ u8 unk000[0x264];
    /* 0x264 */ u8 flags[4];
};

typedef char StatsFlagViewSizeCheck[sizeof(StatsFlagView) == 0x268 ? 1 : -1];

struct StatsLeadingFlagView {
    /* 0x00 */ u8 first[4];
    /* 0x04 */ u8 second[4];
};

typedef char StatsLeadingFlagViewSizeCheck[sizeof(StatsLeadingFlagView) == 8 ? 1 : -1];

struct StatsAdditionalFlagView {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ u8 flags[4];
};
struct QuestCenterFlagView {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u8 flags[4];
};
struct ProgressFlagView {
    /* 0x0000 */ u8 unk0000[0x22F0];
    /* 0x22F0 */ u8 flags[14];
};
typedef char StatsAdditionalFlagViewSizeCheck[sizeof(StatsAdditionalFlagView) == 0x10 ? 1 : -1];
typedef char QuestCenterFlagViewSizeCheck[sizeof(QuestCenterFlagView) == 8 ? 1 : -1];
typedef char ProgressFlagViewSizeCheck[sizeof(ProgressFlagView) == 0x22FE ? 1 : -1];

/* Thirty-two 100-byte saved records; removing one shifts the remaining entries. */
struct SavedRecord100 {
    u8 bytes[100];
};
struct SavedRecordTable {
    /* 0x00000 */ u8 unk00000[0x2720C];
    /* 0x2720C */ SavedRecord100 records[32];
};

extern GameDataBlocks g_gameDataBlocks;

#endif
