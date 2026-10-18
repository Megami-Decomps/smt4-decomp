/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001131b0` (_code @ 0x1131b0, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_004c6298; /* 0x4c6298 */
extern int DAT_004c63f4; /* 0x4c63f4 */


void FUN_001131b0(int param_1)

{
  if (DAT_004c63f4 == param_1) {
    return;
  }
  if (param_1 != 0x700) {
    if (param_1 == 0x701) {
      DAT_004c6298 = 800;
      DAT_004c63f4 = param_1;
      return;
    }
    if (param_1 != 0x702) {
      return;
    }
  }
  DAT_004c63f4 = param_1;
  DAT_004c6298 = 400;
  return;
}
