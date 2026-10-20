/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a225c` (_code @ 0x3a225c, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00398464(void);

extern int DAT_00580238; /* 0x580238 */

/* Supplied declaration required: FUN_00398464. */


void FUN_003a225c(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_00580238 != 0) {
    FUN_00398464();
    return;
  }
  return;
}

} /* extern "C" */
