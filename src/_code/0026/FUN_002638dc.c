/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002638dc` (_code @ 0x2638dc, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e140; /* 0x43e140 */

/* Supplied declaration required: FUN_002bf030. */


void FUN_002638dc(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0043e140;
  *(unsigned int *)(DAT_0043e140 + 8) = 3;
  FUN_002bf030(temp_v0 + 0x34,1);
  return;
}
