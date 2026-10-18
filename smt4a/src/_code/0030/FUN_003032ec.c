/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003032ec` (_code @ 0x3032ec, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00559144; /* 0x559144 */

extern int *FUN_00307d00(int, unsigned int, int *, int, int);


void FUN_003032ec(int *param_1,int param_2,int *param_3,int param_4)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00307d00(param_2,0,param_3,param_4,param_4);
  piVar1[2] = (int)&DAT_00559144;
  piVar1[3] = *(int *)(param_4 + 4);
  piVar1[4] = *(int *)(param_4 + 8);
  piVar1[5] = *(int *)(param_4 + 0xc);
  *piVar1 = *param_3;
  piVar1[1] = *(int *)(*param_3 + 4);
  **(int **)(*param_3 + 4) = (int)piVar1;
  *(int **)(*param_3 + 4) = piVar1;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  *param_1 = (int)piVar1;
  return;
}
