/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00340998` (_code @ 0x340998, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00379434(void);

extern short DAT_005f1854; /* 0x5f1854 */
extern short DAT_005f1856; /* 0x5f1856 */

/* Supplied declaration required: FUN_00379434. */


void FUN_00340998(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_005f1854 != DAT_005f1856) {
    DAT_005f1856 = DAT_005f1854;
  }
  FUN_00379434();
  return;
}

} /* extern "C" */
