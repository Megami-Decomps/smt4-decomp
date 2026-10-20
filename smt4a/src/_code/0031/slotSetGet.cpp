#include "shard/Shard0031.h"

extern "C" {

/* The slot at `index`: slot 0 is stored inline in the set, the others come from the array. */
Slot *slotSetGet(SlotSet *set, s32 index)
{
    if (index != 0) {
        return set->others + index;
    }
    return &set->first;
}

} /* extern "C" */
