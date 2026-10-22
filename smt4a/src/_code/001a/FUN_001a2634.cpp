#include "common.h"

extern "C" {

int osConvertToPhysicalAddress(u32 arg0);

/* Forwards to osConvertToPhysicalAddress, the function that follows it. */
int FUN_001a2634(u32 arg0)
{
    return osConvertToPhysicalAddress(arg0);
}

} /* extern "C" */
