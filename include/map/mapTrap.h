/* map/mapTrap.c: traps on the field map (Apocalypse layout). */
#ifndef MAP_MAPTRAP_H
#define MAP_MAPTRAP_H

#include "common.h"

/* The trap block; only the fields read so far are named. */
typedef struct MapTrapA {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ u8 unk0C;
    /* 0x0D */ u8 unk0D[0x2B];
    /* 0x38 */ u32 unk38;
    /* 0x3C */ u32 unk3C;
    /* 0x40 */ union {
        u8 unk40[0x2C];
        struct {
            u8 active;
            u8 unk41[3];
            s32 halfCount;
            s32 count;
            s32 reverseCount;
            f32 initialValue;
            f32 currentValue;
            f32 delta;
            f32 previousDelta;
            u8 alternating;
            u8 unk61[0x0B];
        } motion;
    };
    /* 0x6C */ u8 unk6C;
} MapTrapA;

#endif
