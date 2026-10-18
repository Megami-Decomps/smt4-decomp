/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031c348` (_code @ 0x31c348, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00387604. */


unsigned int FUN_0031c348(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*param_1 != 0) {
    if (*(int *)(*param_1 + 0x5f0) == 1) {
      return 1;
    }
  }
  else {
    FUN_00387604();
  }
  return 0;
}
