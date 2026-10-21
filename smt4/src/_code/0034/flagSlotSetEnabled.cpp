/* If the slot is marked active (flag bit 1), sets or clears bit 2 of its second flag byte. */
#include "common.h"

extern "C" {

typedef struct {
    u8 flags;     /* 0x00 bit 1: active */
    u8 unk01;     /* 0x01 */
    u8 state;     /* 0x02 bit 2: set when enabled */
    u8 unk03;     /* 0x03 */
} Slot;

typedef struct {
    u8 unk000[0x200];  /* 0x000 */
    Slot slots[1];     /* 0x200 */
} SlotTable;

SlotTable *gameGetFlagBlock(s32 index);

void flagSlotSetEnabled(s32 index, s32 enable)
{
    Slot *slot = &gameGetFlagBlock(index)->slots[index];

    if ((slot->flags & 2) != 0) {
        if (enable != 0) {
            slot->state |= 4;
        } else {
            slot->state &= ~4;
        }
    }
}

} /* extern "C" */
