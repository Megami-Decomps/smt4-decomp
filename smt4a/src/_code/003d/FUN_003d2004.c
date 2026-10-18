/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d2004` (_code @ 0x3d2004, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_003d2004(int param_1)

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
    return *(int *)(*(int *)(param_1 + temp_v0 * 4 + 0x3c) * 4 + 0x61889c);
  case 3:
    return (int)*(float *)(*(int *)(param_1 + temp_v0 * 4 + 0x3c) * 4 + 0x618e9c);
  default:
    return 0;
  }
}
