/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030fd70` (_code @ 0x30fd70, 0xe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int __aeabi_idivmod(int, int);

/* Supplied declaration required: __aeabi_idivmod. */


void FUN_0030fd70(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  __aeabi_idivmod(param_1[1] - *param_1,0x28);
  return;
}

} /* extern "C" */
