/* Thunk: forwards its argument to entry 1 of the driver function table. */
#include "common.h"

extern "C" {

typedef void (*DriverFunc)(u32 arg);

extern DriverFunc DAT_0044e978[2];

void FUN_002580c4(u32 arg)
{
    DAT_0044e978[1](arg);
}

}
