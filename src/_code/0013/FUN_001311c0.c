/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001311c0` (_code @ 0x1311c0, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_002c6a20(unsigned int, int);


void FUN_001311c0(unsigned int *param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
  unsigned int temp_v0;
  
  if (param_4 == 0) {
    return;
  }
  param_1[1] = param_3;
  param_1[3] = param_4;
  *param_1 = param_2;
  temp_v0 = FUN_002c6a20(param_3,param_4);
  param_1[5] = 0;
  param_1[2] = temp_v0 & 0xffffffe0;
  param_1[4] = 0;
  return;
}
