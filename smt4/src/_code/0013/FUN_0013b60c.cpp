/* Enters the global critical section (tail call). */
#include "common.h"

extern "C" {

extern u8 DAT_004e6c5c;

void nn_os_CriticalSection_Enter(void *section);

void FUN_0013b60c(void)
{
    nn_os_CriticalSection_Enter(&DAT_004e6c5c);
}

}
