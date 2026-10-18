/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027d8b4` (_code @ 0x27d8b4, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c2950(void);


void FUN_0027d8b4(unsigned short param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002c2950();
  *(unsigned short *)(temp_v0 + 0x20) = param_1;
  return;
}
