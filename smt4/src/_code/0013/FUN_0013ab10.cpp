/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013ab10` (_code @ 0x13ab10, 0xe8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_snd_CTR_Dspsnd_EnableAuxBus(unsigned char *, int);
int nn_snd_CTR_Dspsnd_SetAuxFrontBypass(unsigned char *, int, int);
int nn_snd_CTR_Dspsnd_SetAuxReturnVolume(unsigned char *, int);
int nn_snd_CTR_Dspsnd_SetClippingMode(unsigned char *, int);
int nn_snd_CTR_Dspsnd_SetSoundOutputMode(unsigned char *, int);
int nn_snd_CTR_Dspsnd_SetSurroundSpeakerPosition(unsigned char *, int);
int nn_snd_CTR_Dspsnd_SetSyncMode(unsigned char *, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned char g_dspsndState; /* 0x4e6f64 */

/* Supplied declaration required: nn_snd_CTR_Dspsnd_EnableAuxBus. */
/* Supplied declaration required: nn_snd_CTR_Dspsnd_SetAuxFrontBypass. */
/* Supplied declaration required: nn_snd_CTR_Dspsnd_SetAuxReturnVolume. */
/* Supplied declaration required: nn_snd_CTR_Dspsnd_SetClippingMode. */
extern void nn_snd_CTR_Dspsnd_SetMasterVolume(unsigned int, float);
extern void nn_snd_CTR_Dspsnd_SetOutputBufferCount(unsigned int, int);
extern unsigned char nn_snd_CTR_Dspsnd_SetRearRatio(unsigned int, unsigned short);
/* Supplied declaration required: nn_snd_CTR_Dspsnd_SetSoundOutputMode. */
extern unsigned char nn_snd_CTR_Dspsnd_SetSurroundDepth(unsigned int, unsigned short);
/* Supplied declaration required: nn_snd_CTR_Dspsnd_SetSurroundSpeakerPosition. */
/* Supplied declaration required: nn_snd_CTR_Dspsnd_SetSyncMode. */


void FUN_0013ab10(int param_1,float param_2)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  nn_snd_CTR_Dspsnd_SetMasterVolume((unsigned int)&g_dspsndState,param_2);
  temp_v0 = 0;
  do {
    temp_v1 = (int)(char)temp_v0;
    nn_snd_CTR_Dspsnd_SetAuxReturnVolume(&g_dspsndState,temp_v1);
    nn_snd_CTR_Dspsnd_EnableAuxBus(&g_dspsndState,temp_v1);
    nn_snd_CTR_Dspsnd_SetAuxFrontBypass(&g_dspsndState,temp_v1,(int)*(char *)(param_1 + temp_v1 + 0x24));
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 2);
  nn_snd_CTR_Dspsnd_SetSoundOutputMode(&g_dspsndState,*(unsigned char *)(param_1 + 2));
  nn_snd_CTR_Dspsnd_SetClippingMode(&g_dspsndState,*(unsigned char *)(param_1 + 1));
  nn_snd_CTR_Dspsnd_SetSurroundDepth((unsigned int)&g_dspsndState,*(unsigned short *)(param_1 + 0x28));
  nn_snd_CTR_Dspsnd_SetSurroundSpeakerPosition(&g_dspsndState,*(unsigned char *)(param_1 + 0x27));
  nn_snd_CTR_Dspsnd_SetRearRatio((unsigned int)&g_dspsndState,*(unsigned short *)(param_1 + 0x2a));
  nn_snd_CTR_Dspsnd_SetOutputBufferCount((unsigned int)&g_dspsndState,(unsigned int)*(unsigned short *)(param_1 + 0x32));
  *(unsigned int *)(param_1 + 0x2c) = 0;
  nn_snd_CTR_Dspsnd_SetSyncMode(&g_dspsndState,*(unsigned char *)(param_1 + 3));
  return;
}

} /* extern "C" */
