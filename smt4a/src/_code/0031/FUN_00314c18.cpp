/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00314c18` (_code @ 0x314c18, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00486304(int);

extern int DAT_00587f28; /* 0x587f28 */

/* Supplied declaration required: FUN_00486304. */


void FUN_00314c18(void)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_00587f28 != 0) {
    FUN_00486304(DAT_00587f28 + 0x68);
    return;
  }
  return;
}

} /* extern "C" */
