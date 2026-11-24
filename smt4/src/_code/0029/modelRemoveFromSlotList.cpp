#include "AsdSDK/Source/Gfx/Model/AsdModelSlot.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {
void FUN_00152fac(s32 slotIndex);

/* Drops the request's slot, clears the scene flags and refreshes that scene. */
void modelRemoveFromSlotList(ModelRemovalRequestPrefixIV *request, s32 slotIndex)
{
    ModelSlotList *list = (ModelSlotList *)asdModelGetSlotArray0(slotIndex);
    ModelSlot *target = request->entry;
    bool removed = asdModelSlotErase(&list->slots, target);
    if (removed) {
        target->attached = 0;
    }

    if (slotIndex == 0)
        settings5BClearFlags(1);
    else if (slotIndex == 1)
        settings5BClearFlags(2);
    FUN_00152fac(slotIndex);
}
}
