#include "common.h"
#include "battle/BtlEntryLookup.h"
#include "battle/BtlUnitTarget.h"
#include "battle/BtlUnitWork.h"

extern "C" {

/* Copies the listed targets' current and maximum HP to the unit's action state. */
void btlEntryValuesCopy(BtlMainState **stateRef, BtlUnit *unit)
{
    s32 i = 0;

    do {
        BtlEntry *entry;

        unit->targetStates[i].hp = 0;
        entry = btlMainFindEntryByListedId(*stateRef, i);
        if (entry != NULL) {
            unit->targetStates[i].hp = entry->data.hp;
            unit->targetStates[i].maxHp = entry->data.maxHp;
        }
        i++;
    } while (i < BTL_UNIT_TARGET_COUNT);
}

} /* extern "C" */
