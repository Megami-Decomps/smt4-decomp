#include "status/StatusDown.h"
#include "shard/FUN_002effbc.h"

extern "C" {
extern StatusDownStateA *g_statusDown;

/* Returns 0 when the scene at 0x588FE8 is in state 2, otherwise 1. */
u8 FUN_002effbc(void)
{
    if (g_statusDown->track.state == 2) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
