/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_Voice_SetState` (_code @ 0x1bdd88, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned char g_dspsndState; /* 0x6433d0 */
extern unsigned short uRam006446ea; /* 0x6446ea */

extern int nn_snd_CTR_Dspsnd_IsInitialized(void);
extern unsigned char nn_snd_CTR_Dspsnd_SetChannelPlayStop(unsigned int, unsigned char);
extern void nn_snd_CTR_VoiceImpl_ReleaseWaveBuffer(unsigned int);


void nn_snd_CTR_Voice_SetState(int param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  
  *(char *)(param_1 + 4) = (char)param_2;
  if (param_2 == 1) {
    nn_snd_CTR_VoiceImpl_ReleaseWaveBuffer(*(unsigned int *)(param_1 + 0x68));
  }
  puVar1 = *(unsigned int **)(param_1 + 0x68);
  *(char *)((int)puVar1 + 0xd) = (char)param_2;
  if (param_2 != 0) {
    if (param_2 == 1) {
      nn_snd_CTR_Dspsnd_SetChannelPlayStop((unsigned int)&g_dspsndState,(unsigned char)*puVar1);
      *(unsigned char *)(puVar1 + 3) = 0;
      temp_v0 = *puVar1;
      temp_v1 = nn_snd_CTR_Dspsnd_IsInitialized();
      if (temp_v1 != 0) {
        puVar1 = *(unsigned int **)((uRam006446ea & 1) * 0x60 + (temp_v0 & 0xff) * 4 + 0x644480);
        *puVar1 = *puVar1 | 0x20000000;
      }
      return;
    }
    if (param_2 == 2) {
      temp_v0 = *puVar1;
      temp_v1 = nn_snd_CTR_Dspsnd_IsInitialized();
      if (temp_v1 != 0) {
        puVar1 = *(unsigned int **)((uRam006446ea & 1) * 0x60 + (temp_v0 & 0xff) * 4 + 0x644480);
        *(unsigned short *)(puVar1 + 0x28) = (unsigned short)puVar1[0x28] & 0xff00;
        *puVar1 = *puVar1 | 0x10000;
      }
      return;
    }
  }
  return;
}

} /* extern "C" */
