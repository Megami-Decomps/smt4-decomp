#include "common.h"
#include "battle/BtlEntryLookup.h"
#include "battle/BtlUnitTarget.h"
#include "battle/BtlUnitWork.h"

extern "C" {

enum {
    BTL_ENTRY_PRESENT = 1,
    BTL_ENTRY_TARGET_BLOCKED = 0x400000
};

/* Checks whether the resolved combatant has no copied HP and is down but still targetable. */
u32 btlUnitIsDeadAndUncopied(BtlMainState **stateRef, BtlUnit *unit, s32 listedId)
{
    s32 index = listedId;
    BtlEntry *entry = btlMainFindEntryByListedId(*stateRef, listedId);
    if (entry != NULL) {
        index = entry->selectionIndex;
    }
    if (unit->targetStates[index].hp == 0) {
        if (((*stateRef)->entries[index].flags & BTL_ENTRY_PRESENT) != 0 &&
            ((*stateRef)->entries[index].flags & BTL_ENTRY_TARGET_BLOCKED) == 0 &&
            (*stateRef)->entries[index].targetDelay <= 0) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
