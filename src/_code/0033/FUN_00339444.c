/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00339444` (_code @ 0x339444, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_00339444(int param_1,unsigned int param_2)

{
  int temp_v0;
  
  temp_v0 = 0;
  do {
    if (*(int *)(param_1 + temp_v0 * 4 + 0x2134) == 0) {
      *(unsigned int *)(param_1 + temp_v0 * 4 + 0x2134) = param_2;
      return param_2;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x2a);
  return 0;
}
