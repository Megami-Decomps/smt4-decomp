/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021f43c` (_code @ 0x21f43c, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_00464fac; /* 0x464fac */

/* Supplied declaration required: FUN_002390dc. */
/* Supplied declaration required: FUN_00263534. */


unsigned int FUN_0021f43c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = DAT_00464fac[6];
  FUN_00263534(temp_v0,*DAT_00464fac,DAT_00464fac[1]);
  if ((temp_v0 & 0x80000000) != 0) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = *(unsigned int *)(DAT_00464fac[6] + 0x3c0);
    FUN_002390dc();
  }
  return temp_v1;
}
