/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028dc68` (_code @ 0x28dc68, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043e0b8; /* 0x43e0b8 */
extern signed char DAT_0043e0b9; /* 0x43e0b9 */


void FUN_0028dc68(int param_1)

{
  if (param_1 != 0) {
    if (DAT_0043e0b9 == '\0') {
      DAT_0043e0b8 = (unsigned char)param_1;
    }
    return;
  }
  DAT_0043e0b8 = 0;
  DAT_0043e0b9 = 0;
  return;
}

} /* extern "C" */
