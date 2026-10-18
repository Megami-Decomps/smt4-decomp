/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026fbc0` (_code @ 0x26fbc0, 0x10 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c2b1c(void);


int FUN_0026fbc0(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002c2b1c();
  return (int)*(short *)(temp_v0 + 0x20);
}
