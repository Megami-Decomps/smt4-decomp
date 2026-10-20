/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00123520` (_code @ 0x123520, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_004c6290; /* 0x4c6290 */


void FUN_00123520(int param_1,int param_2)

{
  if ((*(int *)((unsigned char *)&DAT_004c6290 + 0x9c)) != 0) {
    if (param_1 == 0x200) {
      *(int *)((*(int *)((unsigned char *)&DAT_004c6290 + 0x9c)) + 0x2c) = param_2;
    }
    else if (param_1 == 0x20f) {
      *(unsigned char *)((*(int *)((unsigned char *)&DAT_004c6290 + 0x9c)) + 0x3d) = param_2 != 0;
    }
  }
  return;
}

} /* extern "C" */
