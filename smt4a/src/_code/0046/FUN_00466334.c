/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00466334` (_code @ 0x466334, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055c24c; /* 0x55c24c */

/* Supplied declaration required: FUN_0046605c. */


int * FUN_00466334(int *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  param_1[0x11] = param_2 + 0x34;
  *param_1 = param_2;
  param_1[0x14] = param_2 + 0x48;
  FUN_0046605c(param_1);
  *param_1 = (int)&DAT_0055c24c;
  return param_1;
}
