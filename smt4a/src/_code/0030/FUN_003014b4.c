/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003014b4` (_code @ 0x3014b4, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_003014b4(int param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  do {
    temp_v1 = temp_v0 * 4;
    temp_v0 = temp_v0 + 1;
    *(unsigned int *)(temp_v1 + param_1 + 4) = 0;
  } while (temp_v0 < 0xe);
  return;
}
