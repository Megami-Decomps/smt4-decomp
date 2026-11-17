#include "camp/Unite/UniteGlobals.h"

extern "C" {

/* Returns whether there is no record or it is not busy. */
u8 uniteNotBusy(void)
{
    u8 busy;

    busy = 0;
    if (g_unite != NULL) {
        busy = g_unite->menu.active;
    }
    return g_unite == NULL || busy == 0;
}

} /* extern "C" */
