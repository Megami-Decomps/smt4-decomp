/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00208b00` (_code @ 0x208b00, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c2b1c(void);


void FUN_00208b00(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002c2b1c();
  if (-1 < param_1) {
    temp_v0 = temp_v0 + ((int)(param_1 + ((unsigned int)(param_1 >> 0x1f) >> 0x1b)) >> 5) * 4;
    *(unsigned int *)(temp_v0 + 0x7d4) = (1 << ((param_1 % 0x20) & 0xffU)) | *(unsigned int *)(temp_v0 + 0x7d4);
  }
  return;
}
