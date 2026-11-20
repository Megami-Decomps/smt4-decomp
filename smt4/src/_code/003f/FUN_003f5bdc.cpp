/* NON_MATCHING: retail weak call receives r0=0 and r1=0x04000068, but its target symbol is missing. */
#include "common.h"

extern "C" {
extern u32 g_moAllocationHooks;
extern u32 DAT_0044e934;

void FUN_003f5bdc(u32 firstValue, u32 secondValue)
{
    g_moAllocationHooks = firstValue;
    DAT_0044e934 = secondValue;
}
}
