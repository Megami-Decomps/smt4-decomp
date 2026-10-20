/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002756dc` (_code @ 0x2756dc, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_002756dc(int *param_1)

{
  int temp_v0;
  
  temp_v0 = *param_1;
  if (*(int **)(temp_v0 + 0x2c) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(temp_v0 + 0x2c) + 4))();
    *(unsigned int *)(temp_v0 + 0x2c) = 0;
  }
  if (*(int **)(temp_v0 + 0x30) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(temp_v0 + 0x30) + 4))();
    *(unsigned int *)(temp_v0 + 0x30) = 0;
  }
  if (*(int **)(temp_v0 + 0x34) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(temp_v0 + 0x34) + 4))();
    *(unsigned int *)(temp_v0 + 0x34) = 0;
  }
  return;
}

} /* extern "C" */
