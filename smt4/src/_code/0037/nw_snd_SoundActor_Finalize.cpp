/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_SoundActor_Finalize` (_code @ 0x3767bc, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_snd_internal_ExternalSoundPlayer_Finalize(int, int);

/* Supplied declaration required: nw_snd_internal_ExternalSoundPlayer_Finalize. */


void nw_snd_SoundActor_Finalize(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (*(char *)(param_1 + 0x55) == '\0') {
    temp_v0 = 0;
    do {
      nw_snd_internal_ExternalSoundPlayer_Finalize(param_1 + temp_v0 * 0x10 + 8,param_1);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 4);
    *(unsigned char *)(param_1 + 0x55) = 1;
    *(unsigned char *)(param_1 + 0x54) = 0;
    *(unsigned int *)(param_1 + 4) = 0;
    *(unsigned int *)(param_1 + 0x4c) = 0x3f800000;
    *(unsigned int *)(param_1 + 0x50) = 0;
    *(unsigned int *)(param_1 + 0x48) = 0x3f800000;
  }
  return;
}

} /* extern "C" */
