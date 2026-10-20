/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00473710` (_code @ 0x473710, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemFree(void);
int asdOperatorDelete(void);
int FUN_004279cc(void);

/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: asdOperatorDelete. */
/* Supplied declaration required: FUN_004279cc. */


void FUN_00473710(int param_1)

{
/* irregular: 3 native warning(s); review required */
  if (*(int *)(param_1 + 0x5a8) != 0) {
    FUN_004279cc();
    asdOperatorDelete();
    *(unsigned int *)(param_1 + 0x5a8) = 0;
  }
  if (*(int *)(param_1 + 0x5ac) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0x5ac) = 0;
  }
  return;
}

} /* extern "C" */
