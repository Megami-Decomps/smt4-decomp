/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003968c0` (_code @ 0x3968c0, 0x14 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_003968d4. */


void FUN_003968c0(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  if ((*param_1 & 1) == 0) {
    FUN_003968d4();
    return;
  }
  return;
}
