/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d660c` (_code @ 0x3d660c, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00263588(unsigned int);
int FUN_0029c2cc(int, int);

/* Supplied declaration required: FUN_00263588. */
/* Supplied declaration required: FUN_0029c2cc. */


void FUN_003d660c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 0x730) != 0) {
    FUN_0029c2cc(*(int *)(param_1 + 0x730),0);
    FUN_00263588(*(unsigned int *)(param_1 + 0x730));
    *(unsigned int *)(param_1 + 0x730) = 0;
    *(unsigned int *)(param_1 + 0x734) = 0;
  }
  return;
}

} /* extern "C" */
