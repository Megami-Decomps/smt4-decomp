/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00169590` (_code @ 0x169590, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00164a9c(void);


unsigned int FUN_00169590(void)

{
  int temp_v0;
  
  temp_v0 = FUN_00164a9c();
  return *(unsigned int *)(temp_v0 + 0x3c);
}
