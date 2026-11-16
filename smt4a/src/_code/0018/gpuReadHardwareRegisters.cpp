#include "common.h"

extern "C" {

void gxlowReadHardwareRegisters(void);

/* Runs gxlowReadHardwareRegisters (placed right after, so the call is a linker NOP). */
void gpuReadHardwareRegisters(void)
{
    gxlowReadHardwareRegisters();
}

} /* extern "C" */
