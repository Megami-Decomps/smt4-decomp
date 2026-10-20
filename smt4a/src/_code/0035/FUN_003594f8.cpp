/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003594f8` (_code @ 0x3594f8, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_005b3bfc; /* 0x5b3bfc */


void FUN_003594f8(unsigned int param_1)

{
  DAT_005b3bfc = DAT_005b3bfc & ~param_1;
  return;
}

} /* extern "C" */
