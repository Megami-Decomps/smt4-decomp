/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014a7e4` (_code @ 0x14a7e4, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_0061a478; /* 0x61a478 */
extern int DAT_0061a5d4; /* 0x61a5d4 */


void FUN_0014a7e4(int param_1)

{
  if (DAT_0061a5d4 == param_1) {
    return;
  }
  if (param_1 != 0x700) {
    if (param_1 == 0x701) {
      DAT_0061a478 = 800;
      DAT_0061a5d4 = param_1;
      return;
    }
    if (param_1 != 0x702) {
      return;
    }
  }
  DAT_0061a5d4 = param_1;
  DAT_0061a478 = 400;
  return;
}

} /* extern "C" */
