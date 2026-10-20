#include "common.h"

extern "C" {

int gxLcdClearForceBlack(void);
void nn_os_CriticalSection_Leave(void *section);

extern u8 g_nnAppletCriticalSection[];

void FUN_001042b8(void)
{
    nn_os_CriticalSection_Leave(g_nnAppletCriticalSection);
    gxLcdClearForceBlack();
}

} /* extern "C" */
