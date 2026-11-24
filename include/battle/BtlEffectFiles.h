/* The battle effect work's file slots (Apocalypse), grouped as the effect loaders index them. */
#ifndef BATTLE_BTLEFFECTFILES_H
#define BATTLE_BTLEFFECTFILES_H

#include "battle/BtlEffectLoad.h"
#include "AsdSDK/Source/Gfx/Model/WorkOwner.h"

class CameraBackend;
struct BattleRosterRecordA;

struct BtlEffectPlacementA {
    /* 0x00 */ s32 key;
    /* 0x04 */ u32 state;
    /* 0x08 */ WorkOwner owner;
    /* 0x24 */ u8 unk24[0x14];
    /* 0x38 */ u32 flags;
};
typedef char BtlEffectPlacementASizeCheck[sizeof(BtlEffectPlacementA) == 0x3C ? 1 : -1];

struct BtlEffectFiles {
    /* 0x0000 */ u8 unk0000[0x1398];
    /* 0x1398 */ BtlEffectPlacementA placements[50];
    /* 0x1F50 */ CameraBackend *backend;
    /* 0x1F54 */ u32 requestA;
    /* 0x1F58 */ u32 requestB;
    /* 0x1F5C */ BtlEffectFileSlot unitSlots[4];         /* four interleaved groups of four, 0x230 apart */
    /* 0x218C */ BtlEffectFileSlot secondSlots[4];
    /* 0x23BC */ BtlEffectFileSlot thirdSlots[4];
    /* 0x25EC */ BtlEffectFileSlot fourthSlots[4];
    /* 0x281C */ BtlEffectFileSlot markerSlots[11];      /* only their handle is reset */
    /* 0x2E20 */ BtlEffectFileSlot fifthSlots[4];
    /* 0x3050 */ u32 animation;
    /* 0x3054 */ BtlEffectFileSlot singleSlot;
    /* 0x30E0 */ BtlEffectFileSlot sixthSlots[3];
    /* 0x3284 */ BtlEffectFileSlot seventhSlots[2];
    /* 0x339C */ u32 flags;
    /* 0x33A0 */ u8 unk33A0[0xC];
    /* 0x33AC */ u8 numberedIndex;
    /* 0x33AD */ u8 unk33AD[0xF];
    /* 0x33BC */ BattleRosterRecordA *roster;
    /* 0x33C0 */ u8 unk33C0[0x24];
    /* 0x33E4 */ BtlEffectFileSlot eighthSlots[3];
    /* 0x3588 */ s32 wait;
    /* 0x358C */ BtlEffectFileSlot lastSlot;
    /* 0x3618 */ u8 unk3618[0x6658];
    /* 0x9C70 */ f32 scaleFactor;
};

typedef char BtlEffectFilesLayoutCheck[
    offsetof(BtlEffectFiles, markerSlots) == 0x281C && offsetof(BtlEffectFiles, singleSlot) == 0x3054 &&
    offsetof(BtlEffectFiles, flags) == 0x339C &&
    offsetof(BtlEffectFiles, lastSlot) == 0x358C &&
    offsetof(BtlEffectFiles, placements) == 0x1398 && offsetof(BtlEffectFiles, requestA) == 0x1F54 &&
    offsetof(BtlEffectFiles, roster) == 0x33BC && offsetof(BtlEffectFiles, scaleFactor) == 0x9C70 &&
    sizeof(BtlEffectFiles) == 0x9C74 ? 1 : -1];

struct BtlEffectJobA;
extern "C" void btlEffectInitializeWork(BtlEffectFiles *work, BtlEffectJobA *owner);

#endif
