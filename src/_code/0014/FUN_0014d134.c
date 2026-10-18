/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014d134` (_code @ 0x14d134, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_0014d134(int param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = (unsigned int *)(param_1 + *(int *)(param_1 + 0xc));
  if ((param_2 < *puVar1) && ((short)puVar1[param_2 * 2 + 1] == 0x4900)) {
    temp_v0 = (int)puVar1 + puVar1[param_2 * 2 + 2];
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}
