/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004186e0` (_code @ 0x4186e0, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001ab940(void);


unsigned short FUN_004186e0(void)

{
  int temp_v0;
  
  temp_v0 = FUN_001ab940();
  return *(unsigned short *)(temp_v0 + 0x8e0);
}
