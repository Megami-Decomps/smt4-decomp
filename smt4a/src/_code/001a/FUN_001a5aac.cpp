/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a5aac` (_code @ 0x1a5aac, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055bee4; /* 0x55bee4 */


void FUN_001a5aac(unsigned int *param_1)

{
  param_1[1] = 0;
  *param_1 = (unsigned int)&DAT_0055bee4;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(unsigned char *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}

} /* extern "C" */
