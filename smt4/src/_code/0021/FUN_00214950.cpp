/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00214950` (_code @ 0x214950, 0x108 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f530c(int, int);

extern unsigned int FUN_001db8fc(void);
/* Supplied declaration required: FUN_002f530c. */


unsigned int FUN_00214950(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = 2;
  temp_v1 = FUN_001db8fc();
  if ((temp_v1 & 0x80000000) == 0) {
    temp_v2 = 0;
  }
  else {
    temp_v0 = (temp_v1 & 0x3fc00) >> 10;
    if (((temp_v0 == 0x11) && ((temp_v1 & 0x3ff) >= 100)) && ((temp_v1 & 0x3ff) < 0xb4)) {
      temp_v2 = 3;
    }
    else if ((((temp_v0 != 0x11) || ((temp_v1 & 0x3ff) < 0xb4)) || ((temp_v1 & 0x3ff) >= 200)) &&
            ((((temp_v0 == 0x11 && ((temp_v1 & 0x3ff) >= 0x186)) && ((temp_v1 & 0x3ff) < 400)) ||
             (((((temp_v0 != 0x11 || ((temp_v1 & 0x3ff) < 0xe6)) || ((temp_v1 & 0x3ff) >= 0x154)) &&
               ((temp_v0 == 0x11 && ((temp_v1 & 0x3ff) >= 200)))) && ((temp_v1 & 0x3ff) < 0xdc)))))) {
      if (param_2 != 0) {
        FUN_002f530c(0,param_2);
      }
      temp_v2 = 1;
    }
  }
  return temp_v2;
}

} /* extern "C" */
