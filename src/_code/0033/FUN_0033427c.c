/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033427c` (_code @ 0x33427c, 0x10 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002b66ec(void);


int FUN_0033427c(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002b66ec();
  return (int)*(short *)(temp_v0 + 0x1e);
}
