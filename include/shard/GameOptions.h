/* The game options record returned by gameGetSupportUnitData() (settings plus a progress marker at 0x46). */
#ifndef SHARD_GAMEOPTIONS_H
#define SHARD_GAMEOPTIONS_H

#include "common.h"
#include <stddef.h>

typedef struct GameOptions {
    /* 0x0000 */ u8 unk0000[0x46];
    /* 0x0046 */ u16 unk46;
    union {
        /* 0x0048 */ u8 unk0048[0x5BC];
        struct {
            u8 unk0048[4];
            /* 0x004C */ u8 flags[0x40];
            /* 0x008C */ u8 counts[0x500];
            u8 unk058C[0x78];
        } inheritance;
    };
    /* 0x0604 */ u16 unk604;
    /* 0x0606 */ u16 supportIndex;
    /* 0x0608 */ u16 flags;
    /* 0x060A */ u16 unk60A;
    /* 0x060C */ u16 unk60C;
    /* 0x060E */ u16 unk60E;
} GameOptions;

typedef char GameOptionsLayoutCheck[sizeof(GameOptions) == 0x610 &&
    offsetof(GameOptions, supportIndex) == 0x606 &&
    offsetof(GameOptions, flags) == 0x608 ? 1 : -1];
typedef char GameOptionsInheritanceOffsets[
    offsetof(GameOptions, inheritance.flags) == 0x4C &&
    offsetof(GameOptions, inheritance.counts) == 0x8C ? 1 : -1];

#endif
