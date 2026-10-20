/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012116a` (_code @ 0x12116a, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteArray(...);
int FUN_00310224(int *);

/* Supplied declaration required: asdOperatorDeleteArray. */
/* Supplied declaration required: FUN_00310224. */


int * FUN_0012116a(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  
  if (param_1[4] != 0) {
    FUN_00310224(param_1);
    piVar1 = (int *)param_1[4];
    *piVar1 = param_1[1];
    param_1[1] = (int)piVar1;
    while (piVar1 = (int *)*param_1, piVar1 != (int *)0x0) {
      *param_1 = *piVar1;
      asdOperatorDeleteArray(piVar1[2]);
      asdOperatorDeleteArray(piVar1);
    }
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}

} /* extern "C" */
