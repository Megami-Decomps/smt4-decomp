#include "shard/W5_W5Match7_ResourceHandles.h"

extern "C" {

void FUN_003f7c2c(void *owner, s32 value);

s32 FUN_0035d080(s32 value)
{
    if (g_engineResourceHandles.secondary != NULL) {
        FUN_003f7c2c(g_engineResourceHandles.secondary, value);
    }
    return 0;
}

} /* extern "C" */
