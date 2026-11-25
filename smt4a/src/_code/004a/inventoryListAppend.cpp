#include "camp/InventoryList.h"

/* Appends an inventory record and updates the special-entry count. */
extern "C" void inventoryListAppend(InventoryList *list, const CampUnitComparison *entry)
{
    list->entries[list->count] = *entry;
    ++list->count;
    if (compendiumEntryIsRegistered(entry->id) != 0) {
        ++list->specialCount;
    }
}
