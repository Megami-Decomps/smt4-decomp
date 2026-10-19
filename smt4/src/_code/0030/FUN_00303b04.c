/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00303b04` (_code @ 0x303b04, 0x3fc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_FLOAT_BITS_DEFINED
#define ROMWRIGHT_FLOAT_BITS_DEFINED
static unsigned int romwright_f2u(float value)
{
    union { float f; unsigned int u; } bits;
    bits.f = value;
    return bits.u;
}
static float romwright_u2f(unsigned int value)
{
    union { float f; unsigned int u; } bits;
    bits.u = value;
    return bits.f;
}
#endif
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp68; /* 0x68: local_68 */
} param_1_stack;

extern float DAT_00472520; /* 0x472520 */
extern float DAT_00472524; /* 0x472524 */
extern float *DAT_00472528; /* 0x472528 */
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


void FUN_00303b04(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  float *pfVar7;
  float *pfVar8;
  unsigned int temp_v6;
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
  float temp_v27;
  
  temp_v4 = *(int *)(param_1 + 0x34);
  temp_v3 = *(int *)(param_1 + 0x40);
  temp_v2 = **(int **)(param_1 + 0x3c);
  temp_v5 = *(int *)(temp_v3 + 0x34);
  if ((temp_v4 <= temp_v5) || (temp_v5 == 0)) {
    temp_v12 = *(float *)(temp_v3 + 0x60);
    temp_v25 = 0.0f;
    if (*(char *)(temp_v3 + 0x68) != '\0') {
      temp_v4 = temp_v5 - temp_v4;
    }
    temp_v14 = *(float *)(temp_v3 + 100);
    temp_v6 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= temp_v14) << 0x1d);
    temp_v7 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(temp_v6 >> 0x16) & 3);
    if (!romwright_subpiece_4_1_0(temp_v6 >> 0x1d,0)) {
      temp_v16 = (romwright_fabs_4(temp_v12) / (temp_v14 * 0.5f)) * -0.5f;
      temp_v6 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v7 < temp_v16) << 0x1f) |
              ((unsigned int)(temp_v7 == temp_v16) << 0x1e);
      temp_v1 = (unsigned char)(temp_v6 >> 0x18);
      if (!(unsigned char)((temp_v1 >> 6) & 1) && (unsigned char)(temp_v1 >> 7) == ((temp_v7 != temp_v7) || (temp_v16 != temp_v16))) {
        temp_v7 = temp_v16;
      }
    }
    temp_v27 = 1.0f;
    temp_v16 = *(float *)(temp_v3 + 0x40);
    temp_v0 = (int)((int)*(short *)(temp_v2 + 2) + ((unsigned int)((int)*(short *)(temp_v2 + 2) >> 0x1f) >> 0x1e))
            >> 2;
    pfVar7 = *(float **)(*(int *)(temp_v2 + 8) + 0x30);
    *(unsigned int *)(temp_v2 + 0x54) = *(unsigned int *)(temp_v2 + 0x54) | 1;
    temp_v20 = (float)VectorUnsignedToFloat(*(unsigned int *)(temp_v3 + 0x38),(unsigned char)(temp_v6 >> 0x16) & 3);
    temp_v16 = temp_v16 + (romwright_fabs_4(temp_v12) + temp_v14 * temp_v7 * 0.5f) * temp_v7;
    temp_v20 = 6.2831855f / temp_v20;
    temp_v7 = *(float *)(temp_v3 + 0x50) + temp_v16;
    temp_v17 = DAT_00472520 * temp_v7;
    DAT_004ea928 = *(float *)(temp_v3 + 0x54) + temp_v7;
    temp_v12 = *(float *)(temp_v3 + 0x58) + DAT_004ea928;
    temp_v18 = DAT_00472524 * temp_v7;
    temp_v19 = romwright_u2f((unsigned int)(DAT_00472528)) * temp_v7;
    temp_v7 = DAT_0047252c * temp_v7;
    temp_v14 = DAT_00472520 * DAT_004ea928;
    temp_v15 = DAT_00472524 * DAT_004ea928;
    DAT_004ea924 = romwright_u2f((unsigned int)(DAT_00472528)) * DAT_004ea928;
    DAT_004ea928 = DAT_0047252c * DAT_004ea928;
    pfVar8 = DAT_00472528;
    if (temp_v0 != 0) {
      pfVar8 = (float *)&DAT_00472550;
    }
    temp_v6 = 0;
    temp_v13 = DAT_00472520 * temp_v12;
    DAT_004ea930 = DAT_00472524 * temp_v12;
    DAT_004ea934 = romwright_u2f((unsigned int)(DAT_00472528)) * temp_v12;
    temp_v12 = DAT_0047252c * temp_v12;
    temp_v26 = temp_v25;
    DAT_004ea91c = temp_v14;
    DAT_004ea920 = temp_v15;
    DAT_004ea92c = temp_v13;
    DAT_004ea938 = temp_v12;
    temp_v21 = DAT_004ea924;
    temp_v22 = DAT_004ea928;
    temp_v23 = DAT_004ea930;
    temp_v24 = DAT_004ea934;
    if (temp_v0 != 0) {
      do {
        temp_v8 = temp_v25 * 40.743664f;
        temp_v9 = temp_v8;
        FUN_002b7064();
        FUN_002b70cc();
        temp_v25 = temp_v25 + temp_v20;
        DAT_004ea92c = temp_v9;
        DAT_004ea930 = temp_v26;
        DAT_004ea934 = temp_v8;
        DAT_004ea938 = temp_v27;
        *pfVar8 = temp_v9 * temp_v16;
        pfVar8[1] = temp_v26 * temp_v16;
        pfVar8[2] = temp_v8 * temp_v16;
        pfVar8[3] = temp_v27 * temp_v16;
        *pfVar7 = temp_v9 * temp_v16;
        pfVar7[1] = pfVar8[1];
        pfVar7[2] = pfVar8[2];
        temp_v9 = temp_v17 * DAT_004ea92c;
        temp_v8 = temp_v18 * DAT_004ea930;
        temp_v10 = temp_v19 * DAT_004ea934;
        temp_v11 = temp_v7 * DAT_004ea938;
        *pfVar8 = temp_v9;
        pfVar8[1] = temp_v8;
        pfVar8[2] = temp_v10;
        pfVar8[3] = temp_v11;
        pfVar7[3] = temp_v9;
        pfVar7[4] = pfVar8[1];
        pfVar7[5] = pfVar8[2];
        temp_v9 = temp_v14 * DAT_004ea92c;
        temp_v8 = temp_v15 * DAT_004ea930;
        temp_v10 = temp_v21 * DAT_004ea934;
        temp_v11 = temp_v22 * DAT_004ea938;
        temp_v6 = temp_v6 + 1;
        *pfVar8 = temp_v9;
        pfVar8[1] = temp_v8;
        pfVar8[2] = temp_v10;
        pfVar8[3] = temp_v11;
        pfVar7[6] = temp_v9;
        pfVar7[7] = pfVar8[1];
        pfVar7[8] = pfVar8[2];
        temp_v9 = temp_v13 * DAT_004ea92c;
        temp_v8 = temp_v23 * DAT_004ea930;
        temp_v10 = temp_v24 * DAT_004ea934;
        temp_v11 = temp_v12 * DAT_004ea938;
        DAT_004ea91c = temp_v9;
        DAT_004ea920 = temp_v8;
        DAT_004ea924 = temp_v10;
        DAT_004ea928 = temp_v11;
        *pfVar8 = temp_v9;
        pfVar8[1] = temp_v8;
        pfVar8[2] = temp_v10;
        pfVar8[3] = temp_v11;
        pfVar7[9] = temp_v9;
        pfVar7[10] = pfVar8[1];
        pfVar7[0xb] = pfVar8[2];
        pfVar7 = pfVar7 + 0xc;
      } while (temp_v6 < temp_v0);
    }
  }
  return;
}
