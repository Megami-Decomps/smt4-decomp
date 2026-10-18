/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ac880` (_code @ 0x2ac880, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00158e30. */


int * FUN_002ac880(int *param_1,int *param_2)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = 0;
  param_1[1] = 0;
  *(unsigned char *)(param_1 + 2) = 0;
  if (((param_2 != (int *)0x0) && (*param_2 == 0x4b4e4243)) && (param_2[2] - 0x1000000U < 0x101)) {
    *param_1 = (int)param_2;
    FUN_00158e30();
    *(unsigned char *)(param_1 + 2) = 1;
    param_1[1] = (int)(param_2 + 2);
  }
  return param_1;
}
