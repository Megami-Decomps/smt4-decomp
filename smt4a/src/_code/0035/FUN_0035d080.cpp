#include "shard/W5_W5Match7_ResourceHandles.h"
#include "ui/PartnerTopic.h"

extern "C" {

void unlockLogMenuUpdate(void *owner, s32 value);

s32 FUN_0035d080(u32 handle)
{
    if (g_engineResourceHandles.secondary != NULL) {
        unlockLogMenuUpdate(g_engineResourceHandles.secondary, handle);
    }
    return 0;
}

} /* extern "C" */
