/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045f834` (_code @ 0x45f834, 0x180 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int FUN_00175678(void);
/* Supplied declaration required: FUN_0017572c. */
/* Supplied declaration required: FUN_0019102c. */
/* Supplied declaration required: FUN_0045f740. */
/* Supplied declaration required: FUN_0045f7f4. */
/* Supplied declaration required: nw_snd_SoundHandle_DetachSound. */


void FUN_0045f834(int *param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned int temp_v2;
  
  if ((*(unsigned char *)((int)param_1 + 0x9f) != 0) && (*(unsigned char *)((int)param_1 + 0x9f) < 2)) {
    param_1[0x2c] = -1;
    if (param_1[2] != 0) {
      nw_snd_SoundHandle_DetachSound();
    }
    if (param_1[3] != 0) {
      nw_snd_SoundHandle_DetachSound();
    }
    temp_v0 = (**(romwright_code **)(*param_1 + 0x18))(param_1);
    if (temp_v0 != 0) {
      (**(romwright_code **)(*param_1 + 0x1c))(param_1);
    }
    if (param_1[4] != 0) {
      FUN_0045f740(param_1[4],param_1);
    }
    if (param_1[6] != 0) {
      FUN_0045f7f4(param_1[6],param_1);
    }
    piVar2 = (int *)param_1[9];
    if (piVar2 != (int *)0x0) {
      (**(romwright_code **)(*piVar2 + 0xc))(piVar2,param_1[10],param_1);
      param_1[10] = 0;
    }
    if (*(char *)((int)param_1 + 0x99) != '\0') {
      temp_v1 = FUN_00175678();
      temp_v0 = temp_v1;
      FUN_0019102c(temp_v1,6);
      *(unsigned int *)(temp_v0 + 0xc) = *(unsigned int *)(temp_v1 + 0x184);
      *(unsigned char *)(temp_v0 + 4) = 6;
      temp_v2 = (**(romwright_code **)(*param_1 + 0x20))(param_1);
      *(unsigned int *)(temp_v0 + 0x10) = temp_v2;
      *(unsigned char *)(temp_v0 + 0x14) = *(unsigned char *)((int)param_1 + 0x9b);
      FUN_0017572c(temp_v1,temp_v0);
      *(unsigned char *)((int)param_1 + 0x99) = 0;
    }
    *(unsigned char *)(param_1 + 0x27) = 0;
    *(unsigned char *)(param_1 + 0x28) = 2;
    temp_v1 = FUN_00175678();
    temp_v0 = temp_v1;
    FUN_0019102c(temp_v1,6);
    *(unsigned int *)(temp_v0 + 0xc) = *(unsigned int *)(temp_v1 + 0x184);
    *(unsigned char *)(temp_v0 + 4) = 4;
    temp_v2 = (**(romwright_code **)(*param_1 + 0x20))(param_1);
    *(unsigned int *)(temp_v0 + 0x10) = temp_v2;
    FUN_0017572c(temp_v1,temp_v0);
    if ((romwright_code *)param_1[0x3d] != (romwright_code *)0x0) {
      (*(romwright_code *)param_1[0x3d])();
      param_1[0x3d] = 0;
    }
    *(unsigned char *)((int)param_1 + 0x9b) = 0;
    *(unsigned char *)((int)param_1 + 0x9f) = 2;
  }
  return;
}
