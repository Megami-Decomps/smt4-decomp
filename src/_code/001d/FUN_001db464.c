/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001db464` (_code @ 0x1db464, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_00464fac; /* 0x464fac */

/* Supplied declaration required: FUN_002390dc. */
/* Supplied declaration required: FUN_00263534. */


unsigned char FUN_001db464(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  
  temp_v1 = 0;
  temp_v0 = DAT_00464fac[6];
  FUN_00263534(temp_v0,*DAT_00464fac,DAT_00464fac[1]);
  if (-1 < temp_v0) {
    temp_v1 = *(int *)(DAT_00464fac[6] + 0x210) != 0;
    if (!temp_v1) {
      FUN_002390dc(DAT_00464fac[6]);
    }
  }
  return temp_v1;
}
