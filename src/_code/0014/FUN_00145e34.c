/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00145e34` (_code @ 0x145e34, 0x10 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_00145e34(int *param_1,int param_2)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (param_1 != (int *)0x0) {
    temp_v0 = *param_1 + param_2 * 0x20;
  }
  return temp_v0;
}
