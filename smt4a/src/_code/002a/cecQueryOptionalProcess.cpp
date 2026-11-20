#include "cec/CecProcessGlobal.h"

extern "C" {

u32 cecCheckResourceCanOpen(Obj557ec0 *messageBox);

/* Query the communication process, or zero while absent. */
u32 cecQueryOptionalProcess(void)
{
    u32 result = 0;
    if (g_cecProcess != NULL)
        result = cecCheckResourceCanOpen(g_cecProcess->messageBox);
    return result;
}
}
