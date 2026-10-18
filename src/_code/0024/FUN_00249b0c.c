/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00249b0c` (_code @ 0x249b0c, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_00249b0c(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = 0;
  do {
    temp_v1 = *(unsigned int *)(*(int *)(param_1 + 0x1fc0) + temp_v0 * 0x288);
    if ((temp_v1 & 0x20) != 0 && (temp_v1 & 1) != 0) {
      return *(int *)(param_1 + 0x1fc0) + temp_v0 * 0x288;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x6d);
  return 0;
}
