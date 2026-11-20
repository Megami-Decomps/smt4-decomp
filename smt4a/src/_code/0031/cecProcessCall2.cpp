#include "cec/CecProcessGlobal.h"

extern "C" {

extern void cecMessageBoxRequestOpen(Obj557ec0 *messageBox);

void cecProcessCall2(void)
{
    if (g_cecProcess != NULL) {
        cecMessageBoxRequestOpen(g_cecProcess->messageBox);
    }
}

} /* extern "C" */
