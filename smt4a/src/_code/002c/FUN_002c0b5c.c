/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c0b5c` (_code @ 0x2c0b5c, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f390; /* 0x57f390 */

/* Supplied declaration required: FUN_004bb200. */


unsigned int FUN_002c0b5c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = 0;
  if (DAT_0057f390 != 0 && param_1 != 0) {
    temp_v0 = *(unsigned int *)(DAT_0057f390 + 4);
    FUN_004bb200(temp_v0,param_1);
  }
  return temp_v0;
}
