/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003385e4` (_code @ 0x3385e4, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


int FUN_003385e4(int param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  for (temp_v1 = *(int *)(param_1 + 0x8c); temp_v1 != 0; temp_v1 = *(int *)(temp_v1 + 0xac)) {
    temp_v0 = temp_v0 + 1;
  }
  return temp_v0;
}

} /* extern "C" */
