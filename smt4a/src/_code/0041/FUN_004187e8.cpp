#include "common.h"

extern "C" {

typedef struct Slot {
    /* 0x00 */ u8 state;      /* bit 1: configurable */
    /* 0x01 */ u8 unk01;
    /* 0x02 */ u8 flags;      /* bit 2: enabled */
    /* 0x03 */ u8 unk03;
} Slot;

typedef struct SlotTable {
    /* 0x000 */ u8 unk000[0x2A0];
    /* 0x2A0 */ Slot slots[1];
} SlotTable;

SlotTable *gameFlagBlockGet(int index);

/* Sets or clears the enabled flag (bit 2) of slot `index`, if the slot is configurable. */
void FUN_004187e8(int index, int enabled)
{
    Slot *slot = &gameFlagBlockGet(index)->slots[index];

    if ((slot->state & 2) != 0) {
        u8 flags;

        if (enabled != 0) {
            flags = slot->flags | 4;
        } else {
            flags = slot->flags & ~4;
        }
        slot->flags = flags;
    }
}

} /* extern "C" */
