/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00334110` (_code @ 0x334110, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002b66ec(void);


void FUN_00334110(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002b66ec();
  *(unsigned short *)(temp_v0 + 0x2a) = *(unsigned short *)(temp_v0 + 0x1c);
  *(unsigned short *)(temp_v0 + 0x2c) = *(unsigned short *)(temp_v0 + 0x1e);
  return;
}
