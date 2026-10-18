/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002547cc` (_code @ 0x2547cc, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_002547cc(float *param_1)

{
/* irregular: irregular input(s): in_s0, in_s1; 2 native warning(s); review required */
  float in_s0;
  float in_s1;
  float temp_v0;
  
  temp_v0 = *param_1 + in_s0;
  if (in_s0 >= 0.0f) {
    if (temp_v0 <= in_s1) {
      *param_1 = temp_v0;
      return;
    }
  }
  else if (in_s1 <= temp_v0) {
    *param_1 = temp_v0;
    return;
  }
  temp_v0 = in_s1;
  *param_1 = temp_v0;
  return;
}
