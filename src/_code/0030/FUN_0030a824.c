/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030a824` (_code @ 0x30a824, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002bd610. */
/* Supplied declaration required: FUN_002c3b44. */


void FUN_0030a824(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  FUN_002c3b44(param_2,0x8c);
  FUN_002bd610(param_1,param_2,0xe);
  FUN_002bd610(param_1 + 0xe,param_2 + 0x4c,0x12);
  *(unsigned char *)(param_2 + 0x76) = *(unsigned char *)(param_1 + 0x36);
  return;
}
