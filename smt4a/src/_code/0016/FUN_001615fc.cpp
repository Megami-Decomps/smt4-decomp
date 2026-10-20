/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001615fc` (_code @ 0x1615fc, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0061a50c; /* 0x61a50c */


void FUN_001615fc(int param_1,int param_2)

{
  if (DAT_0061a50c != 0) {
    if (param_1 == 0x200) {
      *(int *)(DAT_0061a50c + 0x2c) = param_2;
    }
    else if (param_1 == 0x20f) {
      *(unsigned char *)(DAT_0061a50c + 0x3d) = param_2 != 0;
    }
  }
  return;
}

} /* extern "C" */
