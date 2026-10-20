/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030161c` (_code @ 0x30161c, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00115aec(void);
int FUN_00124034(void);
int FUN_0030eeb0(void);

/* Supplied declaration required: FUN_00115aec. */
/* Supplied declaration required: FUN_00124034. */
/* Supplied declaration required: FUN_0030eeb0. */


void FUN_0030161c(int param_1)

{
/* irregular: 3 native warning(s); review required */
  FUN_00124034();
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_0030eeb0();
    FUN_00115aec();
    return;
  }
  FUN_0030eeb0();
  return;
}

} /* extern "C" */
