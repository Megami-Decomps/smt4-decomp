/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0048b1bc` (_code @ 0x48b1bc, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00272edc. */


unsigned char FUN_0048b1bc(void)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  float in_s0;
  int temp_v0;
  
  FUN_00272edc();
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
