/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00268690` (_code @ 0x268690, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f47c; /* 0x57f47c */


unsigned int FUN_00268690(void)

{
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if ((DAT_0057f47c != 0) && (*(int *)(DAT_0057f47c + 0xc) == 3)) {
    temp_v0 = 1;
  }
  return temp_v0;
}
