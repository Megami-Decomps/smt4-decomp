/* NON_MATCHING: romwright 0.5.0 decompilation of `NaviMode_Enter` (_code @ 0x1925a8, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044cdf0; /* 0x44cdf0 */

/* Supplied declaration required: FUN_00399b30. */
/* Supplied declaration required: FUN_0039bbd4. */
/* Supplied declaration required: FUN_003c28a8. */
/* Supplied declaration required: NaviMain_Start. */


void NaviMode_Enter(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  NaviMain_Start(1,0);
  temp_v0 = DAT_0044cdf0;
  if (DAT_0044cdf0 != 0) {
    FUN_003c28a8(DAT_0044cdf0 + 0x12334,8);
    FUN_00399b30(temp_v0 + 0x40);
    FUN_0039bbd4(temp_v0 + 0x40);
  }
  *(unsigned char *)(DAT_0044cdf0 + 10) = 1;
  return;
}
