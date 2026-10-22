/* Map-state slot storage and its pending selection values. */
#ifndef MAP_MAPSTATESLOTS_H
#define MAP_MAPSTATESLOTS_H
#include "common.h"
#include <stddef.h>
typedef struct MapStateModelReference {
    u32 unk00;
    void *model;
} MapStateModelReference;
typedef struct MapStateSlot {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ s32 state;
    union {
        /* 0x08 */ u8 unk08[0x44];
        struct {
            u8 unk08[0x24];
            /* 0x2C */ u8 ready;
            u8 unk2d[3];
            /* 0x30 */ void *model;
        } resources;
    };
} MapStateSlot;
typedef struct MapStateSlots {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 unk04;
    /* 0x06 */ u16 unk06;
    /* 0x08 */ u16 unk08;
    /* 0x0A */ u16 unk0A;
    union {
        /* 0x0C */ u8 unk0C[0x4C];
        struct {
            u8 unk0c[0xc];
            /* 0x18 */ MapStateModelReference models[8];
        } references;
    };
    /* 0x58 */ MapStateSlot slots[32];
} MapStateSlots;

/* Retail 32-bit layout invariants. */
typedef char MapStateSlotSizeCheck[sizeof(MapStateSlot) == 0x4C ? 1 : -1];
typedef char MapStateSlotsSizeCheck[sizeof(MapStateSlots) == 0x9D8 ? 1 : -1];
typedef char MapStateSlotResourceOffsets[offsetof(MapStateSlot, resources.ready) == 0x2c &&
    offsetof(MapStateSlot, resources.model) == 0x30 &&
    offsetof(MapStateSlots, references.models) == 0x18 &&
    offsetof(MapStateModelReference, model) == 4 && sizeof(MapStateModelReference) == 8 ? 1 : -1];

#endif
