/* NON_MATCHING: retail materializes the removed flag (movne/moveq r3, then cmp r3, #0) before the detach store; this build folds the test into the compare. Statement order (old end read, end stored, then compared) now matches. */
#include <algorithm>
#include "shard/S1GfxModel.h"

extern "C" {

/* Removes `slot` from the slot vector and detaches it; returns whether it was registered. */
bool FUN_002abbe8(ModelSlotVector *slots, ModelSlot *slot)
{
    ModelSlot **newEnd = std::remove(slots->begin, slots->end, slot);
    ModelSlot **oldEnd = slots->end;

    slots->end = newEnd;
    s32 removed = oldEnd != newEnd;
    if (removed) {
        slot->attached = 0;
    }
    return removed;
}

} /* extern "C" */
