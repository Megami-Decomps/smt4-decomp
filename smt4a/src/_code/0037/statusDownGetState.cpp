#include "status/StatusDown.h"

extern "C" {
extern StatusDownStateA *g_statusDown;

s32 statusDownGetState(void)
{
    StatusDownStateA *status = g_statusDown;
    return status != NULL ? status->state : 0;
}

} /* extern "C" */
