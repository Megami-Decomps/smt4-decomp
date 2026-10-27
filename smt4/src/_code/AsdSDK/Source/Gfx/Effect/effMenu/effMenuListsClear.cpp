#include "AsdSDK/Source/Gfx/Effect/effMenu.h"

extern "C" {

EffMenuNode *g_effMenuHandles[EFFMENU_LIST_COUNT];
EffMenuNode *g_effMenuListTails[EFFMENU_LIST_COUNT];

/* Empties all menu node lists. */
void effMenuListsClear(void)
{
    s32 i;

    for (i = 0; i < EFFMENU_LIST_COUNT; i++) {
        g_effMenuHandles[i] = NULL;
        g_effMenuListTails[i] = NULL;
    }
}

} /* extern "C" */
