/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004186a4` (_code @ 0x4186a4, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_001ab940(void);


unsigned char FUN_004186a4(void)

{
  int temp_v0;
  
  temp_v0 = FUN_001ab940();
  return *(short *)(temp_v0 + 0x8e0) != 0;
}

} /* extern "C" */
