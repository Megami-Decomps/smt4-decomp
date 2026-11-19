/* The battle effect work's file slots (Apocalypse), grouped as the effect loaders index them. */
#ifndef BATTLE_BTLEFFECTFILES_H
#define BATTLE_BTLEFFECTFILES_H

#include "battle/BtlEffectLoad.h"

struct BtlEffectFiles {
    /* 0x0000 */ u8 unk0000[0x1F54];
    /* 0x1F54 */ u32 requestA;
    /* 0x1F58 */ u32 requestB;
    /* 0x1F5C */ BtlEffectFileSlot unitSlots[4];         /* four interleaved groups of four, 0x230 apart */
    /* 0x218C */ BtlEffectFileSlot secondSlots[4];
    /* 0x23BC */ BtlEffectFileSlot thirdSlots[4];
    /* 0x25EC */ BtlEffectFileSlot fourthSlots[4];
    /* 0x281C */ BtlEffectFileSlot markerSlots[11];      /* only their handle is reset */
    /* 0x2E20 */ BtlEffectFileSlot fifthSlots[4];
    /* 0x3050 */ u8 unk3050[4];
    /* 0x3054 */ BtlEffectFileSlot singleSlot;
    /* 0x30E0 */ BtlEffectFileSlot sixthSlots[3];
    /* 0x3284 */ BtlEffectFileSlot seventhSlots[2];
    /* 0x339C */ u32 flags;
    /* 0x33A0 */ u8 unk33A0[0x44];
    /* 0x33E4 */ BtlEffectFileSlot eighthSlots[3];
    /* 0x3588 */ u8 unk3588[4];
    /* 0x358C */ BtlEffectFileSlot lastSlot;
};

typedef char BtlEffectFilesLayoutCheck[
    offsetof(BtlEffectFiles, markerSlots) == 0x281C && offsetof(BtlEffectFiles, singleSlot) == 0x3054 &&
    offsetof(BtlEffectFiles, flags) == 0x339C &&
    offsetof(BtlEffectFiles, lastSlot) == 0x358C ? 1 : -1];

#endif
