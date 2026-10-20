/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a96d4` (_code @ 0x4a96d4, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00270bfc(int);

extern int DAT_0057a9c8; /* 0x57a9c8 */

/* Supplied declaration required: FUN_00270bfc. */


void FUN_004a96d4(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_0057a9c8 != 0) {
    FUN_00270bfc(DAT_0057a9c8 + 0x28c4);
    return;
  }
  return;
}

} /* extern "C" */
