/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d298c` (_code @ 0x2d298c, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c2b1c(void);


void FUN_002d298c(int param_1,unsigned char param_2)

{
  int temp_v0;
  
  temp_v0 = FUN_002c2b1c();
  if (param_1 < 0x40) {
    *(unsigned char *)(temp_v0 + param_1 + 0xbd8) = param_2;
  }
  return;
}
