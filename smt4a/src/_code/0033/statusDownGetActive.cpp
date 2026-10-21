#include "shard/W4_W4Match5_StatusDown.h"

extern "C" {



s32 statusDownGetActive(void)
{
    StatusDown *status = g_statusDown;
    return status != NULL ? status->active : 0;
}

} /* extern "C" */
