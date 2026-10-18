/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00252630` (_code @ 0x252630, 0x84 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00433158; /* 0x433158 */
extern int DAT_00434210; /* 0x434210 */

/* Supplied declaration required: FUN_002a6410. */
/* Supplied declaration required: FUN_002aeb2c. */
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c45b8. */


void FUN_00252630(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_00434210;
  if (DAT_00434210 != 0) {
    if (-1 < *(int *)(DAT_00434210 + 0x2f8)) {
      FUN_002aeb2c(0x18);
      if (DAT_00434210 != 0) {
        *(unsigned char *)(DAT_00434210 + 0x2f4) = 0;
      }
      FUN_002a6410(DAT_00433158,0x18,*(unsigned int *)(temp_v0 + 0x2f8));
      *(unsigned int *)(temp_v0 + 0x2f8) = 0xffffffff;
      *(unsigned int *)(temp_v0 + 0x2e8) = 3;
      *(unsigned int *)(temp_v0 + 0x2ec) = 0;
    }
    FUN_002c45b8(*(unsigned int *)(temp_v0 + 0x2e4),0);
    FUN_002c4360(temp_v0);
    DAT_00434210 = 0;
  }
  return;
}
