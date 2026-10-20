/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_SequenceSoundPlayer_FinishPlayer` (_code @ 0x37f560, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int linkListEraseManagerNode(unsigned int, int);
int nw_snd_internal_driver_SequenceTrack_Close(void);

typedef int romwright_code(...);
/* Supplied declaration required: linkListEraseManagerNode. */
extern unsigned int nw_snd_internal_driver_SoundThread_GetInstance(void);
/* Supplied declaration required: nw_snd_internal_driver_SequenceTrack_Close. */


void nw_snd_internal_driver_SequenceSoundPlayer_FinishPlayer(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  if (*(char *)(param_1 + 0xd) != '\0') {
    temp_v0 = nw_snd_internal_driver_SoundThread_GetInstance();
    linkListEraseManagerNode(temp_v0,param_1 + 0x50);
    *(unsigned char *)(param_1 + 0xd) = 0;
  }
  temp_v1 = 0;
  do {
    if (temp_v1 < 0x10) {
      temp_v2 = param_1 + temp_v1 * 4;
      if (*(int *)(temp_v2 + 0x8c) != 0) {
        nw_snd_internal_driver_SequenceTrack_Close();
        (**(romwright_code **)(**(int **)(param_1 + 0x80) + 0xc))
                  (*(int **)(param_1 + 0x80),*(unsigned int *)(temp_v2 + 0x8c));
        *(unsigned int *)(temp_v2 + 0x8c) = 0;
      }
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x10);
  return;
}

} /* extern "C" */
