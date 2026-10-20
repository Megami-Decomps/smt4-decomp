/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013a618` (_code @ 0x13a618, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0063ff50; /* 0x63ff50 */
extern int DAT_0063ff54; /* 0x63ff54 */


void FUN_0013a618(int param_1)

{
  if (DAT_0063ff50 != param_1) {
    DAT_0063ff54 = param_1;
  }
  return;
}

} /* extern "C" */
