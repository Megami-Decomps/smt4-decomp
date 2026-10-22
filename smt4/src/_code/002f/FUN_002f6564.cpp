#include "status/StatusDown.h"

extern "C" {
extern StatusDownState *g_statusDown;

u32 FUN_002f6564(void)
{
    u32 result;

    if ((g_statusDown == NULL) || (g_statusDown->state != 7)) {
        result = 0;
    } else {
        result = 1;
    }
    return result;
}

} /* extern "C" */
