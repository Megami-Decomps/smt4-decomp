/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f4a54` (_code @ 0x1f4a54, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00257e60. */
/* Supplied declaration required: FUN_002bd730. */


void FUN_001f4a54(unsigned int param_1,int *param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  FUN_00257e60(*param_2,param_2[0x11],param_3,0x10000);
  *(unsigned int *)(*param_2 + 0xc) = 0x2000000;
  *(unsigned int *)(*param_2 + 0x3c) = 1;
  *(unsigned int *)(*param_2 + 0x40) = 1;
  *(unsigned int *)(*param_2 + 0x38) = 0;
  FUN_002bd730(*param_2);
  *(unsigned char *)(param_2 + 0x12) = 1;
  return;
}
