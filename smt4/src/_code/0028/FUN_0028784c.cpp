/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028784c` (_code @ 0x28784c, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002adc88(void);


void FUN_0028784c(int param_1,char param_2)

{
  int temp_v0;
  
  temp_v0 = FUN_002adc88();
  temp_v0 = temp_v0 + param_1 * 4;
  *(unsigned char *)(temp_v0 + 0x202) = (*(unsigned char *)(temp_v0 + 0x202) & 0xfd) | (param_2 << 1);
  return;
}

} /* extern "C" */
