/* NON_MATCHING: retail saves the destination in the stack-arg slot (push {r0, lr}; pop {r0, pc}), the build keeps it in r4. */
#include "AsdSDK/AsdMemCopy.h"

extern "C" {
void *FUN_001c53f0(void *destination, const void *source, u32 bytes)
{
    rt_memcpy(destination, source, bytes);
    return destination;
}
}
