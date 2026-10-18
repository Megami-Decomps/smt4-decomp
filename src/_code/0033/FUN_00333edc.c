/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00333edc` (_code @ 0x333edc, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002b63ac(void);


void FUN_00333edc(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002b63ac();
  *(unsigned short *)(temp_v0 + 0x2a) = *(unsigned short *)(temp_v0 + 0x1c);
  *(unsigned short *)(temp_v0 + 0x2c) = *(unsigned short *)(temp_v0 + 0x1e);
  return;
}
