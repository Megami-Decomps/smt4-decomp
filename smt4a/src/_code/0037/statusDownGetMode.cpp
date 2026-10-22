#include "status/StatusDown.h"

extern "C" {
extern StatusDownStateA *g_statusDown;

s32 statusDownGetMode(void)
{
    StatusDownStateA *status = g_statusDown;
    return status != NULL ? status->mode : 0;
}

} /* extern "C" */
