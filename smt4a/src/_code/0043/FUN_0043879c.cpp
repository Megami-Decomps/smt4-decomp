/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043879c` (_code @ 0x43879c, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_memclr(int, int);

/* Supplied declaration required: rt_memclr. */


void FUN_0043879c(int *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = param_2;
  param_1[1] = param_2 + 0xc00;
  param_1[2] = 0;
  rt_memclr(param_2,0xc00);
  return;
}

} /* extern "C" */
