#include "common.h"

extern "C" {

extern u8 g_nngxCriticalSection;

void nn_os_CriticalSection_Leave(u8 *criticalSection);

/* Leaves the critical section g_nngxCriticalSection. */
void nngxLockLeaveImpl(void)
{
    nn_os_CriticalSection_Leave(&g_nngxCriticalSection);
}

} /* extern "C" */
