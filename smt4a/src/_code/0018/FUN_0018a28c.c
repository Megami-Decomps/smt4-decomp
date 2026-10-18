/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018a28c` (_code @ 0x18a28c, 0xe8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char DAT_006433d0; /* 0x6433d0 */

/* Supplied declaration required: nn_snd_CTR_Dspsnd_EnableAuxBus. */
/* Supplied declaration required: nn_snd_CTR_Dspsnd_SetAuxFrontBypass. */
/* Supplied declaration required: nn_snd_CTR_Dspsnd_SetAuxReturnVolume. */
/* Supplied declaration required: nn_snd_CTR_Dspsnd_SetClippingMode. */
/* Supplied declaration required: nn_snd_CTR_Dspsnd_SetMasterVolume. */
/* Supplied declaration required: nn_snd_CTR_Dspsnd_SetOutputBufferCount. */
/* Supplied declaration required: nn_snd_CTR_Dspsnd_SetRearRatio. */
/* Supplied declaration required: nn_snd_CTR_Dspsnd_SetSoundOutputMode. */
/* Supplied declaration required: nn_snd_CTR_Dspsnd_SetSurroundDepth. */
/* Supplied declaration required: nn_snd_CTR_Dspsnd_SetSurroundSpeakerPosition. */
/* Supplied declaration required: nn_snd_CTR_Dspsnd_SetSyncMode. */


void FUN_0018a28c(int param_1)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  nn_snd_CTR_Dspsnd_SetMasterVolume(&DAT_006433d0);
  temp_v0 = 0;
  do {
    temp_v1 = (int)(char)temp_v0;
    nn_snd_CTR_Dspsnd_SetAuxReturnVolume(&DAT_006433d0,temp_v1);
    nn_snd_CTR_Dspsnd_EnableAuxBus(&DAT_006433d0,temp_v1);
    nn_snd_CTR_Dspsnd_SetAuxFrontBypass(&DAT_006433d0,temp_v1,(int)*(char *)(param_1 + temp_v1 + 0x24));
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 2);
  nn_snd_CTR_Dspsnd_SetSoundOutputMode(&DAT_006433d0,*(unsigned char *)(param_1 + 2));
  nn_snd_CTR_Dspsnd_SetClippingMode(&DAT_006433d0,*(unsigned char *)(param_1 + 1));
  nn_snd_CTR_Dspsnd_SetSurroundDepth(&DAT_006433d0,*(unsigned short *)(param_1 + 0x28));
  nn_snd_CTR_Dspsnd_SetSurroundSpeakerPosition(&DAT_006433d0,*(unsigned char *)(param_1 + 0x27));
  nn_snd_CTR_Dspsnd_SetRearRatio(&DAT_006433d0,*(unsigned short *)(param_1 + 0x2a));
  nn_snd_CTR_Dspsnd_SetOutputBufferCount(&DAT_006433d0,*(unsigned short *)(param_1 + 0x32));
  *(unsigned int *)(param_1 + 0x2c) = 0;
  nn_snd_CTR_Dspsnd_SetSyncMode(&DAT_006433d0,*(unsigned char *)(param_1 + 3));
  return;
}
