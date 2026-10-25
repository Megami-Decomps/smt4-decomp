/* NON_MATCHING: Standard removal uses different loop registers and predicates the changed-end clear instead of materializing a removed flag. */
#include <algorithm>
#include "shard/S1GfxModel.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {
void settings5BClearFlags(s32 flags);
void FUN_00152fac(s32 slotIndex);

void FUN_0029c2cc(ModelRemovalRequestPrefixIV *request, s32 slotIndex)
{
    ModelSlotList *list = reinterpret_cast<ModelSlotList *>(asdModelGetSlotArray0(slotIndex));
    ModelSlot *target = request->entry;
    ModelSlot **newEnd = std::remove(list->slots.begin, list->slots.end, target);
    ModelSlot **oldEnd = list->slots.end;
    list->slots.end = newEnd;
    if (oldEnd != newEnd)
        target->attached = 0;

    if (slotIndex == 0)
        settings5BClearFlags(1);
    else if (slotIndex == 1)
        settings5BClearFlags(2);
    FUN_00152fac(slotIndex);
}
}
