/* Battle flag masks in g_btlMain (0x573920) and the flag words of the battle state they are tested against. */
#ifndef SHARD_BATTLE_FLAG_MASKS_H
#define SHARD_BATTLE_FLAG_MASKS_H

#include "common.h"

struct BattleMasks {
    /* 0x000 */ u8 unk000[0x58];
    /* 0x058 */ u64 entryMask;
    /* 0x060 */ u8 unk060[0xc8 - 0x60];
    /* 0x0c8 */ u64 disableMask;
    /* 0x0d0 */ u8 unk0d0[0xe8 - 0xd0];
    /* 0x0e8 */ u64 blockMask;
    /* 0x0f0 */ u8 unk0f0[0x158 - 0xf0];
    /* 0x158 */ u64 allowMask;
    /* 0x160 */ u8 unk160[0x218 - 0x160];
    /* 0x218 */ u64 forceMask;
};

struct BattleFlagsState {
    /* 0x0000 */ u8 unk0000[0xf0];
    /* 0x00f0 */ s32 signedState;
    /* 0x00f4 */ u8 unk00f4[0x45a0 - 0xf4];
    /* 0x45a0 */ u64 blockFlags;
    /* 0x45a8 */ u64 forceFlags;
};

extern "C" {
extern BattleMasks g_btlMain;
}

#endif
