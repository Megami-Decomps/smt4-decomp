/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f9ef8` (_code @ 0x2f9ef8, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteArray(void);

/* Supplied declaration required: asdOperatorDeleteArray. */


int * FUN_002f9ef8(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  for (temp_v0 = *param_1; temp_v0 != param_1[1]; temp_v0 = temp_v0 + 8) {
  }
  asdOperatorDeleteArray();
  return param_1;
}

} /* extern "C" */
