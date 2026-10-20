/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_SequenceTrack_ReleaseAllChannel` (_code @ 0x37d8c8, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002358b4(int, unsigned int);
int FUN_0023592c(void);
int nw_snd_internal_driver_Channel_Release(int);

/* Supplied declaration required: FUN_002358b4. */
/* Supplied declaration required: FUN_0023592c. */
/* Supplied declaration required: nw_snd_internal_driver_Channel_Release. */


void nw_snd_internal_driver_SequenceTrack_ReleaseAllChannel(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  FUN_0023592c();
  for (temp_v0 = *(int *)(param_1 + 0xc4); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x138)) {
    if (*(char *)(temp_v0 + 0xc6) != '\0') {
      if (-1 < (int)param_2) {
        FUN_002358b4(temp_v0 + 0x90,param_2 & 0xff);
      }
      nw_snd_internal_driver_Channel_Release(temp_v0);
    }
  }
  return;
}

} /* extern "C" */
