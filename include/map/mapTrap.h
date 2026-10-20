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
    /* 0x40 */ u8 unk40[0x2C];
    /* 0x6C */ u8 unk6C;
} MapTrapA;

#endif
