#include "shard/W5_W5Match2_StatusQuery.h"
#include "code/Code0025_Smt4.h"
extern "C" {
extern CecProcessView *g_cecProcess;
u32 FUN_003bbc7c(void *process);
/* Query the communication process, or zero while absent. */
u32 cecQueryOptionalProcess(void)
{
    u32 result = 0;
    CecProcessView *view = g_cecProcess;
    if (view != NULL)
        return FUN_003bbc7c(view->process);
    return result;
}
}
