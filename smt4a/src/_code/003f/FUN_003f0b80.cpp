/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f0b80` (_code @ 0x3f0b80, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00571508; /* 0x571508 */


void FUN_003f0b80(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = DAT_00571508;
  if (DAT_00571508 != 0) {
    temp_v1 = *(unsigned int *)(param_1 + 0x1ee4);
    temp_v2 = *(unsigned int *)(param_1 + 0x1ee8);
    *(unsigned int *)(DAT_00571508 + 0x1c) = *(unsigned int *)(param_1 + 0x1ee0);
    *(unsigned int *)(temp_v0 + 0x20) = temp_v1;
    *(unsigned int *)(temp_v0 + 0x24) = temp_v2;
    temp_v0 = DAT_00571508;
    temp_v1 = *(unsigned int *)(param_1 + 0x1ef0);
    temp_v2 = *(unsigned int *)(param_1 + 0x1ef4);
    *(unsigned int *)(DAT_00571508 + 0x28) = *(unsigned int *)(param_1 + 0x1eec);
    *(unsigned int *)(temp_v0 + 0x2c) = temp_v1;
    *(unsigned int *)(temp_v0 + 0x30) = temp_v2;
    *(unsigned int *)(DAT_00571508 + 0x34) = *(unsigned int *)(param_1 + 0x1ef8);
  }
  return;
}

} /* extern "C" */
