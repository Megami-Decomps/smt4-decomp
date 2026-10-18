/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00295624` (_code @ 0x295624, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_004e316c; /* 0x4e316c */


unsigned int FUN_00295624(unsigned int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (((param_1 < 8) && (DAT_004e316c != 0)) && (*(int *)(DAT_004e316c + param_1 * 4 + 0x20) != 0))
  {
    temp_v0 = 1;
  }
  return temp_v0;
}
