/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ee524` (_code @ 0x2ee524, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055b2e0; /* 0x55b2e0 */

/* Supplied declaration required: FUN_002e75fa. */
/* Supplied declaration required: FUN_0030fb26. */


unsigned int * FUN_002ee524(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0055b2e0;
  param_1[2] = param_2;
  FUN_002e75fa();
  FUN_0030fb26(param_1);
  param_1[5] = *(int *)(param_1[2] + 0x10) << 3;
  return param_1;
}
