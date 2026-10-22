/* Sets bit 1 of the flag byte of the given slot. */
#include "common.h"

extern "C" {

typedef struct {
    u8 unk00[0x2a2];   /* 0x000 */
    struct {
        u8 flags;      /* +0 bit 1: enabled */
        u8 unk01[3];   /* +1 */
    } slots[1];        /* 0x2a2 */
} SlotTable;

SlotTable *gameFlagBlockGet(s32 index);

void gameFlagSlotSetEnableBit(s32 index, s8 enabled)
{
    u8 *flags = &gameFlagBlockGet(index)->slots[index].flags;

    *flags = (*flags & ~2) | (enabled << 1);
}

} /* extern "C" */
