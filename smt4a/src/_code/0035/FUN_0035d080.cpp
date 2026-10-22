#include "shard/W5_W5Match7_ResourceHandles.h"

extern "C" {

void unlockLogMenuUpdate(void *owner, s32 value);

s32 FUN_0035d080(s32 value)
{
    if (g_engineResourceHandles.secondary != NULL) {
        unlockLogMenuUpdate(g_engineResourceHandles.secondary, value);
    }
    return 0;
}

} /* extern "C" */
