/* Enters the global critical section (tail call). */
#include "common.h"

extern "C" {

extern u8 g_nngxCriticalSection;

void nn_os_CriticalSection_Enter(void *section);

void nngxLockEnterImpl(void)
{
    nn_os_CriticalSection_Enter(&g_nngxCriticalSection);
}

}
