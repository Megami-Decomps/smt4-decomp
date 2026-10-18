/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fd412` (_code @ 0x2fd412, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002e93c2. */


void FUN_002fd412(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(short *)(param_1 + 0x1aa) != 0) {
    FUN_002e93c2(*(int *)(param_1 + 0x1ac) + 8);
    *(unsigned short *)(param_1 + 0x1aa) = 0;
  }
  return;
}
