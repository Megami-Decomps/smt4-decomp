/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00464e20` (_code @ 0x464e20, 0x2ec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001d3278(int, unsigned int);
int VectorSignedToFloat(unsigned int, int);
int VectorUnsignedToFloat(unsigned int, int);
int nw_snd_internal_driver_Voice_SetBiquadFilter(int, int);
int nw_snd_internal_driver_Voice_SetFxSend(int, unsigned int);
int nw_snd_internal_driver_Voice_SetLpfFreq(int);
int nw_snd_internal_driver_Voice_SetMainSend(int);
int nw_snd_internal_driver_Voice_SetPan(...);
int nw_snd_internal_driver_Voice_SetPitch(int);
int nw_snd_internal_driver_Voice_SetSurroundPan(...);
int nw_snd_internal_driver_Voice_SetVolume(int);

/* stack frame of param_2: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001d3278. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_SetBiquadFilter. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_SetFxSend. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_SetLpfFreq. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_SetMainSend. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_SetPan. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_SetPitch. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_SetSurroundPan. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_SetVolume. */


void FUN_00464e20(int param_1,char *param_2)

{
/* irregular: irregular input(s): in_fpscr; 12 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  float *pfVar3;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8 [15];
  
  if (*param_2 != '\0') {
    VectorUnsignedToFloat((unsigned int)(unsigned char)param_2[0xd],(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorUnsignedToFloat((unsigned int)(unsigned char)param_2[0x13],(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorUnsignedToFloat((unsigned int)(unsigned char)param_2[0x15],(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v0 = (unsigned int)(unsigned char)param_2[0xe];
    if (temp_v0 < 2) {
      VectorSignedToFloat(temp_v0 - 0x3f,(unsigned char)(in_fpscr >> 0x16) & 3);
    }
    else {
      VectorSignedToFloat(temp_v0 - 0x40,(unsigned char)(in_fpscr >> 0x16) & 3);
    }
    temp_v0 = (unsigned int)(unsigned char)param_2[0xf];
    if (temp_v0 < 0x40) {
      VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
    }
    else {
      VectorUnsignedToFloat(temp_v0 + 1,(unsigned char)(in_fpscr >> 0x16) & 3);
    }
    temp_v7 = 0.0f;
    temp_v0 = 0;
    VectorUnsignedToFloat((unsigned int)(unsigned char)param_2[0x10],(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v8[0] = (float)VectorUnsignedToFloat
                                   ((unsigned int)(unsigned char)param_2[0x11],(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v8[0] = temp_v8[0] * 0.007874016f;
    temp_v8[1] = (float)VectorUnsignedToFloat
                                   ((unsigned int)(unsigned char)param_2[0x12],(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v8[1] = temp_v8[1] * 0.007874016f;
    temp_v5 = *(float *)(param_1 + 0x100) + *(float *)(param_1 + 0x30);
    temp_v4 = (int)param_2[0x14];
    if (*(unsigned char *)(param_1 + 0x2c) != 0xff) {
      temp_v4 = (int)*(char *)(param_1 + 0x2c);
    }
    do {
      pfVar3 = temp_v8 + temp_v0 + 3;
      *pfVar3 = temp_v7;
      FUN_001d3278(param_1,temp_v0 & 0xff);
      temp_v6 = *pfVar3;
      temp_v1 = temp_v0 + 1;
      *pfVar3 = temp_v5 + temp_v6;
      temp_v5 = temp_v5 + temp_v6 + *(float *)(param_1 + temp_v0 * 4 + 0x104);
      *pfVar3 = temp_v5;
      temp_v5 = temp_v5 + temp_v8[temp_v0];
      *pfVar3 = temp_v5;
      temp_v0 = temp_v1;
    } while ((int)temp_v1 < 2);
    temp_v2 = 0;
    if (param_2[0xc] != '\0') {
      do {
        temp_v3 = *(int *)(*(int *)(param_2 + temp_v2 * 4 + 4) + 4);
        if (temp_v3 != 0) {
          nw_snd_internal_driver_Voice_SetVolume(temp_v3);
          nw_snd_internal_driver_Voice_SetPitch(temp_v3);
          nw_snd_internal_driver_Voice_SetLpfFreq(temp_v3);
          nw_snd_internal_driver_Voice_SetBiquadFilter(temp_v3,temp_v4);
          nw_snd_internal_driver_Voice_SetMainSend(temp_v3);
          temp_v0 = 0;
          do {
            nw_snd_internal_driver_Voice_SetFxSend(temp_v3,temp_v0 & 0xff);
            temp_v0 = temp_v0 + 1;
          } while ((int)temp_v0 < 2);
          if (param_2[0xc] != '\x01') {
            if (param_2[0xc] == '\x02') {
              nw_snd_internal_driver_Voice_SetPan(temp_v3);
            }
          }
          else {
            nw_snd_internal_driver_Voice_SetPan(temp_v3);
          }
          nw_snd_internal_driver_Voice_SetSurroundPan(temp_v3);
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < (int)(unsigned int)(unsigned char)param_2[0xc]);
    }
  }
  return;
}

} /* extern "C" */
