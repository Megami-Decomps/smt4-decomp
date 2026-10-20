/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ba764` (_code @ 0x2ba764, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0043e2ac; /* 0x43e2ac */

extern int FUN_00132970(void);


int FUN_002ba764(void)

{
  int temp_v0;
  
  temp_v0 = FUN_00132970();
  return DAT_0043e2ac + temp_v0 * 4 + 0x1ecdc;
}

} /* extern "C" */
