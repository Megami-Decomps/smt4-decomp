#pragma once
#include "battle/btlMain.h"
#include <stddef.h>
#include <vector>

/* One panel slot kept after the main state block (12 of them at 0x4D78). */
struct BtlPanelSlotA {
    /* 0x0 */ u32 active;
    /* 0x4 */ u32 unk4;
    /* 0x8 */ u32 unk8;
    /* 0xC */ u8 unkC[4];
};

struct PartySlotA;
struct BtlFixedPartySnapshotA;

/* The battle state block as the script and panel code see it: the canonical block followed by the
 * fields the allocation keeps past BtlMainStateA's 0x4CF0 bytes. */
struct BtlMainStateExtA : BtlMainStateA {
    /* 0x4CF0 */ u8 unk4CF0[0x28];
    struct {
        /* 0x4D18 */ u32 baseColor[2];
        /* 0x4D20 */ u32 previousColor[2];
        /* 0x4D28 */ u32 color[2];
        /* 0x4D30 */ s32 mode[2];
        /* 0x4D38 */ s32 timer[2];
        /* 0x4D40 */ s32 parameters[2];
        /* 0x4D48 */ u32 palette[2];
    } slotColorFade;
    /* 0x4D50 */ u8 unk4D50[0xC];
    /* 0x4D5C */ s32 debugDamage;     /* the debug flag menu's "damagecontrol" value */
    /* 0x4D60 */ u8 unk4D60[4];
    /* 0x4D64 */ s32 infoWindow;
    /* 0x4D68 */ PartySlotA *selectedSlot;
    /* 0x4D6C */ s32 count;
    /* 0x4D70 */ u8 unk4D70[8];
    /* 0x4D78 */ BtlPanelSlotA slots[12];
    /* 0x4E38 */ u8 unk4E38[0x10];
    /* 0x4E48 */ BtlFixedPartySnapshotA *snapshot; /* 0x34A0 bytes, allocated with the battle's party data (battle/BtlFixedPartySnapshot.h) */
    /* 0x4E4C */ u8 unk4E4C[0xC];
    /* 0x4E58 */ std::vector<u16> members; /* the ids of the battle members, in order */
};

typedef char BtlMainStateExtAOffsetCheck[
    sizeof(BtlMainStateA) == 0x4CF0 && offsetof(BtlMainStateExtA, slotColorFade.baseColor) == 0x4D18 &&
    offsetof(BtlMainStateExtA, slotColorFade.palette) == 0x4D48 && offsetof(BtlMainStateExtA, infoWindow) == 0x4D64 &&
    offsetof(BtlMainStateExtA, selectedSlot) == 0x4D68 && offsetof(BtlMainStateExtA, count) == 0x4D6C &&
    offsetof(BtlMainStateExtA, slots) == 0x4D78 && offsetof(BtlMainStateExtA, debugDamage) == 0x4D5C &&
    offsetof(BtlMainStateExtA, snapshot) == 0x4E48 && offsetof(BtlMainStateExtA, members) == 0x4E58 ? 1 : -1];

extern "C" {

/* The battle's state block. */
BtlMainStateA *btlGetMainState(void);

}

/* The same block including the fields past the canonical size. */
static __inline BtlMainStateExtA *btlGetMainStateExt(void)
{
    return static_cast<BtlMainStateExtA *>(btlGetMainState());
}

#ifdef __cplusplus
extern "C" {
#endif

void FUN_004fea10(s32 id, s32 options, s32 argument);

#ifdef __cplusplus
}
#endif
