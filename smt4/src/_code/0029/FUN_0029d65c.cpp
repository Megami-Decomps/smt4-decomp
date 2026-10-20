#include "shard/Counters43dcb0.h"

extern "C" {

u8 FUN_0029d65c(int id)
{
    if (g_ifTouch.counters->unk64E == id) {
        return g_ifTouch.counters->unk08;
    }
    return 0;
}

} /* extern "C" */
