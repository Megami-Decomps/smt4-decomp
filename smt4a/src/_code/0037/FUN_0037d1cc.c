/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037d1cc` (_code @ 0x37d1cc, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0037d770. */


unsigned int FUN_0037d1cc(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*param_1 != 0) {
    if (*(int *)(*param_1 + 0x568) == 2) {
      return 1;
    }
  }
  else {
    FUN_0037d770();
  }
  return 0;
}
