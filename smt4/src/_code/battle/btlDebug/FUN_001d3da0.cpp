#include "shard/W6_W6Match8_BattleDebug.h"

extern "C" {


u32 jobGetWork(void);
int FUN_003c64ec(void *handler, u32 context);

/* Runs FUN_003c64ec for the global handler with the current context; 0 when no handler is installed. */
s32 FUN_001d3da0(u32 unusedHandle)
{
    u32 context = jobGetWork();

    if (g_btlDebugState.work == NULL) {
        return 0;
    }
    return FUN_003c64ec(g_btlDebugState.work, context);
}

} /* extern "C" */
