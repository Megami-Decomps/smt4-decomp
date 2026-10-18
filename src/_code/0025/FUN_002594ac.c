/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002594ac` (_code @ 0x2594ac, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0043e2aa; /* 0x43e2aa */
extern unsigned int DAT_0043e2c0; /* 0x43e2c0 */


void FUN_002594ac(unsigned int param_1)

{
  DAT_0043e2aa = 0;
  DAT_0043e2c0 = param_1 | DAT_0043e2c0;
  return;
}
