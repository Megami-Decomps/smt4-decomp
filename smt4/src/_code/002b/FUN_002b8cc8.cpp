#include "shard/Counters43dcb0.h"

extern "C" {

/* Counts unk64A down towards 10. */
void FUN_002b8cc8(void)
{
    if (DAT_0043dcb0.counters->unk64A > 10) {
        DAT_0043dcb0.counters->unk64A = DAT_0043dcb0.counters->unk64A - 1;
    }
}

} /* extern "C" */
