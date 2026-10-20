/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ed280` (_code @ 0x2ed280, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e7378(int, int);

/* Supplied declaration required: FUN_002e7378. */


void FUN_002ed280(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_002e7378(param_1,*(int *)(param_1 + 0xc) + param_2);
  return;
}

} /* extern "C" */
