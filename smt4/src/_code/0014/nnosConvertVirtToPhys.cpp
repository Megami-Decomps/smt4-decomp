#include "common.h"

extern "C" {

int nnosConvertVirtToPhysImpl(u32 addr);

/* Tail-calls the address rebasing function that follows it. */
int nnosConvertVirtToPhys(u32 addr)
{
    return nnosConvertVirtToPhysImpl(addr);
}

} /* extern "C" */
