/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ea3c0` (_code @ 0x2ea3c0, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_005591d8; /* 0x5591d8 */


void FUN_002ea3c0(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  param_1[3] = param_4;
  *param_1 = (unsigned int)&DAT_005591d8;
  param_1[2] = param_3;
  param_1[1] = param_2;
  return;
}
