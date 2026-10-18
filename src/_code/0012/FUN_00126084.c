/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00126084` (_code @ 0x126084, 0x10 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c0ac8(void);


int FUN_00126084(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002c0ac8();
  return (int)*(char *)(temp_v0 + 0x8c);
}
