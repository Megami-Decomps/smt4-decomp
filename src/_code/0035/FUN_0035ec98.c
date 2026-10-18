/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035ec98` (_code @ 0x35ec98, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002c3b48. */


void FUN_0035ec98(int *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = param_2;
  param_1[1] = param_2 + 0xc00;
  param_1[2] = 0;
  FUN_002c3b48(param_2,0xc00);
  return;
}
