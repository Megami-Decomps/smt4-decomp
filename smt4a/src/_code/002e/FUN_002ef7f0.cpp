/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ef7f0` (_code @ 0x2ef7f0, 0x104 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0037aaec(int, int);

extern unsigned int FUN_00280bc0(void);
/* Supplied declaration required: FUN_0037aaec. */


unsigned int FUN_002ef7f0(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = 2;
  temp_v1 = FUN_00280bc0();
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
        FUN_0037aaec(0,param_2);
      }
      temp_v2 = 1;
    }
  }
  return temp_v2;
}

} /* extern "C" */
