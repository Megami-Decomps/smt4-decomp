#include "status/StatusDownA.h"

extern "C" {



/* Whether the status screen exists and is in state 23. */
u32 FUN_0031f63c(void)
{
    StatusDownStateA *obj = g_statusDown;
    u32 result = 0;

    if (obj == NULL) {
        return 0;
    }
    if (obj->track.state == 23) {
        result = 1;
    }
    return result;
}

}
