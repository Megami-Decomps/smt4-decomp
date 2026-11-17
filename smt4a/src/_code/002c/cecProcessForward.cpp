#include "cec/CecProcessGlobal.h"

extern "C" {

extern u32 cecSendCardData(Obj557ec0 *messageBox, s32 arg);

/* Forwards `arg` to cecSendCardData with the CEC message box; 0 when there is no process or no argument. */
u32 cecProcessForward(s32 arg)
{
    u32 result = 0;
    if (g_cecProcess != NULL && arg != 0) {
        result = cecSendCardData(g_cecProcess->messageBox, arg);
    }
    return result;
}

}
