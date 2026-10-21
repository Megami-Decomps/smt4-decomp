#include "shard/W4_W4Match5_StatusDown.h"

extern "C" {



s32 statusDownGetMode(void)
{
    StatusDown *status = g_statusDown;
    return status != NULL ? status->mode : 0;
}

} /* extern "C" */
