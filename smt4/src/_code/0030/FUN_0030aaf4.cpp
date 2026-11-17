#include "status/StatusDown.h"

extern "C" {

u8 FUN_0030aaf4(void)
{
    return g_statusDown->track.state == 0xf;
}

} /* extern "C" */
