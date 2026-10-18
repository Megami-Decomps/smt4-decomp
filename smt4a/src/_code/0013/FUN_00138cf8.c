/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00138cf8` (_code @ 0x138cf8, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0057f69a; /* 0x57f69a */
extern unsigned int DAT_0057f6b4; /* 0x57f6b4 */


void FUN_00138cf8(unsigned int param_1)

{
  DAT_0057f6b4 = DAT_0057f6b4 & ~param_1;
  DAT_0057f69a = DAT_0057f6b4 == 0;
  return;
}
