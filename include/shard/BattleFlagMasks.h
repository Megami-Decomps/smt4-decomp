/* Battle flag masks in g_btlMain (0x573920) and the flag words of the battle state they are tested against. */
#ifndef SHARD_BATTLE_FLAG_MASKS_H
#define SHARD_BATTLE_FLAG_MASKS_H

#include "common.h"

struct BattleMasks {
    /* 0x000 */ u8 unk000[0x58];
    /* 0x058 */ u64 entryMask;
    /* 0x060 */ u8 unk060[0xc8 - 0x60];
    /* 0x0c8 */ u64 disableMask;
    /* 0x0d0 */ u64 fleeMask;          /* set together with disableMask when the enemies flee */
    /* 0x0d8 */ u64 fleeBlockedMask;
    /* 0x0e0 */ u8 unk0e0[0xe8 - 0xe0];
    /* 0x0e8 */ u64 blockMask;
    /* 0x0f0 */ u8 unk0f0[0x100 - 0xf0];
    /* 0x100 */ u64 holdMask;          /* bits that stop the flee decision */
    /* 0x108 */ u8 unk108[0x158 - 0x108];
    /* 0x158 */ u64 allowMask;
    /* 0x160 */ u8 unk160[0x188 - 0x160];
    /* 0x188 */ u64 partialFleeMask;
    /* 0x190 */ u8 unk190[0x208 - 0x190];
    /* 0x208 */ u64 stopMaskA;
    /* 0x210 */ u64 forceFleeMask;
    /* 0x218 */ u64 forceMask;
    /* 0x220 */ u8 unk220[0x250 - 0x220];
    /* 0x250 */ u64 stopMaskB;
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
