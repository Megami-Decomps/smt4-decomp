/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003eccd0` (_code @ 0x3eccd0, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


int FUN_003eccd0(int param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 4;
  do {
    temp_v1 = *(int *)(param_1 + 0x1ffc) + temp_v0 * 0x408;
    if (*(char *)(temp_v1 + 0x23a) != '\0') {
      return *(int *)(param_1 + 0x1ed4) + *(short *)(temp_v1 + 8) * 0x1d0;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x36);
  return 0;
}

} /* extern "C" */
