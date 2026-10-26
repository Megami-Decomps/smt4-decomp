#include "common.h"

extern "C" {

struct Slot { u8 data[308]; };
struct SlotTable { u8 unk0000[0x1ddc]; Slot slots[12]; };
SlotTable *gameGetSlotTable(void);

Slot *FUN_003e4d68(u32 index)
{
    return index < 12 ? &gameGetSlotTable()->slots[index] : NULL;
}

} /* extern "C" */
