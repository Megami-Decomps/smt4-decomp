/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00133126` (_code @ 0x133126, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int *FUN_001330c0(int, unsigned int, int *, unsigned char *, unsigned char *);


void FUN_00133126(int *param_1,int param_2,int *param_3,unsigned char *param_4)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_001330c0(param_2,0,param_3,param_4,param_4);
  *(unsigned char *)(piVar1 + 2) = *param_4;
  *piVar1 = *param_3;
  piVar1[1] = *(int *)(*param_3 + 4);
  **(int **)(*param_3 + 4) = (int)piVar1;
  *(int **)(*param_3 + 4) = piVar1;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  *param_1 = (int)piVar1;
  return;
}
