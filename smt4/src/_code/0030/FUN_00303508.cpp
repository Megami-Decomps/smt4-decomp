/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00303508` (_code @ 0x303508, 0x37c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b7064(void);
int FUN_002b70cc(void);
int VectorSignedToFloat(int, int);
int VectorUnsignedToFloat(unsigned int, int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} param_1_stack;

extern float g_polyDefaultColor; /* 0x472520 */
extern float DAT_00472524; /* 0x472524 */
extern float DAT_00472528; /* 0x472528 */
extern float DAT_0047252c; /* 0x47252c */
extern unsigned int DAT_00472550; /* 0x472550 */
extern float DAT_004ea91c; /* 0x4ea91c */
extern float DAT_004ea920; /* 0x4ea920 */
extern float DAT_004ea924; /* 0x4ea924 */
extern float DAT_004ea928; /* 0x4ea928 */
extern float DAT_004ea92c; /* 0x4ea92c */
extern float DAT_004ea930; /* 0x4ea930 */
extern float DAT_004ea934; /* 0x4ea934 */
extern float DAT_004ea938; /* 0x4ea938 */

#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002b7064. */
/* Supplied declaration required: FUN_002b70cc. */


void FUN_00303508(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int *puVar7;
  unsigned int temp_v6;
  float *pfVar9;
  unsigned int in_fpscr;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
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
  
  temp_v4 = *(int *)(param_1 + 0x34);
  temp_v3 = *(int *)(param_1 + 0x40);
  temp_v2 = **(int **)(param_1 + 0x3c);
  temp_v5 = *(int *)(temp_v3 + 0x34);
  if ((temp_v4 <= temp_v5) || (temp_v5 == 0)) {
    temp_v12 = *(float *)(temp_v3 + 0x5c);
    temp_v20 = 0.0f;
    if (*(char *)(temp_v3 + 100) != '\0') {
      temp_v4 = temp_v5 - temp_v4;
    }
    temp_v13 = *(float *)(temp_v3 + 0x60);
    temp_v6 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= temp_v13) << 0x1d);
    temp_v7 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(temp_v6 >> 0x16) & 3);
    if (!romwright_subpiece_4_1_0(temp_v6 >> 0x1d,0)) {
      temp_v15 = (romwright_fabs_4(temp_v12) / (temp_v13 * 0.5f)) * -0.5f;
      temp_v6 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v7 < temp_v15) << 0x1f) |
              ((unsigned int)(temp_v7 == temp_v15) << 0x1e);
      temp_v1 = (unsigned char)(temp_v6 >> 0x18);
      if (!(unsigned char)((temp_v1 >> 6) & 1) && (unsigned char)(temp_v1 >> 7) == ((temp_v7 != temp_v7) || (temp_v15 != temp_v15))) {
        temp_v7 = temp_v15;
      }
    }
    temp_v15 = *(float *)(temp_v3 + 0x40);
    temp_v0 = (int)((int)*(short *)(temp_v2 + 2) + ((unsigned int)((int)*(short *)(temp_v2 + 2) >> 0x1f) >> 0x1e))
            >> 2;
    temp_v26 = 1.0f;
    puVar7 = *(unsigned int **)(*(int *)(temp_v2 + 8) + 0x30);
    *(unsigned int *)(temp_v2 + 0x54) = *(unsigned int *)(temp_v2 + 0x54) | 1;
    temp_v19 = (float)VectorUnsignedToFloat(*(unsigned int *)(temp_v3 + 0x38),(unsigned char)(temp_v6 >> 0x16) & 3);
    pfVar9 = &DAT_004ea920;
    temp_v15 = *(float *)(temp_v3 + 0x50) + temp_v15 + (romwright_fabs_4(temp_v12) + temp_v13 * temp_v7 * 0.5f) * temp_v7;
    temp_v16 = g_polyDefaultColor * temp_v15;
    temp_v12 = *(float *)(temp_v3 + 0x54) + temp_v15;
    DAT_004ea938 = *(float *)(temp_v3 + 0x58) + temp_v12;
    temp_v17 = DAT_00472524 * temp_v15;
    temp_v18 = DAT_00472528 * temp_v15;
    temp_v15 = DAT_0047252c * temp_v15;
    temp_v14 = g_polyDefaultColor * temp_v12;
    DAT_004ea920 = DAT_00472524 * temp_v12;
    DAT_004ea924 = DAT_00472528 * temp_v12;
    temp_v12 = DAT_0047252c * temp_v12;
    temp_v7 = g_polyDefaultColor * DAT_004ea938;
    temp_v13 = DAT_00472524 * DAT_004ea938;
    if (temp_v0 != 0) {
      pfVar9 = (float *)&DAT_00472550;
    }
    temp_v6 = 0;
    DAT_004ea934 = DAT_00472528 * DAT_004ea938;
    DAT_004ea938 = DAT_0047252c * DAT_004ea938;
    temp_v21 = temp_v20;
    DAT_004ea91c = temp_v14;
    DAT_004ea928 = temp_v12;
    DAT_004ea92c = temp_v7;
    DAT_004ea930 = temp_v13;
    temp_v22 = DAT_004ea920;
    temp_v23 = DAT_004ea924;
    temp_v24 = DAT_004ea934;
    temp_v25 = DAT_004ea938;
    if (temp_v0 != 0) {
      do {
        temp_v8 = temp_v21 * 40.743664f;
        temp_v9 = temp_v8;
        FUN_002b7064();
        FUN_002b70cc();
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        temp_v21 = temp_v21 + 6.2831855f / temp_v19;
        DAT_004ea92c = temp_v9;
        DAT_004ea930 = temp_v20;
        DAT_004ea934 = temp_v8;
        DAT_004ea938 = temp_v26;
        *pfVar9 = temp_v16 * temp_v9;
        pfVar9[1] = temp_v17 * temp_v20;
        pfVar9[2] = temp_v18 * temp_v8;
        pfVar9[3] = temp_v15 * temp_v26;
        *(float *)&puVar7[3] = temp_v16 * temp_v9;
        *(float *)&puVar7[4] = pfVar9[1];
        *(float *)&puVar7[5] = pfVar9[2];
        temp_v9 = temp_v14 * DAT_004ea92c;
        temp_v8 = temp_v22 * DAT_004ea930;
        temp_v10 = temp_v23 * DAT_004ea934;
        temp_v11 = temp_v12 * DAT_004ea938;
        *pfVar9 = temp_v9;
        pfVar9[1] = temp_v8;
        pfVar9[2] = temp_v10;
        pfVar9[3] = temp_v11;
        *(float *)&puVar7[6] = temp_v9;
        *(float *)&puVar7[7] = pfVar9[1];
        *(float *)&puVar7[8] = pfVar9[2];
        temp_v9 = temp_v7 * DAT_004ea92c;
        temp_v8 = temp_v13 * DAT_004ea930;
        temp_v10 = temp_v24 * DAT_004ea934;
        temp_v6 = temp_v6 + 1;
        DAT_004ea928 = temp_v25 * DAT_004ea938;
        DAT_004ea91c = temp_v9;
        DAT_004ea920 = temp_v8;
        DAT_004ea924 = temp_v10;
        pfVar9[3] = DAT_004ea928;
        *pfVar9 = temp_v9;
        pfVar9[1] = temp_v8;
        pfVar9[2] = temp_v10;
        *(float *)&puVar7[9] = temp_v9;
        *(float *)&puVar7[10] = pfVar9[1];
        *(float *)&puVar7[0xb] = pfVar9[2];
        puVar7 = puVar7 + 0xc;
      } while (temp_v6 < temp_v0);
    }
  }
  return;
}

} /* extern "C" */
