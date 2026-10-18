/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00135ac4` (_code @ 0x135ac4, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: rt_memcpy_w. */


int FUN_00135ac4(int param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  while (param_1 != param_2) {
    param_2 = param_2 - 0x20;
    param_3 = param_3 - 0x20;
    rt_memcpy_w(param_3,param_2,0x20);
  }
  return param_3;
}
