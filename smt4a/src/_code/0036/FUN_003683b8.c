/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003683b8` (_code @ 0x3683b8, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_003564ec(void);


int FUN_003683b8(void)

{
  int temp_v0;
  
  temp_v0 = FUN_003564ec();
  return (int)*(short *)(temp_v0 + 0x2c);
}
