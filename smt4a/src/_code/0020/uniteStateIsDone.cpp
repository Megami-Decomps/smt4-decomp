#include "camp/Unite/UniteGlobals.h"

extern "C" {

/* Returns whether there is no record or its state is 0x28. */
u8 uniteStateIsDone(void)
{
    s32 state;

    state = 0;
    if (g_unite != NULL) {
        state = g_unite->state;
    }
    return g_unite == NULL || state == 0x28;
}

} /* extern "C" */
