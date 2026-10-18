/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00262648` (_code @ 0x262648, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002b66ec(void);


void FUN_00262648(unsigned short param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002b66ec();
  *(unsigned short *)(temp_v0 + 0x72) = *(unsigned short *)(temp_v0 + 0x72) & ~param_1;
  return;
}
