/* Structs shared by the helper functions in code shard 003D. */
#ifndef SHARD_SHARD003D_H
#define SHARD_SHARD003D_H

#include "common.h"

#include "shard/Shard003C.h"

typedef struct GameBlock2830C {
    union {
        /* 0x00000 */ u8 unk00000[0x2830C];
        struct {
            u8 unk00000[0x282ec];
            /* 0x282EC */ u8 earned[16];
            /* 0x282FC */ u8 pending[16];
        } unlocks;
    };
    /* 0x2830C */ s16 unk2830C;
    /* 0x2830E */ s16 unk2830E;
} GameBlock2830C;

#endif
