/* NON_MATCHING: retail weak call receives r0=0 and r1=0x04000068, but its target symbol is missing. */
#include "common.h"

extern "C" {
extern u32 DAT_0044e930;
extern u32 DAT_0044e934;

void FUN_003f5bdc(u32 firstValue, u32 secondValue)
{
    DAT_0044e930 = firstValue;
    DAT_0044e934 = secondValue;
}
}
