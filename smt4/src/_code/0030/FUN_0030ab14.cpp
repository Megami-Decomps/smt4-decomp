#include "status/StatusDown.h"

extern "C" {
extern StatusDownState *g_statusDown;

u8 FUN_0030ab14(void)
{
    return g_statusDown->state == 10;
}

} /* extern "C" */
