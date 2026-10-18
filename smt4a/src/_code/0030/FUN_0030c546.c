/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030c546` (_code @ 0x30c546, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0030ec74. */


unsigned int * FUN_0030c546(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = *param_2;
  FUN_0030ec74(param_1 + 1,param_2 + 1);
  return param_1;
}
