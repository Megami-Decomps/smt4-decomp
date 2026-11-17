#include "cec/CecProcessGlobal.h"

extern "C" {

int cecRefreshAcceptedContextResource(Obj420a1c *messageBox);


void FUN_0025461c(void)
{
    if (g_cecProcess != NULL) {
        cecRefreshAcceptedContextResource(g_cecProcess->messageBox);
    }
}

} /* extern "C" */
