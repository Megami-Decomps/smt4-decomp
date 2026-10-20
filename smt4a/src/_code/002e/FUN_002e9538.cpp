/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e9538` (_code @ 0x2e9538, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_memcpy_w(int, int, int);

/* Supplied declaration required: rt_memcpy_w. */


int FUN_002e9538(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  rt_memcpy_w(param_1 + 4,param_2 + 4,0x1c);
  return param_1;
}

} /* extern "C" */
