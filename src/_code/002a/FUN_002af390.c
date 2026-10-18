/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002af390` (_code @ 0x2af390, 0xc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_004652a0; /* 0x4652a0 */


void FUN_002af390(int param_1,int param_2)

{
  DAT_004652a0 = ((param_2 - param_1) & 0xfffffffcU) + DAT_004652a0;
  return;
}
