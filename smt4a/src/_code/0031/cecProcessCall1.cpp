#include "cec/CecProcessGlobal.h"

extern "C" {

extern void asdCecResetMessageBoxImpl(Obj557ec0 *messageBox);

void cecProcessCall1(void)
{
    if (g_cecProcess != NULL) {
        asdCecResetMessageBoxImpl(g_cecProcess->messageBox);
    }
}

} /* extern "C" */
