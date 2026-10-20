#include "common.h"

extern "C" {

extern u8 DAT_004e6c5c;

void nn_os_CriticalSection_Leave(u8 *criticalSection);

/* Leaves the critical section DAT_004e6c5c. */
void FUN_0013b61c(void)
{
    nn_os_CriticalSection_Leave(&DAT_004e6c5c);
}

} /* extern "C" */
