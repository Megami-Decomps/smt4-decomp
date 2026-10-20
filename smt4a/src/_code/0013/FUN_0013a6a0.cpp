/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013a6a0` (_code @ 0x13a6a0, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0063fe48; /* 0x63fe48 */
extern int DAT_0063fec0; /* 0x63fec0 */
extern unsigned char DAT_0063ff88; /* 0x63ff88 */
extern unsigned char DAT_0063ff89; /* 0x63ff89 */


void FUN_0013a6a0(int param_1,unsigned char param_2)

{
  if (param_1 != 0) {
    if (param_1 != 1) {
      if (param_1 != 2) {
        return;
      }
      if (DAT_0063fe48 != 0x500) {
        DAT_0063ff88 = param_2;
      }
    }
    if (DAT_0063fec0 != 0x500) {
      DAT_0063ff89 = param_2;
      return;
    }
  }
  else if (DAT_0063fe48 != 0x500) {
    DAT_0063ff88 = param_2;
  }
  return;
}

} /* extern "C" */
