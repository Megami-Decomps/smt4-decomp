/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00215a54` (_code @ 0x215a54, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043e0b8; /* 0x43e0b8 */
extern unsigned char DAT_0043e0b9; /* 0x43e0b9 */
extern unsigned int DAT_0043e0bc; /* 0x43e0bc */


void FUN_00215a54(int param_1)

{
  if (param_1 != 0) {
    DAT_0043e0b8 = 0;
    DAT_0043e0bc = 0;
    DAT_0043e0b9 = 1;
    return;
  }
  DAT_0043e0b8 = 0;
  DAT_0043e0bc = 0;
  DAT_0043e0b9 = 0;
  return;
}

} /* extern "C" */
