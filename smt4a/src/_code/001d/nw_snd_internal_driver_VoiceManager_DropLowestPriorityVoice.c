/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_VoiceManager_DropLowestPriorityVoice` (_code @ 0x1d2314, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: nw_snd_internal_driver_Voice_Free. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_Stop. */


unsigned int nw_snd_internal_driver_VoiceManager_DropLowestPriorityVoice(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  romwright_code *pcVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  if (*(int *)(param_1 + 4) != 0) {
    temp_v0 = *(int *)(param_1 + 8);
    temp_v1 = temp_v0 - 0x58;
    if (*(int *)(temp_v0 - 0x18) <= param_2) {
      temp_v3 = *(unsigned int *)(temp_v0 - 0x50);
      pcVar3 = *(romwright_code **)(temp_v0 - 0x4c);
      temp_v2 = *(unsigned int *)(temp_v0 - 0x48);
      nw_snd_internal_driver_Voice_Stop(temp_v1);
      nw_snd_internal_driver_Voice_Free(temp_v1);
      if (pcVar3 != (romwright_code *)0x0) {
        (*pcVar3)(temp_v1,2,temp_v2);
      }
      return temp_v3;
    }
  }
  return 0;
}
