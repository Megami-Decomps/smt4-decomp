#ifndef SHARD_W6_W6MATCH5_DEVILSORT_H
#define SHARD_W6_W6MATCH5_DEVILSORT_H

#include "common.h"

struct DevilSortRecord {
    u16 id; // 0x00
    u8 race; // 0x02
    u8 level; // 0x03
};

struct RankedDevilEntry {
    u16 id; // 0x00
    u8 rank; // 0x02
};

extern "C" DevilSortRecord *devilGetRecord(u16);

/* Persistent unit entries retain their demon id and primary sort rank. */
struct GameUnitSortRecord {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s16 sortKey;
    /* 0x12 */ u8 unk12[0x44 - 0x12];
    /* 0x44 */ u16 flags;
    /* 0x46 */ u16 id;
    /* 0x48 */ u8 rank;
};

#ifdef __cplusplus
extern "C" {
#endif

u32 FUN_002b8660(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u32 FUN_002b89a4(s32 index);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void submitDefaultFloatParameters();

#ifdef __cplusplus
}
#endif

#endif
