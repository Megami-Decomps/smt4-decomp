#include "status/StatusDown.h"

extern "C" {
extern StatusDownState *g_statusDown;

u8 FUN_00293a88(void)
{
    return g_statusDown->state != 0x12 && g_statusDown->state != 0x14;
}

} /* extern "C" */
