/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0050af74` (_code @ 0x50af74, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


int FUN_0050af74(int param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = (unsigned int *)(param_1 + 0x14);
  if (param_2 >= *puVar1) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = (int)puVar1 + puVar1[param_2 * 2 + 2];
  }
  return temp_v0;
}

} /* extern "C" */
