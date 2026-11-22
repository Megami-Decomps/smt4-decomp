/* NON_MATCHING: the member id and the entry swap r1/r2 in the search (retail: entry r2, id r1), as in IV's twin; both
 * are IDENTICAL in a `--multifile` run with btlMainFindEntryByListedId or with `--fpu=softvfp` (config proposals). */
#include "battle/btlAction.h"
#include "battle/BtlEntryLookup.h"

extern "C" {

/* Returns the position of the action's member within its combatant entry, or -1 when absent. */
s32 idSetFindSubjectIndex(BtlMainStateA *state, const BtlActionRecord *action)
{
    BtlCombatantEntryA *entry = btlMainFindEntryByListedId(state, action->apocalypse.memberId);
    if (entry != NULL) {
        for (s32 index = 0; index < 50; ++index) {
            if (action->apocalypse.memberId == entry->ids[index]) {
                return index;
            }
        }
    }
    return -1;
}

} /* extern "C" */
