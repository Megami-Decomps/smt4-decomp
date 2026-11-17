#include "cec/CecProcessGlobal.h"

extern "C" {

s32 cecCardMessageBoxInit(Obj557ec0 *messageBox);

s32 cecProcessGetValue(void)
{
    CecProcessA *process = g_cecProcess;
    s32 value = 0;
    if (process != NULL) {
        value = cecCardMessageBoxInit(process->messageBox);
    }
    return value;
}

} /* extern "C" */
