#include "classes/RangeOwner.h"

/* Tests an ID against the inclusive bounds of a reset request. */
static __inline bool idInRange(u32 lower, u32 id, u32 upper)
{
    return lower <= id && id <= upper;
}

/* Resets the owner and flag records whose IDs fall in the requested interval. */
extern "C" void FUN_0050d5c4(RangeListener *listener, u32 lower, u32 upper)
{
    RangeOwner *owner = rangeOwnerFromListener(listener);
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
