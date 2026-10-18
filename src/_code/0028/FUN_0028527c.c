/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028527c` (_code @ 0x28527c, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c2950(void);


void FUN_0028527c(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002c2950();
  *(unsigned char *)(temp_v0 + 0x1c) = param_1 != 0;
  return;
}
