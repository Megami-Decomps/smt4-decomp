/* Thunk: forwards its argument to entry 1 of the driver function table. */
#include "common.h"

extern "C" {

typedef void (*DriverFunc)(u32 arg);

extern DriverFunc DAT_00589528[2];

void FUN_003d385c(u32 arg)
{
    DAT_00589528[1](arg);
}

}
