/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022af30` (_code @ 0x22af30, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00464fac; /* 0x464fac */

/* Supplied declaration required: FUN_002390dc. */
/* Supplied declaration required: FUN_00263534. */


unsigned char FUN_0022af30(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  
  temp_v0 = *(unsigned int *)(DAT_00464fac + 0x18);
  FUN_00263534(temp_v0,param_1,param_2);
  temp_v1 = (temp_v0 & 0x80000000) == 0;
  if (temp_v1) {
    FUN_002390dc(*(unsigned int *)(DAT_00464fac + 0x18));
  }
  return temp_v1;
}
