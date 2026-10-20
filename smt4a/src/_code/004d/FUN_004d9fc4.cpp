/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d9fc4` (_code @ 0x4d9fc4, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0019a7dc(void);


void FUN_004d9fc4(void)

{
  int temp_v0;
  
  temp_v0 = FUN_0019a7dc();
  if ((*(unsigned short *)(temp_v0 + 0x130) & 1) != 0) {
    *(unsigned short *)(temp_v0 + 0x62) = 0;
  }
  return;
}

} /* extern "C" */
