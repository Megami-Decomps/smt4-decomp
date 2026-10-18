/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001511e4` (_code @ 0x1511e4, 0x88 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00421a24; /* 0x421a24 */

/* Supplied declaration required: FUN_002c4244. */
/* Supplied declaration required: FUN_002c541c. */


unsigned int * FUN_001511e4(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00421a24;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_002c541c(param_1 + 1,1);
  *(unsigned char *)(param_1 + 3) = 0;
  *(unsigned char *)((int)param_1 + 0xd) = 0;
  *(unsigned char *)((int)param_1 + 0xe) = 0;
  *(unsigned char *)((int)param_1 + 0xf) = 0;
  *(unsigned char *)(param_1 + 4) = 0;
  param_1[5] = 0x3f800000;
  param_1[6] = 0x3f800000;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(unsigned char *)((int)param_1 + 0x2e) = 0;
  *(unsigned char *)(param_1 + 0xb) = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  *(unsigned char *)(param_1 + 0xd) = 0;
  *(unsigned char *)((int)param_1 + 0x35) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_002c4244(param_1 + 1);
  return param_1;
}
