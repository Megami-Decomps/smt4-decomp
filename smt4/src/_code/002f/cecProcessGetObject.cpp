/* Passes the CEC process's message box on, or returns 0 if there is no process. */
#include "cec/CecProcessGlobal.h"

extern "C" {

u32 cecResolveAvailableBox(Obj420a1c *messageBox);

u32 cecProcessGetObject(void)
{
    CecProcess *process = g_cecProcess;
    u32 result = 0;
    if (process != NULL) {
        result = cecResolveAvailableBox(process->messageBox);
    }
    return result;
}
}
