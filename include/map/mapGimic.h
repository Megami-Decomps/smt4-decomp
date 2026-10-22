/* map/mapGimic.c: map gimmicks (Apocalypse layout). */
#ifndef MAP_MAPGIMIC_H
#define MAP_MAPGIMIC_H

#include "common.h"
#include <stddef.h>

#define MAP_GIMIC_ENTRIES 0x23
#define MAP_GIMIC_SLOTS 10

typedef struct MapGimicObj {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ union {
        u32 handle;
        void *controller;
    };
} MapGimicObj;

typedef struct MapGimicEntry {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 requested;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ f32 position[3];
    /* 0x10 */ u8 unk10[4];
    /* 0x14 */ u16 requestState;
    /* 0x16 */ s16 id;
    /* 0x18 */ MapGimicObj *obj;
    union {
        /* 0x1C */ u8 unk1C[0x20];
        struct {
            u32 entryId;
            s16 required;
            s16 excluded;
        } gates;
    };
} MapGimicEntry;

typedef struct MapGimicSlot {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01;
    /* 0x02 */ s16 animationId;
    /* 0x04 */ s16 id;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ MapGimicObj *obj;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u8 requested;
    /* 0x11 */ u8 unk11;
    /* 0x12 */ s16 delay;
    /* 0x14 */ u8 unk14[4];
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


/* Retail 32-bit layout invariants. */
typedef char MapGimicObjSizeCheck[sizeof(MapGimicObj) == 0x8 ? 1 : -1];
typedef char MapGimicEntrySizeCheck[sizeof(MapGimicEntry) == 0x3C ? 1 : -1];
typedef char MapGimicEntryGatesOffsetCheck[
    offsetof(MapGimicEntry, gates.entryId) == 0x1C &&
    offsetof(MapGimicEntry, gates.required) == 0x20 &&
    offsetof(MapGimicEntry, gates.excluded) == 0x22 ? 1 : -1];
typedef char MapGimicSlotSizeCheck[sizeof(MapGimicSlot) == 0x18 ? 1 : -1];
typedef char MapGimicSlotOffsetsCheck[
    offsetof(MapGimicSlot, animationId) == 2 && offsetof(MapGimicSlot, unk0C) == 0xc &&
    offsetof(MapGimicSlot, requested) == 0x10 && offsetof(MapGimicSlot, delay) == 0x12 ? 1 : -1];
typedef char MapGimicSizeCheck[sizeof(MapGimic) == 0x9B4 ? 1 : -1];

#endif
