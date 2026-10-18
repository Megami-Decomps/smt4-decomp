/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a7ebc` (_code @ 0x2a7ebc, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00421960; /* 0x421960 */

/* Supplied declaration required: FUN_002c4244. */
/* Supplied declaration required: FUN_002c541c. */


unsigned int * FUN_002a7ebc(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00421960;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_002c541c(param_1 + 3,1);
  *(unsigned char *)(param_1 + 5) = 0;
  param_1[6] = 0;
  FUN_002c4244(param_1 + 3);
  return param_1;
}
