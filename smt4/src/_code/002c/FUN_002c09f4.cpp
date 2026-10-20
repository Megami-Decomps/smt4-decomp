#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_004651c0; /* 0x4651c0 */


unsigned int FUN_002c09f4(int param_1)

{
  unsigned int seed = DAT_004651c0 * 0x41c64e6d;
  DAT_004651c0 = seed + 0x3039;
  return (DAT_004651c0 >> 0x10) * (param_1 + 1) >> 0x10;
}

} /* extern "C" */
