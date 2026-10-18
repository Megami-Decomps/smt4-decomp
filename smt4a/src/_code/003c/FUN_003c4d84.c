/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c4d84` (_code @ 0x3c4d84, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00587f28; /* 0x587f28 */

/* Supplied declaration required: FUN_002bf18c. */


void FUN_003c4d84(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_00587f28 != 0) {
    FUN_002bf18c(DAT_00587f28 + 0x68,param_1);
    return;
  }
  return;
}
