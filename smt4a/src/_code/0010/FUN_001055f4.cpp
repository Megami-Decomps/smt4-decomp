/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001055f4` (_code @ 0x1055f4, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ebc80(int, unsigned int);

extern int DAT_005949dc; /* 0x5949dc */

/* Supplied declaration required: FUN_002ebc80. */


void FUN_001055f4(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_002ebc80(DAT_005949dc + 0x14,param_1);
  FUN_002ebc80(DAT_005949dc + 0x70,param_1);
  return;
}

} /* extern "C" */
