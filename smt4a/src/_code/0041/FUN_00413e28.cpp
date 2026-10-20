/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00413e28` (_code @ 0x413e28, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


int FUN_00413e28(int param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = *(int *)(param_1 + 0xec) - *(int *)(param_1 + 0xe8);
  temp_v1 = (int)(((long long)(int)temp_v0 * -0x4de9bd37 + ((unsigned long long)temp_v0 << 0x20)) >> 0x20);
  return (temp_v1 >> 7) - (temp_v1 >> 0x1f);
}

} /* extern "C" */
