/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e2954` (_code @ 0x1e2954, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0025c05c(void);


unsigned char FUN_001e2954(void)

{
  int temp_v0;
  
  temp_v0 = FUN_0025c05c();
  return *(unsigned char *)(temp_v0 + 0x447620);
}
