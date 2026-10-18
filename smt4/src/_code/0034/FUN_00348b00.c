/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00348b00` (_code @ 0x348b00, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002adc88(void);


void FUN_00348b00(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002adc88();
  temp_v0 = temp_v0 + param_1 * 4;
  *(unsigned char *)(temp_v0 + 0x202) = *(unsigned char *)(temp_v0 + 0x202) | 1;
  *(unsigned char *)(temp_v0 + 0x200) = *(unsigned char *)(temp_v0 + 0x200) | 0x80;
  return;
}
