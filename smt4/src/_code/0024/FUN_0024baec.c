/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024baec` (_code @ 0x24baec, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_0024baec(int *param_1)

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
