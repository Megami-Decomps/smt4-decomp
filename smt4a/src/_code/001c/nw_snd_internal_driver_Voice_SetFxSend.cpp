/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_Voice_SetFxSend` (_code @ 0x1c1e78, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void nw_snd_internal_driver_Voice_SetFxSend(int param_1,int param_2)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  int temp_v0;
  float in_s0;
  
  temp_v0 = param_1 + param_2 * 4;
  if (in_s0 < 0.0f) {
    in_s0 = 0.0f;
  }
  if (*(float *)(temp_v0 + 0x48) != in_s0) {
    *(float *)(temp_v0 + 0x48) = in_s0;
    *(unsigned short *)(param_1 + 0x20) = *(unsigned short *)(param_1 + 0x20) | 8;
  }
  return;
}

} /* extern "C" */
