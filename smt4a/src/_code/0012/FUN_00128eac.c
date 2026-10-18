/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00128eac` (_code @ 0x128eac, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00558ac4; /* 0x558ac4 */

/* Supplied declaration required: FUN_002f8520. */


void FUN_00128eac(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00558ac4;
  FUN_002f8520();
  return;
}
