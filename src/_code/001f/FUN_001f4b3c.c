/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f4b3c` (_code @ 0x1f4b3c, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00257c2c. */
/* Supplied declaration required: FUN_002bd540. */


void FUN_001f4b3c(unsigned int param_1,int *param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  FUN_00257c2c(*param_2,param_2[0x11],param_3,0x10000);
  *(unsigned int *)(*param_2 + 0xc) = 0x2000000;
  *(unsigned int *)(*param_2 + 0x3c) = 1;
  *(unsigned int *)(*param_2 + 0x40) = 1;
  *(unsigned int *)(*param_2 + 0x38) = 0;
  FUN_002bd540(*param_2);
  *(unsigned char *)(param_2 + 0x12) = 1;
  return;
}
