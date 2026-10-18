/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011c71c` (_code @ 0x11c71c, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001286a4(unsigned int *);


void FUN_0011c71c(unsigned int *param_1,unsigned int param_2)

{
  int temp_v0;
  
  *param_1 = param_2;
  param_1[1] = 0xffffffff;
  temp_v0 = FUN_001286a4(param_1 + 3);
  *(unsigned char *)(temp_v0 + 0x24) = 1;
  *(unsigned int *)(temp_v0 + 0x2c) = 0xffffffff;
  *(unsigned int *)(temp_v0 + 0x30) = 0xffffffff;
  return;
}
