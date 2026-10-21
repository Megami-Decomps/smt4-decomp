#include "common.h"
extern "C" {
extern void *g_callbackWork;
void FUN_004cc34c(void *work, u32 value);
/* Forwards the callback value while the work object exists. */
s32 FUN_002e2794(u32 value)
{
    if (g_callbackWork != NULL)
        FUN_004cc34c(g_callbackWork, value);
    return 0;
}
}
