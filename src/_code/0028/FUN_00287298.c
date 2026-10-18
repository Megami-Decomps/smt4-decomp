/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00287298` (_code @ 0x287298, 0xc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_00287298(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = *(int *)(*(int *)(param_1 + 8) + 8);
  if (*(int *)(temp_v0 + 0x34) < 1) {
    return;
  }
  temp_v0 = *(int *)(temp_v0 + 0x4c);
  if (temp_v0 != 0) {
    temp_v2 = *(unsigned int *)(temp_v0 + 0x44);
    (**(romwright_code **)(temp_v0 + 0x4c))(*(unsigned int *)(temp_v0 + 0x50));
    temp_v1 = *(unsigned int *)(temp_v0 + 0x38);
    *(unsigned int *)(temp_v0 + 0x38) = temp_v2;
    *(unsigned int *)(temp_v0 + 0x3c) = temp_v1;
    *(unsigned char *)(temp_v0 + 0x58) = 1;
  }
  return;
}
