#include "shard/Counters43dcb0.h"

extern "C" {

/* Counts unk64A down towards 10. */
void ifTouchRegionRemove(void)
{
    if (g_ifTouch.counters->unk64A > 10) {
        g_ifTouch.counters->unk64A = g_ifTouch.counters->unk64A - 1;
    }
}

} /* extern "C" */
