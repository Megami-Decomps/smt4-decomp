/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026e85c` (_code @ 0x26e85c, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e2ac; /* 0x43e2ac */


void FUN_0026e85c(unsigned char param_1,int param_2)

{
  unsigned char temp_v0;
  
  temp_v0 = *(unsigned char *)(DAT_0043e2ac + 0x24baf);
  if (param_2 != 0) {
    param_1 = param_1 | temp_v0;
  }
  else {
    param_1 = temp_v0 & ~param_1;
  }
  *(unsigned char *)(DAT_0043e2ac + 0x24baf) = param_1;
  return;
}
