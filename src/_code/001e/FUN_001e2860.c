/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e2860` (_code @ 0x1e2860, 0x14 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0025c294(void);


unsigned char FUN_001e2860(void)

{
  int temp_v0;
  
  temp_v0 = FUN_0025c294();
  return *(unsigned char *)(temp_v0 + 0x447620);
}
