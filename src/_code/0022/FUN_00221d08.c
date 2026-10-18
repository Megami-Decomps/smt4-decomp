/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00221d08` (_code @ 0x221d08, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c0ac8(void);


unsigned char FUN_00221d08(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002c0ac8();
  return *(int *)(temp_v0 + 0xc) == 0;
}
