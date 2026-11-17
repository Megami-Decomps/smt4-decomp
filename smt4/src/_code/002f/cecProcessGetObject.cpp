/* Passes the CEC process's message box on, or returns 0 if there is no process. */
#include "cec/CecProcessGlobal.h"

extern "C" {

u32 FUN_003bbcf4(Obj420a1c *messageBox);

u32 cecProcessGetObject(void)
{
    CecProcess *process = g_cecProcess;
    u32 result = 0;
    if (process != NULL) {
        result = FUN_003bbcf4(process->messageBox);
    }
    return result;
}
}
