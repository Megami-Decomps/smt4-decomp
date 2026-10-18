/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00301590` (_code @ 0x301590, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00558e90; /* 0x558e90 */
extern unsigned char DAT_0055af64; /* 0x55af64 */

/* Supplied declaration required: FUN_002e7232. */
/* Supplied declaration required: FUN_002ea0b8. */


void FUN_00301590(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0055af64;
  if (param_1[0x36] != 0) {
    FUN_002e7232();
  }
  param_1[0x24] = (unsigned int)&DAT_00558e90;
  FUN_002ea0b8(param_1);
  return;
}
