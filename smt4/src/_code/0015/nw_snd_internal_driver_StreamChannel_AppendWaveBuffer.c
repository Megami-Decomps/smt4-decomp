/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_StreamChannel_AppendWaveBuffer` (_code @ 0x15c528, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: nw_snd_internal_driver_Voice_AppendWaveBuffer. */


void nw_snd_internal_driver_StreamChannel_AppendWaveBuffer
               (int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x30) != 0) {
    nw_snd_internal_driver_Voice_AppendWaveBuffer(*(int *)(param_1 + 0x30),0,param_2,param_3);
    return;
  }
  return;
}
