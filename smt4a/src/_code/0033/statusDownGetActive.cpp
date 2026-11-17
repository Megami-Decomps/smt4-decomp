#include "status/StatusDownA.h"

extern "C" {

s32 statusDownGetActive(void)
{
    StatusDownStateA *status = g_statusDown;
    return status != NULL ? status->active : 0;
}

} /* extern "C" */
