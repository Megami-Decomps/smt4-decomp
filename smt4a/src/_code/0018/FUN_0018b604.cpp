/* Enters the critical section at DAT_00643080 (a tail call). */
#include "common.h"

extern "C" {

extern u8 DAT_00643080[];

void nn_os_CriticalSection_Enter(u8 *cs);

void FUN_0018b604(void)
{
    nn_os_CriticalSection_Enter(DAT_00643080);
}

}
