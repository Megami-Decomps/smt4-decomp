/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003959fc` (_code @ 0x3959fc, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c0bcc(unsigned int);


void FUN_003959fc(int param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = *(int *)(param_1 + 0xc);
  temp_v1 = FUN_002c0bcc(300);
  *(int *)(temp_v0 + 0x58) = temp_v1 + 0x96;
  *(unsigned int *)(param_1 + 0x1c) = 0;
  return;
}
