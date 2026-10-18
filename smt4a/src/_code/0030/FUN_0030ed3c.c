/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030ed3c` (_code @ 0x30ed3c, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: rt_memcpy_w. */


void FUN_0030ed3c(unsigned int param_1,int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  if (param_2 != 0) {
    rt_memcpy_w(param_2,param_3,0x20);
  }
  return;
}
