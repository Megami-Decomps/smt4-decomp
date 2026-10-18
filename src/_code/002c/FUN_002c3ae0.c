/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c3ae0` (_code @ 0x2c3ae0, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00138f44. */


void FUN_002c3ae0(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  *(unsigned short *)(param_1 + 3) = 0;
  *(unsigned char *)((int)param_1 + 0xe) = 0;
  FUN_00138f44();
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}
