#include "cec/CecProcessGlobal.h"

extern "C" {

int FUN_002e1a00(void);


void FUN_002e1b20(void)
{
    if (g_cecProcess != NULL) {
        FUN_002e1a00();
        return;
    }
}

} /* extern "C" */
