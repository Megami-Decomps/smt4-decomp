#include "cec/CecProcessGlobal.h"
#include "code/Code0025_Smt4.h"
extern "C" {
u32 FUN_003bbc7c(Obj420a1c *messageBox);
/* Query the communication process, or zero while absent. */
u32 cecQueryOptionalProcess(void)
{
    u32 result = 0;
    CecProcess *view = g_cecProcess;
    if (view != NULL)
        return FUN_003bbc7c(view->messageBox);
    return result;
}
}
