/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002904d0` (_code @ 0x2904d0, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002adf14(void);


unsigned char FUN_002904d0(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002adf14();
  return *(short *)(temp_v0 + 0x840) != 0;
}
