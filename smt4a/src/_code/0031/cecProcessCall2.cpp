#include "cec/CecProcessGlobal.h"

extern "C" {

extern void FUN_00358fbc(Obj557ec0 *messageBox);

void cecProcessCall2(void)
{
    if (g_cecProcess != NULL) {
        FUN_00358fbc(g_cecProcess->messageBox);
    }
}

} /* extern "C" */
