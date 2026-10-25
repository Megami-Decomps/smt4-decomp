#include "shard/Shard003A.h"
#include "shard/W4_Match1b_RegisteredHandle.h"

extern "C" {

extern u32 gameFlagIsSet(u32 index);

/* True when `a` is unset or its flag is set, and `b` is unset or its flag is clear. */
u32 flagPairCondition(s32 a, s32 b)
{
    if ((a == 0 || gameFlagIsSet(a) != 0) && (b == 0 || gameFlagIsSet(b) == 0)) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
