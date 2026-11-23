#include "classes/RangeOwner.h"

/* Resets the owner and flag records whose IDs fall in the requested interval. */
extern "C" void rangeOwnerResetIdsInRange(RangeListener *listener, u32 lower, u32 upper)
{
    RangeOwnerA *owner = rangeOwnerFromListenerA(listener);
    if (owner->active) {
        for (s32 i = 0; i < RANGE_OWNER_ENTRY_COUNT; ++i) {
            const RangeEntry *entry = rangeOwnerEntryAt(owner, i);
            if (entry != NULL && idInRange(lower, entry->id, upper)) {
                owner->vtable->reset(owner);
                break;
            }
        }
        for (u32 slot = 0; slot < RANGE_OWNER_FLAG_COUNT; ++slot) {
            if (idInRange(lower, owner->flags[slot].id, upper)) {
                wordsFlag8Reset(&owner->flags[slot]);
            }
        }
    }
}
