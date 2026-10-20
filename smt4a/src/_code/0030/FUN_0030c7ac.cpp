/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030c7ac` (_code @ 0x30c7ac, 0xa bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00310f64(void);

/* Supplied declaration required: FUN_00310f64. */


void FUN_0030c7ac(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned int *)(param_1 + 8) = param_2;
  FUN_00310f64();
  return;
}

} /* extern "C" */
