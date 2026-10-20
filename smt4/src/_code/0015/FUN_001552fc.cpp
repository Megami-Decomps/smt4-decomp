/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001552fc` (_code @ 0x1552fc, 0x320 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00157110(int, int);
int FUN_001572b8(int);
int FUN_001573e4(void);
int FUN_00158f90(int);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(unsigned int, int);
int nw_snd_internal_CurveAdshr_GetValue(int);
int nw_snd_internal_CurveLfo_Update(int, int);
int nw_snd_internal_driver_ChannelManager_Free(unsigned int, int);
int nw_snd_internal_driver_Voice_Free(unsigned int);
int nw_snd_internal_driver_Voice_SetBiquadFilter(unsigned int, int);
int nw_snd_internal_driver_Voice_SetFxSend(unsigned int, unsigned int);
int nw_snd_internal_driver_Voice_SetLpfFreq(unsigned int);
int nw_snd_internal_driver_Voice_SetMainSend(unsigned int);
int nw_snd_internal_driver_Voice_SetPan(unsigned int);
int nw_snd_internal_driver_Voice_SetPitch(unsigned int);
int nw_snd_internal_driver_Voice_SetSurroundPan(unsigned int);
int nw_snd_internal_driver_Voice_SetVolume(void);
int nw_snd_internal_driver_Voice_Stop(void);

typedef int romwright_code(...);
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
/* Supplied declaration required: FUN_00157110. */
/* Supplied declaration required: FUN_001572b8. */
/* Supplied declaration required: FUN_001573e4. */
/* Supplied declaration required: FUN_00158f90. */
extern unsigned int FUN_002bafb0(void);
extern int aeabi_idivmod(unsigned int);
/* Supplied declaration required: nw_snd_internal_CurveAdshr_GetValue. */
/* Supplied declaration required: nw_snd_internal_CurveLfo_Update. */
/* Supplied declaration required: nw_snd_internal_driver_ChannelManager_Free. */
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


void FUN_001552fc(int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 19 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned short temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  float temp_v6;
  
  if (*(char *)(param_1 + 0xc6) != '\0') {
    if (*(char *)(param_1 + 0xc5) != '\0') {
      param_2 = 0;
    }
    temp_v4 = *(unsigned short *)(param_1 + 0x114);
    if (temp_v4 < *(unsigned short *)(param_1 + 0x112)) {
      temp_v4 = temp_v4 + 1;
      *(unsigned short *)(param_1 + 0x114) = temp_v4;
    }
    if ((unsigned int)temp_v4 >= (unsigned int)*(unsigned short *)(param_1 + 0x112)) {
      temp_v1 = (unsigned int)*(unsigned char *)(param_1 + 0x111);
    }
    else {
      temp_v0 = *(unsigned char *)(param_1 + 0x110);
      temp_v2 = aeabi_idivmod(((unsigned int)*(unsigned char *)(param_1 + 0x111) - (unsigned int)temp_v0) * (unsigned int)temp_v4);
      temp_v1 = (temp_v2 + (unsigned int)temp_v0) & 0xff;
    }
    temp_v5 = (float)VectorUnsignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v5 = temp_v5 * 0.003921569f;
    if ((*(char *)(param_1 + 0x90) == '\x04') &&
       (nw_snd_internal_CurveAdshr_GetValue(param_1 + 0x90), 0xc2b4cccd < (unsigned int)temp_v5)) {
      if (*(int *)(param_1 + 0x134) != 0) {
        nw_snd_internal_driver_Voice_Stop();
        nw_snd_internal_driver_Voice_Free(*(unsigned int *)(param_1 + 0x134));
        *(unsigned int *)(param_1 + 0x134) = 0;
        *(unsigned char *)(param_1 + 0xc5) = 0;
        *(unsigned char *)(param_1 + 0xc6) = 0;
        if (*(romwright_code **)(param_1 + 300) != (romwright_code *)0x0) {
          (**(romwright_code **)(param_1 + 300))(param_1,0,*(unsigned int *)(param_1 + 0x130));
        }
        if (*(char *)(param_1 + 199) != '\0') {
          *(unsigned char *)(param_1 + 199) = 0;
          temp_v3 = FUN_002bafb0();
          nw_snd_internal_driver_ChannelManager_Free(temp_v3,param_1);
          return;
        }
      }
    }
    else {
      temp_v5 = 0.0f;
      temp_v1 = (in_fpscr & 0xfffffff) | ((unsigned int)(*(float *)(param_1 + 0xf4) == 0.0f) << 0x1e);
      if (!romwright_subpiece_4_1_0(temp_v1 >> 0x1e,0)) {
        temp_v2 = *(int *)(param_1 + 0xfc);
        if (*(int *)(param_1 + 0xf8) < temp_v2) {
          temp_v5 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(temp_v1 >> 0x16) & 3);
          temp_v6 = (float)VectorSignedToFloat(temp_v2 - *(int *)(param_1 + 0xf8),
                                             (unsigned char)(temp_v1 >> 0x16) & 3);
          temp_v5 = (temp_v6 * *(float *)(param_1 + 0xf4)) / temp_v5;
        }
      }
      temp_v6 = (float)VectorSignedToFloat((unsigned int)*(unsigned char *)(param_1 + 0x126) -
                                         (unsigned int)*(unsigned char *)(param_1 + 0x127),(unsigned char)(temp_v1 >> 0x16) & 3)
      ;
      temp_v5 = temp_v5 + temp_v6;
      temp_v6 = temp_v5 + *(float *)(param_1 + 0xf0);
      if (*(char *)(param_1 + 0xc4) == '\0') {
        FUN_00158f90(param_1 + 0xac);
        temp_v6 = temp_v5 + temp_v6;
      }
      if (*(float *)(param_1 + 0x118) != temp_v6) {
        temp_v2 = (int)(temp_v6 * 256.0f);
        FUN_001572b8(temp_v2);
        *(float *)(param_1 + 0x118) = temp_v6;
        *(int *)(param_1 + 0x11c) = temp_v2;
      }
      if (*(char *)(param_1 + 0xc4) == '\x02') {
        FUN_00158f90(param_1 + 0xac);
      }
      if (param_2 != 0) {
        if (*(char *)(param_1 + 200) != '\0') {
          temp_v2 = *(int *)(param_1 + 0xf8) + 5;
          *(int *)(param_1 + 0xf8) = temp_v2;
          if (*(int *)(param_1 + 0xfc) < temp_v2) {
            temp_v2 = *(int *)(param_1 + 0xfc);
          }
          *(int *)(param_1 + 0xf8) = temp_v2;
        }
        nw_snd_internal_CurveLfo_Update(param_1 + 0xac,5);
        FUN_00157110(param_1 + 0x90,5);
      }
      nw_snd_internal_CurveAdshr_GetValue(param_1 + 0x90);
      FUN_001573e4();
      if (*(char *)(param_1 + 0xc4) == '\x01') {
        FUN_00158f90(param_1 + 0xac);
        FUN_001573e4();
      }
      if (*(int *)(param_1 + 0x134) != 0) {
        nw_snd_internal_driver_Voice_SetVolume();
        nw_snd_internal_driver_Voice_SetPitch(*(unsigned int *)(param_1 + 0x134));
        nw_snd_internal_driver_Voice_SetPan(*(unsigned int *)(param_1 + 0x134));
        nw_snd_internal_driver_Voice_SetSurroundPan(*(unsigned int *)(param_1 + 0x134));
        nw_snd_internal_driver_Voice_SetLpfFreq(*(unsigned int *)(param_1 + 0x134));
        nw_snd_internal_driver_Voice_SetBiquadFilter
                  (*(unsigned int *)(param_1 + 0x134),*(unsigned char *)(param_1 + 0xcb));
        nw_snd_internal_driver_Voice_SetMainSend(*(unsigned int *)(param_1 + 0x134));
        temp_v1 = 0;
        do {
          nw_snd_internal_driver_Voice_SetFxSend(*(unsigned int *)(param_1 + 0x134),temp_v1 & 0xff);
          temp_v1 = temp_v1 + 1;
        } while ((int)temp_v1 < 2);
      }
    }
  }
  return;
}

} /* extern "C" */
