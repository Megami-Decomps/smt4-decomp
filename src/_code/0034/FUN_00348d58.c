/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00348d58` (_code @ 0x348d58, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002adf14(void);


void FUN_00348d58(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002adf14();
  temp_v0 = temp_v0 + param_1 * 4;
  *(unsigned char *)(temp_v0 + 0x202) = *(unsigned char *)(temp_v0 + 0x202) | 1;
  *(unsigned char *)(temp_v0 + 0x200) = *(unsigned char *)(temp_v0 + 0x200) | 0x80;
  return;
}
