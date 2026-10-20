/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030ebc0` (_code @ 0x30ebc0, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e4064(void);

extern int DAT_005c4c00; /* 0x5c4c00 */

/* Supplied declaration required: FUN_002e4064. */


int * FUN_0030ebc0(int *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = param_2;
  if (DAT_005c4c00 == 0) {
    FUN_002e4064();
  }
  *(int *)(*param_1 + 0x1c) = *(int *)(*param_1 + 0x1c) + 1;
  return param_1;
}

} /* extern "C" */
