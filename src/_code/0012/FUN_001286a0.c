/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001286a0` (_code @ 0x1286a0, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_001286a0(short *param_1)

{
  if (*param_1 < 0x28) {
    *param_1 = 0x28;
  }
  if (param_1[1] < 0x24) {
    param_1[1] = 0x24;
  }
  if (param_1[3] >= 0x92) {
    param_1[3] = 0x91;
  }
  if (param_1[4] >= 0x92) {
    param_1[4] = 0x91;
  }
  if (param_1[5] >= 0x92) {
    param_1[5] = 0x91;
  }
  return;
}
