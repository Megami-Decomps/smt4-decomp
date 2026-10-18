/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017b07c` (_code @ 0x17b07c, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: LZCOUNT (LZCOUNT). */
/* Supplied declaration required: FUN_0017b068. */


void FUN_0017b07c(unsigned int param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  if (0 < param_3 + LZCOUNT(param_4) * -2) {
    return;
  }
  FUN_0017b068();
  return;
}
