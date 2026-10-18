/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00338988` (_code @ 0x338988, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_00288990. */


void FUN_00338988(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x4394) != 0) {
    FUN_00288990();
    if (*(int **)(param_1 + 0x4394) != (int *)0x0) {
      (**(romwright_code **)(**(int **)(param_1 + 0x4394) + 4))();
    }
    *(unsigned int *)(param_1 + 0x4394) = 0;
  }
  return;
}
