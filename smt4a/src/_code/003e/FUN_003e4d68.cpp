/* NON_MATCHING: retail uses `cmp r0, #12` where armcc emits `cmp r0, #12`. */
#include "common.h"

extern "C" {

struct Slot { u8 data[308]; };
struct SlotTable { u8 unk0000[0x1ddc]; Slot slots[12]; };
SlotTable *gameGetSlotTable(void);

Slot *FUN_003e4d68(u32 index)
{
    if (index >= 12) {
        return NULL;
    }
    return &gameGetSlotTable()->slots[index];
}

} /* extern "C" */
