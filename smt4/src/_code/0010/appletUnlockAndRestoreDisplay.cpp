#include "common.h"

extern "C" {

int gxLcdClearForceBlack(void);
void nn_os_CriticalSection_Leave(void *section);

extern u8 g_nnAppletCriticalSection[];

void appletUnlockAndRestoreDisplay(void)
{
    nn_os_CriticalSection_Leave(g_nnAppletCriticalSection);
    gxLcdClearForceBlack();
}

} /* extern "C" */
