#include "cec/CecProcessGlobal.h"

extern "C" {

extern void FUN_00358f70(Obj557ec0 *messageBox);

void cecProcessCall1(void)
{
    if (g_cecProcess != NULL) {
        FUN_00358f70(g_cecProcess->messageBox);
    }
}

} /* extern "C" */
