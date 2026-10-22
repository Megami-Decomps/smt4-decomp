/* NON_MATCHING: retail compares std::find against a copy of the end in r2 and materializes the removed flag before testing it; this build branches on the compare directly. */
#include <algorithm>
#include "shard/S1GfxModel.h"

extern "C" {

/* Removes `slot` from the slot vector and detaches it; returns whether it was registered. */
bool FUN_002abbe8(ModelSlotVector *slots, ModelSlot *slot)
{
    ModelSlot **newEnd = std::remove(slots->begin, slots->end, slot);
    ModelSlot **oldEnd = slots->end;
    bool removed = oldEnd != newEnd;

    slots->end = newEnd;
    if (removed) {
        slot->attached = 0;
    }
    return removed;
}

} /* extern "C" */
