/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003112b4` (_code @ 0x3112b4, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00559eac; /* 0x559eac */


void FUN_003112b4(unsigned int *param_1)

{
  *param_1 = (unsigned int)&DAT_00559eac;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 1;
  param_1[4] = 0;
  return;
}

} /* extern "C" */
