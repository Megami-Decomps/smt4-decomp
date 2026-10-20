/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00307a6a` (_code @ 0x307a6a, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int aeabi_idivmod(int, int);

/* Supplied declaration required: aeabi_idivmod. */


void FUN_00307a6a(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  aeabi_idivmod(param_1[2] - *param_1,0x18);
  return;
}

} /* extern "C" */
