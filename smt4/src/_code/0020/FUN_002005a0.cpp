#include "cec/CecProcessGlobal.h"
#include "camp/CampCec/CampCecView.h"

extern "C" {

int resourceLookupWithFallback(Obj420a1c *messageBox, int id);
extern int asdCecOutboxHasMessage(Obj420a1c *messageBox);


u32 FUN_002005a0(int id)
{
    CecProcess *process = g_cecProcess;
    u32 found = 0;

    if ((g_cecProcess != NULL && id != 0) && asdCecOutboxHasMessage(g_cecProcess->messageBox) != 0) {
        resourceLookupWithFallback(process->messageBox, id);
        found = 1;
    }
    return found;
}

} /* extern "C" */
