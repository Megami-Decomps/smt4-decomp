#include "common.h"

extern "C" {

typedef struct SlotEntry {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ s16 id;
    /* 0x6 */ u8 unk6[2];
    /* 0x8 */ u8 flags;           /* bit 1: has a first value, bit 2: has a second value */
} SlotEntry;

typedef struct BtlUnitSlot {
    /* 0x0000 */ u8 unk0000[0x339C];
    /* 0x339C */ u32 flags;
    /* 0x33A0 */ u8 unk33A0[0xE];
    /* 0x33AE */ u16 entryId;
    /* 0x33B0 */ s16 arg0;
    /* 0x33B2 */ s16 arg1;
    /* 0x33B4 */ u8 state;
    /* 0x33B5 */ u8 unk33B5[0xF];
    /* 0x33C4 */ u32 handle;
    /* 0x33C8 */ SlotEntry *entry;
    /* 0x33CC */ u32 valueA;
    /* 0x33D0 */ u32 valueB;
} BtlUnitSlot;

extern void panelReset(BtlUnitSlot *slot);
extern void *btlGetMainState(void);
extern SlotEntry *FUN_003eae20(void *state, s32 arg0, s32 arg1);
extern u32 FUN_003eda28(void *state, s32 id);
extern u32 shakeEffectAlloc(void);

/* Binds the slot to the entry for (arg0, arg1) of the battle state, or marks it empty (state 13). */
void btlUnitSlotBind(BtlUnitSlot *slot, s32 arg0, s32 arg1)
{
    void *state;
    SlotEntry *entry;

    panelReset(slot);
    slot->arg0 = arg0;
    slot->arg1 = arg1;
    slot->flags |= 0x4000;
    state = btlGetMainState();
    entry = FUN_003eae20(state, arg0, arg1);
    if (entry == NULL) {
        slot->state = 13;
    } else {
        slot->state = 1;
        s32 id = entry->id;

        slot->entryId = id;
        slot->handle = FUN_003eda28(state, id);
        slot->entry = entry;
        if ((entry->flags & 2) != 0) {
            slot->valueA = shakeEffectAlloc();
        }
        if ((slot->entry->flags & 4) != 0) {
            slot->valueB = shakeEffectAlloc();
        }
    }
}

} /* extern "C" */
