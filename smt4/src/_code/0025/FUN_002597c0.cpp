#include "cec/CecProcessGlobal.h"
#include "code/Code0025_Smt4.h"

extern "C" {

int cecMaintainMessageBox(Obj420a1c *messageBox);


void FUN_002597c0(void)
{
    if (g_cecProcess != NULL) {
        cecMaintainMessageBox(g_cecProcess->messageBox);
    }
}

} /* extern "C" */
