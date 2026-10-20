/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f3b6e` (_code @ 0x2f3b6e, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e7232(int);
int FUN_002e75fa(int);

/* Supplied declaration required: FUN_002e7232. */
/* Supplied declaration required: FUN_002e75fa. */


void FUN_002f3b6e(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 8) != 0) {
    FUN_002e7232(*(int *)(param_1 + 8));
    *(unsigned int *)(param_1 + 8) = 0;
  }
  if (param_2 != 0) {
    *(int *)(param_1 + 8) = param_2;
    FUN_002e75fa(param_2);
  }
  return;
}

} /* extern "C" */
