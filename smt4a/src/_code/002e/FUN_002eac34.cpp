#include "shard/Shard0031.h"

extern "C" {

Slot* slotSetGet(SlotSet* object, s32 index);
u32 FUN_00310024(u8 *object);
extern u8 DAT_0062e6d0[];

/* Returns the selected slot in the indexed 0x1C0-byte table entry. */
Slot* FUN_002eac34(s32 index)
{
    u32 value;

    value = FUN_00310024(DAT_0062e6d0 + index * 0x1C0);
    return slotSetGet(reinterpret_cast<SlotSet*>(DAT_0062e6d0 + index * 0x1C0), value);
}

} /* extern "C" */
