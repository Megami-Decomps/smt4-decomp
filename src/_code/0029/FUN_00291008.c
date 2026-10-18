/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00291008` (_code @ 0x291008, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_00291008(float *param_1)

{
/* irregular: irregular input(s): in_s0, in_s1; 2 native warning(s); review required */
  float in_s0;
  float in_s1;
  float temp_v0;
  
  temp_v0 = *param_1 + in_s0;
  *param_1 = temp_v0;
  if (in_s0 >= 0.0f) {
    if (in_s1 < temp_v0) {
      *param_1 = in_s1;
      return;
    }
  }
  else if (temp_v0 <= in_s1) {
    *param_1 = in_s1;
    return;
  }
  in_s1 = temp_v0;
  *param_1 = in_s1;
  return;
}
