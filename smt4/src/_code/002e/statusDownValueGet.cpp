#include "status/StatusDown.h"


extern "C" {

/* Reads the current status value when the owner exists. */
s32 statusDownValueGet(void)
{
    return g_statusDown != NULL ? g_statusDown->scrollState : 0;
}
}
