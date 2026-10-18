/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00110318` (_code @ 0x110318, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00559354; /* 0x559354 */


void FUN_00110318(unsigned int *param_1)

{
  param_1[1] = 65000;
  param_1[2] = 0x400;
  *param_1 = (unsigned int)&DAT_00559354;
  return;
}
