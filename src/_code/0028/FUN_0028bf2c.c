/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028bf2c` (_code @ 0x28bf2c, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00433158; /* 0x433158 */
extern int DAT_00434210; /* 0x434210 */

/* Supplied declaration required: FUN_002a60cc. */
/* Supplied declaration required: FUN_002ae898. */


void FUN_0028bf2c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_00434210;
  if (DAT_00434210 != 0) {
    if (-1 < *(int *)(DAT_00434210 + 0x2f8)) {
      FUN_002ae898(0x18);
      if (DAT_00434210 != 0) {
        *(unsigned char *)(DAT_00434210 + 0x2f4) = 0;
      }
      FUN_002a60cc(DAT_00433158,0x18,*(unsigned int *)(temp_v0 + 0x2f8));
      *(unsigned int *)(temp_v0 + 0x2f8) = 0xffffffff;
    }
    *(unsigned int *)(temp_v0 + 0x2e8) = 3;
    *(unsigned int *)(temp_v0 + 0x2ec) = 0;
  }
  return;
}
