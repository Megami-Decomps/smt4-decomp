/* NON_MATCHING: after the append, armcc increments the halfword count via r2 instead of r0. */
#include "camp/InventoryList.h"

/* Appends a compendium entry unless its ID is already in the list. */
extern "C" void inventoryListAppendUnique(InventoryList *list, const CampUnitComparison *entry)
{
    for (s32 index = 0; index < list->count; ++index) {
        if (list->entries[index].id == entry->id) {
            return;
        }
    }
    inventoryListAppendRecord(list, entry);
}
