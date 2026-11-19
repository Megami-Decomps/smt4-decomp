#include "cec/CecProcessGlobal.h"

extern "C" {

s32 resourceLookupWithFallback(Obj557ec0 *messageBox, s32 key);
s32 asdCecOutboxHasMessage(Obj557ec0 *messageBox);

/* Looks `key` up through the CEC process's message box when there is a process, a key and a message waiting; returns whether it did. */
u32 cecOutboxReadCard(s32 key)
{
    CecProcessA *process;
    s32 valid;
    u32 done;

    process = g_cecProcess;
    done = 0;
    if ((g_cecProcess != NULL && key != 0) && (valid = asdCecOutboxHasMessage(g_cecProcess->messageBox), valid != 0)) {
        resourceLookupWithFallback(process->messageBox, key);
        done = 1;
    }
    return done;
}

} /* extern "C" */
