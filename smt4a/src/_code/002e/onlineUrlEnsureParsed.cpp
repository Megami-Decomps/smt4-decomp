/* NON_MATCHING: romwright 0.5.0 decompilation of `onlineUrlEnsureParsed` (_code @ 0x2e93da, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00103b30(void);

/* Supplied declaration required: FUN_00103b30. */


void onlineUrlEnsureParsed(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(char *)(param_1 + 100) == '\0') {
    FUN_00103b30();
  }
  return;
}

} /* extern "C" */
