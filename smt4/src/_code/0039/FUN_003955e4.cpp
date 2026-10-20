/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003955e4` (_code @ 0x3955e4, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_004222d4; /* 0x4222d4 */


void FUN_003955e4(unsigned int *param_1)

{
  *(unsigned char *)(param_1 + 1) = 0;
  *param_1 = (unsigned int)&DAT_004222d4;
  param_1[3] = 0;
  param_1[2] = 2;
  return;
}

} /* extern "C" */
