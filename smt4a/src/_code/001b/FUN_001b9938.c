/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b9938` (_code @ 0x1b9938, 0x1e4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00646b38; /* 0x646b38 */

/* Supplied declaration required: FUN_001b6390. */
/* Supplied declaration required: FUN_001c4184. */
/* Supplied declaration required: nn_snd_CTR_Voice_SetPitch. */
/* Supplied declaration required: nn_snd_CTR_Voice_SetState. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_CalcMix. */


void FUN_001b9938(int param_1,unsigned int param_2,unsigned int param_3)

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
      FUN_001c4184(&DAT_00646b38);
      temp_v0 = 0;
      if (temp_v0 < *(int *)(param_1 + 8)) {
        do {
          if (*(int *)(param_1 + temp_v0 * 4) != 0) {
            FUN_001b6390();
          }
          temp_v0 = temp_v0 + 1;
        } while (temp_v0 < *(int *)(param_1 + 8));
      }
      *(unsigned char *)(param_1 + 0x16) = 1;
      temp_v0 = 1;
      *(unsigned short *)(param_1 + 0x20) = *(unsigned short *)(param_1 + 0x20) & 0xfff2;
    }
  }
  else if (*(char *)(param_1 + 0x16) == '\0') goto LAB_001b9a5c;
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
LAB_001b9a5c:
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
