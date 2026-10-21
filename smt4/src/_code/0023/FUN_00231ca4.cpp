/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00231ca4` (_code @ 0x231ca4, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

float mathSnapHeading8(float angle);



unsigned char FUN_00231ca4(int unused, float angle)

{
  float in_s0;
  int temp_v0;
  
  in_s0 = mathSnapHeading8(angle);
  temp_v0 = (int)in_s0;
  if (temp_v0 == 0xb4) {
    return 0;
  }
  if (temp_v0 < 0xb5) {
    if (temp_v0 != 0) {
      if (temp_v0 == 0x2d) {
        return 3;
      }
      if (temp_v0 != 0x5a) {
        return temp_v0 == 0x87;
      }
      return 2;
    }
  }
  else {
    if (temp_v0 == 0xe1) {
      return 7;
    }
    if (temp_v0 == 0x10e) {
      return 6;
    }
    if (temp_v0 == 0x13b) {
      return 5;
    }
    if (temp_v0 != 0x168) {
      return 0;
    }
  }
  return 4;
}

} /* extern "C" */
