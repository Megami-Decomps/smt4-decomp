/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00155124` (_code @ 0x155124, 0x1d4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004ea168; /* 0x4ea168 */

/* Supplied declaration required: FUN_00147370. */
/* Supplied declaration required: nn_snd_CTR_Voice_SetPitch. */
/* Supplied declaration required: nn_snd_CTR_Voice_SetState. */
/* Supplied declaration required: nw_snd_internal_driver_HardwareManager_GetOutputVolume. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_CalcMix. */


void FUN_00155124(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 goto(s); 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned short temp_v2;
  unsigned char temp_v3;
  
  if (*(char *)(param_1 + 0x14) == '\0') {
    return;
  }
  temp_v2 = *(unsigned short *)(param_1 + 0x20);
  temp_v0 = 0;
  temp_v3 = (temp_v2 & 1) == 0;
  if (!temp_v3) {
    temp_v2 = (unsigned short)*(unsigned char *)(param_1 + 0x15);
  }
  if (!(temp_v3 || temp_v2 == 0)) {
    if (*(char *)(param_1 + 0x16) == '\0') {
      temp_v0 = 0;
      if (temp_v0 < *(int *)(param_1 + 8)) {
        do {
          if (*(int *)(param_1 + temp_v0 * 4) != 0) {
            nn_snd_CTR_Voice_SetPitch();
          }
          temp_v0 = temp_v0 + 1;
        } while (temp_v0 < *(int *)(param_1 + 8));
      }
      nw_snd_internal_driver_Voice_CalcMix(param_1);
      nw_snd_internal_driver_HardwareManager_GetOutputVolume(&DAT_004ea168);
      temp_v0 = 0;
      if (temp_v0 < *(int *)(param_1 + 8)) {
        do {
          if (*(int *)(param_1 + temp_v0 * 4) != 0) {
            FUN_00147370();
          }
          temp_v0 = temp_v0 + 1;
        } while (temp_v0 < *(int *)(param_1 + 8));
      }
      *(unsigned char *)(param_1 + 0x16) = 1;
      temp_v0 = 1;
      *(unsigned short *)(param_1 + 0x20) = *(unsigned short *)(param_1 + 0x20) & 0xfff2;
    }
  }
  else if (*(char *)(param_1 + 0x16) == '\0') goto LAB_00155238;
  temp_v3 = (*(unsigned short *)(param_1 + 0x20) & 2) != 0;
  if (temp_v3) {
    param_3 = (unsigned int)*(unsigned char *)(param_1 + 0x15);
  }
  if (temp_v3 && param_3 != 0) {
    if (*(char *)(param_1 + 0x17) != '\0') {
      *(unsigned char *)(param_1 + 0x18) = 1;
      temp_v0 = 3;
    }
    else {
      *(unsigned char *)(param_1 + 0x18) = 0;
      temp_v0 = 1;
    }
    *(unsigned short *)(param_1 + 0x20) = *(unsigned short *)(param_1 + 0x20) & 0xfffd;
  }
LAB_00155238:
  if (temp_v0 != 1) {
    if (temp_v0 != 2) {
      if ((temp_v0 == 3) && (temp_v0 = 0, 0 < *(int *)(param_1 + 8))) {
        do {
          temp_v1 = *(int *)(param_1 + temp_v0 * 4);
          if (temp_v1 != 0) {
            nn_snd_CTR_Voice_SetState(temp_v1,2);
          }
          temp_v0 = temp_v0 + 1;
        } while (temp_v0 < *(int *)(param_1 + 8));
      }
    }
    else {
      temp_v0 = 0;
      if (0 < *(int *)(param_1 + 8)) {
        do {
          temp_v1 = *(int *)(param_1 + temp_v0 * 4);
          if (temp_v1 != 0) {
            nn_snd_CTR_Voice_SetState(temp_v1,1);
          }
          temp_v0 = temp_v0 + 1;
        } while (temp_v0 < *(int *)(param_1 + 8));
        return;
      }
    }
  }
  else {
    temp_v0 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        temp_v1 = *(int *)(param_1 + temp_v0 * 4);
        if (temp_v1 != 0) {
          nn_snd_CTR_Voice_SetState(temp_v1,0);
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < *(int *)(param_1 + 8));
      return;
    }
  }
  return;
}
