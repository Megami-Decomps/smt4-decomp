/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030eca8` (_code @ 0x30eca8, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteB(unsigned int);
int FUN_0030f220(unsigned int);

/* Supplied declaration required: asdOperatorDeleteB. */
/* Supplied declaration required: FUN_0030f220. */


unsigned int * FUN_0030eca8(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  if (param_1[1] != 0) {
    FUN_0030f220(*param_1);
    asdOperatorDeleteB(param_1[1]);
  }
  return param_1;
}

} /* extern "C" */
