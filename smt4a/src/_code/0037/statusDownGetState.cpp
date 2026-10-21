#include "shard/W4_W4Match5_StatusDown.h"

extern "C" {



s32 statusDownGetState(void)
{
    StatusDown *status = g_statusDown;
    return status != NULL ? status->state : 0;
}

} /* extern "C" */
