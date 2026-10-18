/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015712c` (_code @ 0x15712c, 0x7c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned short FUN_0015712c(void)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  unsigned short temp_v0;
  float in_s0;
  float temp_v1;
  
  temp_v1 = 1.0f;
  if ((1.0f >= in_s0) && ((0.0f > in_s0 || (temp_v1 = in_s0, 0x3e0ade7e >= (int)in_s0)))) {
    temp_v0 = 0x50;
  }
  else {
    if ((int)temp_v1 < 0x3f666666) {
      return *(unsigned short *)((int)((temp_v1 - 0.13561438f) * 29.999998f) * 2 + 0x411a18);
    }
    temp_v0 = 16000;
  }
  return temp_v0;
}
