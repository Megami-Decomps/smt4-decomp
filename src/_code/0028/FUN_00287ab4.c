/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00287ab4` (_code @ 0x287ab4, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002adf14(void);


void FUN_00287ab4(int param_1,char param_2)

{
  int temp_v0;
  
  temp_v0 = FUN_002adf14();
  temp_v0 = temp_v0 + param_1 * 4;
  *(unsigned char *)(temp_v0 + 0x202) = (*(unsigned char *)(temp_v0 + 0x202) & 0xfd) | (param_2 << 1);
  return;
}
