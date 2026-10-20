/* NON_MATCHING: romwright 0.5.0 decompilation of `arraySortQsort` (_code @ 0x312830, 0x4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int qsort(void);

/* Supplied declaration required: qsort. */


void arraySortQsort(void)

{
/* irregular: 1 native warning(s); review required */
  qsort();
  return;
}

} /* extern "C" */
