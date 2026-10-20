/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00124034` (_code @ 0x124034, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

unsigned int FUN_00124034(int param_1)

{
  unsigned int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  for (piVar2 = (int *)**(int **)(param_1 + 0x30); piVar2 != (int *)*(int *)(param_1 + 0x30);
      piVar2 = (int *)*piVar2) {
    temp_v0 = (**(romwright_code **)(*(int *)piVar2[2] + 0x38))();
    temp_v1 = temp_v1 | temp_v0;
  }
  return temp_v1;
}

} /* extern "C" */
