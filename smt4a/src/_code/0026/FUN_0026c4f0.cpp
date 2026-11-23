#include "camp/Unite/UniteGlobals.h"

extern "C" {

/* The unite work area: only the selected-entry count is named. */

s32 compendiumComputeSummonCost(u32 id, s32 a, s32 b, s32 c, s32 d);

/* Sums the results of requesting every entry of kind 3 from the unite list. */
s32 FUN_0026c4f0(UniteEntryList *list)
{
    UniteWorkA *unite = g_unite;
    s32 total = 0;
    s32 i;

    for (i = 0; i < unite->selectionCountA.selectedCount; i++) {
        if (list->kinds[i] == 3) {
            total += compendiumComputeSummonCost(list->ids[i], 1, 0, 0, 0);
        }
    }
    return total;
}

} /* extern "C" */
