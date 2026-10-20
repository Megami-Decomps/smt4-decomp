/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d786c` (_code @ 0x2d786c, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002a0d0c(void);


void FUN_002d786c(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002a0d0c();
  temp_v0 = temp_v0 + (param_1 >> 3);
  *(unsigned char *)(temp_v0 + 0x51) = *(unsigned char *)(temp_v0 + 0x51) | (unsigned char)(1 << (param_1 & 7));
  return;
}

} /* extern "C" */
