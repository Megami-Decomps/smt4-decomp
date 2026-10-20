/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028ee90` (_code @ 0x28ee90, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002b6b20(void);


void FUN_0028ee90(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002b6b20();
  *(unsigned short *)(temp_v0 + 0x608) = *(unsigned short *)(temp_v0 + 0x608) | 1;
  *(unsigned short *)(temp_v0 + 0x46) = 0;
  *(unsigned short *)(temp_v0 + 0x604) = 0;
  return;
}

} /* extern "C" */
