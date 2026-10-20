/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003078f0` (_code @ 0x3078f0, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int aeabi_idivmod(int, int);

/* Supplied declaration required: aeabi_idivmod. */


void FUN_003078f0(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  aeabi_idivmod(param_1[2] - *param_1,0xc);
  return;
}

} /* extern "C" */
