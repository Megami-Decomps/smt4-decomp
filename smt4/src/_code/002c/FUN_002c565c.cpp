/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c565c` (_code @ 0x2c565c, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_004e3d0c; /* 0x4e3d0c */


void FUN_002c565c(int param_1,int param_2)

{
  if (param_1 < 0x200) {
    (&DAT_004e3d0c)[param_1] = param_2 != 0;
  }
  return;
}

} /* extern "C" */
