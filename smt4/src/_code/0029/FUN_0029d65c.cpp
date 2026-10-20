#include "shard/Counters43dcb0.h"

extern "C" {

u8 FUN_0029d65c(int id)
{
    if (DAT_0043dcb0.counters->unk64E == id) {
        return DAT_0043dcb0.counters->unk08;
    }
    return 0;
}

} /* extern "C" */
