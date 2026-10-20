/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00210110` (_code @ 0x210110, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_00210110(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = *(int *)(param_1 + 0x2c);
  if ((*(int *)(temp_v0 + 0x148) != 0) &&
     (temp_v0 = *(int *)(*(int *)(*(int *)(temp_v0 + 0x28) + 0x1c) +
                      *(int *)(temp_v0 + 0x14c) * *(int *)(*(int *)(temp_v0 + 0x28) + 0x28) * 4),
     temp_v0 != 0)) {
    temp_v2 = *(unsigned int *)(temp_v0 + 0x44);
    (**(romwright_code **)(temp_v0 + 0x4c))(*(unsigned int *)(temp_v0 + 0x50));
    temp_v1 = *(unsigned int *)(temp_v0 + 0x38);
    *(unsigned int *)(temp_v0 + 0x38) = temp_v2;
    *(unsigned int *)(temp_v0 + 0x3c) = temp_v1;
    *(unsigned char *)(temp_v0 + 0x58) = 1;
  }
  return;
}

} /* extern "C" */
