/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00123820` (_code @ 0x123820, 0xe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineUrlEnsureParsed(void);

/* Supplied declaration required: onlineUrlEnsureParsed. */


int FUN_00123820(int param_1)

{
/* irregular: 1 native warning(s); review required */
  onlineUrlEnsureParsed();
  return (int)*(char *)(param_1 + 0x66);
}

} /* extern "C" */
