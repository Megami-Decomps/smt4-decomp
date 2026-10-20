/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e56e4` (_code @ 0x2e56e4, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteB(void);
int rt_vec_delete(void);

/* Supplied declaration required: asdOperatorDeleteB. */
/* Supplied declaration required: rt_vec_delete. */


void FUN_002e56e4(void)

{
/* irregular: 2 native warning(s); review required */
  rt_vec_delete();
  asdOperatorDeleteB();
  return;
}

} /* extern "C" */
