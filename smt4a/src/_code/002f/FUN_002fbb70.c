/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fbb70` (_code @ 0x2fbb70, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_002fbb70(int param_1,unsigned int param_2)

{
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 8);
  if ((unsigned int)(*(int *)(temp_v0 + 0x14) - *(int *)(temp_v0 + 0x18)) < param_2) {
    return 0;
  }
  *(unsigned int *)(temp_v0 + 0x10) = param_2;
  return 1;
}
