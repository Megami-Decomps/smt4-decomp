/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00138c6c` (_code @ 0x138c6c, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


int FUN_00138c6c(int *param_1,int param_2)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (param_1 != (int *)0x0) {
    temp_v0 = *param_1 + (param_2 / 1000) * 0x20;
  }
  return temp_v0;
}

} /* extern "C" */
