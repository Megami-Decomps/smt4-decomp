/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00190fc8` (_code @ 0x190fc8, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a89e4(void);

/* Supplied declaration required: FUN_001a89e4. */


int * FUN_00190fc8(int *param_1,int *param_2)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = 0;
  param_1[1] = 0;
  if ((*param_2 == 0x44535743) && (param_2[2] - 0x1000000U < 0x101)) {
    *param_1 = (int)param_2;
    FUN_001a89e4();
    if (param_2 != (int *)0x0) {
      param_1[1] = (int)(param_2 + 2);
      return param_1;
    }
  }
  return param_1;
}

} /* extern "C" */
