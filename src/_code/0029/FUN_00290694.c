/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00290694` (_code @ 0x290694, 0x14 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002adf14(void);


unsigned short FUN_00290694(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002adf14();
  return *(unsigned short *)(temp_v0 + 0x840);
}
