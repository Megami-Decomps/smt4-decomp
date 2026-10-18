/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002baaa4` (_code @ 0x2baaa4, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e2ac; /* 0x43e2ac */

extern int FUN_00132894(void);


int FUN_002baaa4(void)

{
  int temp_v0;
  
  temp_v0 = FUN_00132894();
  return DAT_0043e2ac + temp_v0 * 4 + 0x1ecdc;
}
