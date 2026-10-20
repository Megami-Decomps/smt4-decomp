/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043907c` (_code @ 0x43907c, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055b378; /* 0x55b378 */


void FUN_0043907c(unsigned int *param_1)

{
  *param_1 = (unsigned int)&DAT_0055b378;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(unsigned char *)(param_1 + 5) = 0;
  *(unsigned char *)(param_1 + 6) = 0;
  *(unsigned char *)((int)param_1 + 0x19) = 0;
  *(unsigned char *)((int)param_1 + 0x1a) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(unsigned char *)(param_1 + 0xc) = 1;
  return;
}

} /* extern "C" */
