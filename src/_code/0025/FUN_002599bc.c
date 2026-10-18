/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002599bc` (_code @ 0x2599bc, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043de68; /* 0x43de68 */

/* Supplied declaration required: FUN_003bbdb8. */


unsigned int FUN_002599bc(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0043de68 != 0 && param_1 != 0) {
    temp_v0 = *(unsigned int *)(DAT_0043de68 + 4);
    FUN_003bbdb8(temp_v0,param_1);
  }
  return temp_v0;
}
