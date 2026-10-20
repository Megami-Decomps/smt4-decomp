/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00350614` (_code @ 0x350614, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


int FUN_00350614(int param_1,int param_2,int param_3)

{
  int temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  
  temp_v1 = param_2 < 0;
  temp_v2 = param_2 == 0;
  if (!temp_v1) {
    param_3 = *(int *)(param_1 + 0x2e8);
    temp_v2 = param_3 == param_2;
  }
  temp_v0 = param_2;
  if (!temp_v2 && (!temp_v1 && param_2 <= param_3)) {
    temp_v0 = param_2 * 5;
  }
  if (temp_v2 || (temp_v1 || param_3 < param_2)) {
    param_1 = 0;
  }
  if (!temp_v2 && (!temp_v1 && param_2 <= param_3)) {
    param_1 = param_1 + temp_v0 * 8;
  }
  if (!temp_v2 && (!temp_v1 && param_2 <= param_3)) {
    param_1 = param_1 + 0x30c;
  }
  return param_1;
}

} /* extern "C" */
