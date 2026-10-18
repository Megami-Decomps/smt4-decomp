/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00316f2c` (_code @ 0x316f2c, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c2b1c(void);


void FUN_00316f2c(int param_1,int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = FUN_002c2b1c();
  temp_v1 = temp_v1 + ((int)(param_1 + ((unsigned int)(param_1 >> 0x1f) >> 0x1b)) >> 5) * 4;
  temp_v2 = *(unsigned int *)(temp_v1 + 0xcd8);
  temp_v0 = 1 << ((param_1 % 0x20) & 0xffU);
  if (param_2 == 0) {
    *(unsigned int *)(temp_v1 + 0xcd8) = temp_v2 & ~temp_v0;
  }
  else if ((temp_v2 & temp_v0) == 0) {
    *(unsigned int *)(temp_v1 + 0xcd8) = temp_v0 | temp_v2;
  }
  return;
}
