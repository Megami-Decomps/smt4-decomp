/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003027d4` (_code @ 0x3027d4, 0xbdc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003027d4_arg0 fn_003027d4_arg0;
struct fn_003027d4_arg0 {
    unsigned char pad_0x0[0x34];
    int field_0x34; /* +0x34 */
    unsigned char pad_0x38[0x4];
    void *field_0x3c; /* +0x3c */
    void *field_0x40; /* +0x40 */
};

/* stack frame of param_1: 25 slot(s), 100 byte(s) */
typedef struct {
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int sp114; /* 0x114: local_114 */
    unsigned int sp118; /* 0x118: local_118 */
    unsigned int sp11C; /* 0x11c: local_11c */
    unsigned int sp120; /* 0x120: local_120 */
    unsigned int sp130; /* 0x130: local_130 */
    unsigned int sp134; /* 0x134: local_134 */
    unsigned int sp138; /* 0x138: local_138 */
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
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SUB41 (SUBPIECE). */
extern unsigned int FUN_00246c28(void);
/* Supplied declaration required: FUN_00246c8c. */
/* Supplied declaration required: FUN_0024b77c. */
/* Supplied declaration required: FUN_0024b830. */
/* Supplied declaration required: FUN_002b7064. */
/* Supplied declaration required: FUN_002b70cc. */
/* Supplied declaration required: aeabi_uidivmod. */


void FUN_003027d4(fn_003027d4_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr; 12 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  char temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  int temp_v11;
  float temp_v12;
  float *pfVar14;
  float *pfVar15;
  unsigned int temp_v13;
  unsigned char *puVar17;
  float temp_v14;
  void *pvVar18;
  float temp_v15;
  int temp_v16;
  float *pfVar21;
  unsigned char *puVar22;
  int temp_v17;
  unsigned int in_fpscr;
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
  float *temp_v39;
  float temp_v40;
  int temp_v41;
  int temp_v42;
  int temp_v43;
  int temp_v44;
  float temp_v45;
  int temp_v46;
  
  pvVar18 = param_1->field_0x40;
  if ((param_1->field_0x34 <= *(int *)((int)pvVar18 + 0x34)) || (*(int *)((int)pvVar18 + 0x34) == 0)
     ) {
    temp_v15 = *(float *)((int)pvVar18 + 0x4c);
    temp_v16 = *(int *)((int)pvVar18 + 0x38);
    temp_v39 = *(float **)param_1->field_0x3c;
    temp_v11 = *(int *)((int)param_1->field_0x3c + 4);
    if (temp_v15 != 0.0f) {
      temp_v25 = 1.0f;
      if (*(char *)((int)pvVar18 + 0x88) != '\0') {
        temp_v24 = (float)VectorSignedToFloat(temp_v15,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v18 = (float)VectorSignedToFloat(temp_v15,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v45 = 0.0f;
        temp_v44 = -1;
        temp_v24 = (1.0f - *(float *)((int)pvVar18 + 0x48)) * temp_v24;
        temp_v18 = (1.0f - *(float *)((int)pvVar18 + 0x44)) * temp_v18;
        temp_v40 = temp_v15;
      }
      else {
        temp_v24 = (float)VectorSignedToFloat(temp_v15,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v18 = (float)VectorSignedToFloat(temp_v15,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v40 = 0.0f;
        temp_v44 = 1;
        temp_v24 = *(float *)((int)pvVar18 + 0x44) * temp_v24;
        temp_v18 = *(float *)((int)pvVar18 + 0x48) * temp_v18;
        temp_v45 = temp_v15;
      }
      temp_v43 = (int)temp_v24;
      temp_v41 = (int)temp_v18;
      if ((*(char *)((int)pvVar18 + 0x55) == '\0') || (param_1->field_0x34 != 0)) {
        temp_v4 = 0;
        temp_v46 = *(int *)((int)pvVar18 + 0x50);
      }
      else {
        temp_v4 = 1;
        temp_v46 = temp_v16;
      }
      temp_v28 = 0.0f;
      pfVar21 = *(float **)(*(int *)(temp_v11 + 8) + 0x30);
      puVar22 = *(unsigned char **)(*(int *)(temp_v11 + 8) + 0x38);
      *(unsigned int *)(temp_v11 + 0x54) = *(unsigned int *)(temp_v11 + 0x54) | 0x21;
      FUN_00246c8c(*(unsigned int *)((int)pvVar18 + 0x58) & 0xffffff);
      temp_v9 = DAT_004ea928;
      temp_v7 = DAT_004ea924;
      temp_v5 = DAT_004ea920;
      temp_v24 = DAT_004ea91c;
      FUN_00246c8c(*(unsigned int *)((int)pvVar18 + 0x5c) & 0xffffff);
      temp_v10 = DAT_004ea928;
      temp_v8 = DAT_004ea924;
      temp_v6 = DAT_004ea920;
      temp_v18 = DAT_004ea91c;
      temp_v42 = 0;
      temp_v27 = *(float *)((int)pvVar18 + 0x84);
      temp_v2 = *(char *)((int)pvVar18 + 0x54);
      if (0 < temp_v16) {
        temp_v33 = 0.5f;
        temp_v37 = 6.2831855f;
        temp_v38 = -0.5f;
        temp_v19 = temp_v27 * 0.5f;
        temp_v35 = 40.743664f;
        temp_v36 = 255.0f;
        temp_v34 = temp_v19;
        temp_v29 = temp_v28;
        do {
          temp_v12 = *temp_v39;
          if (temp_v12 != -NAN) {
            if (temp_v12 != -NAN) {
              if (temp_v12 == temp_v45) {
                temp_v11 = 0;
                do {
                  pfVar14 = pfVar21 + temp_v11 * 3;
                  puVar17 = puVar22 + temp_v11 * 4;
                  *pfVar14 = temp_v28;
                  pfVar14[1] = temp_v28;
                  pfVar14[2] = temp_v28;
                  *puVar17 = 0;
                  puVar17[1] = 0;
                  temp_v11 = temp_v11 + 1;
                  puVar17[2] = 0;
                  puVar17[3] = 0;
                } while (temp_v11 < 0xd);
                if (temp_v2 == '\0') {
                  temp_v19 = -NAN;
                }
                else {
                  temp_v19 = -NAN;
                }
                *temp_v39 = temp_v19;
                temp_v19 = temp_v28;
              }
              else {
                temp_v0 = in_fpscr & 0xfffffff;
                temp_v1 = temp_v0 | ((unsigned int)(temp_v28 < temp_v27) << 0x1f) |
                        ((unsigned int)(temp_v28 == temp_v27) << 0x1e);
                in_fpscr = temp_v1 | ((unsigned int)((temp_v28 != temp_v28) || (temp_v27 != temp_v27)) << 0x1c);
                temp_v3 = (unsigned char)(temp_v1 >> 0x18);
                temp_v19 = (float)VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
                if (!(unsigned char)((temp_v3 >> 6) & 1) && temp_v3 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                  temp_v23 = (temp_v39[1] / temp_v34) * temp_v38;
                  temp_v0 = temp_v0 | ((unsigned int)(temp_v19 < temp_v23) << 0x1f) |
                          ((unsigned int)(temp_v19 == temp_v23) << 0x1e);
                  in_fpscr = temp_v0 | ((unsigned int)((temp_v19 != temp_v19) || (temp_v23 != temp_v23)) << 0x1c);
                  temp_v3 = (unsigned char)(temp_v0 >> 0x18);
                  if (!(unsigned char)((temp_v3 >> 6) & 1) && temp_v3 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                    temp_v19 = temp_v23;
                  }
                }
                temp_v26 = temp_v39[5] + (temp_v39[1] + temp_v27 * temp_v19 * temp_v33) * temp_v19;
                DAT_004ea928 = temp_v39[6];
                DAT_004ea91c = DAT_00472520 * DAT_004ea928;
                DAT_004ea920 = DAT_00472524 * DAT_004ea928;
                DAT_004ea924 = DAT_00472528 * DAT_004ea928;
                DAT_004ea928 = DAT_0047252c * DAT_004ea928;
                temp_v20 = temp_v39[2] * temp_v35;
                temp_v19 = temp_v20;
                temp_v23 = DAT_004ea91c;
                temp_v30 = DAT_004ea920;
                temp_v31 = DAT_004ea924;
                temp_v32 = DAT_004ea928;
                FUN_002b7064();
                FUN_002b70cc();
                temp_v21 = temp_v39[3];
                temp_v22 = temp_v39[4];
                DAT_004ea93c = temp_v19 * temp_v26;
                DAT_00472554 = temp_v29 * temp_v26;
                DAT_00472558 = temp_v20 * temp_v26;
                DAT_004ea948 = temp_v29 * temp_v26;
                DAT_004ea940 = DAT_00472554;
                DAT_004ea944 = DAT_00472558;
                *pfVar21 = DAT_004ea93c;
                pfVar21[1] = DAT_00472554;
                pfVar21[2] = DAT_00472558;
                temp_v11 = 0;
                do {
                  pfVar14 = (float *)(temp_v11 * 4 + 0x4725d4);
                  pfVar15 = (float *)(temp_v11 * 4 + 0x4725a0);
                  temp_v17 = temp_v11 + 1;
                  DAT_00472554 = temp_v29 * temp_v21 * *pfVar14 + DAT_004ea940 +
                                 temp_v29 * temp_v30 * *pfVar15;
                  DAT_00472558 = temp_v20 * temp_v21 * *pfVar14 + DAT_004ea944 +
                                 -temp_v19 * temp_v31 * *pfVar15;
                  pfVar21[temp_v11 * 3 + 3] =
                       temp_v19 * temp_v21 * *pfVar14 + DAT_004ea93c + temp_v20 * temp_v23 * *pfVar15;
                  pfVar21[temp_v11 * 3 + 4] = DAT_00472554;
                  pfVar21[temp_v11 * 3 + 5] = DAT_00472558;
                  temp_v11 = temp_v17;
                } while (temp_v17 < 6);
                temp_v11 = 6;
                do {
                  pfVar14 = (float *)(temp_v11 * 4 + 0x4725d4);
                  pfVar15 = (float *)(temp_v11 * 4 + 0x4725a0);
                  temp_v17 = temp_v11 + 1;
                  DAT_00472550 = temp_v19 * temp_v22 * *pfVar14 + DAT_004ea93c +
                                 temp_v20 * temp_v23 * *pfVar15;
                  DAT_00472554 = temp_v29 * temp_v22 * *pfVar14 + DAT_004ea940 +
                                 temp_v29 * temp_v30 * *pfVar15;
                  DAT_00472558 = temp_v20 * temp_v22 * *pfVar14 + DAT_004ea944 +
                                 -temp_v19 * temp_v31 * *pfVar15;
                  DAT_0047255c = temp_v29 * temp_v22 * *pfVar14 + DAT_004ea948 +
                                 temp_v29 * temp_v32 * *pfVar15;
                  pfVar21[temp_v11 * 3 + 3] = DAT_00472550;
                  pfVar21[temp_v11 * 3 + 4] = DAT_00472554;
                  pfVar21[temp_v11 * 3 + 5] = DAT_00472558;
                  temp_v11 = temp_v17;
                } while (temp_v17 < 0xc);
                if ((int)temp_v12 < temp_v43) {
                  temp_v19 = (float)VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v23 = (float)VectorSignedToFloat(temp_v43,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v19 = temp_v19 / temp_v23;
                }
                else {
                  temp_v19 = temp_v25;
                  if (temp_v41 < (int)temp_v12) {
                    temp_v23 = (float)VectorSignedToFloat((int)temp_v15 - (int)temp_v12,
                                                        (unsigned char)(in_fpscr >> 0x16) & 3);
                    temp_v19 = (float)VectorSignedToFloat((int)temp_v15 - temp_v41,
                                                        (unsigned char)(in_fpscr >> 0x16) & 3);
                    temp_v19 = temp_v23 / temp_v19;
                  }
                }
                DAT_004ea92c = DAT_00472520 * temp_v19;
                DAT_004ea930 = DAT_00472524 * temp_v19;
                DAT_004ea934 = DAT_00472528 * temp_v19;
                DAT_004ea938 = DAT_0047252c * temp_v19;
                DAT_004ea91c = temp_v18 * DAT_004ea92c;
                DAT_004ea920 = temp_v6 * DAT_004ea930;
                DAT_004ea924 = temp_v8 * DAT_004ea934;
                DAT_004ea928 = temp_v10 * DAT_004ea938;
                temp_v13 = FUN_00246c28();
                temp_v11 = 1;
                do {
                  puVar17 = puVar22 + temp_v11 * 4;
                  *puVar17 = (char)temp_v13;
                  puVar17[1] = (char)((unsigned int)temp_v13 >> 8);
                  temp_v11 = temp_v11 + 1;
                  puVar17[2] = (char)((unsigned int)temp_v13 >> 0x10);
                  puVar17[3] = (char)((unsigned int)temp_v13 >> 0x18);
                } while (temp_v11 < 0xd);
                DAT_004ea91c = temp_v24 * DAT_004ea92c;
                DAT_004ea920 = temp_v5 * DAT_004ea930;
                DAT_004ea924 = temp_v7 * DAT_004ea934;
                DAT_004ea928 = temp_v9 * DAT_004ea938;
                temp_v13 = FUN_00246c28();
                temp_v19 = (float)VectorFloatToUnsigned(temp_v19 * temp_v36,3);
                *puVar22 = (char)temp_v13;
                puVar22[1] = (char)((unsigned int)temp_v13 >> 8);
                puVar22[2] = (char)((unsigned int)temp_v13 >> 0x10);
                puVar22[3] = (unsigned char)((unsigned int)temp_v13 >> 0x18) | SUB41(temp_v19,0);
                *temp_v39 = (float)((int)temp_v12 + temp_v44);
              }
            }
            else if (temp_v46 != 0) {
              FUN_0024b830(0);
              temp_v19 = temp_v19 * temp_v37;
              temp_v39[2] = temp_v19;
              temp_v23 = *(float *)((int)pvVar18 + 0x70);
              FUN_0024b830(0);
              temp_v30 = temp_v25 - temp_v23;
              temp_v12 = (temp_v30 + temp_v19 * temp_v23) * *(float *)((int)pvVar18 + 0x6c);
              temp_v39[3] = temp_v12;
              temp_v19 = temp_v25;
              FUN_0024b830(0);
              temp_v12 = (temp_v30 + temp_v12 * temp_v23) * *(float *)((int)pvVar18 + 0x6c);
              temp_v39[4] = temp_v12;
              temp_v23 = *(float *)((int)pvVar18 + 0x78);
              FUN_0024b830(0);
              temp_v12 = ((temp_v19 - temp_v23) + temp_v12 * temp_v23) * *(float *)((int)pvVar18 + 0x74);
              temp_v39[5] = temp_v12;
              FUN_0024b830(0);
              temp_v12 = ((temp_v19 - *(float *)((int)pvVar18 + 0x80)) +
                       temp_v12 * *(float *)((int)pvVar18 + 0x80)) * *(float *)((int)pvVar18 + 0x7c);
              temp_v39[1] = temp_v12;
              FUN_0024b830(0);
              temp_v19 = *(float *)((int)pvVar18 + 0x60) *
                       ((temp_v19 - *(float *)((int)pvVar18 + 0x68)) +
                       temp_v12 * *(float *)((int)pvVar18 + 0x68));
              temp_v39[6] = temp_v19;
              if (temp_v4) {
                FUN_0024b77c(0);
                aeabi_uidivmod();
                *temp_v39 = temp_v14;
              }
              else {
                *temp_v39 = temp_v40;
                temp_v19 = temp_v40;
              }
              temp_v46 = temp_v46 - 1;
            }
          }
          pfVar21 = pfVar21 + 0x27;
          puVar22 = puVar22 + 0x34;
          temp_v42 = temp_v42 + 1;
          temp_v39 = temp_v39 + 7;
        } while (temp_v42 < temp_v16);
      }
    }
  }
  return;
}
