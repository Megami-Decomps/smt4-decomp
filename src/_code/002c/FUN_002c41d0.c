/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c41d0` (_code @ 0x2c41d0, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_004650a8; /* 0x4650a8 */


void FUN_002c41d0(int param_1)

{
  if (param_1 != 0) {
    DAT_004650a8 = DAT_004650a8 | 1;
  }
  else {
    DAT_004650a8 = DAT_004650a8 & 0xfffffffe;
  }
  return;
}
