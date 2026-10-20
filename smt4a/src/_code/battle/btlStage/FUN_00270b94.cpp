/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00270b94` (_code @ 0x270b94, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(void);

extern int DAT_0057a4f4; /* 0x57a4f4 */

/* Supplied declaration required: FUN_0019a5a0. */


void FUN_00270b94(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_0057a4f4 != 0) {
    FUN_0019a5a0();
    DAT_0057a4f4 = 0;
  }
  return;
}

} /* extern "C" */
