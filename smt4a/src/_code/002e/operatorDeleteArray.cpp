/* NON_MATCHING: romwright 0.5.0 decompilation of `operatorDeleteArray` (_code @ 0x2e98d4, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteArray(void);

/* Supplied declaration required: asdOperatorDeleteArray. */


void operatorDeleteArray(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  for (temp_v0 = 0; temp_v0 < *(unsigned int *)(param_1 - 4); temp_v0 = temp_v0 + 1) {
  }
  asdOperatorDeleteArray();
  return;
}

} /* extern "C" */
