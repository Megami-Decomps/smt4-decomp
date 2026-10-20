/* The game options record returned by gameGetOptions() (settings plus a progress marker at 0x46). */
#ifndef SHARD_GAMEOPTIONS_H
#define SHARD_GAMEOPTIONS_H

#include "common.h"

typedef struct GameOptions {
    /* 0x0000 */ u8 unk0000[0x46];
    /* 0x0046 */ u16 unk46;
    /* 0x0048 */ u8 unk0048[0x5BC];
    /* 0x0604 */ u16 unk604;
    /* 0x0606 */ u8 unk0606[0x2];
    /* 0x0608 */ u16 flags;
    /* 0x060A */ u16 unk60A;
    /* 0x060C */ u16 unk60C;
    /* 0x060E */ u16 unk60E;
} GameOptions;

#endif
