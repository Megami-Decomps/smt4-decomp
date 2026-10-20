/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003024c4` (_code @ 0x3024c4, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005590ec; /* 0x5590ec */


void FUN_003024c4(unsigned int *param_1,unsigned char param_2)

{
  *(unsigned char *)(param_1 + 4) = param_2;
  *param_1 = (unsigned int)&DAT_005590ec;
  *(unsigned char *)(param_1 + 2) = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  return;
}

} /* extern "C" */
