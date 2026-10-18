/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00424c0c` (_code @ 0x424c0c, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_00424c0c(int param_1,int param_2,int param_3)

{
  unsigned char temp_v0;
  unsigned char temp_v1;
  
  temp_v0 = param_2 < 0;
  temp_v1 = param_2 == 0;
  if (!temp_v0) {
    param_3 = *(int *)(param_1 + 0x484);
    temp_v1 = param_3 == param_2;
  }
  if (!temp_v1 && (!temp_v0 && param_2 <= param_3)) {
    param_1 = param_1 + param_2 * 0x10;
  }
  if (!temp_v1 && (!temp_v0 && param_2 <= param_3)) {
    param_1 = param_1 + 0x400;
  }
  if (temp_v1 || (temp_v0 || param_3 < param_2)) {
    param_1 = 0;
  }
  if (!temp_v1 && (!temp_v0 && param_2 <= param_3)) {
    param_1 = param_1 + 0xa8;
  }
  return param_1;
}
