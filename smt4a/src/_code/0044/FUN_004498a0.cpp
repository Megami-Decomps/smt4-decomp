/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004498a0` (_code @ 0x4498a0, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_004498a0(int param_1)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = *(unsigned int *)(param_1 + 0x44);
  (**(romwright_code **)(param_1 + 0x4c))(*(unsigned int *)(param_1 + 0x50));
  temp_v0 = *(unsigned int *)(param_1 + 0x38);
  *(unsigned int *)(param_1 + 0x38) = temp_v1;
  *(unsigned int *)(param_1 + 0x3c) = temp_v0;
  *(unsigned char *)(param_1 + 0x58) = 1;
  return;
}

} /* extern "C" */
