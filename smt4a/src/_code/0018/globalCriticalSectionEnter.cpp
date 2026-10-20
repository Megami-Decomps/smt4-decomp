/* Enters the critical section at g_nngxCriticalSection (a tail call). */
#include "common.h"

extern "C" {

extern u8 g_nngxCriticalSection[];

void nn_os_CriticalSection_Enter(u8 *cs);

void globalCriticalSectionEnter(void)
{
    nn_os_CriticalSection_Enter(g_nngxCriticalSection);
}

}
