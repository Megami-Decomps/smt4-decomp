#include "shard/W5_W5Match2_StatusQuery.h"
extern "C" {
extern CecProcessView *g_cecProcess;
u32 FUN_004bb2e4(void *process);
/* Query the communication process, or zero while absent. */
u32 cecQueryOptionalProcess(void)
{
    u32 result = 0;
    if (g_cecProcess != NULL)
        result = FUN_004bb2e4(g_cecProcess->process);
    return result;
}
}
