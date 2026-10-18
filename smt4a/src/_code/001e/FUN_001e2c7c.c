/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e2c7c` (_code @ 0x1e2c7c, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: LZCOUNT (LZCOUNT). */
/* Supplied declaration required: FUN_001e2c68. */


void FUN_001e2c7c(unsigned int param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  if (0 < param_3 + LZCOUNT(param_4) * -2) {
    return;
  }
  FUN_001e2c68();
  return;
}
