/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001038b0` (_code @ 0x1038b0, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: rt_memcpy. */


int FUN_001038b0(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned int *)(param_1 + 4) = *(unsigned int *)(param_2 + 4);
  rt_memcpy(param_1 + 8,param_2 + 8,0x20);
  return param_1;
}
