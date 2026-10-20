/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003601c4` (_code @ 0x3601c4, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_003601c4(int param_1,unsigned char param_2)

{
  int temp_v0;
  
  *(unsigned char *)(param_1 + 5) = param_2;
  temp_v0 = *(int *)(param_1 + 0x68);
  *(unsigned char *)(temp_v0 + 0xe) = param_2;
  *(unsigned short *)(temp_v0 + 0x6c) = *(unsigned short *)(temp_v0 + 0x6c) | 0x20;
  return;
}

} /* extern "C" */
