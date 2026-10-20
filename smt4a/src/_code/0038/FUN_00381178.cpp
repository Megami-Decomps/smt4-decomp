/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00381178` (_code @ 0x381178, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned char FUN_00381178(int param_1)

{
  int temp_v0;
  unsigned char temp_v1;
  
  temp_v0 = param_1 + 0x4b00;
  temp_v1 = *(char *)(param_1 + 0x4b0f) != '\0';
  if (temp_v1) {
    temp_v0 = (int)*(short *)(param_1 + 0x4b1e);
  }
  return temp_v1 && temp_v0 != -1;
}

} /* extern "C" */
