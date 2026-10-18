/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00373d40` (_code @ 0x373d40, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_00373d40(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(char *)(*param_1 + 0x33b4) != '\r') {
    FUN_003283ac(0);
    return 0;
  }
  FUN_003283ac(1);
  return 1;
}
