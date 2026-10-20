/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001326f6` (_code @ 0x1326f6, 0x26 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteArray(...);

/* Supplied declaration required: asdOperatorDeleteArray. */


void FUN_001326f6(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  
  while (piVar1 = (int *)*param_1, piVar1 != (int *)0x0) {
    *param_1 = *piVar1;
    asdOperatorDeleteArray(piVar1[2]);
    asdOperatorDeleteArray(piVar1);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

} /* extern "C" */
