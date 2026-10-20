/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011055a` (_code @ 0x11055a, 0x3a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002fb2d0(int, unsigned int, unsigned int, int);

/* Supplied declaration required: FUN_002fb2d0. */
extern int *FUN_002fb31c(int, unsigned int, unsigned int, unsigned int, unsigned int);


void FUN_0011055a(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 0x2c);
  piVar1 = (int *)FUN_002fb31c(param_1 + 0x1c,0,param_3,param_4,param_4);
  piVar1[2] = param_2;
  *piVar1 = temp_v0;
  piVar1[1] = *(int *)(temp_v0 + 4);
  **(int **)(temp_v0 + 4) = (int)piVar1;
  *(int **)(temp_v0 + 4) = piVar1;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  FUN_002fb2d0(param_1,0xfffffc00,0xffffffff,param_2);
  return;
}

} /* extern "C" */
