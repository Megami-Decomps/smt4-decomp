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
