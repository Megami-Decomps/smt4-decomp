/* NON_MATCHING: draft split of the romwright decompilation of the merged unit (the state machine and the camera update that follows it): the decompiler's temporaries are not yet named. */
#include "common.h"

extern "C" {

int VectorFloatToUnsigned(...);
int VectorUnsignedToFloat(...);
int nn_math_ARMv6_VEC3TransformAsm_2AD44C(...);

int FUN_001bbf0c(void);
int FUN_001bc124(void);

extern unsigned int DAT_00536d14; /* 0x536d14 */
extern unsigned int DAT_00536d18; /* 0x536d18 */
extern unsigned int DAT_00536d1c; /* 0x536d1c */
extern unsigned int DAT_00536d20; /* 0x536d20 */
extern int g_handleRegistry; /* 0x56fcc0 */
extern int *DAT_005806a4; /* 0x5806a4 */
extern int g_lmapScene; /* 0x581288 */
extern float DAT_005f15d8; /* 0x5f15d8 */
extern float DAT_005f15dc; /* 0x5f15dc */
extern float DAT_005f15e0; /* 0x5f15e0 */
extern int g_gameState; /* 0x5f15fc */
extern int DAT_005f1600; /* 0x5f1600 */
extern float DAT_005f1a04; /* 0x5f1a04 */
extern float DAT_005f1a0c; /* 0x5f1a0c */
extern float DAT_005f1a10; /* 0x5f1a10 */
extern float DAT_005f1a14; /* 0x5f1a14 */

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
extern float *asdModelGetStatic38(void);

void FUN_00397aa4(void)
{
  unsigned int temp_v0;
  float *pfVar8;
  unsigned char temp_v8;
  int temp_v9;
  unsigned int in_fpscr;
  float temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  float temp_v29;
  float temp_v30;
  float temp_v31;
  float temp_v33;
  float temp_v34;
  float temp_v35;
  float temp_v36;
  float temp_v37;
  float temp_v38;
  float temp_v39;
  unsigned int temp_v40;
  float temp_v41;
  float temp_v42;
  float fStack_78;
  unsigned int temp_v43;

  temp_v25 = 0.0f;
  temp_v26 = 1.0f;
  temp_v21 = 1100.0f;
  temp_v22 = *(float *)(g_lmapScene + 0x1c);
  temp_v24 = *(float *)(g_lmapScene + 0x20);
  temp_v23 = *(float *)(g_lmapScene + 0x24);
  pfVar8 = (float *)asdModelGetStatic38();
  *pfVar8 = temp_v21;
  if ((*DAT_005806a4 == 0xc) && (DAT_005806a4[1] >= 100)) {
    temp_v11 = (*(float *)(g_lmapScene + 0x4c) + 180.0f) * 0.7111111f;
    temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v25 <= temp_v11) << 0x1d);
    for (temp_v11 = romwright_fabs_4(temp_v11); temp_v20 = temp_v25, (int)temp_v11 >= 0x47800000; temp_v11 = temp_v11 - 65536.0f)
    {
    }
    for (; (int)temp_v20 >= 0x47800000; temp_v20 = temp_v20 - 65536.0f) {
    }
    temp_v12 = VectorFloatToUnsigned(0x4338e38f,3);
    temp_v13 = VectorFloatToUnsigned(temp_v11,3);
    temp_v14 = VectorFloatToUnsigned(temp_v20,3);
    temp_v8 = temp_v12;
    temp_v16 = (float)VectorUnsignedToFloat(temp_v12 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v12 = temp_v13 & 0xff;
    temp_v17 = (float)VectorUnsignedToFloat(temp_v13 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v13 = temp_v14 & 0xff;
    temp_v15 = (float)VectorUnsignedToFloat(temp_v14 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v18 = (float)(&DAT_00536d14)[temp_v8 * 4] +
             (184.8889f - temp_v16) * (float)(&DAT_00536d1c)[temp_v8 * 4];
    temp_v19 = (float)(&DAT_00536d18)[temp_v8 * 4] +
             (184.8889f - temp_v16) * (float)(&DAT_00536d20)[temp_v8 * 4];
    temp_v41 = (float)(&DAT_00536d14)[temp_v12 * 4] +
               (temp_v11 - temp_v17) * (float)(&DAT_00536d1c)[temp_v12 * 4];
    temp_v16 = (float)(&DAT_00536d14)[temp_v13 * 4] +
             (temp_v20 - temp_v15) * (float)(&DAT_00536d1c)[temp_v13 * 4];
    temp_v20 = (float)(&DAT_00536d18)[temp_v13 * 4] +
             (temp_v20 - temp_v15) * (float)(&DAT_00536d20)[temp_v13 * 4];
    temp_v42 = (float)(&DAT_00536d18)[temp_v12 * 4] +
               (temp_v11 - temp_v17) * (float)(&DAT_00536d20)[temp_v12 * 4];
    if (!romwright_subpiece_4_1_0(temp_v0 >> 0x1d,0)) {
      temp_v41 = -temp_v41;
    }
    temp_v33 = temp_v20 * temp_v42;
    temp_v37 = temp_v16 * temp_v42;
    fStack_78 = temp_v19 * temp_v42;
    temp_v42 = temp_v18 * temp_v42;
    temp_v34 = temp_v18 * temp_v20 * temp_v41 - temp_v19 * temp_v16;
    temp_v39 = temp_v19 * temp_v16 * temp_v41 - temp_v18 * temp_v20;
    temp_v35 = temp_v18 * temp_v16 + temp_v19 * temp_v20 * temp_v41;
    temp_v38 = temp_v19 * temp_v20 + temp_v18 * temp_v16 * temp_v41;
  }
  else {
    temp_v20 = romwright_fabs_4(DAT_005f15dc * 0.7111111f);
    temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v25 <= DAT_005f15e0 * 0.7111111f) << 0x1d);
    temp_v15 = romwright_fabs_4(DAT_005f15e0 * 0.7111111f);
    for (temp_v11 = romwright_fabs_4(DAT_005f15d8 * 0.7111111f); (int)temp_v11 >= 0x47800000; temp_v11 = temp_v11 - 65536.0f
        ) {
    }
    for (; (int)temp_v20 >= 0x47800000; temp_v20 = temp_v20 - 65536.0f) {
    }
    for (; (int)temp_v15 >= 0x47800000; temp_v15 = temp_v15 - 65536.0f) {
    }
    temp_v12 = VectorFloatToUnsigned(temp_v11,3);
    temp_v13 = VectorFloatToUnsigned(temp_v20,3);
    temp_v14 = VectorFloatToUnsigned(temp_v15,3);
    temp_v8 = temp_v12;
    temp_v18 = (float)VectorUnsignedToFloat(temp_v12 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v12 = temp_v13 & 0xff;
    temp_v17 = (float)VectorUnsignedToFloat(temp_v13 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v13 = temp_v14 & 0xff;
    temp_v16 = (float)VectorUnsignedToFloat(temp_v14 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v19 = (float)(&DAT_00536d14)[temp_v8 * 4] +
             (temp_v11 - temp_v18) * (float)(&DAT_00536d1c)[temp_v8 * 4];
    temp_v11 = (float)(&DAT_00536d18)[temp_v8 * 4] +
             (temp_v11 - temp_v18) * (float)(&DAT_00536d20)[temp_v8 * 4];
    if (DAT_005f15d8 * 0.7111111f < temp_v25) {
      temp_v19 = -temp_v19;
    }
    temp_v41 = (float)(&DAT_00536d14)[temp_v12 * 4] +
               (temp_v20 - temp_v17) * (float)(&DAT_00536d1c)[temp_v12 * 4];
    fStack_78 = (float)(&DAT_00536d18)[temp_v12 * 4] +
                (temp_v20 - temp_v17) * (float)(&DAT_00536d20)[temp_v12 * 4];
    temp_v20 = (float)(&DAT_00536d14)[temp_v13 * 4] +
             (temp_v15 - temp_v16) * (float)(&DAT_00536d1c)[temp_v13 * 4];
    temp_v15 = (float)(&DAT_00536d18)[temp_v13 * 4] +
             (temp_v15 - temp_v16) * (float)(&DAT_00536d20)[temp_v13 * 4];
    if (DAT_005f15dc * 0.7111111f < temp_v25) {
      temp_v41 = -temp_v41;
    }
    if (!romwright_subpiece_4_1_0(temp_v0 >> 0x1d,0)) {
      temp_v20 = -temp_v20;
    }
    temp_v33 = temp_v15 * fStack_78;
    temp_v37 = temp_v20 * fStack_78;
    temp_v42 = temp_v19 * fStack_78;
    fStack_78 = temp_v11 * fStack_78;
    temp_v34 = temp_v19 * temp_v15 * temp_v41 - temp_v11 * temp_v20;
    temp_v39 = temp_v11 * temp_v20 * temp_v41 - temp_v19 * temp_v15;
    temp_v35 = temp_v19 * temp_v20 + temp_v11 * temp_v15 * temp_v41;
    temp_v38 = temp_v11 * temp_v15 + temp_v19 * temp_v20 * temp_v41;
  }
  temp_v41 = -temp_v41;
  temp_v36 = 0.0f;
  temp_v40 = 0;
  temp_v43 = 0;
  temp_v29 = temp_v25;
  temp_v30 = temp_v25;
  temp_v31 = temp_v26;
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v29,&temp_v33);
  temp_v29 = temp_v29 * temp_v21;
  temp_v30 = temp_v30 * temp_v21;
  temp_v31 = temp_v31 * temp_v21;
  temp_v25 = 0.017453292f;
  temp_v21 = (float)DAT_005806a4[6] * 0.017453292f;
  FUN_001bc124();
  temp_v20 = 290.0f;
  temp_v22 = temp_v22 + temp_v21 * 290.0f;
  temp_v25 = (float)DAT_005806a4[6] * temp_v25;
  FUN_001bbf0c();
  temp_v24 = temp_v24 + DAT_005f1a04;
  temp_v9 = *(int *)(g_handleRegistry + 0x14);
  temp_v21 = *(float *)(g_lmapScene + 0x24);
  temp_v11 = *(float *)(g_lmapScene + 0x1c);
  temp_v26 = *(float *)(g_lmapScene + 0x20);
  *(float *)(temp_v9 + 0xb8) = temp_v22;
  *(float *)(temp_v9 + 0xbc) = temp_v24;
  *(float *)(temp_v9 + 0xc0) = temp_v23 + temp_v25 * temp_v20;
  temp_v26 = temp_v26 + temp_v30;
  if (g_gameState != 0x27) {
    if ((g_gameState == 0x20) && (DAT_005f1600 == 1)) {
      temp_v24 = 160.0f;
      temp_v26 = temp_v26 - temp_v24;
    }
  }
  else if ((!(DAT_005f1600 != 8 && DAT_005f1600 != 9)) ||
          (!((DAT_005f1600 != 10 && DAT_005f1600 != 0xb) && DAT_005f1600 != 6))) {
    temp_v24 = 120.0f;
    temp_v26 = temp_v26 - temp_v24;
  }
  temp_v24 = temp_v21 + temp_v31 + DAT_005f1a14;
  temp_v26 = temp_v26 + DAT_005f1a10;
  *(float *)(temp_v9 + 0xac) = temp_v11 + temp_v29 + DAT_005f1a0c;
  *(float *)(temp_v9 + 0xb0) = temp_v26;
  *(float *)(temp_v9 + 0xb4) = temp_v24;
}

} /* extern "C" */
