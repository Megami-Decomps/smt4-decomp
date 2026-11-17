#include "camp/Unite/UniteGlobals.h"

extern "C" {

u8 FUN_0028f670(void)
{
    int value = 0;

    if (g_unite != NULL) {
        value = g_unite->state;
    }
    return g_unite == NULL || value == 0x24;
}

} /* extern "C" */
