/* Leaves the global critical section (tail call). */
#include "common.h"

extern "C" {

extern u8 g_nngxCriticalSection;

void nn_os_CriticalSection_Leave(void *section);

void globalCriticalSectionLeave(void)
{
    nn_os_CriticalSection_Leave(&g_nngxCriticalSection);
}

}
