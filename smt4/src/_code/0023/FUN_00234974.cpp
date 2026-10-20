/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00234974` (_code @ 0x234974, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023a170(void);

/* Supplied declaration required: FUN_0023a170. */


void FUN_00234974(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*param_1 != 0 || param_1[1] != 0) {
    FUN_0023a170();
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}

} /* extern "C" */
