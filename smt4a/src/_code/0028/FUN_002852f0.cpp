/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002852f0` (_code @ 0x2852f0, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f560; /* 0x57f560 */
extern signed char DAT_0057f561; /* 0x57f561 */


void FUN_002852f0(int param_1)

{
  if (param_1 != 0) {
    if (DAT_0057f561 == '\0') {
      DAT_0057f560 = (unsigned char)param_1;
    }
    return;
  }
  DAT_0057f560 = 0;
  DAT_0057f561 = 0;
  return;
}

} /* extern "C" */
