/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001407cc` (_code @ 0x1407cc, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_005b4008; /* 0x5b4008 */


void FUN_001407cc(int param_1)

{
  if (param_1 != 0) {
    DAT_005b4008 = DAT_005b4008 | 1;
  }
  else {
    DAT_005b4008 = DAT_005b4008 & 0xfffffffe;
  }
  return;
}

} /* extern "C" */
