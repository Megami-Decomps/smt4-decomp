/* NON_MATCHING: register allocation (retail keeps the slot in r2 and the list end in r3) and the removed-flag is materialized in a register */
#include <algorithm>
#include "shard/S1GfxModel.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "shard/settings5BClearFlags.h"

extern "C" {

void FUN_00152fac(s32 which);

/* Drop the selected slot from the registered list and re-show the scene. */
void FUN_00152ed8(ModelSelector *selector)
{
    ModelSlotList *list = reinterpret_cast<ModelSlotList *>(asdModelGetSlotArray0(0));
    ModelSlot *slot = selector->slots[selector->index];
    ModelSlot **newEnd = std::remove(list->slots.begin, list->slots.end, slot);
    ModelSlot **oldEnd = list->slots.end;
    bool removed = oldEnd != newEnd;

    list->slots.end = newEnd;
    if (removed) {
        slot->attached = 0;
    }
    settings5BClearFlags(1);
    FUN_00152fac(0);
}

} /* extern "C" */
