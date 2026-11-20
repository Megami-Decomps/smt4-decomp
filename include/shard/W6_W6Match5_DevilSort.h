#ifndef SHARD_W6_W6MATCH5_DEVILSORT_H
#define SHARD_W6_W6MATCH5_DEVILSORT_H

#include "common.h"
#include "gamedata/NkmBaseRecord.h"
#include "gamedata/RankedDevilEntry.h"


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

u32 resultIsIdle(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u32 screenFaderIsSettled(s32 index);

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
