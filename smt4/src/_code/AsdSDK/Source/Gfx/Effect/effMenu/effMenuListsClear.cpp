/* NON_MATCHING: retail keeps the tail array in its own register (`add r2, r1, #20`) and stores head/tail pairs with it; armcc folds the +20 into one base register. */
#include "AsdSDK/Source/Gfx/Effect/effMenu.h"

extern "C" {

extern EffMenuLists g_effMenuHandles;

/* Empties all menu node lists. */
void effMenuListsClear(void)
{
    EffMenuNode **head = g_effMenuHandles.head;
    EffMenuNode **tail = g_effMenuHandles.tail;
    s32 i;

    for (i = 0; i < EFFMENU_LIST_COUNT; i++) {
        head[i] = NULL;
        tail[i] = NULL;
    }
}

} /* extern "C" */
