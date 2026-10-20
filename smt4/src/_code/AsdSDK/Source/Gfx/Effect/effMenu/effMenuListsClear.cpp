/* NON_MATCHING: the two list arrays are set up through one base register in retail; this build adds the offset differently; retail 15 vs built 14 rows, 14 diff lines. */
#include "AsdSDK/Source/Gfx/Effect/effMenu.h"

extern "C" {

extern EffMenuNode *g_effMenuHandles[EFFMENU_LIST_COUNT * 2];  /* first nodes, then last nodes */

/* Empties all menu node lists. */
void effMenuListsClear(void)
{
    EffMenuNode **head = g_effMenuHandles;
    EffMenuNode **tail = g_effMenuHandles + EFFMENU_LIST_COUNT;
    s32 i;

    for (i = 0; i < EFFMENU_LIST_COUNT; i++) {
        head[i] = NULL;
        tail[i] = NULL;
    }
}

} /* extern "C" */
