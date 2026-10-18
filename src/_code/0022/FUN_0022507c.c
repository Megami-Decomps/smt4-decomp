/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022507c` (_code @ 0x22507c, 0x6c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002983dc. */


void FUN_0022507c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x3048) != 0x28) {
    *(unsigned int *)(param_1 + 0x3470) = 0;
    *(unsigned int *)(param_1 + 0x3474) = 0;
    *(unsigned int *)(param_1 + 0x3478) = 0;
    *(unsigned int *)(param_1 + 0x347c) = 0;
    FUN_002983dc(param_1,0x1c,0);
    return;
  }
  *(unsigned int *)(param_1 + *(int *)(param_1 + 0x305c) * 4 + 0x3470) = 0;
  *(unsigned int *)(param_1 + *(int *)(param_1 + 0x305c) * 4 + 0x3460) = 0;
  *(unsigned int *)(param_1 + 0x3504) = 0;
  return;
}
