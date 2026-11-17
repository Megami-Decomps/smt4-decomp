#include "camp/Unite/UniteGlobals.h"

extern "C" {

/* The unite menu's state byte, or 0 when it is not open. */
u8 uniteGetState(void)
{
    if (g_unite != NULL) {
        return g_unite->menu.mode;
    }
    return 0;
}

} /* extern "C" */
