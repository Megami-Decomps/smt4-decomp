/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b4fa8` (_code @ 0x2b4fa8, 0x8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_002b4fa8(int param_1,unsigned int param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned char temp_v0;
  
  puVar2 = (unsigned int *)(param_1 + 8U);
  for (puVar3 = *(unsigned int **)(param_1 + 8U); puVar3 != (unsigned int *)0x0; puVar3 = (unsigned int *)*puVar3) {
    temp_v0 = puVar3 <= param_2;
    if (param_2 <= puVar3) {
      temp_v0 = param_3 + param_2 <= puVar3;
    }
    puVar1 = puVar3;
    if (!temp_v0) {
      *puVar2 = *puVar3;
      puVar1 = puVar2;
    }
    puVar2 = puVar1;
  }
  return;
}
