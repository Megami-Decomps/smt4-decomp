/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00338370` (_code @ 0x338370, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_00338370(int param_1)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = 0;
  temp_v1 = 0x6d;
  do {
    temp_v1 = temp_v1 - 1;
    temp_v2 = param_1 + temp_v0 * 0x1c;
    temp_v0 = temp_v0 + 1;
    *(unsigned int *)(temp_v2 + 0x2318) = 0xffffffff;
    *(unsigned int *)(temp_v2 + 0x231c) = 0xffffffff;
    *(unsigned int *)(temp_v2 + 0x2330) = 0xffffffff;
  } while (temp_v1 != 0);
  return;
}
