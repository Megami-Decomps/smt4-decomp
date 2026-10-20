/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b9690` (_code @ 0x1b9690, 0x23c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b6390(void);
int FUN_001c4184(unsigned char *);
int nn_snd_CTR_Voice_SetMonoFilterCoefficients(int, unsigned int);
int nw_snd_internal_driver_Voice_CalcMix(int);

typedef int romwright_code(...);
extern unsigned char DAT_00646b38; /* 0x646b38 */

/* Supplied declaration required: FUN_001b6390. */
extern unsigned int FUN_001c19f0(void);
/* Supplied declaration required: FUN_001c4184. */
extern void nn_snd_CTR_Voice_EnableBiquadFilter(unsigned int, unsigned char);
extern void nn_snd_CTR_Voice_EnableMonoFilter(unsigned int, unsigned char);
extern void nn_snd_CTR_Voice_SetBiquadFilterCoefficients(unsigned int, unsigned int);
/* Supplied declaration required: nn_snd_CTR_Voice_SetMonoFilterCoefficients. */
extern void nn_snd_CTR_Voice_SetPitch(unsigned int, float);
/* Supplied declaration required: nw_snd_internal_driver_Voice_CalcMix. */


void FUN_001b9690(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  float temp_v2;
  float temp_v3;
  int temp_v4;
  int *piVar5;
  unsigned char temp_v5;
  unsigned char temp_v6;
  unsigned long long temp_v7;
  unsigned char temp_v8 [24];
  
  if (*(char *)(param_1 + 0x15) != '\0') {
    if ((*(unsigned short *)(param_1 + 0x20) & 4) != 0) {
      temp_v2 = 255.0f;
      temp_v4 = 0;
      if (temp_v4 < *(int *)(param_1 + 8)) {
        do {
          temp_v0 = *(int *)(param_1 + temp_v4 * 4);
          if (temp_v0 != 0) {
            nn_snd_CTR_Voice_SetPitch(temp_v0,temp_v2);
            temp_v2 = temp_v3;
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < *(int *)(param_1 + 8));
      }
      *(unsigned short *)(param_1 + 0x20) = *(unsigned short *)(param_1 + 0x20) & 0xfffb;
    }
    if ((*(unsigned short *)(param_1 + 0x20) & 0x40) != 0) {
      FUN_001c4184(&DAT_00646b38);
      temp_v4 = 0;
      if (temp_v4 < *(int *)(param_1 + 8)) {
        do {
          if (*(int *)(param_1 + temp_v4 * 4) != 0) {
            FUN_001b6390();
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < *(int *)(param_1 + 8));
      }
      *(unsigned short *)(param_1 + 0x20) = *(unsigned short *)(param_1 + 0x20) & 0xffbf;
    }
    if ((*(unsigned short *)(param_1 + 0x20) & 8) != 0) {
      nw_snd_internal_driver_Voice_CalcMix(param_1);
      *(unsigned short *)(param_1 + 0x20) = *(unsigned short *)(param_1 + 0x20) & 0xfff7;
    }
    if ((*(unsigned short *)(param_1 + 0x20) & 0x10) != 0) {
      temp_v1 = FUN_001c19f0();
      temp_v4 = 0;
      if (temp_v4 < *(int *)(param_1 + 8)) {
        do {
          temp_v0 = *(int *)(param_1 + temp_v4 * 4);
          if (temp_v0 != 0) {
            if (temp_v1 >= 16000) {
              nn_snd_CTR_Voice_EnableMonoFilter(temp_v0,0);
            }
            else {
              nn_snd_CTR_Voice_EnableMonoFilter(temp_v0,1);
              nn_snd_CTR_Voice_SetMonoFilterCoefficients(temp_v0,temp_v1);
            }
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < *(int *)(param_1 + 8));
      }
      *(unsigned short *)(param_1 + 0x20) = *(unsigned short *)(param_1 + 0x20) & 0xffef;
    }
    if ((*(unsigned short *)(param_1 + 0x20) & 0x20) != 0) {
      temp_v4 = 0;
      if (0 < *(int *)(param_1 + 8)) {
        temp_v7 = 0;
        do {
          temp_v0 = *(int *)(param_1 + temp_v4 * 4);
          if (temp_v0 != 0) {
            piVar5 = *(int **)((unsigned int)*(unsigned char *)(param_1 + 0x22) * 4 + 0x646bac);
            temp_v6 = piVar5 == (int *)0x0;
            temp_v5 = 1;
            if (!temp_v6) {
              temp_v6 = *(float *)(param_1 + 0x3c) == (float)temp_v7;
              temp_v5 = (float)temp_v7 <= *(float *)(param_1 + 0x3c);
            }
            if (!(temp_v5 && !temp_v6)) {
              nn_snd_CTR_Voice_EnableBiquadFilter(temp_v0,0);
            }
            else {
              nn_snd_CTR_Voice_EnableBiquadFilter(temp_v0,1);
              (**(romwright_code **)(*piVar5 + 8))(piVar5,*(unsigned char *)(param_1 + 0x22),temp_v8);
              nn_snd_CTR_Voice_SetBiquadFilterCoefficients(temp_v0,(unsigned int)temp_v8);
            }
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < *(int *)(param_1 + 8));
      }
      *(unsigned short *)(param_1 + 0x20) = *(unsigned short *)(param_1 + 0x20) & 0xffdf;
    }
  }
  return;
}

} /* extern "C" */
