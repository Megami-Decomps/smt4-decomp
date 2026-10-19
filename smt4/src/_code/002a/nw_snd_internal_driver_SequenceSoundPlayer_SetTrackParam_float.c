/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_SequenceSoundPlayer_SetTrackParam_float` (_code @ 0x2a1e9c, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void nw_snd_internal_driver_SequenceSoundPlayer_SetTrackParam_float
               (int param_1,unsigned int param_2,romwright_code *param_3,unsigned int param_4)

{
  int temp_v0;
  romwright_code *pcVar2;
  int temp_v1;
  
  temp_v1 = 0;
  do {
    if (param_2 == 0) {
      return;
    }
    if ((((param_2 & 1) != 0) && (temp_v1 < 0x10)) &&
       (temp_v0 = *(int *)(param_1 + temp_v1 * 4 + 0x8c), temp_v0 != 0)) {
      pcVar2 = param_3;
      if ((param_4 & 1) != 0) {
        pcVar2 = *(romwright_code **)((unsigned char *)param_3 + *(int *)(temp_v0 + ((int)param_4 >> 1)));
      }
      (*pcVar2)();
    }
    temp_v1 = temp_v1 + 1;
    param_2 = param_2 >> 1;
  } while (temp_v1 < 0x10);
  return;
}
