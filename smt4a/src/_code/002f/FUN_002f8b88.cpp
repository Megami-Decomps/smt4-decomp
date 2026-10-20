/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f8b88` (_code @ 0x2f8b88, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030fbe0(int, int);
int FUN_005144ec(void);
int FUN_005144f0(void);

/* Supplied declaration required: FUN_0030fbe0. */
/* Supplied declaration required: FUN_005144ec. */
/* Supplied declaration required: FUN_005144f0. */


void FUN_002f8b88(int param_1)

{
/* irregular: 3 native warning(s); review required */
  if (param_1 != 0) {
    FUN_0030fbe0(param_1,1000000);
    FUN_005144ec();
    return;
  }
  FUN_005144f0();
  return;
}

} /* extern "C" */
