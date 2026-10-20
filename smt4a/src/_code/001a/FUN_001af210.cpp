#include "common.h"

extern "C" {

extern void nn_os_LightEvent_TryWait(void);

/* Forwards to the function that follows it in the binary. */
void FUN_001af210(void)
{
    nn_os_LightEvent_TryWait();
}

} /* extern "C" */
