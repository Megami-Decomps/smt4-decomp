/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028f134` (_code @ 0x28f134, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002b6e60(void);


void FUN_0028f134(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002b6e60();
  *(unsigned short *)(temp_v0 + 0x608) = *(unsigned short *)(temp_v0 + 0x608) | 1;
  *(unsigned short *)(temp_v0 + 0x46) = 0;
  *(unsigned short *)(temp_v0 + 0x604) = 0;
  return;
}
