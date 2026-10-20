/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_Voice_SetPitch` (_code @ 0x15761c, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void nw_snd_internal_driver_Voice_SetPitch(int param_1)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  float in_s0;
  
  if (*(float *)(param_1 + 0x28) != in_s0) {
    *(float *)(param_1 + 0x28) = in_s0;
    *(unsigned short *)(param_1 + 0x20) = *(unsigned short *)(param_1 + 0x20) | 4;
  }
  return;
}

} /* extern "C" */
