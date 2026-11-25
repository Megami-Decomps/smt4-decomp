#ifndef CAMP_INVENTORY_LIST_H
#define CAMP_INVENTORY_LIST_H

#include "camp/UnitComparison.h"
#include "code/Code002a_Smt4a.h"
#include <stddef.h>

/* Fixed-capacity list of entries displayed by the compendium. */
struct InventoryList {
    enum { CAPACITY = 1280 };

    /* 0x0000 */ s16 count;
    /* 0x0002 */ u16 unk0002;
    /* 0x0004 */ CampUnitComparison entries[CAPACITY];
    /* 0xA004 */ u16 unkA004;
    /* 0xA006 */ s16 maximum;
    /* 0xA008 */ u16 specialCount;
};

typedef char InventoryListOffsets[
    offsetof(InventoryList, entries) == 0x4 &&
    offsetof(InventoryList, specialCount) == 0xA008 &&
    sizeof(InventoryList) == 0xA00C ? 1 : -1];

extern "C" {
void inventoryListAppendUnique(InventoryList *list, const CampUnitComparison *entry);
void inventoryListAppend(InventoryList *list, const CampUnitComparison *entry);
} /* extern "C" */

/* Appends a record and updates the count of registered entries. */
static __inline void inventoryListAppendRecord(InventoryList *list, const CampUnitComparison *entry)
{
    list->entries[list->count] = *entry;
    ++list->count;
    if (compendiumEntryIsRegistered(entry->id) != 0) {
        ++list->specialCount;
    }
}

#endif
