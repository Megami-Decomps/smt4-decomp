#include "status/StatusDown.h"

extern "C" {

u8 FUN_0030ab14(void)
{
    return g_statusDown->track.state == 10;
}

} /* extern "C" */
