#ifndef SHARD_W5_W5MATCH7_FLAGBANKS_H
#define SHARD_W5_W5MATCH7_FLAGBANKS_H
#include "common.h"
#include "gamedata/MapSaveBlockA.h"
#include "map/MapCellGrid.h"
#include "map/mapDepart.h"
#include <stddef.h>

struct FlagValueRange {
    /* 0x00 */ s32 firstId;
    /* 0x04 */ u32 lastId;
    /* 0x08 */ u8 bank;
    /* 0x09 */ u8 width;
    /* 0x0A */ u8 unk0a[2];
};
struct FlagValueStorage {
    /* 0x000 */ u8 bank0[0xF0];
    /* 0x0F0 */ u8 bank1[0x78];
    /* 0x168 */ u8 bank2[0xF0];
    /* 0x258 */ u8 bank3[0xF0];
    /* 0x348 */ u8 bank4[0xF0];
    /* 0x438 */ u8 bank5[0xF0];
    /* 0x528 */ u8 bank6[0xF0];
    /* 0x618 */ u8 bank7[0xF0];
    /* 0x708 */ u8 bank8[0x64];
    /* 0x76C */ u8 bank9[0x190];
    /* 0x8FC */ u8 bank10[0x640];
    /* 0xF3C */ u8 bank12[1];
};
typedef char FlagValueRangeSizeCheck[sizeof(FlagValueRange) == 0x0C ? 1 : -1];
typedef char FlagValueStorageSizeCheck[sizeof(FlagValueStorage) == 0xF3D ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif

void FUN_001654f0(void *a, void *b);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void *asdMemoryAlloc(u32 heap, u32 b, u32 c, u32 size, s32 extra);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void eventQueueAddUniqueIfValid(s32 event);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

s32 gameFlagsTestThirdBank(s32 index);

#ifdef __cplusplus
}
#endif

#endif
