/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013a294` (_code @ 0x13a294, 0x90 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e460; /* 0x44e460 */
extern unsigned int DAT_0044e464; /* 0x44e464 */

/* Supplied declaration required: FUN_001469cc. */


unsigned int FUN_0013a294(int param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0xc8a0a7f8;
  if (DAT_0044e460 != 0) {
    temp_v0 = 1 << ((param_2 + param_3) & 0xffU);
    if (param_1 != 0) {
      if ((DAT_0044e464 & temp_v0) == 0) {
        temp_v1 = FUN_001469cc(DAT_0044e460,param_1,param_2,param_3);
        DAT_0044e464 = DAT_0044e464 | temp_v0;
      }
    }
    else if ((DAT_0044e464 & temp_v0) != 0) {
      temp_v1 = FUN_001469cc(DAT_0044e460,0,param_2,param_3);
      DAT_0044e464 = DAT_0044e464 & ~temp_v0;
    }
  }
  return temp_v1;
}
