#include "cec/CecProcessGlobal.h"

extern "C" {

u32 FUN_003bbd88(Obj420a1c *messageBox);

/* Reads or updates the requested object state. */
u32 FUN_002e1afc(void)
{
    u32 result = 0;
    if (g_cecProcess != NULL)
        result = FUN_003bbd88(g_cecProcess->messageBox);
    return result;
}
}
