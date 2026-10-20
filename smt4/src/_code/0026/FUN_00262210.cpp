/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00262210` (_code @ 0x262210, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002bf4f8(unsigned int, unsigned int);


void FUN_00262210(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v2 = FUN_002bf4f8(param_2,param_3);
  temp_v3 = FUN_002bf4f8(param_2,param_4);
  temp_v0 = *(short *)(temp_v2 + 10);
  temp_v1 = *(short *)(temp_v3 + 10);
  *(short *)(param_1 + 0x18) = *(short *)(temp_v2 + 8) - *(short *)(temp_v3 + 8);
  *(short *)(param_1 + 0x1a) = temp_v0 - temp_v1;
  return;
}

} /* extern "C" */
