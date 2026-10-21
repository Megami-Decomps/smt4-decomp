#include "common.h"

extern "C" {
u32 nnosConvertVirtToPhysImpl(u32 address);

/* Converts a virtual address through the OS implementation. */
u32 osVirtToPhysAddress(u32 address)
{
    return nnosConvertVirtToPhysImpl(address);
}
}
