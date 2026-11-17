#include "camp/Unite/UniteGlobals.h"

extern "C" {

s32 messageMainIsIdle(void);

/* Returns 1 when the record has a pending item and is either idle or messageMainIsIdle reports 0; 0 when there is no record. */
u32 uniteHasPendingIdle(void)
{
    if (g_unite == NULL) {
        return 0;
    }
    if (g_unite->previewA.resetCount != 0 && (g_unite->menu.active == 0 || messageMainIsIdle() == 0)) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
