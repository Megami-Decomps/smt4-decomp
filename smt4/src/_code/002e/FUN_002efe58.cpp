#include "status/StatusDown.h"

extern "C" {
extern StatusDownState *g_statusDown;

u8 FUN_002efe58(void)
{
    return g_statusDown->state != 4;
}

} /* extern "C" */
