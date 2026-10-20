/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003dff50` (_code @ 0x3dff50, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_001801a4(void);


void FUN_003dff50(void)

{
  int temp_v0;
  
  temp_v0 = FUN_001801a4();
  *(unsigned short *)(temp_v0 + 0x2a) = *(unsigned short *)(temp_v0 + 0x1c);
  *(unsigned short *)(temp_v0 + 0x2c) = *(unsigned short *)(temp_v0 + 0x1e);
  return;
}

} /* extern "C" */
