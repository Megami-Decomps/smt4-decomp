/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00240628` (_code @ 0x240628, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00184e64. */


unsigned int FUN_00240628(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  if (param_2 < param_1) {
    FUN_00184e64(0x72e027ff);
    return 0xffffffff;
  }
  if (param_1 < param_2) {
    FUN_00184e64(0xdc0f14ff);
    return 1;
  }
  FUN_00184e64(0xffffffff);
  return 0;
}
