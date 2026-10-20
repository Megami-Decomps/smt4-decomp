/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034d58c` (_code @ 0x34d58c, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_004209d0; /* 0x4209d0 */


void FUN_0034d58c(unsigned int *param_1)

{
  param_1[1] = 0;
  *param_1 = (unsigned int)&DAT_004209d0;
  param_1[2] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0x3f800000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(unsigned short *)(param_1 + 0x10) = 7;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  return;
}

} /* extern "C" */
