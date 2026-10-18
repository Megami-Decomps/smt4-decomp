/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028df0c` (_code @ 0x28df0c, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0043e0b8; /* 0x43e0b8 */
extern signed char DAT_0043e0b9; /* 0x43e0b9 */


void FUN_0028df0c(int param_1)

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
