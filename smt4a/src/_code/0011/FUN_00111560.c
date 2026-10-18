/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00111560` (_code @ 0x111560, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int *FUN_002eba3c(int, unsigned int);


void FUN_00111560(int param_1,int *param_2,unsigned int param_3,unsigned int param_4)

{
  int *piVar1;
  int temp_v0;
  int *piStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  piStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  (**(romwright_code **)(*param_2 + 100))(&piStack_20,param_2,param_1);
  temp_v0 = *(int *)(param_1 + 0x6c);
  piVar1 = (int *)FUN_002eba3c(param_1 + 0x5c,0);
  *piVar1 = temp_v0;
  piVar1[2] = (int)param_2;
  piVar1[1] = *(int *)(temp_v0 + 4);
  **(int **)(temp_v0 + 4) = (int)piVar1;
  *(int **)(temp_v0 + 4) = piVar1;
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  return;
}
