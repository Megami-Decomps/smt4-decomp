#ifndef GAMEDATA_SAVEFLAGVIEWS_H
#define GAMEDATA_SAVEFLAGVIEWS_H

#include "common.h"

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
    /* 0x00 */ u8 bytes[100];
};
struct SavedRecordTable {
    /* 0x00000 */ u8 unk00000[0x2720C];
    /* 0x2720C */ SavedRecord100 records[32];
};

#endif
