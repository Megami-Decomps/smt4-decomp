/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039580c` (_code @ 0x39580c, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_004222ec; /* 0x4222ec */


void FUN_0039580c(unsigned int *param_1)

{
  *(unsigned char *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (unsigned int)&DAT_004222ec;
  return;
}

} /* extern "C" */
