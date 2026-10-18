/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025a274` (_code @ 0x25a274, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_0025a274(unsigned int *param_1)

{
  unsigned int temp_v0;
  
  if (((0 < (int)param_1[0xd]) && (temp_v0 = param_1[0x13], temp_v0 != 0)) &&
     (((*param_1 & 1) != 0 || (*(float *)(temp_v0 + 0x38) < *(float *)(temp_v0 + 0x48))))) {
    return 0;
  }
  return 1;
}
