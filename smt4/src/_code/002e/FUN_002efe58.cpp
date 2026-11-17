#include "status/StatusDown.h"

extern "C" {

u8 FUN_002efe58(void)
{
    return g_statusDown->track.state != 4;
}

} /* extern "C" */
