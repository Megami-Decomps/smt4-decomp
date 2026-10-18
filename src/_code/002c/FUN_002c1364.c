/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c1364` (_code @ 0x2c1364, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00471b90; /* 0x471b90 */

/* Supplied declaration required: FUN_00129628. */


void FUN_002c1364(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  if ((0 < DAT_00471b90) && (param_3 < 9)) {
    FUN_00129628(param_1);
    return;
  }
  return;
}
