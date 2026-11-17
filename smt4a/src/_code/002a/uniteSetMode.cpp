#include "camp/Unite/UniteGlobals.h"

extern "C" {

/* Sets the unite's mode and clears its two counters, if the unite exists. */
void uniteSetMode(u8 mode)
{
    UniteWorkA *unite = g_unite;

    if (unite != NULL) {
        unite->menu.mode = mode;
        unite->state = 0;
        unite->transition.frame = 0;
    }
}

} /* extern "C" */
