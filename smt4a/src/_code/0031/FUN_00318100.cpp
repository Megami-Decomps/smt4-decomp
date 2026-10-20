/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00318100` (_code @ 0x318100, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


int FUN_00318100(int *param_1)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (param_1 != (int *)0x0) {
    if (*param_1 == 0x4e494246) {
      temp_v0 = param_1[1];
    }
    else {
      temp_v0 = 0;
    }
  }
  return temp_v0;
}

} /* extern "C" */
