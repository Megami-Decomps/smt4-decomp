/* Calls asdFatalError when ipcSendParameterlessCommand0x270000 reports failure (negative result). */
#include "common.h"

extern "C" {

void asdFatalError(void);
s32 ipcSendParameterlessCommand0x270000(void);

void FUN_003604bc(void)
{
    bool failed = ipcSendParameterlessCommand0x270000() < 0;

    if (failed) {
        asdFatalError();
    }
}

} /* extern "C" */
