/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00234f04` (_code @ 0x234f04, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_00234f04(int param_1,int param_2)

{
  unsigned int *puVar1;
  
  if (*(char *)(param_1 + 0x15) != '\0') {
    puVar1 = *(unsigned int **)(param_1 + 0x20);
    if (param_2 == 0) {
      *puVar1 = *puVar1 | 2;
      *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 0;
      return;
    }
    *puVar1 = *puVar1 & 0xfffffffd;
    *(unsigned char *)(*(int *)(puVar1[2] + 0x2c) + 0x1f6) = 1;
  }
  return;
}

} /* extern "C" */
