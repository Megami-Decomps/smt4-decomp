#include "AsdSDK/Source/Gfx/Model/AsdModelSlot.h"

/* Removes a slot from the registration list and detaches it if it was registered. */
extern "C" bool asdModelSlotVectorRemove(ModelSlotVector *slots, ModelSlot *slot)
{
    bool removed = asdModelSlotErase(slots, slot);
    if (removed) {
        slot->attached = 0;
    }
    return removed;
}
