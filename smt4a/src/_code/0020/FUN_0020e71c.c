/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020e71c` (_code @ 0x20e71c, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_0020e71c(int param_1)

{
  short temp_v0;
  
  temp_v0 = *(short *)(param_1 + 0x38a6) - 1;
  *(short *)(param_1 + 0x38a6) = temp_v0;
  if (temp_v0 < 1) {
    *(unsigned short *)(param_1 + 0x38a6) = 0;
    if (-1 < *(short *)(param_1 + 0x38a8)) {
      *(unsigned short *)(param_1 + 0x38a6) = 1;
    }
    if (-1 < *(short *)(param_1 + 0x38aa)) {
      *(short *)(param_1 + 0x38a6) = *(short *)(param_1 + 0x38a6) + 1;
    }
    if (-1 < *(short *)(param_1 + 0x38ac)) {
      *(short *)(param_1 + 0x38a6) = *(short *)(param_1 + 0x38a6) + 1;
    }
    if (-1 < *(short *)(param_1 + 0x38ae)) {
      *(short *)(param_1 + 0x38a6) = *(short *)(param_1 + 0x38a6) + 1;
    }
  }
  return;
}
