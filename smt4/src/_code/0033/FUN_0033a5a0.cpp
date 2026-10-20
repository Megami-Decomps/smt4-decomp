/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033a5a0` (_code @ 0x33a5a0, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


int FUN_0033a5a0(int param_1)

{
  int temp_v0;
  
  temp_v0 = 4;
  do {
    if ((*(unsigned int *)(*(int *)(param_1 + 0x1fc0) + temp_v0 * 0x288) & 1) == 0) {
      return *(int *)(param_1 + 0x1fc0) + temp_v0 * 0x288;
    }
    temp_v0 = (int)(short)((short)temp_v0 + 1);
  } while (temp_v0 < 0x36);
  return 0;
}

} /* extern "C" */
