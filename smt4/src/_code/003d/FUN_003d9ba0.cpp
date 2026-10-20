/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d9ba0` (_code @ 0x3d9ba0, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_003d9ba0(int param_1)

{
  unsigned int *puVar1;
  int temp_v0;
  
  temp_v0 = 0;
  do {
    puVar1 = *(unsigned int **)(param_1 + temp_v0 * 0x28 + 400);
    if (puVar1 != (unsigned int *)0x0) {
      *puVar1 = *puVar1 | 2;
      *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 0;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x32);
  return;
}

} /* extern "C" */
