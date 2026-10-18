/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001208fe` (_code @ 0x1208fe, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: rt_memcpy. */


void FUN_001208fe(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  if ((*(char *)(param_1 + 0x68) != '\0') && (param_2 != 0)) {
    rt_memcpy(param_2,param_1 + 0x58,0x10);
  }
  return;
}
