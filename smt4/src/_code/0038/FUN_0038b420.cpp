/* NON_MATCHING: retail parameter lifetime, address formation or grouped-store selection differs. */
#include "common.h"

extern "C" {
s32 FUN_0015e8b4(u32 *result);
void FUN_002b4828(u32 result);
/* Dispatches the queried result when the query succeeds. */
s32 FUN_0038b420()
{
    u32 result[2];
    if (FUN_0015e8b4(result) != 0) {
        FUN_002b4828(result[1]);
        return 1;
    }
    return 0;
}
}
