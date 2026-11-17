#include "camp/Unite/UniteGlobals.h"

extern "C" {
extern s32 gameFlagIsSet(u32 flag);

/* True while the unite exists, isn't in state 0x28, game flag 0x458 is clear and it is active in phase 0x1A. */
u32 uniteIsPhase26Active(void)
{
    if (g_unite == NULL) {
        return 0;
    }
    if (g_unite->state == 0x28 || gameFlagIsSet(0x458) != 0 || g_unite == NULL || g_unite->request != 0x1a ||
        g_unite->menu.active == 0) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
