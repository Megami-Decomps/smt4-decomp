/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030bc94` (_code @ 0x30bc94, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043daa8; /* 0x43daa8 */

/* Supplied declaration required: FUN_00262f94. */
/* Supplied declaration required: FUN_0028dcb0. */
extern int FUN_00296cc8(void);


unsigned int FUN_0030bc94(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  
  temp_v1 = FUN_00296cc8();
  if (DAT_0043daa8 == 0) {
    temp_v0 = 0;
  }
  else {
    if (temp_v1 != 0) {
      FUN_0028dcb0(*(unsigned short *)(DAT_0043daa8 + 0x126));
      return 1;
    }
    FUN_00262f94();
    temp_v0 = *(unsigned short *)(temp_v1 + 0x46);
  }
  FUN_0028dcb0(temp_v0);
  return 1;
}
