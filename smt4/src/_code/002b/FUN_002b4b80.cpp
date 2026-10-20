/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b4b80` (_code @ 0x2b4b80, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_vec_delete(void);
int asdOperatorDelete(void);

/* Supplied declaration required: rt_vec_delete. */
/* Supplied declaration required: asdOperatorDelete. */


void FUN_002b4b80(void)

{
/* irregular: 2 native warning(s); review required */
  rt_vec_delete();
  asdOperatorDelete();
  return;
}

} /* extern "C" */
