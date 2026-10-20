/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00282b60` (_code @ 0x282b60, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014384c(int);
int FUN_0014afd0(int, int);

extern signed char DAT_0057f209; /* 0x57f209 */

/* Supplied declaration required: FUN_0014384c. */
/* Supplied declaration required: FUN_0014afd0. */


void FUN_00282b60(void)

{
/* irregular: 2 native warning(s); review required */
  if (DAT_0057f209 < '\x01') {
    FUN_0014384c(9);
    FUN_0014afd0(9,0);
  }
  DAT_0057f209 = DAT_0057f209 + '\x01';
  return;
}

} /* extern "C" */
