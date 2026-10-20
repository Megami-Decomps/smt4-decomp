/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_VoiceManager_Finalize` (_code @ 0x15ecdc, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001757d0(int);
int FUN_0018c87c(char *);
int nw_snd_internal_driver_Voice_Free(int);
int nw_snd_internal_driver_Voice_Stop(int);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_001757d0. */
/* Supplied declaration required: FUN_0018c87c. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_Free. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_Stop. */


void nw_snd_internal_driver_VoiceManager_Finalize(char *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if (*param_1 != '\0') {
    while (*(int *)(param_1 + 4) != 0) {
      temp_v0 = *(int *)(param_1 + 8);
      temp_v1 = temp_v0 - 0x58;
      nw_snd_internal_driver_Voice_Stop(temp_v1);
      if (*(romwright_code **)(temp_v0 - 0x4c) != (romwright_code *)0x0) {
        (**(romwright_code **)(temp_v0 - 0x4c))(temp_v1,1,*(unsigned int *)(temp_v0 - 0x48));
      }
      nw_snd_internal_driver_Voice_Free(temp_v1);
    }
    while (*(int *)(param_1 + 0x10) != 0) {
      temp_v0 = *(int *)(param_1 + 0x14);
      FUN_0018c87c(param_1 + 0x10);
      FUN_001757d0(temp_v0 - 0x58);
    }
    *param_1 = '\0';
  }
  return;
}

} /* extern "C" */
