/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00191fbc` (_code @ 0x191fbc, 0x80 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_00191fbc(int param_1)

{
  short temp_v0;
  
  temp_v0 = *(short *)(param_1 + 0x3072) - 1;
  *(short *)(param_1 + 0x3072) = temp_v0;
  if (temp_v0 < 1) {
    *(unsigned short *)(param_1 + 0x3072) = 0;
    if (-1 < *(short *)(param_1 + 0x3074)) {
      *(unsigned short *)(param_1 + 0x3072) = 1;
    }
    if (-1 < *(short *)(param_1 + 0x3076)) {
      *(short *)(param_1 + 0x3072) = *(short *)(param_1 + 0x3072) + 1;
    }
    if (-1 < *(short *)(param_1 + 0x3078)) {
      *(short *)(param_1 + 0x3072) = *(short *)(param_1 + 0x3072) + 1;
    }
    if (-1 < *(short *)(param_1 + 0x307a)) {
      *(short *)(param_1 + 0x3072) = *(short *)(param_1 + 0x3072) + 1;
    }
  }
  return;
}
