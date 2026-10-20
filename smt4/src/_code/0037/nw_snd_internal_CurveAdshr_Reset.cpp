/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_CurveAdshr_Reset` (_code @ 0x379bdc, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void nw_snd_internal_CurveAdshr_Reset(unsigned char *param_1)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  float in_s0;
  
  *param_1 = 0;
  *(float *)(param_1 + 4) = in_s0 * 10.0f;
  return;
}

} /* extern "C" */
