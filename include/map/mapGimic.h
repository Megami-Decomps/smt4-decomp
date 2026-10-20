/* map/mapGimic.c: map gimmicks (Apocalypse layout). */
#ifndef MAP_MAPGIMIC_H
#define MAP_MAPGIMIC_H

#include "common.h"

#define MAP_GIMIC_ENTRIES 0x23
#define MAP_GIMIC_SLOTS 10

typedef struct MapGimicObj {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 handle;
} MapGimicObj;

typedef struct MapGimicEntry {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[0x15];
    /* 0x16 */ s16 id;
    /* 0x18 */ MapGimicObj *obj;
    /* 0x1C */ u8 unk1C[0x20];
} MapGimicEntry;

typedef struct MapGimicSlot {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ s16 id;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ MapGimicObj *obj;
    /* 0x0C */ u8 unk0C[0x0C];
} MapGimicSlot;

typedef struct MapGimic {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u8 unk04;
    /* 0x005 */ u8 unk005[0x6F];
    /* 0x074 */ u32 unk74;
    /* 0x078 */ u32 unk78;
    /* 0x07C */ u8 unk07C[8];
    /* 0x084 */ u32 unk84;
    /* 0x088 */ u32 unk88;
    /* 0x08C */ u32 unk8C;
    /* 0x090 */ MapGimicEntry entries[MAP_GIMIC_ENTRIES];
    /* 0x8C4 */ MapGimicSlot slots[MAP_GIMIC_SLOTS];
} MapGimic;

#endif
