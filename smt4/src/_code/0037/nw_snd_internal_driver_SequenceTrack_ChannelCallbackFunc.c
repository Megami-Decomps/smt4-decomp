/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_SequenceTrack_ChannelCallbackFunc` (_code @ 0x37d91c, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: nw_snd_internal_driver_Channel_FreeChannel. */


void nw_snd_internal_driver_SequenceTrack_ChannelCallbackFunc(int param_1,int param_2,int param_3)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  
  if (param_2 == 0 || param_2 == 2) {
    nw_snd_internal_driver_Channel_FreeChannel();
    param_2 = temp_v1;
  }
  piVar1 = *(int **)(param_3 + 0xc0);
  if (piVar1 != (int *)0x0) {
    (**(romwright_code **)(*piVar1 + 0x20))(piVar1,param_1);
    param_2 = temp_v2;
  }
  temp_v0 = *(int *)(param_3 + 0xc4);
  temp_v4 = temp_v0 != param_1;
  if (temp_v4) {
    param_2 = *(int *)(temp_v0 + 0x138);
  }
  else {
    temp_v0 = *(int *)(param_1 + 0x138);
    *(int *)(param_3 + 0xc4) = temp_v0;
  }
  if (temp_v4 && param_2 != 0) {
    while (temp_v3 = *(int *)(temp_v0 + 0x138), temp_v3 != param_1) {
      temp_v0 = temp_v3;
      if (*(int *)(temp_v3 + 0x138) == 0) {
        return;
      }
    }
    *(unsigned int *)(temp_v0 + 0x138) = *(unsigned int *)(param_1 + 0x138);
  }
  return;
}
