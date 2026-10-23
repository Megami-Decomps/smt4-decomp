/* map/mapTrap.c: traps on the field map (Apocalypse layout). */
#ifndef MAP_MAPTRAP_H
#define MAP_MAPTRAP_H

#include "common.h"
#include <stddef.h>
struct ModelList;

/* The trap block; only the fields read so far are named. */
typedef struct MapTrapA {
    union {
        /* 0x00 */ u8 unk00[0x0C];
        struct {
            u32 active;
            u32 unk04;
            s32 count;
        } setup;
    };
    /* 0x0C */ u8 unk0C;
    union {
        /* 0x0D */ u8 unk0D[0x2B];
        struct {
            u8 prefix[3];
            /* 0x10 */ u8 phase;
        } display;
    };
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
            union {
                u8 unk61[0x0B];
                /* 0x61 */ u8 alternateController;
            };
        } motion;
    };
    /* 0x6C */ u8 unk6C;
} MapTrapA;
typedef char MapTrapAModelOffsetsCheck[
    offsetof(MapTrapA, setup.active) == 0 && offsetof(MapTrapA, setup.count) == 8 &&
    offsetof(MapTrapA, display.phase) == 0x10 &&
    sizeof(MapTrapA) == 0x70 ? 1 : -1];
typedef char MapTrapAAlternateControllerOffsetCheck[
    offsetof(MapTrapA, motion.alternateController) == 0x61 &&
    sizeof(MapTrapA) == 0x70 ? 1 : -1];

#endif
