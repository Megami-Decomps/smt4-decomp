#include "cec/CecProcessGlobal.h"
#include "shard/W6_W6Match3_ForwardEffect.h"

extern "C" {


extern u32 cecSendCardData(Obj420a1c *messageBox, const void *card);

/* Forwards `arg` to cecSendCardData with the CEC message box; 0 when there is no process or no argument. */
u32 cecProcessForward(const void *card)
{
    u32 result = 0;

    if (g_cecProcess != NULL && card != NULL) {
        result = cecSendCardData(g_cecProcess->messageBox, card);
    }
    return result;
}

}
