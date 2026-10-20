/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_Voice_Free` (_code @ 0x1c1d00, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001afdc4(void);
int nw_snd_internal_driver_VoiceManager_FreeVoice(unsigned int, int);

/* Supplied declaration required: FUN_001afdc4. */
extern unsigned int FUN_001c2484(void);
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
          FUN_001afdc4();
          *(unsigned int *)(param_1 + temp_v1 * 4) = 0;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < *(int *)(param_1 + 8));
    }
    *(unsigned int *)(param_1 + 8) = 0;
    temp_v0 = FUN_001c2484();
    nw_snd_internal_driver_VoiceManager_FreeVoice(temp_v0,param_1);
    *(unsigned char *)(param_1 + 0x14) = 0;
  }
  return;
}

} /* extern "C" */
