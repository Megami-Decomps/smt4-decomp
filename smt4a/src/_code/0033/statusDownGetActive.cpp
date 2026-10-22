#include "status/StatusDown.h"

extern "C" {
extern StatusDownStateA *g_statusDown;

s32 statusDownGetActive(void)
{
    StatusDownStateA *status = g_statusDown;
    return status != NULL ? status->active : 0;
}

} /* extern "C" */
