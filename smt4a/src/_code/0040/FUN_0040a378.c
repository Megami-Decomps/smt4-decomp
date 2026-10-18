/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040a378` (_code @ 0x40a378, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001519ac(void);


void FUN_0040a378(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_001519ac();
  param_1 = (unsigned int)*(unsigned short *)(temp_v0 + 0x1a) + param_1;
  if (param_1 >= 0x10000) {
    param_1 = 0xffff;
  }
  *(short *)(temp_v0 + 0x1a) = (short)param_1;
  return;
}
