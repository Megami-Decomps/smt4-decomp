/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00317068` (_code @ 0x317068, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00432cc8; /* 0x432cc8 */

extern int FUN_00289924(void);
/* Supplied declaration required: FUN_002a0640. */


void FUN_00317068(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00289924();
  if (temp_v0 != 0) {
    FUN_002a0640(0x1000000,0,0x3c);
    *(unsigned int *)(DAT_00432cc8 + 0x14c) = 2;
  }
  return;
}
