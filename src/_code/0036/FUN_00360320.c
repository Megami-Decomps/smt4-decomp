/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00360320` (_code @ 0x360320, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004e8568; /* 0x4e8568 */

/* Supplied declaration required: FUN_00360048. */


void FUN_00360320(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  if (param_2 >= 0x8000) {
    param_2 = 0x7fff;
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  *(int *)(param_1 + 0x20) = param_2;
  FUN_00360048(&DAT_004e8568,param_1,param_2);
  return;
}
