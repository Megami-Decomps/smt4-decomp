/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003309c8` (_code @ 0x3309c8, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f65c; /* 0x57f65c */


int FUN_003309c8(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0057f65c != 0) {
    temp_v0 = (int)*(char *)(DAT_0057f65c + 0xc);
  }
  return temp_v0;
}

} /* extern "C" */
