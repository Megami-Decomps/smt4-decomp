/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024a9d4` (_code @ 0x24a9d4, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_004ea7d4; /* 0x4ea7d4 */

/* Supplied declaration required: FUN_0030e458. */


void FUN_0024a9d4(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  if ((&DAT_004ea7d4)[param_1] != 0) {
    FUN_0030e458(0,(&DAT_004ea7d4)[param_1],param_2);
    return;
  }
  return;
}
