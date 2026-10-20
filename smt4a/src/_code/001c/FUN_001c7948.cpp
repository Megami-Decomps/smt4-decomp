/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c7948` (_code @ 0x1c7948, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b6280(unsigned int *);
int VectorFloatToUnsigned(double, int);
int VectorSignedToFloat(unsigned int, int);
int nn_snd_CTR_Dspsnd_SetChannelIirFilterType(unsigned char *, unsigned int, int);
int nn_snd_CTR_Dspsnd_SetChannelRIM(unsigned char *, unsigned int, unsigned int, int);

extern unsigned int DAT_0053f614; /* 0x53f614 */
extern unsigned char DAT_006433d0; /* 0x6433d0 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_001b6280. */
extern unsigned char nn_snd_CTR_Dspsnd_SetChannelIIRFilter_Biquad(unsigned int, unsigned char, short, short, short, short, short);
extern unsigned char nn_snd_CTR_Dspsnd_SetChannelIIRFilter_Mono(unsigned int, unsigned char, short, short);
/* Supplied declaration required: nn_snd_CTR_Dspsnd_SetChannelIirFilterType. */
/* Supplied declaration required: nn_snd_CTR_Dspsnd_SetChannelRIM. */
extern unsigned char nn_snd_CTR_Dspsnd_SetChannelTimer(unsigned int, unsigned char, float);


void FUN_001c7948(unsigned int *param_1,unsigned int param_2,float param_3)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  unsigned int in_fpscr;
  unsigned int temp_v5;
  float temp_v6;
  
  *(unsigned short *)(param_1 + 0x1b) = 0xffff;
  temp_v4 = (param_1[0x1b] & 1) != 0;
  if (temp_v4) {
    FUN_001b6280(param_1);
  }
  if ((param_1[0x1b] & 2) != 0) {
    temp_v6 = (float)VectorSignedToFloat(param_1[8],(unsigned char)(in_fpscr >> 0x16) & 3);
    param_1[10] = (unsigned int)((float)param_1[9] * temp_v6 * 3.055488e-05f);
    nn_snd_CTR_Dspsnd_SetChannelTimer((unsigned int)&DAT_006433d0,(unsigned char)*param_1,param_3);
    if (*(char *)((int)param_1 + 0xe) == '\0') {
      *(unsigned short *)(param_1 + 0x1b) = (unsigned short)param_1[0x1b] | 0x20;
    }
    temp_v4 = 1;
  }
  if ((param_1[0x1b] & 4) != 0) {
    nn_snd_CTR_Dspsnd_SetChannelIirFilterType
              (&DAT_006433d0,*param_1 & 0xff,*(unsigned char *)((int)param_1 + 0xf));
    temp_v4 = 1;
  }
  if ((param_1[0x1b] & 8) != 0) {
    nn_snd_CTR_Dspsnd_SetChannelIIRFilter_Mono
              ((unsigned int)&DAT_006433d0,(unsigned char)*param_1,(short)param_1[4],*(short *)((int)param_1 + 0x12));
  }
  if ((param_1[0x1b] & 0x10) != 0) {
    nn_snd_CTR_Dspsnd_SetChannelIIRFilter_Biquad
              ((unsigned int)&DAT_006433d0,(unsigned char)*param_1,(short)param_1[5],*(short *)((int)param_1 + 0x16),
               (short)param_1[6],*(short *)((int)param_1 + 0x1a),(short)param_1[7]);
  }
  if ((param_1[0x1b] & 0x20) != 0) {
    temp_v2 = 2;
    temp_v3 = 1;
    if (*(char *)((int)param_1 + 0xe) != '\0') {
      if (*(char *)((int)param_1 + 0xe) == '\x01') {
        temp_v2 = 1;
      }
    }
    else {
      temp_v2 = 0;
      temp_v3 = (int)param_1[10] < 0x3faaaaac;
      if ((temp_v3) && ((int)param_1[10] < 0x3f800001)) {
        temp_v3 = 2;
      }
    }
    nn_snd_CTR_Dspsnd_SetChannelRIM(&DAT_006433d0,*param_1 & 0xff,temp_v2,temp_v3);
  }
  else if (!temp_v4) {
    *(unsigned short *)(param_1 + 0x1b) = (unsigned short)param_1[0x1b] & 0x8000;
    return;
  }
  param_1[0xb] = 0x578;
  temp_v0 = *(unsigned short *)((int)param_1 + 0x1e) & 3;
  temp_v6 = (float)VectorSignedToFloat(*(unsigned int *)
                                      ((int)&DAT_0053f614 +
                                      (*(unsigned short *)((int)param_1 + 0x1e) & 0xc) * 2 + temp_v0 * 4),
                                     (unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v5 = VectorFloatToUnsigned(temp_v6 * (float)param_1[10] + 1400.0f,3);
  param_1[0xb] = temp_v5;
  temp_v5 = temp_v5 + *(int *)((unsigned int)*(unsigned char *)((int)param_1 + 0xe) * 8 + temp_v0 * 4 + 0x53f62c);
  param_1[0xb] = temp_v5;
  temp_v5 = temp_v5 + *(int *)((unsigned int)*(unsigned char *)((int)param_1 + 0xf) * 8 + temp_v0 * 4 + 0x53f644);
  param_1[0xb] = temp_v5;
  temp_v0 = param_1[0x12];
  temp_v1 = 1;
  temp_v4 = temp_v0 != 0;
  if (!temp_v4) {
    temp_v0 = param_1[0x13];
  }
  if (!(temp_v4 || temp_v0 != 0)) {
    temp_v0 = param_1[0x14];
    temp_v4 = temp_v0 == 0;
    if (temp_v4) {
      temp_v0 = param_1[0x15];
    }
    if (!temp_v4 || temp_v0 != 0) {
      temp_v1 = 2;
    }
  }
  else {
    temp_v1 = 2;
  }
  temp_v0 = param_1[0x16];
  temp_v4 = temp_v0 != 0;
  if (!temp_v4) {
    temp_v0 = param_1[0x17];
  }
  if (!(temp_v4 || temp_v0 != 0)) {
    temp_v0 = param_1[0x18];
    temp_v4 = temp_v0 == 0;
    if (temp_v4) {
      temp_v0 = param_1[0x19];
    }
    if (!temp_v4 || temp_v0 != 0) {
      temp_v1 = temp_v1 + 1;
    }
  }
  else {
    temp_v1 = temp_v1 + 1;
  }
  param_1[0xb] = temp_v5 + temp_v1 * 0x898;
  *(unsigned short *)(param_1 + 0x1b) = (unsigned short)param_1[0x1b] & 0x8000;
  return;
}

} /* extern "C" */
