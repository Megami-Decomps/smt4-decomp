/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_CurveAdshr_SetHold` (_code @ 0x45fa90, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void nw_snd_internal_CurveAdshr_SetHold(int param_1,int param_2)

{
  int temp_v0;
  
  temp_v0 = (param_2 + 1) * (param_2 + 1);
  *(short *)(param_1 + 0x14) = (short)((temp_v0 + ((unsigned int)(temp_v0 >> 0x1f) >> 0x1e)) * 0x4000 >> 0x10);
  return;
}

} /* extern "C" */
