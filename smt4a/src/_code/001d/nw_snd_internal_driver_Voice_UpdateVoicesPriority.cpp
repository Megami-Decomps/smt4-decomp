/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_Voice_UpdateVoicesPriority` (_code @ 0x1d3b4c, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001d3714(int, unsigned int);

/* Supplied declaration required: FUN_001d3714. */


void nw_snd_internal_driver_Voice_UpdateVoicesPriority(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if ((*(int *)(param_1 + 0x40) != 1) && (temp_v1 = 0, 0 < *(int *)(param_1 + 8))) {
    do {
      temp_v0 = *(int *)(param_1 + temp_v1 * 4);
      if (temp_v0 != 0) {
        FUN_001d3714(temp_v0,*(unsigned int *)(param_1 + 0x40));
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < *(int *)(param_1 + 8));
  }
  return;
}

} /* extern "C" */
