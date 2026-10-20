/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00153cd0` (_code @ 0x153cd0, 0x284 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018a45c(int);
int FUN_0018a8a8(int, int);
int FUN_0018a8c8(int, int);
int FUN_001b6390(int);
int FUN_001c7bf0(int, int);
int FUN_001c7c44(int, int *);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
} param_4_stack;

extern unsigned char LAB_00167e0c; /* 0x167e0c */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_0018a45c. */
extern int FUN_0018a46c(int);
extern int FUN_0018a480(int, unsigned int);
extern int FUN_0018a4d0(int, int);
/* Supplied declaration required: FUN_0018a8a8. */
/* Supplied declaration required: FUN_0018a8c8. */
extern int FUN_001af874(unsigned int, unsigned char *, int *);
/* Supplied declaration required: FUN_001b6390. */
/* Supplied declaration required: FUN_001c7bf0. */
/* Supplied declaration required: FUN_001c7c44. */
extern void nn_snd_CTR_InitializeWaveBuffer(unsigned int);
extern void nn_snd_CTR_Voice_SetMixParam(unsigned int, unsigned int);
extern void nn_snd_CTR_Voice_SetPitch(unsigned int, float);
extern void nn_snd_CTR_Voice_SetSampleRate(unsigned int, int);
extern int nw_snd_Sound3DManager_Initialize_128F9C(char, unsigned int);


void FUN_00153cd0(int *param_1,int param_2,unsigned int param_3,int param_4)

{
/* irregular: irregular input(s): in_s0, in_s1; 10 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  int temp_v1;
  float temp_v2;
  float temp_v3;
  int temp_v4;
  int unaff_r11;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned long long temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned long long temp_v8;
  unsigned long long temp_v9;
  
  if (param_1 != (int *)0x0) {
    temp_v5 = romwright_piece_4_4(in_s1,in_s0);
    if ((param_2 != 0) && (*param_1 == 0)) {
      param_1[0x39] = -1;
      param_1[0x3c] = param_4;
      param_1[0x3d] = 1;
      temp_v0 = FUN_0018a45c(param_2);
      *param_1 = temp_v0;
      temp_v0 = FUN_0018a46c(param_2);
      temp_v4 = 0;
      param_1[0x3b] = temp_v0;
      if (0 < temp_v0) {
        temp_v9 = 0;
        temp_v8 = 0x3f000000;
        do {
          pcVar2 = (char *)FUN_0018a45c(param_2);
          if (*pcVar2 == '\x02') {
            unaff_r11 = FUN_0018a480(param_2,0);
          }
          temp_v0 = FUN_0018a4d0(param_2,temp_v4);
          param_1[temp_v4 + 0x34] = temp_v0;
          temp_v1 = FUN_001af874(0,&LAB_00167e0c,param_1);
          param_1[temp_v4 + 0x1a] = temp_v1;
          if (*pcVar2 == '\x02') {
            FUN_001c7bf0(temp_v1,unaff_r11);
          }
          FUN_0018a8a8(param_1[temp_v4 + 0x1a],1);
          FUN_0018a8c8(param_1[temp_v4 + 0x1a],*pcVar2);
          nn_snd_CTR_Voice_SetSampleRate(param_1[temp_v4 + 0x1a],*(int *)(pcVar2 + 4));
          FUN_001b6390(param_1[temp_v4 + 0x1a]);
          nn_snd_CTR_Voice_SetPitch(param_1[temp_v4 + 0x1a],temp_v2);
          temp_v1 = (int)temp_v5;
          temp_v6 = (int)((unsigned long long)temp_v5 >> 0x20);
          temp_v7 = (int)temp_v8;
          if (param_1[0x3b] != 1) {
            if (temp_v4 != 0) {
              param_1[temp_v4 * 0xc + 0x1c] = (int)temp_v9;
              param_1[temp_v4 * 0xc + 0x1d] = temp_v7;
              param_1[temp_v4 * 0xc + 0x20] = temp_v1;
              param_1[temp_v4 * 0xc + 0x21] = temp_v1;
              param_1[temp_v4 * 0xc + 0x24] = temp_v6;
              param_1[temp_v4 * 0xc + 0x25] = temp_v6;
            }
            else {
              param_1[0x1c] = temp_v7;
              param_1[0x1d] = (int)temp_v9;
              param_1[0x20] = temp_v1;
              param_1[0x21] = temp_v1;
              param_1[0x24] = temp_v6;
              param_1[0x25] = temp_v6;
            }
          }
          else {
            param_1[temp_v4 * 0xc + 0x1c] = temp_v7;
            param_1[temp_v4 * 0xc + 0x1d] = temp_v7;
            param_1[temp_v4 * 0xc + 0x20] = temp_v1;
            param_1[temp_v4 * 0xc + 0x21] = temp_v1;
            param_1[temp_v4 * 0xc + 0x24] = temp_v6;
            param_1[temp_v4 * 0xc + 0x25] = temp_v6;
          }
          nn_snd_CTR_Voice_SetMixParam(param_1[temp_v4 + 0x1a],(unsigned int)(param_1 + temp_v4 * 0xc + 0x1c));
          FUN_001b6390(param_1[temp_v4 + 0x1a]);
          nn_snd_CTR_Voice_SetPitch(param_1[temp_v4 + 0x1a],temp_v3);
          temp_v1 = 0;
          do {
            nn_snd_CTR_InitializeWaveBuffer((unsigned int)(param_1 + (temp_v1 + temp_v4 * 2) * 6 + 2));
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < 2);
          param_1[temp_v4 * 0xc + 2] = temp_v0;
          param_1[temp_v4 * 0xc + 3] = *(int *)(pcVar2 + 0xc);
          *(unsigned char *)(param_1 + temp_v4 * 0xc + 6) = 0;
          if (*pcVar2 == '\x02') {
            param_1[temp_v4 * 0xc + 4] = unaff_r11 + 0x20;
          }
          FUN_001c7c44(param_1[temp_v4 + 0x1a],param_1 + temp_v4 * 0xc + 2);
          if (pcVar2[1] != '\0') {
            temp_v1 = nw_snd_Sound3DManager_Initialize_128F9C(*pcVar2,*(unsigned int *)(pcVar2 + 8));
            param_1[temp_v4 * 0xc + 8] = temp_v0 + temp_v1;
            param_1[temp_v4 * 0xc + 9] = *(int *)(pcVar2 + 0xc) - *(int *)(pcVar2 + 8);
            *(unsigned char *)(param_1 + temp_v4 * 0xc + 0xc) = 1;
            if (*pcVar2 == '\x02') {
              param_1[temp_v4 * 0xc + 10] = unaff_r11 + 0x26;
            }
            FUN_001c7c44(param_1[temp_v4 + 0x1a],param_1 + temp_v4 * 0xc + 8);
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < param_1[0x3b]);
      }
    }
    return;
  }
  return;
}

} /* extern "C" */
