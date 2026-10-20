/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fd6bc` (_code @ 0x2fd6bc, 0x36 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005591d8; /* 0x5591d8 */

extern int *FUN_002fd694(int, unsigned int);


void FUN_002fd6bc(int param_1,int param_2)

{
  int *piVar1;
  int temp_v0;
  int temp_v1;
  
  temp_v1 = *(int *)(param_1 + 0x10);
  piVar1 = (int *)FUN_002fd694(param_1,0);
  piVar1[2] = (int)&DAT_005591d8;
  temp_v0 = *(int *)(param_2 + 4);
  piVar1[4] = *(int *)(param_2 + 8);
  piVar1[3] = temp_v0;
  piVar1[5] = *(int *)(param_2 + 0xc);
  *piVar1 = temp_v1;
  piVar1[1] = *(int *)(temp_v1 + 4);
  **(int **)(temp_v1 + 4) = (int)piVar1;
  *(int **)(temp_v1 + 4) = piVar1;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return;
}

} /* extern "C" */
