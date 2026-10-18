/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018985c` (_code @ 0x18985c, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0058928c; /* 0x58928c */
extern unsigned int DAT_00589290; /* 0x589290 */

/* Supplied declaration required: FUN_001a1184. */


unsigned int FUN_0018985c(int param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0xc8a0a7f8;
  if (DAT_0058928c != 0) {
    temp_v0 = 1 << ((param_2 + param_3) & 0xffU);
    if (param_1 != 0) {
      if ((DAT_00589290 & temp_v0) == 0) {
        temp_v1 = FUN_001a1184(DAT_0058928c,param_1,param_2,param_3);
        DAT_00589290 = DAT_00589290 | temp_v0;
      }
    }
    else if ((DAT_00589290 & temp_v0) != 0) {
      temp_v1 = FUN_001a1184(DAT_0058928c,0,param_2,param_3);
      DAT_00589290 = DAT_00589290 & ~temp_v0;
    }
  }
  return temp_v1;
}
