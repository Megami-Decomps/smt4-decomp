#include "common.h"

extern "C" {

void gxLcdClearForceBlack(void);
void nn_os_CriticalSection_Leave(void *section);
extern u8 g_nnAppletCriticalSection[];

/* Leaves the critical section at 0x640550, then calls gxLcdClearForceBlack. */
void FUN_00138d1c(void)
{
    nn_os_CriticalSection_Leave(g_nnAppletCriticalSection);
    gxLcdClearForceBlack();
}

} /* extern "C" */
