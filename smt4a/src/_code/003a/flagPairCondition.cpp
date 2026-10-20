#include "shard/Shard003A.h"

extern "C" {

extern u32 FUN_0018719c(u32 index);

/* True when `a` is unset or its flag is set, and `b` is unset or its flag is clear. */
u32 flagPairCondition(s32 a, s32 b)
{
    if ((a == 0 || FUN_0018719c(a) != 0) && (b == 0 || FUN_0018719c(b) == 0)) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
