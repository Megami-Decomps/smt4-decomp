/* NON_MATCHING: retail addresses the last-node array as the first array plus 20 bytes (one object); a single declared array reproduces that only with extra moves, so two arrays are kept; retail 12 vs built 11 rows, 6 diff lines. */
#include "AsdSDK/Source/Gfx/Effect/effMenu.h"

extern "C" {

extern EffMenuNode *g_effMenuHandles[EFFMENU_LIST_COUNT];  /* first node of each list */
extern EffMenuNode *g_effMenuListTails[EFFMENU_LIST_COUNT];  /* last node of each list */

/* Appends `node` to menu node list `list`. */
void effMenuListAppend(EffMenuNode *node, s32 list)
{
    if (g_effMenuHandles[list] == NULL) {
        g_effMenuHandles[list] = node;
    } else {
        g_effMenuListTails[list]->next = node;
    }
    g_effMenuListTails[list] = node;
    node->next = NULL;
}

} /* extern "C" */
