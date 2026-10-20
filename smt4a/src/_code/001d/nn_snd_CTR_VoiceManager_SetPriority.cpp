/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_VoiceManager_SetPriority` (_code @ 0x1d3c08, 0xdc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


void nn_snd_CTR_VoiceManager_SetPriority(int param_1,int param_2,int param_3)

{
  int temp_v0;
  int temp_v1;
  
  nn_os_CriticalSection_Enter(param_1 + 0x10);
  temp_v0 = *(int *)(param_2 + 0x24);
  temp_v1 = *(int *)(param_2 + 0x28);
  if (temp_v0 == 0 && temp_v1 == 0) {
    *(unsigned int *)(param_1 + 4) = 0;
    *(unsigned int *)(param_1 + 8) = 0;
  }
  else {
    if ((temp_v1 != 0) && (*(int *)(temp_v1 + 0x24) = temp_v0, temp_v0 == 0)) {
      *(int *)(param_1 + 4) = temp_v1;
    }
    if ((temp_v0 != 0) &&
       (temp_v1 = *(int *)(param_2 + 0x28), *(int *)(temp_v0 + 0x28) = temp_v1, temp_v1 == 0)) {
      *(int *)(param_1 + 8) = temp_v0;
    }
  }
  temp_v0 = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 4) != 0) {
    do {
      temp_v1 = temp_v0;
      if (*(int *)(temp_v1 + 0x20) <= param_3) {
        temp_v0 = *(int *)(temp_v1 + 0x24);
        *(int *)(param_2 + 0x24) = temp_v0;
        *(int *)(param_2 + 0x28) = temp_v1;
        if (temp_v0 != 0) {
          *(int *)(temp_v0 + 0x28) = param_2;
        }
        else {
          *(unsigned int *)(param_2 + 0x24) = 0;
          *(int *)(param_1 + 4) = param_2;
        }
        *(int *)(temp_v1 + 0x24) = param_2;
        nn_os_CriticalSection_Leave(param_1 + 0x10);
        return;
      }
      temp_v0 = *(int *)(temp_v1 + 0x28);
    } while (*(int *)(temp_v1 + 0x28) != 0);
    *(int *)(temp_v1 + 0x28) = param_2;
    *(int *)(param_2 + 0x24) = temp_v1;
    *(unsigned int *)(param_2 + 0x28) = 0;
  }
  else {
    *(unsigned int *)(param_2 + 0x24) = 0;
    *(int *)(param_1 + 4) = param_2;
    *(unsigned int *)(param_2 + 0x28) = 0;
  }
  *(int *)(param_1 + 8) = param_2;
  nn_os_CriticalSection_Leave(param_1 + 0x10);
  return;
}

} /* extern "C" */
