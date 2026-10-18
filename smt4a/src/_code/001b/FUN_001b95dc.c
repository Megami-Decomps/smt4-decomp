/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b95dc` (_code @ 0x1b95dc, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055c19c; /* 0x55c19c */

/* Supplied declaration required: FUN_001a089c. */
/* Supplied declaration required: FUN_001a08d8. */


unsigned int * FUN_001b95dc(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0055c19c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_001a089c(param_1 + 3,1);
  *(unsigned char *)(param_1 + 5) = 0;
  param_1[6] = 0;
  FUN_001a08d8(param_1 + 3);
  return param_1;
}
