#include "common.h"

extern "C" {

void FUN_0015a244(void);
void nn_os_CriticalSection_Leave(void *section);
extern u8 DAT_00640550[];

/* Leaves the critical section at 0x640550, then calls FUN_0015a244. */
void FUN_00138d1c(void)
{
    nn_os_CriticalSection_Leave(DAT_00640550);
    FUN_0015a244();
}

} /* extern "C" */
