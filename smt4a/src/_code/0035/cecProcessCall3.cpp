#include "cec/CecProcessGlobal.h"

extern "C" {

extern void cecProcessInitializeAndStart(CecProcessA *process);

void cecProcessCall3(void)
{
    if (g_cecProcess != NULL) {
        cecProcessInitializeAndStart(g_cecProcess);
    }
}

} /* extern "C" */
