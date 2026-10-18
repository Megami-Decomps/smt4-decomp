/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030bc60` (_code @ 0x30bc60, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043daa8; /* 0x43daa8 */

/* Supplied declaration required: FUN_002631c0. */
/* Supplied declaration required: FUN_0028df54. */
extern int FUN_00296f60(void);


unsigned int FUN_0030bc60(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  
  temp_v1 = FUN_00296f60();
  if (DAT_0043daa8 == 0) {
    temp_v0 = 0;
  }
  else {
    if (temp_v1 != 0) {
      FUN_0028df54(*(unsigned short *)(DAT_0043daa8 + 0x126));
      return 1;
    }
    FUN_002631c0();
    temp_v0 = *(unsigned short *)(temp_v1 + 0x46);
  }
  FUN_0028df54(temp_v0);
  return 1;
}
