#include "cec/CecProcessGlobal.h"

extern "C" {

/* Starts the inbox worker if a process exists. */
void FUN_002e1b20(void)
{
    if (g_cecProcess != NULL) {
        cecProcessInitializeAndStart(g_cecProcess);
        return;
    }
}

} /* extern "C" */
