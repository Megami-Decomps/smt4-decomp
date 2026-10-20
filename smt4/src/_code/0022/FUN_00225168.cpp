/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00225168` (_code @ 0x225168, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00298140(int, int, int);

/* Supplied declaration required: FUN_00298140. */


void FUN_00225168(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x3048) != 0x28) {
    *(unsigned int *)(param_1 + 0x3470) = 0;
    *(unsigned int *)(param_1 + 0x3474) = 0;
    *(unsigned int *)(param_1 + 0x3478) = 0;
    *(unsigned int *)(param_1 + 0x347c) = 0;
    FUN_00298140(param_1,0x1c,0);
    return;
  }
  *(unsigned int *)(param_1 + *(int *)(param_1 + 0x305c) * 4 + 0x3470) = 0;
  *(unsigned int *)(param_1 + *(int *)(param_1 + 0x305c) * 4 + 0x3460) = 0;
  *(unsigned int *)(param_1 + 0x3504) = 0;
  return;
}

} /* extern "C" */
