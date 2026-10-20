/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c56dc` (_code @ 0x2c56dc, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043e2aa; /* 0x43e2aa */
extern unsigned int DAT_0043e2c0; /* 0x43e2c0 */


void FUN_002c56dc(unsigned int param_1)

{
  DAT_0043e2c0 = DAT_0043e2c0 & ~param_1;
  DAT_0043e2aa = DAT_0043e2c0 == 0;
  return;
}

} /* extern "C" */
