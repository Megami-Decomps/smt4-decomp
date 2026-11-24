#include "cec/CecProcessGlobal.h"

extern "C" {

void cecProcessCall3(void)
{
    if (g_cecProcess != NULL) {
        cecProcessInitializeAndStart(g_cecProcess);
    }
}

} /* extern "C" */
