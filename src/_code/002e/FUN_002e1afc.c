/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e1afc` (_code @ 0x2e1afc, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043de68; /* 0x43de68 */

/* Supplied declaration required: FUN_003bbd88. */


unsigned int FUN_002e1afc(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  if (DAT_0043de68 != 0) {
    temp_v0 = *(unsigned int *)(DAT_0043de68 + 4);
    FUN_003bbd88(temp_v0);
    return temp_v0;
  }
  return 0;
}
