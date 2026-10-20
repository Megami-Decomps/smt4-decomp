/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00120f44` (_code @ 0x120f44, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055af34; /* 0x55af34 */


void FUN_00120f44(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  param_1[2] = param_3;
  param_1[1] = param_2;
  param_1[3] = param_4;
  *param_1 = (unsigned int)&DAT_0055af34;
  return;
}

} /* extern "C" */
