/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041a3ac` (_code @ 0x41a3ac, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00557d60; /* 0x557d60 */

/* Supplied declaration required: FUN_002e6dd0. */
/* Supplied declaration required: FUN_0041a270. */


unsigned int * FUN_0041a3ac(unsigned int *param_1,int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00557d60;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = *(unsigned int *)(param_2 + 8);
  param_1[4] = 0xffffffff;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_002e6dd0(param_1 + 5,8);
  FUN_002e6dd0(param_1 + 7,8);
  FUN_0041a270(param_1);
  return param_1;
}
