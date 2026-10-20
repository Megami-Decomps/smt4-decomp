/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00319a70` (_code @ 0x319a70, 0xb90 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00246c8c(unsigned int);
int FUN_0024b77c(...);
int FUN_0024b830(...);
int FUN_002b7064(void);
int FUN_002b70cc(void);
int SUB41(...);
int VectorFloatToUnsigned(...);
int VectorSignedToFloat(...);
int aeabi_uidivmod(void);

/* stack frame of param_1: 21 slot(s), 84 byte(s) */
typedef struct {
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp100; /* 0x100: local_100 */
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
/* Supplied declaration required: FUN_00246c8c. */
/* Supplied declaration required: FUN_0024b77c. */
/* Supplied declaration required: FUN_0024b830. */
/* Supplied declaration required: FUN_002b7064. */
/* Supplied declaration required: FUN_002b70cc. */
/* Supplied declaration required: aeabi_uidivmod. */


void FUN_00319a70(int param_1)

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
  int temp_v9;
  int temp_v10;
  unsigned char *puVar12;
  float temp_v11;
  float temp_v12;
  float *pfVar14;
  float *pfVar15;
  unsigned char *puVar16;
  float *pfVar17;
  float temp_v13;
  int temp_v14;
  int temp_v15;
  unsigned int in_fpscr;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
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
  float temp_v38;
  unsigned long long temp_v39;
  int temp_v40;
  float temp_v41;
  int temp_v42;
  int temp_v43;
  float temp_v44;
  int temp_v45;
  
  temp_v14 = *(int *)(param_1 + 0x40);
  if ((*(int *)(param_1 + 0x34) <= *(int *)(temp_v14 + 0x34)) || (*(int *)(temp_v14 + 0x34) == 0)) {
    temp_v12 = *(float *)(temp_v14 + 0x4c);
    temp_v15 = *(int *)(temp_v14 + 0x38);
    pfVar17 = (float *)**(unsigned int **)(param_1 + 0x3c);
    temp_v9 = (*(unsigned int **)(param_1 + 0x3c))[1];
    if (temp_v12 != 0.0f) {
      temp_v27 = 1.0f;
      if (*(char *)(temp_v14 + 0x84) != '\0') {
        temp_v20 = (float)VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v16 = (float)VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v44 = 0.0f;
        temp_v43 = -1;
        temp_v20 = (1.0f - *(float *)(temp_v14 + 0x48)) * temp_v20;
        temp_v16 = (1.0f - *(float *)(temp_v14 + 0x44)) * temp_v16;
        temp_v41 = temp_v12;
      }
      else {
        temp_v20 = (float)VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v16 = (float)VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v41 = 0.0f;
        temp_v43 = 1;
        temp_v20 = *(float *)(temp_v14 + 0x44) * temp_v20;
        temp_v16 = *(float *)(temp_v14 + 0x48) * temp_v16;
        temp_v44 = temp_v12;
      }
      temp_v42 = (int)temp_v20;
      temp_v40 = (int)temp_v16;
      if ((*(char *)(temp_v14 + 0x55) == '\0') || (*(int *)(param_1 + 0x34) != 0)) {
        temp_v4 = 0;
        temp_v45 = *(int *)(temp_v14 + 0x50);
      }
      else {
        temp_v4 = 1;
        temp_v45 = temp_v15;
      }
      temp_v30 = 0.0f;
      pfVar15 = *(float **)(*(int *)(temp_v9 + 8) + 0x30);
      puVar16 = *(unsigned char **)(*(int *)(temp_v9 + 8) + 0x38);
      *(unsigned int *)(temp_v9 + 0x54) = *(unsigned int *)(temp_v9 + 0x54) | 0x21;
      FUN_00246c8c(*(unsigned int *)(temp_v14 + 0x58));
      temp_v8 = DAT_004ea928;
      temp_v6 = DAT_004ea924;
      temp_v5 = DAT_004ea920;
      temp_v16 = DAT_004ea91c;
      FUN_00246c8c(*(unsigned int *)(temp_v14 + 0x5c));
      temp_v7 = DAT_004ea924;
      temp_v20 = DAT_004ea91c;
      temp_v9 = 0;
      temp_v2 = *(char *)(temp_v14 + 0x54);
      temp_v29 = *(float *)(temp_v14 + 0x80);
      if (0 < temp_v15) {
        temp_v35 = 0.5f;
        temp_v38 = 6.2831855f;
        temp_v39 = 0xbf000000;
        temp_v37 = 40.743664f;
        temp_v34 = 255.0f;
        temp_v17 = temp_v29 * 0.5f;
        temp_v36 = temp_v17;
        temp_v31 = temp_v30;
        temp_v32 = DAT_004ea928;
        temp_v33 = DAT_004ea920;
        do {
          temp_v13 = *pfVar17;
          if (temp_v13 != -NAN) {
            if (temp_v13 != -NAN) {
              if (temp_v13 == temp_v44) {
                temp_v10 = 0;
                do {
                  pfVar14 = pfVar15 + temp_v10 * 3;
                  puVar12 = puVar16 + temp_v10 * 4;
                  *pfVar14 = temp_v30;
                  pfVar14[1] = temp_v30;
                  pfVar14[2] = temp_v30;
                  *puVar12 = 0;
                  puVar12[1] = 0;
                  temp_v10 = temp_v10 + 1;
                  puVar12[2] = 0;
                  puVar12[3] = 0;
                } while (temp_v10 < 4);
                if (temp_v2 == '\0') {
                  temp_v17 = -NAN;
                }
                else {
                  temp_v17 = -NAN;
                }
                *pfVar17 = temp_v17;
                temp_v17 = temp_v30;
              }
              else {
                temp_v0 = in_fpscr & 0xfffffff;
                temp_v1 = temp_v0 | ((unsigned int)(temp_v30 < temp_v29) << 0x1f) |
                        ((unsigned int)(temp_v30 == temp_v29) << 0x1e);
                in_fpscr = temp_v1 | ((unsigned int)((temp_v30 != temp_v30) || (temp_v29 != temp_v29)) << 0x1c);
                temp_v3 = (unsigned char)(temp_v1 >> 0x18);
                temp_v17 = (float)VectorSignedToFloat(temp_v13,(unsigned char)(in_fpscr >> 0x16) & 3);
                if (!(unsigned char)((temp_v3 >> 6) & 1) && temp_v3 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                  temp_v19 = (pfVar17[1] / temp_v36) * (float)temp_v39;
                  temp_v0 = temp_v0 | ((unsigned int)(temp_v17 < temp_v19) << 0x1f) |
                          ((unsigned int)(temp_v17 == temp_v19) << 0x1e);
                  in_fpscr = temp_v0 | ((unsigned int)((temp_v17 != temp_v17) || (temp_v19 != temp_v19)) << 0x1c);
                  temp_v3 = (unsigned char)(temp_v0 >> 0x18);
                  if (!(unsigned char)((temp_v3 >> 6) & 1) && temp_v3 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                    temp_v17 = temp_v19;
                  }
                }
                temp_v28 = pfVar17[4] + (pfVar17[1] + temp_v29 * temp_v17 * temp_v35) * temp_v17;
                temp_v19 = pfVar17[2] * temp_v37;
                temp_v17 = temp_v19;
                FUN_002b7064();
                FUN_002b70cc();
                temp_v18 = pfVar17[3];
                DAT_004ea93c = temp_v19 * temp_v28;
                DAT_004ea940 = temp_v31 * temp_v28;
                DAT_004ea944 = temp_v17 * temp_v28;
                DAT_004ea948 = temp_v31 * temp_v28;
                DAT_004ea938 = pfVar17[5];
                temp_v28 = temp_v17 * DAT_004ea938;
                temp_v25 = temp_v31 * DAT_004ea938;
                temp_v26 = -temp_v19 * DAT_004ea938;
                DAT_004ea938 = temp_v31 * DAT_004ea938;
                DAT_004ea91c = temp_v19 * temp_v18 + DAT_004ea93c + temp_v28;
                DAT_00472554 = temp_v31 * temp_v18 + DAT_004ea940 + temp_v25;
                DAT_00472558 = temp_v17 * temp_v18 + DAT_004ea944 + temp_v26;
                DAT_004ea920 = DAT_00472554;
                DAT_004ea924 = DAT_00472558;
                DAT_004ea92c = temp_v28;
                DAT_004ea930 = temp_v25;
                DAT_004ea934 = temp_v26;
                *pfVar15 = DAT_004ea91c;
                pfVar15[1] = DAT_00472554;
                pfVar15[2] = DAT_00472558;
                DAT_00472554 = (DAT_004ea920 - DAT_004ea930) - DAT_004ea930;
                DAT_00472558 = (DAT_004ea924 - DAT_004ea934) - DAT_004ea934;
                pfVar15[3] = (DAT_004ea91c - DAT_004ea92c) - DAT_004ea92c;
                pfVar15[4] = DAT_00472554;
                pfVar15[5] = DAT_00472558;
                DAT_004ea91c = -(temp_v19 * temp_v18) + DAT_004ea93c + temp_v28;
                DAT_00472554 = -(temp_v31 * temp_v18) + DAT_004ea940 + temp_v25;
                DAT_00472558 = -(temp_v17 * temp_v18) + DAT_004ea944 + temp_v26;
                DAT_004ea928 = temp_v31 * temp_v18 + DAT_004ea948 + DAT_004ea938;
                DAT_004ea920 = DAT_00472554;
                DAT_004ea924 = DAT_00472558;
                DAT_004ea92c = temp_v28;
                DAT_004ea930 = temp_v25;
                DAT_004ea934 = temp_v26;
                pfVar15[6] = DAT_004ea91c;
                pfVar15[7] = DAT_00472554;
                pfVar15[8] = DAT_00472558;
                DAT_00472550 = (DAT_004ea91c - DAT_004ea92c) - DAT_004ea92c;
                DAT_00472554 = (DAT_004ea920 - DAT_004ea930) - DAT_004ea930;
                DAT_00472558 = (DAT_004ea924 - DAT_004ea934) - DAT_004ea934;
                DAT_0047255c = (DAT_004ea928 - DAT_004ea938) - DAT_004ea938;
                pfVar15[9] = DAT_00472550;
                pfVar15[10] = DAT_00472554;
                pfVar15[0xb] = DAT_00472558;
                if ((int)temp_v13 < temp_v42) {
                  temp_v19 = (float)VectorSignedToFloat(temp_v42,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v17 = (float)VectorSignedToFloat(temp_v13,(unsigned char)(in_fpscr >> 0x16) & 3);
                  DAT_004ea938 = temp_v17 / temp_v19;
                }
                else {
                  DAT_004ea938 = temp_v27;
                  if (temp_v40 < (int)temp_v13) {
                    temp_v17 = (float)VectorSignedToFloat((int)temp_v12 - temp_v40,
                                                        (unsigned char)(in_fpscr >> 0x16) & 3);
                    temp_v19 = (float)VectorSignedToFloat((int)temp_v12 - (int)temp_v13,
                                                        (unsigned char)(in_fpscr >> 0x16) & 3);
                    DAT_004ea938 = temp_v19 / temp_v17;
                  }
                }
                DAT_004ea92c = DAT_00472520 * DAT_004ea938;
                DAT_004ea930 = DAT_00472524 * DAT_004ea938;
                DAT_004ea934 = DAT_00472528 * DAT_004ea938;
                DAT_004ea938 = DAT_0047252c * DAT_004ea938;
                temp_v21 = VectorFloatToUnsigned(temp_v20 * DAT_004ea92c * temp_v34,3);
                temp_v22 = VectorFloatToUnsigned(temp_v33 * DAT_004ea930 * temp_v34,3);
                temp_v23 = VectorFloatToUnsigned(temp_v7 * DAT_004ea934 * temp_v34,3);
                temp_v24 = VectorFloatToUnsigned(temp_v32 * DAT_004ea938 * temp_v34,3);
                *puVar16 = (char)temp_v24;
                puVar16[1] = (char)temp_v23;
                puVar16[2] = (char)temp_v22;
                puVar16[3] = (char)temp_v21;
                puVar16[4] = (char)temp_v24;
                puVar16[5] = (char)temp_v23;
                puVar16[6] = (char)temp_v22;
                puVar16[7] = (char)temp_v21;
                DAT_004ea91c = temp_v16 * DAT_004ea92c;
                DAT_004ea920 = temp_v5 * DAT_004ea930;
                DAT_004ea924 = temp_v6 * DAT_004ea934;
                DAT_004ea928 = temp_v8 * DAT_004ea938;
                temp_v21 = VectorFloatToUnsigned(DAT_004ea920 * temp_v34,3);
                temp_v23 = VectorFloatToUnsigned(DAT_004ea91c * temp_v34,3);
                temp_v22 = VectorFloatToUnsigned(DAT_004ea924 * temp_v34,3);
                temp_v17 = (float)VectorFloatToUnsigned(DAT_004ea928 * temp_v34,3);
                puVar16[8] = SUB41(temp_v17,0);
                puVar16[9] = (char)temp_v22;
                puVar16[10] = (char)temp_v21;
                puVar16[0xb] = (char)temp_v23;
                puVar16[0xc] = SUB41(temp_v17,0);
                puVar16[0xd] = (char)temp_v22;
                puVar16[0xe] = (char)temp_v21;
                puVar16[0xf] = (char)temp_v23;
                *pfVar17 = (float)((int)temp_v13 + temp_v43);
              }
            }
            else if (temp_v45 != 0) {
              FUN_0024b830(0);
              temp_v17 = temp_v17 * temp_v38;
              pfVar17[2] = temp_v17;
              temp_v13 = *(float *)(temp_v14 + 0x6c);
              FUN_0024b830(0);
              temp_v13 = ((temp_v27 - temp_v13) + temp_v17 * temp_v13) * *(float *)(temp_v14 + 0x68);
              pfVar17[3] = temp_v13;
              temp_v19 = *(float *)(temp_v14 + 0x74);
              temp_v17 = temp_v27;
              FUN_0024b830(0);
              temp_v13 = ((temp_v17 - temp_v19) + temp_v13 * temp_v19) * *(float *)(temp_v14 + 0x70);
              pfVar17[4] = temp_v13;
              FUN_0024b830(0);
              temp_v13 = ((temp_v17 - *(float *)(temp_v14 + 0x7c)) + temp_v13 * *(float *)(temp_v14 + 0x7c)) *
                       *(float *)(temp_v14 + 0x78);
              pfVar17[1] = temp_v13;
              FUN_0024b830(0);
              temp_v17 = *(float *)(temp_v14 + 0x60) *
                       ((temp_v17 - *(float *)(temp_v14 + 100)) + temp_v13 * *(float *)(temp_v14 + 100));
              pfVar17[5] = temp_v17;
              if (!temp_v4) {
                *pfVar17 = temp_v41;
                temp_v17 = temp_v41;
              }
              else {
                FUN_0024b77c(0);
                aeabi_uidivmod();
                *pfVar17 = temp_v11;
              }
              temp_v45 = temp_v45 - 1;
            }
          }
          temp_v9 = temp_v9 + 1;
          pfVar17 = pfVar17 + 6;
          pfVar15 = pfVar15 + 0xc;
          puVar16 = puVar16 + 0x10;
        } while (temp_v9 < temp_v15);
      }
    }
  }
  return;
}

} /* extern "C" */
