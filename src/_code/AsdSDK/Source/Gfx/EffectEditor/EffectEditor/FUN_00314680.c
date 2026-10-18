/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00314680` (_code @ 0x314680, 0xb60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00314680_arg0 fn_00314680_arg0;
typedef struct fn_00314680_arg0_p40 fn_00314680_arg0_p40;
struct fn_00314680_arg0 {
    unsigned char pad_0x0[0x34];
    int field_0x34; /* +0x34 */
    unsigned char field_0x38; /* +0x38 */
    unsigned char pad_0x39[0x3];
    void *field_0x3c; /* +0x3c */
    fn_00314680_arg0_p40 *field_0x40; /* +0x40 */
};
struct fn_00314680_arg0_p40 {
    unsigned char pad_0x0[0x34];
    undefined4 field_0x34; /* +0x34 */
    undefined4 field_0x38; /* +0x38 */
    unsigned char field_0x3c; /* +0x3c */
    unsigned char pad_0x3d[0x3];
    unsigned char field_0x40; /* +0x40 */
    unsigned char pad_0x41[0x3];
    float field_0x44; /* +0x44 */
    float field_0x48; /* +0x48 */
    undefined4 field_0x4c; /* +0x4c */
    undefined4 field_0x50; /* +0x50 */
    byte field_0x54; /* +0x54 */
    byte field_0x55; /* +0x55 */
    unsigned char pad_0x56[0x2];
    unsigned char field_0x58; /* +0x58 */
    unsigned char pad_0x59[0x3];
    unsigned char field_0x5c; /* +0x5c */
    unsigned char pad_0x5d[0x3];
    float field_0x60; /* +0x60 */
    float field_0x64; /* +0x64 */
    float field_0x68; /* +0x68 */
    float field_0x6c; /* +0x6c */
    float field_0x70; /* +0x70 */
    float field_0x74; /* +0x74 */
    float field_0x78; /* +0x78 */
    float field_0x7c; /* +0x7c */
    float field_0x80; /* +0x80 */
    float field_0x84; /* +0x84 */
    float field_0x88; /* +0x88 */
    float field_0x8c; /* +0x8c */
    float field_0x90; /* +0x90 */
    float field_0x94; /* +0x94 */
    float field_0x98; /* +0x98 */
    float field_0x9c; /* +0x9c */
    float field_0xa0; /* +0xa0 */
};

/* stack frame of param_1: 15 slot(s), 60 byte(s) */
typedef struct {
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int spF8; /* 0xf8: local_f8 */
} param_1_stack;

extern float DAT_00472520; /* 0x472520 */
extern float DAT_00472524; /* 0x472524 */
extern float DAT_00472528; /* 0x472528 */
extern float DAT_0047252c; /* 0x47252c */
extern float DAT_00472550; /* 0x472550 */
extern float DAT_00472554; /* 0x472554 */
extern float DAT_00472558; /* 0x472558 */
extern float DAT_0047255c; /* 0x47255c */
extern float DAT_004ea91c; /* 0x4ea91c */
extern float DAT_004ea920; /* 0x4ea920 */
extern float DAT_004ea924; /* 0x4ea924 */
extern float DAT_004ea928; /* 0x4ea928 */
extern float DAT_004ea92c; /* 0x4ea92c */
extern float DAT_004ea930; /* 0x4ea930 */
extern float DAT_004ea934; /* 0x4ea934 */
extern float DAT_004ea938; /* 0x4ea938 */
extern float DAT_004ea93c; /* 0x4ea93c */
extern float DAT_004ea940; /* 0x4ea940 */
extern float DAT_004ea944; /* 0x4ea944 */
extern float DAT_004ea948; /* 0x4ea948 */

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
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SUB41 (SUBPIECE). */
/* Supplied declaration required: FUN_00246df8. */
/* Supplied declaration required: FUN_0024b990. */
/* Supplied declaration required: FUN_0024ba44. */
/* Supplied declaration required: FUN_002b73a4. */
/* Supplied declaration required: FUN_002b740c. */
/* Supplied declaration required: FUN_002c6c10. */


void FUN_00314680(fn_00314680_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr; 12 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned char *puVar11;
  unsigned int temp_v10;
  int temp_v11;
  float *pfVar13;
  float *pfVar14;
  unsigned char *puVar15;
  float *pfVar16;
  fn_00314680_arg0_p40 *pfVar17;
  float temp_v12;
  int temp_v13;
  unsigned int in_fpscr;
  int temp_v14;
  float temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  float temp_v27;
  float temp_v28;
  float temp_v29;
  float temp_v30;
  float temp_v31;
  float temp_v32;
  float temp_v33;
  float temp_v34;
  float temp_v35;
  float temp_v36;
  float temp_v37;
  float temp_v38;
  int temp_v39;
  
  pfVar17 = param_1->field_0x40;
  if ((param_1->field_0x34 <= (int)pfVar17->field_0x34) || (pfVar17->field_0x34 == 0)) {
    temp_v11 = pfVar17->field_0x4c;
    temp_v13 = pfVar17->field_0x38;
    pfVar16 = *(float **)param_1->field_0x3c;
    temp_v8 = *(int *)((int)param_1->field_0x3c + 4);
    if (temp_v11 != 0) {
      if ((pfVar17->field_0x55 == 0) || (param_1->field_0x34 != 0)) {
        temp_v3 = 0;
        temp_v39 = pfVar17->field_0x50;
      }
      else {
        temp_v3 = 1;
        temp_v39 = temp_v13;
      }
      temp_v25 = 0.0f;
      pfVar14 = *(float **)(*(int *)(temp_v8 + 8) + 0x30);
      puVar15 = *(unsigned char **)(*(int *)(temp_v8 + 8) + 0x38);
      *(unsigned int *)(temp_v8 + 0x54) = *(unsigned int *)(temp_v8 + 0x54) | 0x21;
      FUN_00246df8(*(unsigned int *)&pfVar17->field_0x58);
      temp_v7 = DAT_004ea928;
      temp_v6 = DAT_004ea924;
      temp_v5 = DAT_004ea920;
      temp_v4 = DAT_004ea91c;
      FUN_00246df8(*(unsigned int *)&pfVar17->field_0x5c);
      temp_v15 = (float)VectorSignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v20 = (float)VectorSignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v1 = pfVar17->field_0x54;
      temp_v30 = pfVar17->field_0xa0;
      temp_v8 = 0;
      temp_v15 = (float)(int)(pfVar17->field_0x44 * temp_v15);
      temp_v14 = (int)(pfVar17->field_0x48 * temp_v20);
      if (0 < temp_v13) {
        temp_v37 = 6.2831855f;
        temp_v38 = 0.5f;
        temp_v36 = 40.743664f;
        temp_v35 = 1.0f;
        temp_v27 = 255.0f;
        temp_v20 = temp_v15;
        temp_v29 = DAT_004ea920;
        temp_v34 = temp_v25;
        temp_v28 = DAT_004ea928;
        temp_v31 = DAT_004ea924;
        temp_v32 = DAT_004ea91c;
        do {
          temp_v12 = *pfVar16;
          if (temp_v12 != -NAN) {
            if (temp_v12 != -NAN) {
              if ((int)temp_v12 >= temp_v11) {
                temp_v9 = 0;
                do {
                  pfVar13 = pfVar14 + temp_v9 * 3;
                  puVar11 = puVar15 + temp_v9 * 4;
                  *pfVar13 = temp_v34;
                  pfVar13[1] = temp_v34;
                  pfVar13[2] = temp_v34;
                  *puVar11 = 0;
                  puVar11[1] = 0;
                  temp_v9 = temp_v9 + 1;
                  puVar11[2] = 0;
                  puVar11[3] = 0;
                } while (temp_v9 < 4);
                if (temp_v1 == 0) {
                  temp_v20 = -NAN;
                }
                else {
                  temp_v20 = -NAN;
                }
                *pfVar16 = temp_v20;
                temp_v20 = temp_v34;
              }
              else {
                temp_v24 = pfVar16[7];
                temp_v26 = pfVar16[5];
                temp_v20 = (float)VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v33 = (pfVar16[1] + (pfVar16[2] + temp_v30 * temp_v20 * temp_v38) * temp_v20) * temp_v36;
                temp_v20 = temp_v33;
                FUN_002b73a4();
                FUN_002b740c();
                DAT_004ea91c = temp_v33 * temp_v24;
                DAT_004ea924 = temp_v20 * temp_v24;
                DAT_004ea920 = temp_v35 - temp_v24;
                temp_v24 = romwright_sqrt_4(DAT_004ea91c * DAT_004ea91c + DAT_004ea920 * DAT_004ea920 +
                              DAT_004ea924 * DAT_004ea924);
                temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v24 < temp_v34) << 0x1f) |
                        ((unsigned int)(temp_v24 == temp_v34) << 0x1e);
                in_fpscr = temp_v0 | ((unsigned int)(NAN(temp_v24) || NAN(temp_v34)) << 0x1c);
                temp_v2 = (unsigned char)(temp_v0 >> 0x18);
                if (!(unsigned char)((temp_v2 >> 6) & 1) && temp_v2 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                  DAT_004ea91c = DAT_004ea91c / temp_v24;
                  DAT_004ea920 = DAT_004ea920 / temp_v24;
                  DAT_004ea924 = DAT_004ea924 / temp_v24;
                }
                DAT_004ea93c = DAT_004ea91c;
                DAT_004ea940 = DAT_004ea920;
                DAT_004ea944 = DAT_004ea924;
                DAT_004ea938 = pfVar16[9];
                temp_v24 = temp_v20 * DAT_004ea938;
                temp_v21 = temp_v34 * DAT_004ea938;
                temp_v22 = -temp_v33 * DAT_004ea938;
                DAT_004ea938 = temp_v35 * DAT_004ea938;
                DAT_004ea91c = temp_v33 * temp_v26 + temp_v24;
                DAT_00472554 = temp_v25 + temp_v21;
                DAT_00472558 = temp_v20 * temp_v26 + temp_v22;
                DAT_004ea920 = DAT_00472554;
                DAT_004ea924 = DAT_00472558;
                DAT_004ea92c = temp_v24;
                DAT_004ea930 = temp_v21;
                DAT_004ea934 = temp_v22;
                DAT_004ea948 = temp_v35;
                pfVar14[6] = DAT_004ea91c;
                pfVar14[7] = DAT_00472554;
                pfVar14[8] = DAT_00472558;
                DAT_00472554 = (DAT_004ea920 - DAT_004ea930) - DAT_004ea930;
                DAT_00472558 = (DAT_004ea924 - DAT_004ea934) - DAT_004ea934;
                pfVar14[9] = (DAT_004ea91c - DAT_004ea92c) - DAT_004ea92c;
                pfVar14[10] = DAT_00472554;
                pfVar14[0xb] = DAT_00472558;
                temp_v23 = pfVar16[3];
                DAT_004ea91c = temp_v33 * temp_v26 + DAT_004ea93c * temp_v23 + temp_v24;
                DAT_00472554 = temp_v25 + DAT_004ea940 * temp_v23 + temp_v21;
                DAT_00472558 = temp_v20 * temp_v26 + DAT_004ea944 * temp_v23 + temp_v22;
                DAT_004ea928 = temp_v25 + DAT_004ea948 * temp_v23 + DAT_004ea938;
                DAT_004ea920 = DAT_00472554;
                DAT_004ea924 = DAT_00472558;
                DAT_004ea92c = temp_v24;
                DAT_004ea930 = temp_v21;
                DAT_004ea934 = temp_v22;
                *pfVar14 = DAT_004ea91c;
                pfVar14[1] = DAT_00472554;
                pfVar14[2] = DAT_00472558;
                DAT_00472550 = (DAT_004ea91c - DAT_004ea92c) - DAT_004ea92c;
                DAT_00472554 = (DAT_004ea920 - DAT_004ea930) - DAT_004ea930;
                DAT_00472558 = (DAT_004ea924 - DAT_004ea934) - DAT_004ea934;
                DAT_0047255c = (DAT_004ea928 - DAT_004ea938) - DAT_004ea938;
                pfVar14[3] = DAT_00472550;
                pfVar14[4] = DAT_00472554;
                pfVar14[5] = DAT_00472558;
                pfVar16[3] = pfVar16[3] + pfVar16[4];
                pfVar16[7] = pfVar16[7] + pfVar16[8];
                pfVar16[5] = pfVar16[5] + pfVar16[6];
                if ((int)temp_v12 < (int)temp_v15) {
                  temp_v33 = (float)VectorSignedToFloat(temp_v15,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v20 = (float)VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
                  DAT_004ea938 = temp_v20 / temp_v33;
                }
                else {
                  DAT_004ea938 = temp_v35;
                  if (temp_v14 < (int)temp_v12) {
                    temp_v20 = (float)VectorSignedToFloat(temp_v11 - temp_v14,(unsigned char)(in_fpscr >> 0x16) & 3
                                                       );
                    DAT_004ea938 = (float)VectorSignedToFloat(temp_v11 - (int)temp_v12,
                                                              (unsigned char)(in_fpscr >> 0x16) & 3);
                    DAT_004ea938 = DAT_004ea938 / temp_v20;
                  }
                }
                DAT_004ea92c = DAT_00472520 * DAT_004ea938;
                DAT_004ea930 = DAT_00472524 * DAT_004ea938;
                DAT_004ea934 = DAT_00472528 * DAT_004ea938;
                DAT_004ea938 = DAT_0047252c * DAT_004ea938;
                temp_v16 = VectorFloatToUnsigned(temp_v32 * DAT_004ea92c * temp_v27,3);
                temp_v17 = VectorFloatToUnsigned(temp_v29 * DAT_004ea930 * temp_v27,3);
                temp_v18 = VectorFloatToUnsigned(temp_v31 * DAT_004ea934 * temp_v27,3);
                temp_v19 = VectorFloatToUnsigned(temp_v28 * DAT_004ea938 * temp_v27,3);
                *puVar15 = (char)temp_v19;
                puVar15[1] = (char)temp_v18;
                puVar15[2] = (char)temp_v17;
                puVar15[3] = (char)temp_v16;
                puVar15[4] = (char)temp_v19;
                puVar15[5] = (char)temp_v18;
                puVar15[6] = (char)temp_v17;
                puVar15[7] = (char)temp_v16;
                DAT_004ea91c = temp_v4 * DAT_004ea92c;
                DAT_004ea920 = temp_v5 * DAT_004ea930;
                DAT_004ea924 = temp_v6 * DAT_004ea934;
                DAT_004ea928 = temp_v7 * DAT_004ea938;
                temp_v16 = VectorFloatToUnsigned(DAT_004ea920 * temp_v27,3);
                temp_v18 = VectorFloatToUnsigned(DAT_004ea91c * temp_v27,3);
                temp_v17 = VectorFloatToUnsigned(DAT_004ea924 * temp_v27,3);
                temp_v20 = (float)VectorFloatToUnsigned(DAT_004ea928 * temp_v27,3);
                puVar15[8] = SUB41(temp_v20,0);
                puVar15[9] = (char)temp_v17;
                puVar15[10] = (char)temp_v16;
                puVar15[0xb] = (char)temp_v18;
                puVar15[0xc] = SUB41(temp_v20,0);
                puVar15[0xd] = (char)temp_v17;
                puVar15[0xe] = (char)temp_v16;
                puVar15[0xf] = (char)temp_v18;
                *pfVar16 = (float)((int)temp_v12 + 1);
              }
            }
            else if (temp_v39 != 0) {
              FUN_0024ba44(0);
              temp_v20 = temp_v20 * temp_v37;
              pfVar16[1] = temp_v20;
              FUN_0024ba44(0);
              temp_v21 = ((temp_v35 - pfVar17->field_0x6c) + temp_v20 * pfVar17->field_0x6c) *
                       pfVar17->field_0x68;
              temp_v12 = temp_v35;
              FUN_0024ba44(0);
              temp_v24 = pfVar17->field_0x74;
              temp_v26 = pfVar17->field_0x70;
              pfVar16[3] = temp_v21;
              temp_v33 = (float)VectorSignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v33 = (((temp_v35 - temp_v24) + temp_v20 * temp_v24) * temp_v26 - temp_v21) / temp_v33;
              pfVar16[4] = temp_v33;
              FUN_0024ba44(0);
              temp_v20 = ((temp_v35 - pfVar17->field_0x7c) + temp_v33 * pfVar17->field_0x7c) *
                       pfVar17->field_0x78;
              FUN_0024ba44(0);
              temp_v24 = pfVar17->field_0x84;
              temp_v21 = pfVar17->field_0x80;
              pfVar16[5] = temp_v20;
              temp_v26 = (float)VectorSignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v20 = ((temp_v35 - temp_v24) + temp_v33 * temp_v24) * temp_v21 - temp_v20;
              pfVar16[6] = temp_v20 / temp_v26;
              FUN_0024ba44(0);
              temp_v33 = ((temp_v35 - pfVar17->field_0x8c) + temp_v20 * pfVar17->field_0x8c) *
                       pfVar17->field_0x88;
              FUN_0024ba44(0);
              temp_v24 = pfVar17->field_0x94;
              temp_v21 = pfVar17->field_0x90;
              pfVar16[7] = temp_v33;
              temp_v26 = (float)VectorSignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v33 = ((temp_v35 - temp_v24) + temp_v20 * temp_v24) * temp_v21 - temp_v33;
              pfVar16[8] = temp_v33 / temp_v26;
              FUN_0024ba44(0);
              temp_v20 = ((temp_v35 - pfVar17->field_0x64) + temp_v33 * pfVar17->field_0x64) *
                       pfVar17->field_0x60;
              pfVar16[9] = temp_v20;
              FUN_0024ba44(0);
              temp_v20 = ((temp_v35 - pfVar17->field_0x9c) + temp_v20 * pfVar17->field_0x9c) *
                       pfVar17->field_0x98;
              pfVar16[2] = temp_v20;
              if (!temp_v3) {
                *pfVar16 = 0.0f;
              }
              else {
                FUN_0024b990();
                FUN_002c6c10();
                temp_v35 = (float)VectorUnsignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v20 = (float)(int)temp_v35;
                pfVar16[3] = pfVar16[3] + pfVar16[4] * temp_v35;
                pfVar16[5] = pfVar16[5] + pfVar16[6] * temp_v35;
                pfVar16[7] = pfVar16[7] + pfVar16[8] * temp_v35;
                *pfVar16 = temp_v20;
              }
              temp_v39 = temp_v39 - 1;
              temp_v35 = temp_v12;
            }
          }
          temp_v8 = temp_v8 + 1;
          pfVar16 = pfVar16 + 10;
          pfVar14 = pfVar14 + 0xc;
          puVar15 = puVar15 + 0x10;
        } while (temp_v8 < temp_v13);
      }
    }
  }
  return;
}
