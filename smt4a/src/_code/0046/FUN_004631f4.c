/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004631f4` (_code @ 0x4631f4, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055c24c; /* 0x55c24c */

/* Supplied declaration required: FUN_004630d0. */


int * FUN_004631f4(int *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  param_1[0x11] = param_2 + 0x30;
  *param_1 = param_2;
  param_1[0x14] = param_2 + 0x44;
  FUN_004630d0(param_1);
  *param_1 = (int)&DAT_0055c24c;
  return param_1;
}
