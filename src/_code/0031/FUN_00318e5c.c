/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00318e5c` (_code @ 0x318e5c, 0xc0c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00318e5c_arg0 fn_00318e5c_arg0;
struct fn_00318e5c_arg0 {
    unsigned char pad_0x0[0x34];
    int field_0x34; /* +0x34 */
    unsigned char pad_0x38[0x4];
    void *field_0x3c; /* +0x3c */
    void *field_0x40; /* +0x40 */
};

/* stack frame of param_1: 25 slot(s), 100 byte(s) */
typedef struct {
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int spF8; /* 0xf8: local_f8 */
    unsigned int sp110; /* 0x110: local_110 */
    unsigned int sp11C; /* 0x11c: local_11c */
    unsigned int sp124; /* 0x124: local_124 */
    unsigned int sp128; /* 0x128: local_128 */
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
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SUB41 (SUBPIECE). */
/* Supplied declaration required: FUN_00246df8. */
/* Supplied declaration required: FUN_0024b990. */
/* Supplied declaration required: FUN_0024ba44. */
/* Supplied declaration required: FUN_002b73a4. */
/* Supplied declaration required: FUN_002b740c. */
/* Supplied declaration required: FUN_002c6c10. */


void FUN_00318e5c(fn_00318e5c_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr; 11 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  int temp_v8;
  float *pfVar10;
  float *pfVar11;
  unsigned char *puVar12;
  int temp_v9;
  void *pvVar13;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  float *pfVar17;
  unsigned char *puVar18;
  int temp_v13;
  unsigned int in_fpscr;
  float temp_v14;
  int temp_v15;
  float temp_v16;
  float temp_v17;
  int temp_v18;
  float temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  float temp_v22;
  unsigned int temp_v23;
  unsigned int temp_v24;
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
  int *temp_v38;
  int temp_v39;
  int temp_v40;
  
  pvVar13 = param_1->field_0x40;
  if ((param_1->field_0x34 <= *(int *)((int)pvVar13 + 0x34)) || (*(int *)((int)pvVar13 + 0x34) == 0)
     ) {
    temp_v10 = *(int *)((int)pvVar13 + 0x4c);
    temp_v11 = *(int *)((int)pvVar13 + 0x38);
    temp_v38 = *(int **)param_1->field_0x3c;
    temp_v8 = *(int *)((int)param_1->field_0x3c + 4);
    if (temp_v10 != 0) {
      temp_v25 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v14 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v18 = (int)(*(float *)((int)pvVar13 + 0x44) * temp_v25);
      temp_v15 = (int)(*(float *)((int)pvVar13 + 0x48) * temp_v14);
      if ((*(char *)((int)pvVar13 + 0x55) == '\0') || (param_1->field_0x34 != 0)) {
        temp_v1 = 0;
        temp_v40 = *(int *)((int)pvVar13 + 0x50);
      }
      else {
        temp_v1 = 1;
        temp_v40 = temp_v11;
      }
      temp_v29 = 0.0f;
      pfVar17 = *(float **)(*(int *)(temp_v8 + 8) + 0x30);
      puVar18 = *(unsigned char **)(*(int *)(temp_v8 + 8) + 0x38);
      *(unsigned int *)(temp_v8 + 0x54) = *(unsigned int *)(temp_v8 + 0x54) | 0x21;
      temp_v30 = temp_v29;
      FUN_00246df8(*(unsigned int *)((int)pvVar13 + 0x58) & 0xffffff);
      temp_v6 = DAT_004ea928;
      temp_v4 = DAT_004ea924;
      temp_v2 = DAT_004ea920;
      temp_v14 = DAT_004ea91c;
      FUN_00246df8(*(unsigned int *)((int)pvVar13 + 0x5c) & 0xffffff);
      temp_v7 = DAT_004ea928;
      temp_v5 = DAT_004ea924;
      temp_v3 = DAT_004ea920;
      temp_v25 = DAT_004ea91c;
      temp_v27 = 1.0f;
      temp_v16 = *(float *)((int)pvVar13 + 0x8c);
      temp_v17 = *(float *)((int)pvVar13 + 0x98);
      temp_v0 = *(char *)((int)pvVar13 + 0x54);
      temp_v39 = 0;
      if (0 < temp_v11) {
        temp_v28 = temp_v27;
        temp_v37 = temp_v17;
        do {
          temp_v8 = *temp_v38;
          if (temp_v8 != -2) {
            if (temp_v8 != -1) {
              if (temp_v8 >= temp_v10) {
                temp_v8 = 0;
                do {
                  pfVar10 = pfVar17 + temp_v8 * 3;
                  puVar12 = puVar18 + temp_v8 * 4;
                  *pfVar10 = temp_v30;
                  pfVar10[1] = temp_v30;
                  pfVar10[2] = temp_v30;
                  *puVar12 = 0;
                  puVar12[1] = 0;
                  temp_v8 = temp_v8 + 1;
                  puVar12[2] = 0;
                  puVar12[3] = 0;
                } while (temp_v8 < 0xd);
                if (temp_v0 == '\0') {
                  temp_v8 = -2;
                }
                else {
                  temp_v8 = -1;
                }
                *temp_v38 = temp_v8;
                temp_v17 = temp_v30;
              }
              else {
                temp_v32 = (float)temp_v38[4];
                temp_v17 = (float)VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v33 = (float)temp_v38[5];
                temp_v34 = (float)temp_v38[6] + (float)temp_v38[7] * temp_v17;
                temp_v19 = (float)temp_v38[8];
                temp_v26 = DAT_00472520 * temp_v19;
                DAT_004ea920 = DAT_00472524 * temp_v19;
                DAT_004ea924 = DAT_00472528 * temp_v19;
                temp_v35 = ((float)temp_v38[1] + temp_v16 * temp_v17 * 0.5f) * temp_v17 -
                         temp_v37 * temp_v17 * temp_v17 * 0.5f;
                temp_v19 = DAT_0047252c * temp_v19;
                temp_v36 = ((float)temp_v38[3] +
                         ((float)temp_v38[2] + temp_v16 * temp_v17 * 0.5f) * temp_v17) * 40.743664f;
                temp_v17 = temp_v36;
                DAT_004ea91c = temp_v26;
                DAT_004ea928 = temp_v19;
                temp_v22 = DAT_004ea920;
                temp_v31 = DAT_004ea924;
                FUN_002b73a4();
                FUN_002b740c();
                DAT_004ea93c = temp_v36 * temp_v34;
                DAT_00472558 = temp_v17 * temp_v34;
                DAT_004ea948 = temp_v29 * temp_v34;
                DAT_00472554 = temp_v35;
                DAT_004ea940 = temp_v35;
                DAT_004ea944 = DAT_00472558;
                *pfVar17 = DAT_004ea93c;
                pfVar17[1] = DAT_00472554;
                pfVar17[2] = DAT_00472558;
                temp_v12 = 0;
                do {
                  pfVar10 = (float *)(temp_v12 * 4 + 0x4725d4);
                  pfVar11 = (float *)(temp_v12 * 4 + 0x4725a0);
                  temp_v13 = temp_v12 + 1;
                  DAT_00472554 = temp_v32 * *pfVar10 + DAT_004ea940 + temp_v29 * temp_v22 * *pfVar11;
                  DAT_00472558 = *pfVar10 * 0.0f + DAT_004ea944 + -temp_v36 * temp_v31 * *pfVar11;
                  pfVar17[temp_v12 * 3 + 3] =
                       *pfVar10 * 0.0f + DAT_004ea93c + temp_v17 * temp_v26 * *pfVar11;
                  pfVar17[temp_v12 * 3 + 4] = DAT_00472554;
                  pfVar17[temp_v12 * 3 + 5] = DAT_00472558;
                  temp_v12 = temp_v13;
                } while (temp_v13 < 6);
                temp_v12 = 6;
                do {
                  pfVar10 = (float *)(temp_v12 * 4 + 0x4725d4);
                  pfVar11 = (float *)(temp_v12 * 4 + 0x4725a0);
                  temp_v13 = temp_v12 + 1;
                  DAT_00472550 = *pfVar10 * 0.0f + DAT_004ea93c + temp_v17 * temp_v26 * *pfVar11;
                  DAT_00472554 = temp_v33 * *pfVar10 + DAT_004ea940 + temp_v29 * temp_v22 * *pfVar11;
                  DAT_00472558 = *pfVar10 * 0.0f + DAT_004ea944 + -temp_v36 * temp_v31 * *pfVar11;
                  DAT_0047255c = temp_v28 * *pfVar10 + DAT_004ea948 + temp_v29 * temp_v19 * *pfVar11;
                  pfVar17[temp_v12 * 3 + 3] = DAT_00472550;
                  pfVar17[temp_v12 * 3 + 4] = DAT_00472554;
                  pfVar17[temp_v12 * 3 + 5] = DAT_00472558;
                  temp_v12 = temp_v13;
                } while (temp_v13 < 0xc);
                if (temp_v8 < temp_v18) {
                  temp_v22 = (float)VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v17 = (float)VectorSignedToFloat(temp_v18,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v17 = temp_v22 / temp_v17;
                }
                else {
                  temp_v17 = temp_v27;
                  if (temp_v15 < temp_v8) {
                    temp_v22 = (float)VectorSignedToFloat(temp_v10 - temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3)
                    ;
                    temp_v17 = (float)VectorSignedToFloat(temp_v10 - temp_v15,(unsigned char)(in_fpscr >> 0x16) & 3
                                                       );
                    temp_v17 = temp_v22 / temp_v17;
                  }
                }
                temp_v12 = 1;
                DAT_004ea92c = DAT_00472520 * temp_v17;
                DAT_004ea930 = DAT_00472524 * temp_v17;
                DAT_004ea934 = DAT_00472528 * temp_v17;
                DAT_004ea938 = DAT_0047252c * temp_v17;
                temp_v23 = VectorFloatToUnsigned(temp_v3 * DAT_004ea930 * 255.0f,3);
                temp_v20 = VectorFloatToUnsigned(temp_v25 * DAT_004ea92c * 255.0f,3);
                temp_v24 = VectorFloatToUnsigned(temp_v5 * DAT_004ea934 * 255.0f,3);
                temp_v21 = VectorFloatToUnsigned(temp_v7 * DAT_004ea938 * 255.0f,3);
                do {
                  puVar12 = puVar18 + temp_v12 * 4;
                  *puVar12 = (char)temp_v21;
                  puVar12[1] = (char)temp_v24;
                  temp_v12 = temp_v12 + 1;
                  puVar12[2] = (char)temp_v23;
                  puVar12[3] = (char)temp_v20;
                } while (temp_v12 < 0xd);
                temp_v20 = VectorFloatToUnsigned(temp_v17 * 255.0f,3);
                DAT_004ea91c = temp_v14 * DAT_004ea92c;
                DAT_004ea920 = temp_v2 * DAT_004ea930;
                DAT_004ea924 = temp_v4 * DAT_004ea934;
                DAT_004ea928 = temp_v6 * DAT_004ea938;
                temp_v23 = VectorFloatToUnsigned(DAT_004ea920 * 255.0f,3);
                temp_v21 = VectorFloatToUnsigned(DAT_004ea91c * 255.0f,3);
                temp_v24 = VectorFloatToUnsigned(DAT_004ea924 * 255.0f,3);
                temp_v17 = (float)VectorFloatToUnsigned(DAT_004ea928 * 255.0f,3);
                *puVar18 = SUB41(temp_v17,0);
                puVar18[1] = (char)temp_v24;
                puVar18[2] = (char)temp_v23;
                puVar18[3] = (unsigned char)temp_v21 | (unsigned char)temp_v20;
                *temp_v38 = temp_v8 + 1;
              }
            }
            else if (temp_v40 != 0) {
              FUN_0024ba44(0);
              temp_v17 = temp_v17 * 6.2831855f;
              temp_v38[3] = (int)temp_v17;
              temp_v31 = *(float *)((int)pvVar13 + 0x70);
              FUN_0024ba44(0);
              temp_v36 = temp_v27 - temp_v31;
              temp_v22 = (temp_v36 + temp_v17 * temp_v31) * *(float *)((int)pvVar13 + 0x6c);
              temp_v38[4] = (int)temp_v22;
              temp_v17 = temp_v27;
              FUN_0024ba44(0);
              temp_v22 = (temp_v36 + temp_v22 * temp_v31) * *(float *)((int)pvVar13 + 0x6c);
              temp_v38[5] = (int)temp_v22;
              FUN_0024ba44(0);
              temp_v31 = ((temp_v17 - *(float *)((int)pvVar13 + 0x78)) +
                       temp_v22 * *(float *)((int)pvVar13 + 0x78)) * *(float *)((int)pvVar13 + 0x74);
              FUN_0024ba44(0);
              temp_v36 = *(float *)((int)pvVar13 + 0x80);
              temp_v26 = *(float *)((int)pvVar13 + 0x7c);
              temp_v19 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v38[6] = (int)temp_v31;
              temp_v31 = ((temp_v17 - temp_v36) + temp_v22 * temp_v36) * temp_v26 - temp_v31;
              temp_v38[7] = (int)(temp_v31 / temp_v19);
              FUN_0024ba44(0);
              temp_v22 = ((temp_v17 - *(float *)((int)pvVar13 + 0x94)) +
                       temp_v31 * *(float *)((int)pvVar13 + 0x94)) * *(float *)((int)pvVar13 + 0x90);
              temp_v38[1] = (int)temp_v22;
              FUN_0024ba44(0);
              temp_v22 = ((temp_v17 - *(float *)((int)pvVar13 + 0x88)) +
                       temp_v22 * *(float *)((int)pvVar13 + 0x88)) * *(float *)((int)pvVar13 + 0x84);
              temp_v38[2] = (int)temp_v22;
              FUN_0024ba44(0);
              temp_v17 = *(float *)((int)pvVar13 + 0x60) *
                       ((temp_v17 - *(float *)((int)pvVar13 + 0x68)) +
                       temp_v22 * *(float *)((int)pvVar13 + 0x68));
              temp_v38[8] = (int)temp_v17;
              if (!temp_v1) {
                *temp_v38 = 0;
              }
              else {
                FUN_0024b990();
                FUN_002c6c10();
                *temp_v38 = temp_v9;
              }
              temp_v40 = temp_v40 - 1;
            }
          }
          pfVar17 = pfVar17 + 0x27;
          temp_v39 = temp_v39 + 1;
          puVar18 = puVar18 + 0x34;
          temp_v38 = temp_v38 + 0xb;
        } while (temp_v39 < temp_v11);
      }
    }
  }
  return;
}
