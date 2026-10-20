/* Leaves the global critical section (tail call). */
#include "common.h"

extern "C" {

extern u8 DAT_00643080;

void nn_os_CriticalSection_Leave(void *section);

void FUN_0018b614(void)
{
    nn_os_CriticalSection_Leave(&DAT_00643080);
}

}
