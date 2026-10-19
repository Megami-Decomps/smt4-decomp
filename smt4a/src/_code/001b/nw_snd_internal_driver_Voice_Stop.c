/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_Voice_Stop` (_code @ 0x1b98dc, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern void nn_snd_CTR_Voice_SetState(unsigned int, int);


void nw_snd_internal_driver_Voice_Stop(int param_1)

{
  int temp_v0;
  int temp_v1;
  
  if (*(char *)(param_1 + 0x16) != '\0') {
    temp_v1 = 0;
    if (temp_v1 < *(int *)(param_1 + 8)) {
      do {
        temp_v0 = *(int *)(param_1 + temp_v1 * 4);
        if (temp_v0 != 0) {
          nn_snd_CTR_Voice_SetState(temp_v0,1);
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < *(int *)(param_1 + 8));
    }
    *(unsigned char *)(param_1 + 0x16) = 0;
  }
  *(unsigned char *)(param_1 + 0x18) = 0;
  *(unsigned char *)(param_1 + 0x17) = 0;
  *(unsigned char *)(param_1 + 0x15) = 0;
  return;
}
