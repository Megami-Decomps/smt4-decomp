#include "common.h"

extern "C" {

extern void asdGxCommandBufferTerminateAndSubmit(void);

/* Forwards to the function that follows it in the binary. */
void asdGxFlushCommandBuffer(void)
{
    asdGxCommandBufferTerminateAndSubmit();
}

} /* extern "C" */
