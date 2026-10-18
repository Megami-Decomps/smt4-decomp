/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00357938` (_code @ 0x357938, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002c41e8. */


int * FUN_00357938(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_002c41e8();
  if (*param_1 != 0) {
    software_interrupt(0x23);
    *param_1 = 0;
  }
  return param_1;
}
