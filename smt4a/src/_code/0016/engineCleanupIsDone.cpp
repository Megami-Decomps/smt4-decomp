#include "common.h"
#include "shard/X14_EngineUnits.h"
#include "camp/RenderCtx.h"

extern "C" {

/* Returns 1 when there is no result screen or its state is 0x17. */
u32 engineCleanupIsDone(void)
{
    u32 result;

    if (g_engineCleanupOwner.instance == NULL || g_engineCleanupOwner.instance->state == 0x17) {
        result = 1;
    } else {
        result = 0;
    }
    return result;
}

} /* extern "C" */
