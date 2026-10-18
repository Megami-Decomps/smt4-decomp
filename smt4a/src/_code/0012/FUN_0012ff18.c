/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012ff18` (_code @ 0x12ff18, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002e6e14. */


void FUN_0012ff18(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  
  while (piVar1 = (int *)*param_1, piVar1 != (int *)0x0) {
    *param_1 = *piVar1;
    FUN_002e6e14(piVar1[2]);
    FUN_002e6e14(piVar1);
  }
  return;
}
