#include "camp/Unite/UniteGlobals.h"

extern "C" {

/* Tests the active fusion states that accept interaction. */
s32 uniteAcceptsInteraction(void)
{
    if (g_unite->menu.active != 0) {
        s32 state = g_unite->request;
        if (state == 7 || state == 8 ||
            state == 9 || state == 10 ||
            state == 11 || state == 12 || state == 13) {
            return 1;
        }
    }
    return 0;
}
}
