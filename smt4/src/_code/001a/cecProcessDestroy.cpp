#include "cec/CecProcessGlobal.h"
#include "classes/Obj420a1c.h"

extern "C" {

/* Destroys the CEC process: its message box (if any), then the process itself. */
void cecProcessDestroy(void)
{
    CecProcess *process = g_cecProcess;
    if (g_cecProcess->messageBox != NULL) {
        delete g_cecProcess->messageBox;
    }
    process->messageBox = NULL;
    /* Obj420a1c.h declares the allocator's free with a word argument. */
    asdMemFree(reinterpret_cast<u32>(process));
    g_cecProcess = NULL;
}

} /* extern "C" */
