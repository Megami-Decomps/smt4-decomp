/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c69f8` (_code @ 0x2c69f8, 0x22 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_002c69f8(unsigned int *param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = param_1[6];
  if ((*param_1 & 1) == 0) {
    return;
  }
  while (temp_v0 = temp_v0 - 1, -1 < (int)temp_v0) {
    (*(romwright_code *)param_1[1])(0x20,param_1[2]);
    param_1[8] = param_1[8] + 1;
  }
  return;
}
