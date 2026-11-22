/* NON_MATCHING: the member id and the entry swap r1/r2 in the search (retail: entry r2, id r1), as in the Apocalypse
 * twin and in the inlined copies (btlActionEffectAnchor, FUN_0023cd08); IDENTICAL in a `--multifile` run with
 * btlMainFindEntryByListedId or with `--fpu=softvfp` (config proposals in the wave report). */
#include "battle/BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "battle/BtlGlobals.h"

extern "C" {

/* Returns the position of the action's member within its combatant entry, or -1 when absent. */
s32 idSetFindSubjectIndex(BtlMainState *state, const BtlActionRecord *action)
{
    BtlEntry *entry = btlMainFindEntryByListedId(state, action->memberId);
    if (entry == NULL) {
        return -1;
    }
    for (s32 index = 0; index < 50; ++index) {
        if (action->memberId == entry->ids[index]) {
            return index;
        }
    }
    return -1;
}
}
