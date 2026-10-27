#include "common.h"

extern "C" {

void FUN_0018b080(void);

/* Runs FUN_0018b080 (placed right after, so the call is a linker NOP). */
void gpuReadHardwareRegisters(void)
{
    FUN_0018b080();
}

} /* extern "C" */
