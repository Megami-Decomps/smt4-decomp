/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023d02c` (_code @ 0x23d02c, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002c0894. */
/* Supplied declaration required: FUN_002c415c. */


void FUN_0023d02c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_002c415c();
    *(unsigned int *)(param_1 + 0xc) = 0;
  }
  if (*(int *)(param_1 + 8) != 0) {
    FUN_002c0894();
    *(unsigned int *)(param_1 + 8) = 0;
  }
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0x1c) = 0;
  return;
}
