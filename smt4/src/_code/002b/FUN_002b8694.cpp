#include "camp/CampState.h"

extern "C" {

/* Whether the camp is open and not in state 54. */
s32 FUN_002b8694(void)
{
    if (g_camp == NULL) {
        return 0;
    }
    if (g_camp->state == 54)
        return 0;
    return 1;
}

}
