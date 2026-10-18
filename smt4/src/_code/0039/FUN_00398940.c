/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00398940` (_code @ 0x398940, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00296ee0. */


void FUN_00398940(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_00296ee0(param_1,1);
  *(unsigned int *)(param_1 + 0xa4) = 0x140;
  *(unsigned int *)(param_1 + 0xa8) = 0;
  *(unsigned int *)(param_1 + 0xac) = 0x140;
  return;
}
