#include "common.h"

extern "C" {

extern void asdGxCommandBufferTerminateAndSubmit(void);

/* Forwards to the function that follows it in the binary. */
void FUN_0017dd80(void)
{
    asdGxCommandBufferTerminateAndSubmit();
}

} /* extern "C" */
