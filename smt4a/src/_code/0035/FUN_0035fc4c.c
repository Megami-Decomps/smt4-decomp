/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035fc4c` (_code @ 0x35fc4c, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00570280; /* 0x570280 */
extern int DAT_005710dc; /* 0x5710dc */

/* Supplied declaration required: FUN_0019a7f4. */
/* Supplied declaration required: FUN_001b2d54. */


void FUN_0035fc4c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_005710dc;
  if (DAT_005710dc != 0) {
    if (-1 < *(int *)(DAT_005710dc + 0x2f8)) {
      FUN_0019a7f4(0x10);
      if (DAT_005710dc != 0) {
        *(unsigned char *)(DAT_005710dc + 0x2f4) = 0;
      }
      FUN_001b2d54(DAT_00570280,0x10,*(unsigned int *)(temp_v0 + 0x2f8));
      *(unsigned int *)(temp_v0 + 0x2f8) = 0xffffffff;
    }
    *(unsigned int *)(temp_v0 + 0x2e8) = 3;
    *(unsigned int *)(temp_v0 + 0x2ec) = 0;
  }
  return;
}
