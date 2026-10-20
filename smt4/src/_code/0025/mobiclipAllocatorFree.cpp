/* Thunk: forwards its argument to entry 1 of the driver function table. */
#include "common.h"

extern "C" {

typedef void (*DriverFunc)(u32 arg);

extern DriverFunc g_mobiclipAllocator[2];

void mobiclipAllocatorFree(u32 arg)
{
    g_mobiclipAllocator[1](arg);
}

}
