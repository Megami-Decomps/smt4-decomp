#include "camp/Unite/UniteGlobals.h"

extern "C" {

/* Returns 1 when the record's state is 2 and it is not busy. */
u32 uniteIsReady(void)
{
    u32 result;

    if ((g_unite->state == 2) && (g_unite->returnState.busy == 0)) {
        result = 1;
    } else {
        result = 0;
    }
    return result;
}

} /* extern "C" */
