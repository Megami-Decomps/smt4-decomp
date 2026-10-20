/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002485d4` (_code @ 0x2485d4, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_002485d4(int param_1,unsigned short *param_2)

{
  if (param_1 != 0) {
    *param_2 = *(unsigned short *)(param_1 + 0x34);
    param_2[1] = *(unsigned short *)(param_1 + 0x36);
    param_2[2] = *(unsigned short *)(param_1 + 0x38);
    param_2[3] = *(unsigned short *)(param_1 + 0x3a);
    param_2[4] = *(unsigned short *)(param_1 + 0x3c);
    param_2[5] = *(unsigned short *)(param_1 + 0x3e);
    param_2[6] = *(unsigned short *)(param_1 + 0x40);
    param_2[7] = *(unsigned short *)(param_1 + 0x42);
  }
  return;
}

} /* extern "C" */
