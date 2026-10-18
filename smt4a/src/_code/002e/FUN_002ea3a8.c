/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ea3a8` (_code @ 0x2ea3a8, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00558a58; /* 0x558a58 */

/* Supplied declaration required: FUN_002ee80e. */


unsigned int * FUN_002ea3a8(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00558a58;
  FUN_002ee80e(param_1);
  return param_1;
}
