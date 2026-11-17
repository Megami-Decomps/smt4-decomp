#include "cec/CecProcessGlobal.h"

extern "C" {

extern void FUN_0035af44(CecProcessA *process);

void cecProcessCall3(void)
{
    if (g_cecProcess != NULL) {
        FUN_0035af44(g_cecProcess);
    }
}

} /* extern "C" */
