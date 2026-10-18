/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00115750` (_code @ 0x115750, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00559844; /* 0x559844 */

/* Supplied declaration required: FUN_003014b4. */


unsigned int * FUN_00115750(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00559844;
  *(unsigned char *)(param_1 + 0xf) = 0;
  FUN_003014b4();
  *(unsigned char *)(param_1 + 0xf) = 1;
  return param_1;
}
