/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_Voice_AppendWaveBuffer` (_code @ 0x15da10, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001565e4. */


void nw_snd_internal_driver_Voice_AppendWaveBuffer
               (int param_1,int param_2,unsigned int param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  FUN_001565e4(*(unsigned int *)(param_1 + param_2 * 4),param_3);
  if (param_4 != 0) {
    *(unsigned int *)(param_1 + 0x1c) = param_3;
  }
  return;
}
