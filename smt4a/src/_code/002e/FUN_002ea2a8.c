/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ea2a8` (_code @ 0x2ea2a8, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_005592c4; /* 0x5592c4 */


void FUN_002ea2a8(unsigned int *param_1,unsigned int param_2)

{
  param_1[1] = param_2;
  *param_1 = (unsigned int)&DAT_005592c4;
  return;
}
