/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040aa6c` (_code @ 0x40aa6c, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001642e4. */


void FUN_0040aa6c(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_001642e4(param_2,0,1,0x80);
  *(unsigned int *)(param_1 + 0x10) = param_2;
  return;
}
