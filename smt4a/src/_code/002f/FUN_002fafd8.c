/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fafd8` (_code @ 0x2fafd8, 0x2a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055970c; /* 0x55970c */

/* Supplied declaration required: FUN_002eca44. */
/* Supplied declaration required: FUN_00300820. */


unsigned int * FUN_002fafd8(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  FUN_002eca44();
  *param_1 = (unsigned int)&DAT_0055970c;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  FUN_00300820(param_1,param_2);
  return param_1;
}
