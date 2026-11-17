#include "status/StatusDownA.h"

extern "C" {

s32 statusDownGetMode(void)
{
    StatusDownStateA *status = g_statusDown;
    return status != NULL ? status->mode : 0;
}

} /* extern "C" */
