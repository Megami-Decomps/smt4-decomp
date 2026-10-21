/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e1c94` (_code @ 0x2e1c94, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int mathInterpolateTimed(int, int);

/* Supplied declaration required: mathInterpolateTimed. */


unsigned int FUN_002e1c94(float *param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_s0, in_s1; 2 native warning(s); review required */
  float in_s0;
  float in_s1;
  float temp_v0;
  
  temp_v0 = in_s0;
  mathInterpolateTimed(param_2,param_3);
  *param_1 = in_s0;
  if (in_s1 - temp_v0 > 0.0f) {
    if (in_s1 <= in_s0) {
      *param_1 = in_s1;
      return 1;
    }
  }
  else if (in_s0 <= in_s1) {
    *param_1 = in_s1;
    return 1;
  }
  if (param_3 != param_2) {
    return 0;
  }
  *param_1 = in_s1;
  return 1;
}

} /* extern "C" */
