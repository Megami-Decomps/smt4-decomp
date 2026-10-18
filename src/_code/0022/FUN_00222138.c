/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00222138` (_code @ 0x222138, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002fc260. */


unsigned int FUN_00222138(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*param_1 != 0) {
    if (*(int *)(*param_1 + 0x5ec) == 1) {
      return 1;
    }
  }
  else {
    FUN_002fc260();
  }
  return 0;
}
