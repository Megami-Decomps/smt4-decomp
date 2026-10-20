/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103510` (_code @ 0x103510, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6354(int *, int);

/* Supplied declaration required: FUN_002e6354. */
extern int *FUN_002e6dac(int);


int * FUN_00103510(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  
  if ((param_1 != 0) && (piVar1 = (int *)FUN_002e6dac(param_1 + 4), piVar1 != (int *)0x0)) {
    FUN_002e6354(piVar1,param_1 + 4);
    *piVar1 = param_1;
    return piVar1 + 1;
  }
  return (int *)0x0;
}

} /* extern "C" */
