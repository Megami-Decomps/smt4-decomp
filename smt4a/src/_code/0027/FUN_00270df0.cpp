/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00270df0` (_code @ 0x270df0, 0x4b4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0034f8b4(float *, double, double);
int FUN_0038136c(float *, float *, double, double);
int mathInterpolateClamped(void);
int VectorSignedToFloat(double, int);
int VectorUnsignedToFloat(...);

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_1_stack;

extern float DAT_006472dc; /* 0x6472dc */
extern float DAT_006472e0; /* 0x6472e0 */
extern float DAT_006472e4; /* 0x6472e4 */
extern float DAT_006472e8; /* 0x6472e8 */
extern float DAT_006472ec; /* 0x6472ec */
extern float DAT_006472f0; /* 0x6472f0 */
extern float DAT_006472f4; /* 0x6472f4 */
extern float DAT_006472f8; /* 0x6472f8 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
#ifndef ROMWRIGHT_SUBPIECE_4_2_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_2_0_DEFINED
#define romwright_subpiece_4_2_0(value, offset) ((unsigned short)(unsigned int)(value))
#endif
extern unsigned int nw_ut_FloatColor_ToPicaU32(void);
extern int effGetFrameStep(void);
extern int asdModelBankGetModel(int, unsigned int);
/* Supplied declaration required: FUN_0034f8b4. */
/* Supplied declaration required: FUN_0038136c. */
/* Supplied declaration required: mathInterpolateClamped. */


void FUN_00270df0(float *param_1)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 5 native warning(s); review required */
  int temp_v0;
  float *pfVar2;
  float temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  float *pfVar6;
  float temp_v4;
  float temp_v5;
  unsigned int in_fpscr;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  unsigned long long temp_v14;
  float temp_v15 [11];
  
  temp_v0 = effGetFrameStep();
  temp_v5 = param_1[0x2f];
  pfVar6 = param_1 + 0x39;
  temp_v4 = (float)(temp_v0 + (int)param_1[0xb]);
  param_1[0xb] = temp_v4;
  if (temp_v4 == 0.0f) {
    return;
  }
  temp_v13 = 0.003921569f;
  temp_v12 = 0.5f;
  temp_v10 = 0.0f;
  temp_v9 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v11 = 1.0f;
  if (((int)temp_v5 <= (int)temp_v4) && (0 < (int)temp_v5)) {
    if (*(char *)(param_1 + 0x30) == '\0') {
      if ((unsigned int)param_1[0x33] < 8) {
        temp_v2 = *(unsigned int *)((int)param_1[0x33] * 4 + 0x5c0f98);
      }
      else {
        temp_v2 = 0;
      }
      DAT_006472dc = (float)VectorUnsignedToFloat(temp_v2 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v8 = (float)VectorUnsignedToFloat(temp_v2 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v13 = (float)VectorUnsignedToFloat((temp_v2 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v1 = (float)VectorUnsignedToFloat((temp_v2 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
      DAT_006472dc = DAT_006472dc * 0.003921569f;
      temp_v8 = temp_v8 * 0.003921569f;
      temp_v1 = temp_v1 * 0.003921569f;
      DAT_006472e0 = temp_v1;
      DAT_006472e4 = temp_v13 * 0.003921569f;
      DAT_006472e8 = temp_v8;
      param_1[0x3d] = DAT_006472dc;
      param_1[0x40] = temp_v8;
      param_1[0x3e] = temp_v1;
      param_1[0x3f] = temp_v13 * 0.003921569f;
      goto LAB_00271128;
    }
    temp_v4 = 0.0f;
    param_1[0xb] = 0.0f;
  }
  pfVar2 = param_1 + 0xc;
  FUN_0038136c(pfVar2,param_1 + 0x15,temp_v4,temp_v5);
  temp_v1 = param_1[9];
  DAT_006472ec = (float)VectorUnsignedToFloat((unsigned int)temp_v1 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
  DAT_006472f0 = (float)VectorUnsignedToFloat
                                  (((unsigned int)temp_v1 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
  DAT_006472f4 = (float)VectorUnsignedToFloat
                                  (((unsigned int)temp_v1 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
  DAT_006472f8 = (float)VectorUnsignedToFloat((unsigned int)temp_v1 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
  DAT_006472ec = DAT_006472ec * temp_v13;
  DAT_006472f0 = DAT_006472f0 * temp_v13;
  DAT_006472f4 = DAT_006472f4 * temp_v13;
  DAT_006472f8 = DAT_006472f8 * temp_v13;
  temp_v8 = (float)VectorUnsignedToFloat((unsigned int)pfVar2 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = (float)VectorUnsignedToFloat(((unsigned int)pfVar2 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v6 = (float)VectorUnsignedToFloat((unsigned int)pfVar2 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v7 = (float)VectorUnsignedToFloat
                            (((unsigned int)pfVar2 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v8 = temp_v8 * temp_v13 * DAT_006472ec;
  temp_v7 = temp_v7 * temp_v13 * DAT_006472f0;
  temp_v1 = temp_v1 * temp_v13 * DAT_006472f4;
  param_1[0x40] = temp_v6 * temp_v13 * DAT_006472f8;
  param_1[0x3d] = temp_v8;
  param_1[0x3e] = temp_v7;
  param_1[0x3f] = temp_v1;
  if ((unsigned int)param_1[0x33] < 8) {
    temp_v2 = *(unsigned int *)((int)param_1[0x33] * 4 + 0x5c0f98);
  }
  else {
    temp_v2 = 0;
  }
  temp_v1 = (float)VectorUnsignedToFloat(temp_v2 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v0 = 1;
  temp_v8 = (float)VectorUnsignedToFloat((temp_v2 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
  DAT_006472e4 = (float)VectorUnsignedToFloat((temp_v2 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
  DAT_006472e8 = (float)VectorUnsignedToFloat(temp_v2 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = temp_v1 * temp_v13;
  temp_v8 = temp_v8 * temp_v13;
  DAT_006472e4 = DAT_006472e4 * temp_v13;
  DAT_006472e8 = DAT_006472e8 * temp_v13;
  temp_v14 = 0x40000000;
  temp_v15[1] = temp_v8;
  temp_v15[2] = DAT_006472e4;
  temp_v15[3] = DAT_006472e8;
  temp_v15[0] = temp_v1;
  DAT_006472dc = temp_v1;
  DAT_006472e0 = temp_v8;
  do {
    if (param_1[0x31] == 0.0f) {
      temp_v8 = temp_v15[temp_v0];
      temp_v1 = pfVar6[temp_v0 + 4] * temp_v8;
      mathInterpolateClamped();
      pfVar6[temp_v0 + 4] = temp_v8;
    }
    if (param_1[0x31] != 1.4013e-45f) {
      if (param_1[0x31] == 2.8026e-45f) {
        temp_v8 = temp_v15[temp_v0];
        temp_v1 = (pfVar6 + temp_v0)[4];
        mathInterpolateClamped();
        (pfVar6 + temp_v0)[4] = temp_v8;
      }
    }
    else {
      temp_v8 = temp_v15[temp_v0];
      temp_v13 = temp_v8 + ((pfVar6 + temp_v0)[4] - temp_v12) * (float)temp_v14;
      temp_v1 = temp_v10;
      if ((temp_v10 <= temp_v13) && (temp_v1 = temp_v13, (int)temp_v13 >= 0x3f800001)) {
        temp_v1 = temp_v11;
      }
      mathInterpolateClamped();
      (pfVar6 + temp_v0)[4] = temp_v8;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 4);
LAB_00271128:
  FUN_0034f8b4(param_1 + 0x19,temp_v4,temp_v5);
  param_1[0x41] = temp_v8;
  FUN_0034f8b4(param_1 + 0x24,temp_v4,temp_v5);
  param_1[0x42] = temp_v8;
  temp_v13 = param_1[0x34];
  temp_v4 = param_1[0x35];
  temp_v5 = param_1[0x36];
  if (temp_v13 == temp_v10) {
    temp_v1 = temp_v10;
  }
  if ((temp_v13 != temp_v10 || temp_v4 != temp_v10) || (temp_v10 = temp_v1, temp_v8 = temp_v1, temp_v5 != temp_v1)) {
    temp_v8 = temp_v11 / romwright_sqrt_4(temp_v13 * temp_v13 + temp_v4 * temp_v4 + temp_v5 * temp_v5);
    temp_v1 = temp_v5 * temp_v8;
    temp_v10 = temp_v4 * temp_v8;
    temp_v8 = temp_v13 * temp_v8;
  }
  temp_v7 = param_1[0x37];
  temp_v6 = temp_v9 * temp_v12;
  *pfVar6 = *param_1 + (temp_v13 + temp_v8 * temp_v7 * temp_v6) * temp_v9;
  param_1[0x3a] =
       param_1[1] +
       ((temp_v4 + temp_v10 * temp_v7 * temp_v6) * temp_v9 - param_1[0x38] * temp_v9 * temp_v9 * temp_v12);
  param_1[0x3b] = param_1[2] + (temp_v5 + temp_v1 * temp_v7 * temp_v6) * temp_v9;
  param_1[0x3c] = temp_v11;
  if ((param_1[0x32] == 0.0f) && (temp_v0 = asdModelBankGetModel((int)romwright_subpiece_4_2_0(param_1[0x33],0),0), temp_v0 != 0)) {
    temp_v5 = param_1[0x3e];
    temp_v4 = param_1[0x3f];
    temp_v0 = *(int *)(*(int *)(romwright_subpiece_4_2_0(param_1[0x33],0) * 4 + 0x635b64) + 8);
    *(float *)(temp_v0 + 0xb8) = param_1[0x40];
    *(float *)(temp_v0 + 0xbc) = temp_v4;
    *(float *)(temp_v0 + 0xc0) = temp_v5;
    *(unsigned int *)(temp_v0 + 0xc4) = 0x3f800000;
    temp_v3 = nw_ut_FloatColor_ToPicaU32();
    *(unsigned int *)(temp_v0 + 200) = temp_v3;
    return;
  }
  return;
}

} /* extern "C" */
