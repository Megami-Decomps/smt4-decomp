#include "cec/CecProcessGlobal.h"

extern "C" {

u32 cecCardMessageBoxInit(Obj420a1c *messageBox);

/* Reads or updates the requested object state. */
u32 FUN_002e1afc(void)
{
    u32 result = 0;
    if (g_cecProcess != NULL)
        result = cecCardMessageBoxInit(g_cecProcess->messageBox);
    return result;
}
}
