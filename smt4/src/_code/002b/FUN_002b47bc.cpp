/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b47bc` (_code @ 0x2b47bc, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


int FUN_002b47bc(int param_1,int param_2,unsigned int *param_3)

{
  int temp_v0;
  
  temp_v0 = param_1 + param_2 * 0x10 + *(int *)(param_1 + 0x14);
  if (param_3 != (unsigned int *)0x0) {
    *param_3 = *(unsigned int *)(temp_v0 + 4);
  }
  if (*(int *)(temp_v0 + 4) != 0) {
    param_1 = param_1 + *(int *)(temp_v0 + 8);
  }
  else {
    param_1 = 0;
  }
  return param_1;
}

} /* extern "C" */
