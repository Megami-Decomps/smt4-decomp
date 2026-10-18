/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00290a38` (_code @ 0x290a38, 0x14 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002544e4(void);


unsigned int FUN_00290a38(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002544e4();
  return *(unsigned int *)(temp_v0 + param_1 * 4);
}
