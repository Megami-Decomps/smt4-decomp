#ifndef ASD_GFX_MODEL_SLOT_H
#define ASD_GFX_MODEL_SLOT_H

#include <algorithm>
#include "shard/S1GfxModel.h"

/* Compacts the registered range and reports whether its end moved. */
template <class Slot>
static __inline bool asdModelSlotErase(ModelSlotVectorOf<Slot> *slots, const Slot &slot)
{
    Slot *newEnd = std::remove(slots->begin, slots->end, slot);
    Slot *oldEnd = slots->end;
    bool removed;
    if (oldEnd != newEnd)
        removed = true;
    else
        removed = false;
    slots->end = newEnd;
    return removed;
}

#endif
