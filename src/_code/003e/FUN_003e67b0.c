/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e67b0` (_code @ 0x3e67b0, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_003e67b0(unsigned int *param_1,unsigned int param_2)

{
  int temp_v0;
  
  if ((param_2 < *param_1) && ((short)param_1[param_2 * 2 + 1] == 0x4101)) {
    temp_v0 = (int)param_1 + param_1[param_2 * 2 + 2];
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}
