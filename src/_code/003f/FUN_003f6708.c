/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f6708` (_code @ 0x3f6708, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004d4674; /* 0x4d4674 */

/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */


unsigned int FUN_003f6708(int param_1,unsigned int *param_2)

{
/* irregular: 2 native warning(s); review required */
  FUN_002c3aa8(&DAT_004d4674);
  *param_2 = *(unsigned int *)(param_1 + 0x38);
  FUN_002c3a24(&DAT_004d4674);
  return 1;
}
