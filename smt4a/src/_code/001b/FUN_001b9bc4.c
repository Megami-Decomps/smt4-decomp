/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b9bc4` (_code @ 0x1b9bc4, 0x394 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern unsigned int FUN_00191548(void);
/* Supplied declaration required: FUN_001b2040. */
/* Supplied declaration required: FUN_001c18e0. */
/* Supplied declaration required: FUN_001c1a88. */
/* Supplied declaration required: FUN_001c1bb4. */
/* Supplied declaration required: FUN_001c373c. */
/* Supplied declaration required: FUN_001c422c. */
extern int aeabi_idivmod(int);
/* Supplied declaration required: nw_snd_internal_CurveAdshr_GetValue. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_Free. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_SetBiquadFilter. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_SetFxSend. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_SetLpfFreq. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_SetMainSend. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_SetPan. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_SetPitch. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_SetSurroundPan. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_SetVolume. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_Stop. */


void FUN_001b9bc4(int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 19 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned short temp_v4;
  unsigned int in_fpscr;
  unsigned int temp_v5;
  float temp_v6;
  float temp_v7;
  
  if (*(char *)(param_1 + 0x139) != '\0') {
    if (*(char *)(param_1 + 0x138) != '\0') {
      param_2 = 0;
    }
    temp_v4 = *(unsigned short *)(param_1 + 0x184);
    if (temp_v4 < *(unsigned short *)(param_1 + 0x182)) {
      temp_v4 = temp_v4 + 1;
      *(unsigned short *)(param_1 + 0x184) = temp_v4;
    }
    if ((unsigned int)temp_v4 >= (unsigned int)*(unsigned short *)(param_1 + 0x182)) {
      temp_v1 = (unsigned int)*(unsigned char *)(param_1 + 0x181);
    }
    else {
      temp_v0 = *(unsigned char *)(param_1 + 0x180);
      temp_v2 = aeabi_idivmod(((unsigned int)*(unsigned char *)(param_1 + 0x181) - (unsigned int)temp_v0) * (unsigned int)temp_v4);
      temp_v1 = (temp_v2 + (unsigned int)temp_v0) & 0xff;
    }
    temp_v5 = 0x3b808081;
    VectorUnsignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    if ((*(char *)(param_1 + 0x98) == '\x04') &&
       (nw_snd_internal_CurveAdshr_GetValue(param_1 + 0x98), 0xc2b4cccd < temp_v5)) {
      if (*(int *)(param_1 + 0x1a8) != 0) {
        nw_snd_internal_driver_Voice_Stop();
        nw_snd_internal_driver_Voice_Free(*(unsigned int *)(param_1 + 0x1a8));
        *(unsigned int *)(param_1 + 0x1a8) = 0;
        *(unsigned char *)(param_1 + 0x138) = 0;
        *(unsigned char *)(param_1 + 0x139) = 0;
        if (*(romwright_code **)(param_1 + 0x1a0) != (romwright_code *)0x0) {
          (**(romwright_code **)(param_1 + 0x1a0))(param_1,0,*(unsigned int *)(param_1 + 0x1a4));
        }
        if (*(char *)(param_1 + 0x13a) != '\0') {
          *(unsigned char *)(param_1 + 0x13a) = 0;
          temp_v3 = FUN_00191548();
          FUN_001b2040(temp_v3,param_1);
          return;
        }
      }
    }
    else {
      temp_v6 = 0.0f;
      temp_v1 = (in_fpscr & 0xfffffff) | ((unsigned int)(*(float *)(param_1 + 0x168) == 0.0f) << 0x1e);
      if (!romwright_subpiece_4_1_0(temp_v1 >> 0x1e,0)) {
        temp_v2 = *(int *)(param_1 + 0x170);
        if (*(int *)(param_1 + 0x16c) < temp_v2) {
          temp_v6 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(temp_v1 >> 0x16) & 3);
          temp_v7 = (float)VectorSignedToFloat(temp_v2 - *(int *)(param_1 + 0x16c),
                                             (unsigned char)(temp_v1 >> 0x16) & 3);
          temp_v6 = (temp_v7 * *(float *)(param_1 + 0x168)) / temp_v6;
        }
      }
      temp_v2 = 0;
      temp_v7 = (float)VectorSignedToFloat((unsigned int)*(unsigned char *)(param_1 + 0x194) -
                                         (unsigned int)*(unsigned char *)(param_1 + 0x195),(unsigned char)(temp_v1 >> 0x16) & 3)
      ;
      temp_v6 = temp_v6 + temp_v7;
      temp_v7 = temp_v6 + *(float *)(param_1 + 0x164);
      do {
        if (*(char *)(param_1 + temp_v2 + 0x134) == '\0') {
          FUN_001c422c(param_1 + temp_v2 * 0x20 + 0xb4);
          temp_v7 = temp_v6 + temp_v7;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 4);
      if (*(float *)(param_1 + 0x188) != temp_v7) {
        temp_v2 = (int)(temp_v7 * 256.0f);
        FUN_001c1a88(temp_v2);
        *(float *)(param_1 + 0x188) = temp_v7;
        *(int *)(param_1 + 0x18c) = temp_v2;
      }
      temp_v2 = 0;
      do {
        if (*(char *)(param_1 + temp_v2 + 0x134) == '\x02') {
          FUN_001c422c(param_1 + temp_v2 * 0x20 + 0xb4);
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 4);
      if (param_2 != 0) {
        if (*(char *)(param_1 + 0x13b) != '\0') {
          temp_v2 = *(int *)(param_1 + 0x16c) + 5;
          *(int *)(param_1 + 0x16c) = temp_v2;
          if (*(int *)(param_1 + 0x170) < temp_v2) {
            temp_v2 = *(int *)(param_1 + 0x170);
          }
          *(int *)(param_1 + 0x16c) = temp_v2;
        }
        temp_v2 = 0;
        do {
          FUN_001c373c(param_1 + temp_v2 * 0x20 + 0xb4,5);
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < 4);
        FUN_001c18e0(param_1 + 0x98,5);
      }
      nw_snd_internal_CurveAdshr_GetValue(param_1 + 0x98);
      FUN_001c1bb4();
      temp_v2 = 0;
      do {
        if (*(char *)(param_1 + temp_v2 + 0x134) == '\x01') {
          FUN_001c422c(param_1 + temp_v2 * 0x20 + 0xb4);
          FUN_001c1bb4();
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 4);
      if (*(int *)(param_1 + 0x1a8) != 0) {
        nw_snd_internal_driver_Voice_SetVolume();
        nw_snd_internal_driver_Voice_SetPitch(*(unsigned int *)(param_1 + 0x1a8));
        nw_snd_internal_driver_Voice_SetPan(*(unsigned int *)(param_1 + 0x1a8));
        nw_snd_internal_driver_Voice_SetSurroundPan(*(unsigned int *)(param_1 + 0x1a8));
        nw_snd_internal_driver_Voice_SetLpfFreq(*(unsigned int *)(param_1 + 0x1a8));
        nw_snd_internal_driver_Voice_SetBiquadFilter
                  (*(unsigned int *)(param_1 + 0x1a8),*(unsigned char *)(param_1 + 0x13e));
        nw_snd_internal_driver_Voice_SetMainSend(*(unsigned int *)(param_1 + 0x1a8));
        temp_v1 = 0;
        do {
          nw_snd_internal_driver_Voice_SetFxSend(*(unsigned int *)(param_1 + 0x1a8),temp_v1 & 0xff);
          temp_v1 = temp_v1 + 1;
        } while ((int)temp_v1 < 2);
      }
    }
  }
  return;
}
