/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001178e2` (_code @ 0x1178e2, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002e9598. */


int FUN_001178e2(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned char *)(param_1 + 4) = *(unsigned char *)(param_2 + 4);
  FUN_002e9598(param_1 + 8,param_2 + 8);
  FUN_002e9598(param_1 + 0x10,param_2 + 0x10);
  return param_1;
}
