/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ea446` (_code @ 0x2ea446, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_003106a8. */


void FUN_002ea446(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_003106a8(param_1,1);
  *(unsigned int *)(param_1 + 0x24) = param_2;
  return;
}
