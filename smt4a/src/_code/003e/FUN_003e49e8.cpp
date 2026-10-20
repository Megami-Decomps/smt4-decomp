/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e49e8` (_code @ 0x3e49e8, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_001ab888(void);


void FUN_003e49e8(void)

{
  int temp_v0;
  
  temp_v0 = FUN_001ab888();
  *(unsigned short *)(temp_v0 + 0x2c4e) = 0;
  return;
}

} /* extern "C" */
