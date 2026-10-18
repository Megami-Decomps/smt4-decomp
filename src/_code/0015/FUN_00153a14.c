/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00153a14` (_code @ 0x153a14, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_004765e8; /* 0x4765e8 */

/* Supplied declaration required: FUN_002c3b48. */
/* Supplied declaration required: FUN_002c4450. */


void FUN_00153a14(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  if ((*(unsigned int *)(param_1 + 0x24) & 1) != 0) {
    FUN_002c3b48(param_2,param_3);
    return;
  }
  if ((*(unsigned int *)(param_1 + 0x24) & 2) != 0) {
    FUN_002c4450(param_2,param_3,DAT_004765e8);
    return;
  }
  return;
}
