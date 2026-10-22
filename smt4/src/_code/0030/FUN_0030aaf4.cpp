#include "status/StatusDown.h"

extern "C" {
extern StatusDownState *g_statusDown;

u8 FUN_0030aaf4(void)
{
    return g_statusDown->state == 0xf;
}

} /* extern "C" */
