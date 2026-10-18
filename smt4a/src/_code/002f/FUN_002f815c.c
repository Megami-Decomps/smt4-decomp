/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f815c` (_code @ 0x2f815c, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern short FUN_002eb5c0(unsigned int);


short FUN_002f815c(void)

{
  short temp_v0;
  
  temp_v0 = FUN_002eb5c0(0x3fff);
  return temp_v0 - 0x4000;
}
