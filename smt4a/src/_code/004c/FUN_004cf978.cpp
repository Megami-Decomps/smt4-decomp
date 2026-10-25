#include "common.h"

extern "C" {

typedef struct Slot {
    /* 0x00 */ u8 flags;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ s32 state;
    /* 0x08 */ u8 unk08;
    /* 0x09 */ u8 counter;
    /* 0x0A */ u8 valueA;
    /* 0x0B */ u8 valueB;
} Slot;

static __inline void slotSetFlag(Slot *slot, u8 flag)
{
    slot->flags |= flag;
}

/* Starts the slot (state 1) with `value` in both value bytes, unless it is already started. */
void FUN_004cf978(Slot *slot, u8 value)
{
    if (slot->state != 1) {
        slot->valueA = value;
        slot->valueB = value;
        slot->state = 1;
        slot->counter = 0;
        slotSetFlag(slot, 1);
    }
}

} /* extern "C" */
