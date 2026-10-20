/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_VoiceImpl_ReleaseWaveBuffer` (_code @ 0x15a414, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


void nn_snd_CTR_VoiceImpl_ReleaseWaveBuffer(int param_1)

{
  int temp_v0;
  
  nn_os_CriticalSection_Enter(param_1 + 0x70);
  temp_v0 = *(int *)(param_1 + 0x30);
  while (temp_v0 != 0) {
    *(unsigned char *)(temp_v0 + 0x11) = 3;
    temp_v0 = *(int *)(temp_v0 + 0x14);
  }
  *(unsigned int *)(param_1 + 0x30) = 0;
  *(unsigned short *)(param_1 + 0x34) = 0;
  *(unsigned short *)(param_1 + 0x36) = 0;
  nn_os_CriticalSection_Leave(param_1 + 0x70);
  *(unsigned short *)(param_1 + 0x6c) = *(unsigned short *)(param_1 + 0x6c) | 0x8000;
  *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
  return;
}

} /* extern "C" */
