/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e9cd0` (_code @ 0x3e9cd0, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004f6184(void);

extern int DAT_00573808; /* 0x573808 */

/* Supplied declaration required: FUN_004f6184. */


void FUN_003e9cd0(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_00573808 != 0) {
    FUN_004f6184();
    return;
  }
  return;
}

} /* extern "C" */
