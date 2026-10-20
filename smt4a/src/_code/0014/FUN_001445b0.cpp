/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001445b0` (_code @ 0x1445b0, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_005b3d5c; /* 0x5b3d5c */


void FUN_001445b0(unsigned int param_1)

{
  DAT_005b3d5c = param_1 & 0xffffff00;
  return;
}

} /* extern "C" */
