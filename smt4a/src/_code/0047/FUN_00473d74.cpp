/* NON_MATCHING: retail parameter lifetime, address formation or grouped-store selection differs. */
#include "common.h"

extern "C" {
s32 FUN_001d25dc(u32 *result);
void FUN_001764f4(u32 result);
/* Dispatches the queried result when the query succeeds. */
s32 FUN_00473d74()
{
    u32 result[2];
    if (FUN_001d25dc(result) != 0) {
        FUN_001764f4(result[1]);
        return 1;
    }
    return 0;
}
}
