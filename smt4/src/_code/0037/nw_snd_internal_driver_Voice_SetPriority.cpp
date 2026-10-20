/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_Voice_SetPriority` (_code @ 0x37c104, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00360110(int, int);
int nw_snd_internal_driver_VoiceManager_ChangeVoicePriority(unsigned int, int);

extern unsigned int FUN_002baf30(void);
/* Supplied declaration required: FUN_00360110. */
/* Supplied declaration required: nw_snd_internal_driver_VoiceManager_ChangeVoicePriority. */


void nw_snd_internal_driver_Voice_SetPriority(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  *(unsigned int *)(param_1 + 0x40) = param_2;
  temp_v0 = FUN_002baf30();
  nw_snd_internal_driver_VoiceManager_ChangeVoicePriority(temp_v0,param_1);
  if ((*(int *)(param_1 + 0x40) == 1) && (temp_v2 = 0, 0 < *(int *)(param_1 + 8))) {
    do {
      temp_v1 = *(int *)(param_1 + temp_v2 * 4);
      if (temp_v1 != 0) {
        FUN_00360110(temp_v1,1);
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < *(int *)(param_1 + 8));
  }
  return;
}

} /* extern "C" */
