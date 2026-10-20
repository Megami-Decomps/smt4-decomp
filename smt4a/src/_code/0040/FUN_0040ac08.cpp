/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040ac08` (_code @ 0x40ac08, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00557c40; /* 0x557c40 */


void FUN_0040ac08(unsigned int *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (unsigned int)&DAT_00557c40;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0x10000;
  param_1[7] = 0x10000;
  return;
}

} /* extern "C" */
