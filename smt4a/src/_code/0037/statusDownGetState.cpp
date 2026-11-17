#include "status/StatusDownA.h"

extern "C" {

s32 statusDownGetState(void)
{
    StatusDownStateA *status = g_statusDown;
    return status != NULL ? status->scrollState : 0;
}

} /* extern "C" */
