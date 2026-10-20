/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00134dcc` (_code @ 0x134dcc, 0x32 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int * FUN_00134dcc(int *param_1,unsigned int *param_2,unsigned int *param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  
  puVar3 = (unsigned int *)param_1[1];
  puVar1 = param_2;
  puVar2 = param_3;
  if ((unsigned int *)*param_1 != puVar3) {
    for (; puVar2 != puVar3; puVar2 = puVar2 + 1) {
      *puVar1 = *puVar2;
      puVar1 = puVar1 + 1;
    }
    for (; puVar1 != (unsigned int *)param_1[1]; puVar1 = puVar1 + 1) {
    }
    param_1[1] = param_1[1] - (((int)param_3 - (int)param_2) & 0xfffffffcU);
  }
  return param_2;
}

} /* extern "C" */
