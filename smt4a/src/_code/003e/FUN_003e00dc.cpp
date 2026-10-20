/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e00dc` (_code @ 0x3e00dc, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_001801a4(void);


void FUN_003e00dc(unsigned short param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_001801a4();
  *(unsigned short *)(temp_v0 + 0x5e) = *(unsigned short *)(temp_v0 + 0x5e) & ~param_1;
  return;
}

} /* extern "C" */
