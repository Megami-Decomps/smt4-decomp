/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ae5ec` (_code @ 0x3ae5ec, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_00218ae4. */


void FUN_003ae5ec(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_00439ca8;
  *(unsigned int *)(DAT_00439ca8 + 0x7e38) = 4;
  FUN_00218ae4(temp_v0 + 8);
  return;
}
