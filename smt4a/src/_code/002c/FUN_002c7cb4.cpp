#include "status/StatusDown.h"
#include "code/Code002c_Smt4a.h"

extern "C" {
extern StatusDownStateA *g_statusDown;

/* Returns 0 when the scene state is 1, otherwise 1. */
u8 FUN_002c7cb4(void)
{
    if (g_statusDown->track.state == 1) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
