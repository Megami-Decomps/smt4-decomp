/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029022c` (_code @ 0x29022c, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002adc88(void);


unsigned char FUN_0029022c(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002adc88();
  return *(short *)(temp_v0 + 0x840) != 0;
}

} /* extern "C" */
