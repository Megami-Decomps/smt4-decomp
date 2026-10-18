/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00132b7a` (_code @ 0x132b7a, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0012d424(unsigned int, int *, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002e6dac. */


void FUN_00132b7a(int *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = 1;
  if (param_2 == 0) {
    if (*param_1 != 0) {
      temp_v0 = *(unsigned int *)(*param_1 + 4);
    }
    else {
      temp_v0 = 0;
    }
    temp_v2 = FUN_0012d424(temp_v0,param_1,param_3,param_4,param_4);
  }
  piVar2 = (int *)FUN_002e6dac(0xc);
  temp_v1 = FUN_002e6dac();
  piVar2[2] = temp_v1;
  temp_v1 = *param_1;
  piVar2[1] = temp_v2;
  *piVar2 = temp_v1;
  *param_1 = (int)piVar2;
  temp_v1 = piVar2[2];
  param_1[3] = temp_v1 + temp_v2 * 0xc;
  param_1[2] = temp_v1;
  return;
}
