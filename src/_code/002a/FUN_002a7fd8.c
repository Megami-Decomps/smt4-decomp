/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a7fd8` (_code @ 0x2a7fd8, 0x5c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_002a7fd8(void)

{
/* irregular: irregular input(s): in_s0, in_s1; 2 native warning(s); review required */
  float in_s0;
  float in_s1;
  float temp_v0;
  
  temp_v0 = in_s0 - in_s1;
  if (temp_v0 < 0.0f) {
    temp_v0 = -temp_v0;
  }
  if (in_s0 < 0.0f) {
    in_s0 = -in_s0;
  }
  if (in_s0 * 1.1920929e-07f < temp_v0) {
    if (in_s1 < 0.0f) {
      in_s1 = -in_s1;
    }
    if (in_s1 * 1.1920929e-07f < temp_v0) {
      return 0;
    }
  }
  return 1;
}
