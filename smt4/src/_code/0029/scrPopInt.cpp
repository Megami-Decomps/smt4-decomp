/* NON_MATCHING: romwright 0.5.0 decompilation of `scrPopInt` (_code @ 0x297514, 0x90 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


int scrPopInt(int param_1)

{
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 0x1c) - 1;
  *(int *)(param_1 + 0x1c) = temp_v0;
  switch(*(unsigned char *)(temp_v0 + param_1 + 0x20)) {
  case 0:
  case 4:
    return *(int *)(param_1 + temp_v0 * 4 + 0x3c);
  case 1:
    return (int)*(float *)(param_1 + temp_v0 * 4 + 0x3c);
  case 2:
    return *(int *)(*(int *)(param_1 + temp_v0 * 4 + 0x3c) * 4 + 0x4c4744);
  case 3:
    return (int)*(float *)(*(int *)(param_1 + temp_v0 * 4 + 0x3c) * 4 + 0x4c4d44);
  default:
    return 0;
  }
}

} /* extern "C" */
