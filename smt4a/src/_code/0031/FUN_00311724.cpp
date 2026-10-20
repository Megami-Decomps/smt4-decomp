/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00311724` (_code @ 0x311724, 0x32 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_00311724(int *param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int temp_v0;
  
  puVar2 = (unsigned int *)param_1[1];
  if ((unsigned int *)*param_1 != puVar2) {
    puVar1 = param_2 + 2;
    if (puVar2 != puVar1) {
      for (; puVar1 != puVar2; puVar1 = puVar1 + 2) {
        temp_v0 = puVar1[1];
        *param_2 = *puVar1;
        param_2[1] = temp_v0;
        param_2 = param_2 + 2;
      }
    }
    param_1[1] = param_1[1] - 8;
  }
  return;
}

} /* extern "C" */
