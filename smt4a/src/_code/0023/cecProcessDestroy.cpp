#include "cec/CecProcessGlobal.h"

extern "C" {
void asdMemFree(void *memory);

/* Destroys the CEC process: its message box (if any), then the process itself. */
void cecProcessDestroy(void)
{
    CecProcessA *process;

    process = g_cecProcess;
    if (g_cecProcess->messageBox != NULL) {
        delete g_cecProcess->messageBox;
    }
    process->messageBox = NULL;
    asdMemFree(process);
    g_cecProcess = NULL;
}

} /* extern "C" */
