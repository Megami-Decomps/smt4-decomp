#include "camp/Unite/UniteGlobals.h"

extern "C" {

u8 uniteNotBusy(void)
{
    u8 value = 0;

    if (g_unite != NULL) {
        value = g_unite->menu.active;
    }
    return g_unite == NULL || value == 0;
}

} /* extern "C" */
