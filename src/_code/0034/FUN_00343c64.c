/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00343c64` (_code @ 0x343c64, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002bbd40(void);


void FUN_00343c64(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002bbd40();
  param_1 = (unsigned int)*(unsigned short *)(temp_v0 + 0x16) + param_1;
  if (param_1 >= 0x10000) {
    param_1 = 0xffff;
  }
  *(short *)(temp_v0 + 0x16) = (short)param_1;
  return;
}
