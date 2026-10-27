#include "shard/Shard0031.h"

extern "C" {

PartyStatusSlots *gameGetSlotTable(void);

/* Returns the demon's index in the slot table, or -1. */
static s32 slotTableIndexOf(SlotTableEntry *demon)
{
    if (demon == NULL) {
        return -1;
    }
    SlotTableEntry *entry = gameGetSlotTable()->active.entries;
    s32 i;
    for (i = 0; i < 0x18; i++, entry++) {
        if (entry == demon || entry->slotId == demon->slotId) {
            return i;
        }
    }
    return -1;
}

/* Returns whether the demon is one of the three reserve picks. */
bool FUN_004bd0d8(SlotTableEntry *demon)
{
    s32 index = slotTableIndexOf(demon);

    s8 *reserve = gameGetSlotTable()->reserve;
    if (reserve[0] >= 0 && reserve[0] == index) {
        return true;
    }
    if (reserve[1] >= 0 && reserve[1] == index) {
        return true;
    }
    if (reserve[2] >= 0 && reserve[2] == index) {
        return true;
    }
    return false;
}

} /* extern "C" */
