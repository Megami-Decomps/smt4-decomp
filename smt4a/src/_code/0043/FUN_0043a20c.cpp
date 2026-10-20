/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043a20c` (_code @ 0x43a210, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int software_interrupt(int);

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int * FUN_0043a20c(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = param_2;
  if (param_1[5] != 0) {
    software_interrupt(0x23);
    param_1[5] = 0;
  }
  return param_1;
}

} /* extern "C" */
