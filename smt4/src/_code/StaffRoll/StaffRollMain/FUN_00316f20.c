/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00316f20` (_code @ 0x316f20, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00432cc8; /* 0x432cc8 */

extern int FUN_002896bc(void);
/* Supplied declaration required: FUN_002a03a0. */


void FUN_00316f20(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002896bc();
  if (temp_v0 != 0) {
    FUN_002a03a0(0x1000000,0,0x3c);
    *(unsigned int *)(DAT_00432cc8 + 0x14c) = 2;
  }
  return;
}
