/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e1a88` (_code @ 0x2e1a88, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043de68; /* 0x43de68 */

/* Supplied declaration required: FUN_003bbfb0. */


unsigned int FUN_002e1a88(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  if (DAT_0043de68 != 0) {
    temp_v0 = *(unsigned int *)(DAT_0043de68 + 4);
    FUN_003bbfb0(temp_v0);
    return temp_v0;
  }
  return 0;
}
