/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002872b0` (_code @ 0x2872b0, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_002872b0(int param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = *(int *)(param_1 + 0x4c);
  if (temp_v1 != 0) {
    temp_v2 = *(unsigned int *)(temp_v1 + 0x44);
    (**(romwright_code **)(temp_v1 + 0x4c))(*(unsigned int *)(temp_v1 + 0x50));
    temp_v0 = *(unsigned int *)(temp_v1 + 0x38);
    *(unsigned int *)(temp_v1 + 0x38) = temp_v2;
    *(unsigned int *)(temp_v1 + 0x3c) = temp_v0;
    *(unsigned char *)(temp_v1 + 0x58) = 1;
  }
  return;
}
