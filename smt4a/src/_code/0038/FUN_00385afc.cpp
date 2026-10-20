/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00385afc` (_code @ 0x385afc, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0048c1ac(int);

extern int DAT_00587f28; /* 0x587f28 */

/* Supplied declaration required: FUN_0048c1ac. */


void FUN_00385afc(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_00587f28 != 0) {
    FUN_0048c1ac(DAT_00587f28 + 0x68);
    return;
  }
  return;
}

} /* extern "C" */
