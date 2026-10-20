/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00339de0` (_code @ 0x339de0, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_004342c8; /* 0x4342c8 */


void FUN_00339de0(int param_1)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  if (DAT_004342c8 != 0) {
    temp_v0 = *(unsigned int *)(DAT_004342c8 + 0x10);
    temp_v1 = *(unsigned int *)(DAT_004342c8 + 0x14);
    *(unsigned int *)(param_1 + 0x1ea4) = *(unsigned int *)(DAT_004342c8 + 0xc);
    *(unsigned int *)(param_1 + 0x1ea8) = temp_v0;
    *(unsigned int *)(param_1 + 0x1eac) = temp_v1;
    temp_v0 = *(unsigned int *)(DAT_004342c8 + 0x1c);
    temp_v1 = *(unsigned int *)(DAT_004342c8 + 0x20);
    *(unsigned int *)(param_1 + 0x1eb0) = *(unsigned int *)(DAT_004342c8 + 0x18);
    *(unsigned int *)(param_1 + 0x1eb4) = temp_v0;
    *(unsigned int *)(param_1 + 0x1eb8) = temp_v1;
    *(unsigned int *)(param_1 + 0x1ebc) = *(unsigned int *)(DAT_004342c8 + 0x24);
  }
  return;
}

} /* extern "C" */
