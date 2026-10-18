/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00307a0a` (_code @ 0x307a0a, 0xe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: aeabi_idivmod. */


void FUN_00307a0a(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  aeabi_idivmod(param_1[1] - *param_1,0x1c);
  return;
}
