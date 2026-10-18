/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ee54c` (_code @ 0x2ee54c, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055b2e0; /* 0x55b2e0 */

/* Supplied declaration required: FUN_002e7232. */


unsigned int * FUN_002ee54c(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0055b2e0;
  FUN_002e7232(param_1[2]);
  param_1[2] = 0;
  return param_1;
}
