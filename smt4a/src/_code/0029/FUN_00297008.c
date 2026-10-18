/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00297008` (_code @ 0x297008, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_003564ec(void);


unsigned char FUN_00297008(void)

{
  int temp_v0;
  
  temp_v0 = FUN_003564ec();
  return *(short *)(temp_v0 + 10) == 0;
}
