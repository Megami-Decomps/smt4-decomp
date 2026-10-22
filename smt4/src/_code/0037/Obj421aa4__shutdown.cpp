/* NON_MATCHING: Request-list notification and sound-release calls retain different owner registers and flag-access widths. */
#include "romwright_types.h"
#include "classes/Obj421aa4.h"

extern "C" {

int listAppendNode(int, int);
int FUN_002b4f64(int, int);
int nw_snd_SoundHandle_DetachSound(void);
int nw_snd_SoundPlayer_detail_FreePlayerHeap(int, int *);
int nw_snd_SoundPlayer_detail_RemoveSound(int, int *);
int nw_snd_internal_ExternalSoundPlayer_RemoveSound(int, int *);

typedef int romwright_code(...);
/* Supplied declaration required: listAppendNode. */
/* Supplied declaration required: FUN_002b4f64. */
extern int FUN_002baed8(void);
/* Supplied declaration required: nw_snd_SoundHandle_DetachSound. */
/* Supplied declaration required: nw_snd_SoundPlayer_detail_FreePlayerHeap. */
/* Supplied declaration required: nw_snd_SoundPlayer_detail_RemoveSound. */
/* Supplied declaration required: nw_snd_internal_ExternalSoundPlayer_RemoveSound. */


} /* extern "C" */

void Obj421aa4::shutdown()

{
    int *param_1 = (int *)this;
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int *piVar4;
  
  if ((char)param_1[0x21] != '\0') {
    if (*(char *)((int)param_1 + 0x86) != '\0') {
      temp_v0 = FUN_002baed8();
      temp_v2 = temp_v0;
      FUN_002b4f64(temp_v0,6);
      *(unsigned int *)(temp_v2 + 0xc) = *(unsigned int *)(temp_v0 + 0x184);
      *(unsigned char *)(temp_v2 + 4) = 6;
      temp_v1 = (**(romwright_code **)(*param_1 + 0x20))(param_1);
      *(unsigned int *)(temp_v2 + 0x10) = temp_v1;
      *(char *)(temp_v2 + 0x14) = (char)param_1[0x22];
      listAppendNode(temp_v0,temp_v2);
    }
    *(unsigned char *)((int)param_1 + 0x89) = 0;
    *(unsigned char *)((int)param_1 + 0x8a) = 2;
    param_1[0x27] = -1;
    if (param_1[2] != 0) {
      nw_snd_SoundHandle_DetachSound();
    }
    if (param_1[3] != 0) {
      nw_snd_SoundHandle_DetachSound();
    }
    temp_v2 = (**(romwright_code **)(*param_1 + 0x18))(param_1);
    if (temp_v2 != 0) {
      (**(romwright_code **)(*param_1 + 0x1c))(param_1);
    }
    if (param_1[1] != 0) {
      nw_snd_SoundPlayer_detail_FreePlayerHeap(param_1[4],param_1);
    }
    if (param_1[4] != 0) {
      nw_snd_SoundPlayer_detail_RemoveSound(param_1[4],param_1);
    }
    if (param_1[6] != 0) {
      nw_snd_internal_ExternalSoundPlayer_RemoveSound(param_1[6],param_1);
    }
    piVar4 = (int *)param_1[9];
    if (piVar4 != (int *)0x0) {
      (**(romwright_code **)(*piVar4 + 0xc))(piVar4,param_1[10],param_1);
      param_1[10] = 0;
    }
    *(unsigned char *)((int)param_1 + 0x86) = 0;
    *(unsigned char *)(param_1 + 0x22) = 0;
    temp_v0 = FUN_002baed8();
    temp_v2 = temp_v0;
    FUN_002b4f64(temp_v0,6);
    *(unsigned int *)(temp_v2 + 0xc) = *(unsigned int *)(temp_v0 + 0x184);
    *(unsigned char *)(temp_v2 + 4) = 4;
    temp_v1 = (**(romwright_code **)(*param_1 + 0x20))(param_1);
    *(unsigned int *)(temp_v2 + 0x10) = temp_v1;
    listAppendNode(temp_v0,temp_v2);
    *(unsigned char *)(param_1 + 0x21) = 0;
  }
  return;
}

