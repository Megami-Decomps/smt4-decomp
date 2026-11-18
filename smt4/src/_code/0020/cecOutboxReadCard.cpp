#include "cec/CecProcessGlobal.h"
#include "cec/CecOutbox.h"
#include "camp/CampCec/CampCecView.h"

extern "C" {

extern int asdCecOutboxHasMessage(Obj420a1c *messageBox);


u32 cecOutboxReadCard(CecProcessSlot *out)
{
    CecProcess *process = g_cecProcess;
    u32 found = 0;

    if ((g_cecProcess != NULL && out != NULL) && asdCecOutboxHasMessage(g_cecProcess->messageBox) != 0) {
        resourceLookupWithFallback(process->messageBox, out);
        found = 1;
    }
    return found;
}

} /* extern "C" */
