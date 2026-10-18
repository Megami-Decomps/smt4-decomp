/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00105ddc` (_code @ 0x105ddc, 0x14 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_004e3ba8; /* 0x4e3ba8 */
extern int DAT_004e3bac; /* 0x4e3bac */


void FUN_00105ddc(int param_1)

{
  if (DAT_004e3ba8 != param_1) {
    DAT_004e3bac = param_1;
  }
  return;
}
