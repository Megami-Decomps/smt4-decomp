/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_Voice_SetVolume` (_code @ 0x15767c, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void nw_snd_internal_driver_Voice_SetVolume(int param_1)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  float in_s0;
  
  if (in_s0 < 0.0f) {
    in_s0 = 0.0f;
  }
  if (*(float *)(param_1 + 0x24) != in_s0) {
    *(float *)(param_1 + 0x24) = in_s0;
    *(unsigned short *)(param_1 + 0x20) = *(unsigned short *)(param_1 + 0x20) | 0x40;
  }
  return;
}
