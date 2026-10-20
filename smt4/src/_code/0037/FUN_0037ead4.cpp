/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037ead4` (_code @ 0x37ead4, 0x1f4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003e7204(...);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);
int nw_snd_internal_driver_Voice_SetBiquadFilter(...);
int nw_snd_internal_driver_Voice_SetFxSend(...);
int nw_snd_internal_driver_Voice_SetLpfFreq(...);
int nw_snd_internal_driver_Voice_SetMainSend(...);
int nw_snd_internal_driver_Voice_SetPan(...);
int nw_snd_internal_driver_Voice_SetPitch(...);
int nw_snd_internal_driver_Voice_SetSurroundPan(...);
int nw_snd_internal_driver_Voice_SetVolume(...);

typedef struct fn_0037ead4_arg0 fn_0037ead4_arg0;
struct fn_0037ead4_arg0 {
    unsigned char pad_0x0[0x14];
    float field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    float field_0x1c; /* +0x1c */
    float field_0x20; /* +0x20 */
    float field_0x24; /* +0x24 */
    undefined4 field_0x28; /* +0x28 */
    byte field_0x2c; /* +0x2c */
    unsigned char pad_0x2d[0x3];
    undefined4 field_0x30; /* +0x30 */
};

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_003e7204. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_SetBiquadFilter. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_SetFxSend. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_SetLpfFreq. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_SetMainSend. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_SetPan. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_SetPitch. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_SetSurroundPan. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_SetVolume. */


void FUN_0037ead4(fn_0037ead4_arg0 *param_1,char *param_2)

{
/* irregular: irregular input(s): in_fpscr; 12 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  float *pfVar6;
  int temp_v5;
  int temp_v6;
  unsigned int in_fpscr;
  float temp_v7;
  float temp_v8;
  unsigned long long temp_v9;
  float afStack_50 [13];
  
  if (*param_2 != '\0') {
    temp_v1 = (unsigned int)(unsigned char)param_2[0xe];
    temp_v2 = temp_v1;
    if (temp_v1 < 2) {
      temp_v2 = temp_v1 - 0x3f;
    }
    VectorUnsignedToFloat((unsigned int)(unsigned char)param_2[0xd],(unsigned char)(in_fpscr >> 0x16) & 3);
    if (temp_v1 >= 2) {
      temp_v2 = temp_v2 - 0x40;
    }
    temp_v8 = 0.015873017f;
    temp_v0 = param_1->field_0x2c;
    temp_v9 = 0;
    temp_v4 = 0;
    temp_v3 = (unsigned int)(unsigned char)param_2[0xf];
    temp_v1 = temp_v3;
    if (temp_v3 >= 0x40) {
      temp_v1 = temp_v3 + 1;
    }
    VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    if (temp_v3 >= 0x40) {
      temp_v8 = 0.015625f;
    }
    temp_v7 = (float)VectorUnsignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v8 = *(float *)(param_2 + 0x1c) + temp_v7 * temp_v8;
    do {
      pfVar6 = afStack_50 + temp_v4;
      *pfVar6 = (float)((unsigned long long)temp_v9 >> 0x20);
      FUN_003e7204(param_1,temp_v4 & 0xff);
      temp_v4 = temp_v4 + 1;
      temp_v8 = temp_v8 + *pfVar6;
      *pfVar6 = temp_v8;
    } while ((int)temp_v4 < 2);
    temp_v5 = 0;
    if (param_2[0xc] != '\0') {
      do {
        temp_v6 = *(int *)(*(int *)(param_2 + temp_v5 * 4 + 4) + 0x30);
        if (temp_v6 != 0) {
          nw_snd_internal_driver_Voice_SetVolume(temp_v6);
          nw_snd_internal_driver_Voice_SetPitch(temp_v6);
          nw_snd_internal_driver_Voice_SetLpfFreq(temp_v6);
          nw_snd_internal_driver_Voice_SetBiquadFilter(temp_v6,temp_v0);
          nw_snd_internal_driver_Voice_SetMainSend(temp_v6);
          temp_v2 = 0;
          do {
            nw_snd_internal_driver_Voice_SetFxSend(temp_v6,temp_v2 & 0xff);
            temp_v2 = temp_v2 + 1;
          } while ((int)temp_v2 < 2);
          if (param_2[0xc] != '\x01') {
            if (param_2[0xc] == '\x02') {
              nw_snd_internal_driver_Voice_SetPan(temp_v6);
            }
          }
          else {
            nw_snd_internal_driver_Voice_SetPan(temp_v6);
          }
          nw_snd_internal_driver_Voice_SetSurroundPan(temp_v6);
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < (int)(unsigned int)(unsigned char)param_2[0xc]);
    }
  }
  return;
}

} /* extern "C" */
