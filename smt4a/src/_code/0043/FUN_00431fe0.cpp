/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00431fe0` (_code @ 0x431fe0, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int software_interrupt(int);

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


int * FUN_00431fe0(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*param_1 != 0) {
    software_interrupt(0x23);
    *param_1 = 0;
  }
  return param_1;
}

} /* extern "C" */
