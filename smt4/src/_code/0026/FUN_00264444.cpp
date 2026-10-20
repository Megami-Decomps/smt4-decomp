/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00264444` (_code @ 0x264444, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_00264444(int param_1)

{
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = 0;
  do {
    temp_v1 = param_1 + temp_v0 * 4;
    piVar1 = *(int **)(temp_v1 + 0x18);
    if (piVar1 != (int *)0x0) {
      temp_v2 = piVar1[1];
      (**(romwright_code **)(*piVar1 + 4))();
      *(unsigned int *)(temp_v1 + 0x18) = 0;
      if (temp_v2 == 0) {
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - 1;
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - 1;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x20);
  return;
}

} /* extern "C" */
