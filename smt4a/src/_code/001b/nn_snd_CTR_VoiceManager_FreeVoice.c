/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_VoiceManager_FreeVoice` (_code @ 0x1bd794, 0xb8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */
/* Supplied declaration required: nn_snd_CTR_Voice_SetState. */


void nn_snd_CTR_VoiceManager_FreeVoice(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  if ((*param_1 & (1 << (*param_2 & 0xff))) != 0) {
    if ((char)param_2[1] != '\x01') {
      nn_snd_CTR_Voice_SetState(param_2,1);
    }
    nn_os_CriticalSection_Enter();
    temp_v0 = param_2[9];
    temp_v1 = param_2[10];
    if (!(temp_v0 == 0 && temp_v1 == 0)) {
      if ((temp_v1 != 0) && (*(unsigned int *)(temp_v1 + 0x24) = temp_v0, temp_v0 == 0)) {
        param_1[1] = temp_v1;
      }
      if ((temp_v0 != 0) && (temp_v1 = param_2[10], *(unsigned int *)(temp_v0 + 0x28) = temp_v1, temp_v1 == 0)) {
        param_1[2] = temp_v0;
      }
    }
    else {
      param_1[1] = 0;
      param_1[2] = 0;
    }
    *param_1 = *param_1 & ~(1 << (*param_2 & 0xff));
    *(short *)(param_1 + 3) = (short)param_1[3] - 1;
    nn_os_CriticalSection_Leave(param_1 + 4);
    return;
  }
  return;
}
