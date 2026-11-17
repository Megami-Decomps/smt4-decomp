#include "status/StatusDown.h"

extern "C" {

u8 FUN_00293a88(void)
{
    return g_statusDown->track.state != 0x12 && g_statusDown->track.state != 0x14;
}

} /* extern "C" */
