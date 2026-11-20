/* NON_MATCHING: retail weak call receives r0=0 and r1=0x04000047, but its target symbol is missing. */
#include "common.h"

extern "C" {
extern u32 g_moAllocator;
extern u32 DAT_0044e91c;

void FUN_003f5810(u32 firstValue, u32 secondValue)
{
    g_moAllocator = firstValue;
    DAT_0044e91c = secondValue;
}
}
