/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001190b0` (_code @ 0x1190b0, 0x158 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001290cc(unsigned int, unsigned int, int, int, int);
int FUN_00147370(unsigned int);
int sndVoiceFree(unsigned int);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern unsigned char g_asdSoundStatus; /* 0x4e3154 */

/* Supplied declaration required: FUN_001190b0. */
/* Supplied declaration required: FUN_001290cc. */
/* Supplied declaration required: FUN_00147370. */
extern unsigned int FUN_002bd29c(unsigned int, unsigned int);
/* Supplied declaration required: sndVoiceFree. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);
extern void nn_snd_CTR_InitializeWaveBuffer(unsigned int);
extern void nn_snd_CTR_Voice_SetMixParam(unsigned int, unsigned int);
extern void nn_snd_CTR_Voice_SetPitch(unsigned int, float);
extern void nn_snd_CTR_Voice_SetState(unsigned int, int);


void FUN_001190b0(int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_s0; 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  float temp_v2;
  int temp_v3;
  unsigned int in_s0;
  
  if (param_1 == 0) {
    return;
  }
  if ((*(unsigned int *)(param_1 + 0x90) & 0x202) == 0) {
    nn_os_CriticalSection_Enter((unsigned int)&(*(unsigned char *)((unsigned char *)&g_asdSoundStatus + 0x8)));
    *(unsigned int *)(param_1 + 0x78) = param_2;
    *(unsigned int *)(param_1 + 0x84) = 0;
    *(unsigned int *)(param_1 + 0x94) = in_s0;
    FUN_00147370(*(unsigned int *)(param_1 + 0x38));
    nn_snd_CTR_Voice_SetState(*(unsigned int *)(param_1 + 0x38),0);
    temp_v1 = *(unsigned int *)(param_1 + 0x90);
    *(unsigned int *)(param_1 + 0x90) = temp_v1 | 0x40;
    if (0 < *(int *)(param_1 + 0x78)) {
      *(unsigned int *)(param_1 + 0x90) = temp_v1 | 0x60;
    }
    nn_os_CriticalSection_Leave((unsigned int)&(*(unsigned char *)((unsigned char *)&g_asdSoundStatus + 0x8)));
    return;
  }
  if ((*(unsigned int *)(param_1 + 0x90) & 0x200) == 0) {
    return;
  }
  nn_os_CriticalSection_Enter((unsigned int)&(*(unsigned char *)((unsigned char *)&g_asdSoundStatus + 0x8)));
  sndVoiceFree(*(unsigned int *)(param_1 + 0x38));
  temp_v0 = FUN_002bd29c(0x7fff,0);
  *(unsigned int *)(param_1 + 0x38) = temp_v0;
  nn_snd_CTR_Voice_SetMixParam(temp_v0,param_1 + 0x3c);
  nn_snd_CTR_Voice_SetPitch(*(unsigned int *)(param_1 + 0x38),temp_v2);
  temp_v3 = 0;
  *(unsigned int *)(param_1 + 0x90) = 0;
  do {
    nn_snd_CTR_InitializeWaveBuffer(param_1 + temp_v3 * 0x18 + 8);
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 2);
  FUN_001290cc(*(unsigned int *)(param_1 + 0x38),*(unsigned int *)(param_1 + 0x6c),param_1 + 8,
               param_1 + 0x20,0);
  FUN_001190b0(param_1,param_2);
  nn_os_CriticalSection_Leave((unsigned int)&(*(unsigned char *)((unsigned char *)&g_asdSoundStatus + 0x8)));
  return;
}

} /* extern "C" */
