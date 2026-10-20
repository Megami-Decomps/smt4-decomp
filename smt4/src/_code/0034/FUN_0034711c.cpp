/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034711c` (_code @ 0x34711c, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


int FUN_0034711c(int param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  
  temp_v0 = *(unsigned int *)(param_1 + 4);
  temp_v1 = 0;
  if ((temp_v0 & 1) != 0) {
    temp_v1 = *(int *)(param_1 + 0xc) * 0xc;
  }
  temp_v5 = 0;
  if ((temp_v0 & 2) != 0) {
    temp_v5 = *(int *)(param_1 + 0xc) << 4;
  }
  temp_v2 = 0;
  if ((temp_v0 & 0x20) != 0) {
    temp_v2 = *(int *)(param_1 + 0xc) << 2;
  }
  temp_v3 = 0;
  if ((temp_v0 & 4) != 0) {
    temp_v3 = *(int *)(param_1 + 0xc) << 3;
  }
  temp_v4 = 0;
  if ((temp_v0 & 8) != 0) {
    temp_v4 = *(int *)(param_1 + 0xc) * 0xc;
  }
  temp_v6 = (temp_v0 & 0x10) != 0;
  if (temp_v6) {
    param_1 = *(int *)(param_1 + 0xc);
  }
  if (temp_v6) {
    param_1 = param_1 * 0xc;
  }
  else {
    param_1 = 0;
  }
  return param_1 + temp_v4 + temp_v5 + temp_v1 + temp_v2 + temp_v3;
}

} /* extern "C" */
