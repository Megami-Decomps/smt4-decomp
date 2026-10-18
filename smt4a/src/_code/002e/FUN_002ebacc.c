/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ebacc` (_code @ 0x2ebacc, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif


void FUN_002ebacc(int *param_1,unsigned int *param_2,unsigned int param_3,int param_4)

{
  unsigned int temp_v0;
  
  temp_v0 = *param_2;
  param_1[1] = param_4 + param_2[1] + (unsigned int)romwright_carry_4(temp_v0,param_3);
  *param_1 = temp_v0 + param_3;
  return;
}
