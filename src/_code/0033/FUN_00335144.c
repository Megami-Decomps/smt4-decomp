/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00335144` (_code @ 0x335144, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00152bec. */


void FUN_00335144(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  
  puVar1 = *(unsigned int **)(param_1 + 8);
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = *puVar1 | 2;
    *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 0;
    if (-1 < *(int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0xc)) {
      FUN_00152bec();
    }
  }
  temp_v1 = 0;
  do {
    temp_v0 = param_1 + temp_v1 * 0x50;
    puVar1 = *(unsigned int **)(temp_v0 + 0x18);
    if (puVar1 != (unsigned int *)0x0) {
      *puVar1 = *puVar1 | 2;
      *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 0;
      if (-1 < *(int *)(*(int *)(*(int *)(temp_v0 + 0x18) + 8) + 0xc)) {
        FUN_00152bec();
      }
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 3);
  return;
}
