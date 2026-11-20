#include "nn/Result.h"

extern "C" {

s32 ipcSendParameterlessCommand0x270000(void);
int sysFatalBreak(void);

/* Calls ipcSendParameterlessCommand0x270000 and reports through sysFatalBreak when it returns a failure result. */
void nnResultCheckReport0043aab4(void)
{
    if (nnResultIsFailure(ipcSendParameterlessCommand0x270000())) {
        sysFatalBreak();
    }
}

} /* extern "C" */
