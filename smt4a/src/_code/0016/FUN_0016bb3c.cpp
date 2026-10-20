/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016bb3c` (_code @ 0x16bb3c, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_0016bb3c(int *param_1)

{
  int temp_v0;
  
  temp_v0 = param_1[1];
  if (*param_1 != temp_v0) {
    param_1[1] = temp_v0 + ((temp_v0 - *param_1) / 0x30) * -0x30;
  }
  return;
}

} /* extern "C" */
