#include "romwright_types.h"

extern "C" {

int FUN_002bd430(void);
int nw_snd_internal_driver_VoiceManager_FreeVoice(unsigned int, int);

extern unsigned int FUN_002baf30(void);
/* Supplied declaration required: FUN_002bd430. */
/* Supplied declaration required: nw_snd_internal_driver_VoiceManager_FreeVoice. */


void nw_snd_internal_driver_Voice_Free(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    temp_v1 = 0;
    if (temp_v1 < *(int *)(param_1 + 8)) {
      do {
        if (*(int *)(param_1 + temp_v1 * 4) != 0) {
          FUN_002bd430();
          *(unsigned int *)(param_1 + temp_v1 * 4) = 0;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < *(int *)(param_1 + 8));
    }
    *(unsigned int *)(param_1 + 8) = 0;
    temp_v0 = FUN_002baf30();
    nw_snd_internal_driver_VoiceManager_FreeVoice(temp_v0,param_1);
    *(unsigned char *)(param_1 + 0x14) = 0;
  }
  return;
}

} /* extern "C" */
