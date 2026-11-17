#include "cec/CecProcessGlobal.h"

extern "C" {

extern u32 cecCardMessageBoxOpenIfAllowed(Obj557ec0 *messageBox);

void cecProcessCall4(void)
{
    if (g_cecProcess != NULL) {
        cecCardMessageBoxOpenIfAllowed(g_cecProcess->messageBox);
    }
}

} /* extern "C" */
