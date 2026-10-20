/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f0b28` (_code @ 0x3f0b28, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00571508; /* 0x571508 */


void FUN_003f0b28(int param_1)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  if (DAT_00571508 != 0) {
    temp_v0 = *(unsigned int *)(DAT_00571508 + 0x20);
    temp_v1 = *(unsigned int *)(DAT_00571508 + 0x24);
    *(unsigned int *)(param_1 + 0x1ee0) = *(unsigned int *)(DAT_00571508 + 0x1c);
    *(unsigned int *)(param_1 + 0x1ee4) = temp_v0;
    *(unsigned int *)(param_1 + 0x1ee8) = temp_v1;
    temp_v0 = *(unsigned int *)(DAT_00571508 + 0x2c);
    temp_v1 = *(unsigned int *)(DAT_00571508 + 0x30);
    *(unsigned int *)(param_1 + 0x1eec) = *(unsigned int *)(DAT_00571508 + 0x28);
    *(unsigned int *)(param_1 + 0x1ef0) = temp_v0;
    *(unsigned int *)(param_1 + 0x1ef4) = temp_v1;
    *(unsigned int *)(param_1 + 0x1ef8) = *(unsigned int *)(DAT_00571508 + 0x34);
  }
  return;
}

} /* extern "C" */
