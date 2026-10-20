/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001615fc` (_code @ 0x1615fc, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0061a470; /* 0x61a470 */


void FUN_001615fc(int param_1,int param_2)

{
  if ((*(int *)((unsigned char *)&DAT_0061a470 + 0x9c)) != 0) {
    if (param_1 == 0x200) {
      *(int *)((*(int *)((unsigned char *)&DAT_0061a470 + 0x9c)) + 0x2c) = param_2;
    }
    else if (param_1 == 0x20f) {
      *(unsigned char *)((*(int *)((unsigned char *)&DAT_0061a470 + 0x9c)) + 0x3d) = param_2 != 0;
    }
  }
  return;
}

} /* extern "C" */
