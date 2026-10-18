/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023ec3c` (_code @ 0x23ec3c, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00435e48; /* 0x435e48 */


unsigned int FUN_0023ec3c(int param_1)

{
  DAT_00435e48 = DAT_00435e48 * 0x41c64e6d + 0x3039;
  return (DAT_00435e48 >> 0x10) * (param_1 + 1) >> 0x10;
}
