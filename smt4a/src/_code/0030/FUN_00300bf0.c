/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00300bf0` (_code @ 0x300bf0, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00558c98; /* 0x558c98 */

/* Supplied declaration required: FUN_002e7232. */
/* Supplied declaration required: FUN_002ecf28. */
/* Supplied declaration required: FUN_002f3b6e. */


unsigned int * FUN_00300bf0(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00558c98;
  FUN_002f3b6e(param_1,0);
  FUN_002ecf28();
  FUN_002e7232();
  return param_1;
}
