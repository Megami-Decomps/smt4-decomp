/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00188340` (_code @ 0x188340, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0019f888. */


unsigned int * FUN_00188340(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)"옼A올A";
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_0019f888(param_1);
  return param_1;
}
