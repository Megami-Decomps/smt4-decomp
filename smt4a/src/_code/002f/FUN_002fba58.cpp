/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fba58` (_code @ 0x2fba58, 0x3e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f9fc2(int, int *);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_002f9fc2. */
extern int *FUN_0030170c(int *, unsigned int, unsigned int, unsigned int, unsigned int);


unsigned int FUN_002fba58(int *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  
  temp_v0 = param_1[0xc];
  piVar1 = (int *)FUN_0030170c(param_1 + 8,0,param_3,param_4,param_4);
  piVar1[2] = param_2;
  *piVar1 = temp_v0;
  piVar1[1] = *(int *)(temp_v0 + 4);
  **(int **)(temp_v0 + 4) = (int)piVar1;
  *(int **)(temp_v0 + 4) = piVar1;
  param_1[0xd] = param_1[0xd] + 1;
  FUN_002f9fc2(param_2,param_1);
  (**(romwright_code **)(*param_1 + 0x38))(param_1);
  return 1;
}

} /* extern "C" */
