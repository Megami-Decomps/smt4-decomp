#include "common.h"

extern "C" {

/* Global block: a handler object pointer at +8. */
typedef struct {
    u8 unk00[8];
    void *handler;      /* 0x08 */
} HandlerBlock;

extern HandlerBlock g_btlDebugGlobals;

u32 jobGetWork(void);
int FUN_004d6104(void *handler, u32 context);

/* Runs FUN_004d6104 for the global handler with the current context; 0 when no handler is installed. */
int btlDebugDispatchCurrentJob(void)
{
    u32 context = jobGetWork();

    if (g_btlDebugGlobals.handler == NULL) {
        return 0;
    }
    return FUN_004d6104(g_btlDebugGlobals.handler, context);
}

} /* extern "C" */
