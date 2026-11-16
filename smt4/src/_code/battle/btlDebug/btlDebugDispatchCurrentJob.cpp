#include "shard/W6_W6Match8_BattleDebug.h"

extern "C" {


u32 jobGetWork(void);
int btlDebugMenuUpdate(void *handler, u32 context);

/* Runs btlDebugMenuUpdate for the global handler with the current context; 0 when no handler is installed. */
s32 btlDebugDispatchCurrentJob(u32 unusedHandle)
{
    u32 context = jobGetWork();

    if (g_btlDebugState.work == NULL) {
        return 0;
    }
    return btlDebugMenuUpdate(g_btlDebugState.work, context);
}

} /* extern "C" */
