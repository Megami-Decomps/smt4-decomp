/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003db7e8` (_code @ 0x3db7e8, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_003db7e8(int param_1)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = 0;
  temp_v1 = 0x6d;
  do {
    temp_v2 = param_1 + temp_v0 * 8;
    temp_v1 = temp_v1 - 1;
    *(unsigned int *)(temp_v2 + 0x1030) = 0xffffffff;
    temp_v0 = temp_v0 + 1;
    *(unsigned int *)(temp_v2 + 0x1034) = 0xffffffff;
  } while (temp_v1 != 0);
  return;
}
