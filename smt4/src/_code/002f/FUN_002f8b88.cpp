/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f8b88` (_code @ 0x2f8b88, 0xbb8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(double, double);
int FUN_00246c8c(unsigned int);
int randomAdvanceShiftRegister(void);
int FUN_0024b830(...);
int FUN_002b7064(void);
int FUN_002b70cc(void);
int SUB41(...);
int VectorFloatToUnsigned(double, int);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);
int __aeabi_uidivmod(void);

/* stack frame of param_1: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp100; /* 0x100: local_100 */
} param_1_stack;

extern float g_polyDefaultColor; /* 0x472520 */
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
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
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
extern unsigned int FUN_00246c28(void);
/* Supplied declaration required: FUN_00246c8c. */
/* Supplied declaration required: randomAdvanceShiftRegister. */
/* Supplied declaration required: FUN_0024b830. */
/* Supplied declaration required: FUN_002b7064. */
/* Supplied declaration required: FUN_002b70cc. */
/* Supplied declaration required: __aeabi_uidivmod. */


void FUN_002f8b88(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 13 native warning(s); review required */
  unsigned int temp_v0;
  char temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  int temp_v11;
  int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  int temp_v15;
  unsigned char *puVar16;
  float *pfVar17;
  float *pfVar18;
  unsigned char *puVar19;
  float *pfVar20;
  int temp_v16;
  float temp_v17;
  unsigned int temp_v18;
  int temp_v19;
  unsigned int in_fpscr;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  float temp_v27;
  float temp_v28;
  unsigned long long temp_v29;
  long long temp_v30;
  float temp_v31;
  float temp_v32;
  float temp_v33;
  float temp_v34;
  float temp_v35;
  float temp_v36;
  float temp_v37;
  float temp_v38;
  float temp_v39;
  int temp_v40;
  
  temp_v16 = *(int *)(param_1 + 0x40);
  if ((*(int *)(param_1 + 0x34) <= *(int *)(temp_v16 + 0x34)) || (*(int *)(temp_v16 + 0x34) == 0)) {
    temp_v15 = *(int *)(temp_v16 + 0x4c);
    temp_v19 = *(int *)(temp_v16 + 0x38);
    pfVar20 = (float *)**(unsigned int **)(param_1 + 0x3c);
    temp_v11 = (*(unsigned int **)(param_1 + 0x3c))[1];
    if (temp_v15 != 0) {
      if ((*(char *)(temp_v16 + 0x55) == '\0') || (*(int *)(param_1 + 0x34) != 0)) {
        temp_v6 = 0;
        temp_v40 = *(int *)(temp_v16 + 0x50);
      }
      else {
        temp_v6 = 1;
        temp_v40 = temp_v19;
      }
      temp_v29 = 0;
      pfVar18 = *(float **)(*(int *)(temp_v11 + 8) + 0x30);
      puVar19 = *(unsigned char **)(*(int *)(temp_v11 + 8) + 0x38);
      *(unsigned int *)(temp_v11 + 0x54) = *(unsigned int *)(temp_v11 + 0x54) | 0x21;
      FUN_00246c8c(*(unsigned int *)(temp_v16 + 0x58) & 0xffffff);
      temp_v10 = DAT_004ea928;
      temp_v9 = DAT_004ea924;
      temp_v8 = DAT_004ea920;
      temp_v7 = DAT_004ea91c;
      FUN_00246c8c(*(unsigned int *)(temp_v16 + 0x5c) & 0xffffff);
      temp_v21 = (float)VectorSignedToFloat(temp_v15,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v23 = (float)VectorSignedToFloat(temp_v15,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v30 = (unsigned long long)*(unsigned int *)(temp_v16 + 0xa4) << 0x20;
      temp_v18 = 0;
      temp_v1 = *(char *)(temp_v16 + 0x54);
      temp_v11 = (int)(*(float *)(temp_v16 + 0x44) * temp_v21);
      temp_v21 = (float)(int)(*(float *)(temp_v16 + 0x48) * temp_v23);
      if (0 < temp_v19) {
        temp_v27 = (float)((unsigned long long)temp_v29 >> 0x20);
        temp_v37 = 6.2831855f;
        temp_v38 = 0.5f;
        temp_v36 = 40.743664f;
        temp_v35 = 1.0f;
        temp_v39 = 128.0f;
        temp_v23 = temp_v21;
        temp_v33 = DAT_004ea924;
        temp_v34 = DAT_004ea91c;
        temp_v31 = DAT_004ea928;
        temp_v32 = DAT_004ea920;
        do {
          temp_v17 = *pfVar20;
          if (temp_v17 != -NAN) {
            if (temp_v17 != -NAN) {
              if ((int)temp_v17 >= temp_v15) {
                temp_v12 = 0;
                do {
                  pfVar17 = pfVar18 + temp_v12 * 3;
                  puVar16 = puVar19 + temp_v12 * 4;
                  *pfVar17 = temp_v27;
                  pfVar17[1] = temp_v27;
                  pfVar17[2] = temp_v27;
                  *puVar16 = 0;
                  puVar16[1] = 0;
                  temp_v12 = temp_v12 + 1;
                  puVar16[2] = 0;
                  puVar16[3] = 0;
                } while (temp_v12 < 5);
                if (temp_v1 == '\0') {
                  temp_v23 = -NAN;
                }
                else {
                  temp_v23 = -NAN;
                }
                *pfVar20 = temp_v23;
                temp_v23 = temp_v27;
              }
              else {
                temp_v25 = pfVar20[7];
                temp_v26 = (float)((unsigned long long)temp_v30 >> 0x20);
                temp_v30 = CONCAT44(temp_v26,pfVar20[5]);
                temp_v23 = (float)VectorSignedToFloat(temp_v17,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v28 = (float)((unsigned long long)temp_v29 >> 0x20);
                temp_v26 = (pfVar20[1] + (pfVar20[2] + temp_v26 * temp_v23 * temp_v38) * temp_v23) * temp_v36;
                temp_v23 = temp_v26;
                FUN_002b7064();
                FUN_002b70cc();
                DAT_004ea91c = temp_v26 * temp_v25;
                DAT_004ea924 = temp_v23 * temp_v25;
                temp_v20 = temp_v26 * (float)temp_v30;
                DAT_004ea920 = temp_v35 - temp_v25;
                temp_v25 = temp_v23 * (float)temp_v30;
                temp_v24 = romwright_sqrt_4(DAT_004ea91c * DAT_004ea91c + DAT_004ea920 * DAT_004ea920 +
                              DAT_004ea924 * DAT_004ea924);
                temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v24 < temp_v27) << 0x1f) |
                        ((unsigned int)(temp_v24 == temp_v27) << 0x1e);
                in_fpscr = temp_v0 | ((unsigned int)((temp_v24 != temp_v24) || (temp_v27 != temp_v27)) << 0x1c);
                temp_v3 = (unsigned char)(temp_v0 >> 0x18);
                if (!(unsigned char)((temp_v3 >> 6) & 1) && temp_v3 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                  DAT_004ea91c = DAT_004ea91c / temp_v24;
                  DAT_004ea920 = DAT_004ea920 / temp_v24;
                  DAT_004ea924 = DAT_004ea924 / temp_v24;
                }
                DAT_004ea93c = DAT_004ea91c;
                DAT_004ea940 = DAT_004ea920;
                DAT_004ea944 = DAT_004ea924;
                DAT_004ea934 = pfVar20[9];
                DAT_004ea92c = temp_v23 * DAT_004ea934;
                DAT_004ea930 = temp_v27 * DAT_004ea934;
                DAT_004ea934 = -temp_v26 * DAT_004ea934;
                temp_v24 = pfVar20[10];
                temp_v22 = -temp_v26 * temp_v24;
                DAT_004ea938 = temp_v35 * temp_v24;
                DAT_00472554 = temp_v28;
                DAT_00472558 = temp_v25;
                DAT_004ea91c = temp_v20;
                DAT_004ea920 = temp_v28;
                DAT_004ea924 = temp_v25;
                DAT_004ea948 = temp_v35;
                pfVar18[9] = temp_v20;
                pfVar18[10] = DAT_00472554;
                pfVar18[0xb] = DAT_00472558;
                DAT_004ea91c = DAT_004ea91c + DAT_004ea92c;
                DAT_00472554 = DAT_004ea920 + DAT_004ea930;
                DAT_00472558 = DAT_004ea924 + DAT_004ea934;
                DAT_004ea920 = DAT_00472554;
                DAT_004ea924 = DAT_00472558;
                pfVar18[6] = DAT_004ea91c;
                pfVar18[7] = DAT_00472554;
                pfVar18[8] = DAT_00472558;
                DAT_00472554 = (DAT_004ea920 - DAT_004ea930) - DAT_004ea930;
                DAT_00472558 = (DAT_004ea924 - DAT_004ea934) - DAT_004ea934;
                pfVar18[0xc] = (DAT_004ea91c - DAT_004ea92c) - DAT_004ea92c;
                pfVar18[0xd] = DAT_00472554;
                pfVar18[0xe] = DAT_00472558;
                temp_v26 = pfVar20[3];
                DAT_004ea91c = temp_v20 + DAT_004ea93c * temp_v26 + temp_v23 * temp_v24;
                DAT_00472554 = temp_v28 + DAT_004ea940 * temp_v26 + temp_v27 * temp_v24;
                DAT_00472558 = temp_v25 + DAT_004ea944 * temp_v26 + temp_v22;
                DAT_004ea928 = temp_v28 + DAT_004ea948 * temp_v26 + DAT_004ea938;
                DAT_004ea920 = DAT_00472554;
                DAT_004ea924 = DAT_00472558;
                DAT_004ea92c = temp_v23 * temp_v24;
                DAT_004ea930 = temp_v27 * temp_v24;
                DAT_004ea934 = temp_v22;
                *pfVar18 = DAT_004ea91c;
                pfVar18[1] = DAT_00472554;
                pfVar18[2] = DAT_00472558;
                DAT_00472550 = (DAT_004ea91c - DAT_004ea92c) - DAT_004ea92c;
                DAT_00472554 = (DAT_004ea920 - DAT_004ea930) - DAT_004ea930;
                DAT_00472558 = (DAT_004ea924 - DAT_004ea934) - DAT_004ea934;
                DAT_0047255c = (DAT_004ea928 - DAT_004ea938) - DAT_004ea938;
                pfVar18[3] = DAT_00472550;
                pfVar18[4] = DAT_00472554;
                pfVar18[5] = DAT_00472558;
                pfVar20[3] = pfVar20[3] + pfVar20[4];
                pfVar20[7] = pfVar20[7] + pfVar20[8];
                pfVar20[5] = pfVar20[5] + pfVar20[6];
                if ((int)temp_v17 < temp_v11) {
                  temp_v23 = (float)VectorSignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v26 = (float)VectorSignedToFloat(temp_v17,(unsigned char)(in_fpscr >> 0x16) & 3);
                  DAT_004ea938 = temp_v26 / temp_v23;
                }
                else {
                  DAT_004ea938 = temp_v35;
                  if ((int)temp_v21 < (int)temp_v17) {
                    temp_v23 = (float)VectorSignedToFloat(temp_v15 - (int)temp_v21,
                                                        (unsigned char)(in_fpscr >> 0x16) & 3);
                    temp_v26 = (float)VectorSignedToFloat(temp_v15 - (int)temp_v17,
                                                        (unsigned char)(in_fpscr >> 0x16) & 3);
                    DAT_004ea938 = temp_v26 / temp_v23;
                  }
                }
                temp_v29 = CONCAT44(temp_v28,DAT_004ea938);
                DAT_004ea92c = g_polyDefaultColor * DAT_004ea938;
                DAT_004ea930 = DAT_00472524 * DAT_004ea938;
                DAT_004ea934 = DAT_00472528 * DAT_004ea938;
                DAT_004ea938 = DAT_0047252c * DAT_004ea938;
                DAT_004ea91c = temp_v34 * DAT_004ea92c;
                DAT_004ea920 = temp_v32 * DAT_004ea930;
                DAT_004ea924 = temp_v33 * DAT_004ea934;
                DAT_004ea928 = temp_v31 * DAT_004ea938;
                temp_v13 = FUN_00246c28();
                temp_v4 = (unsigned char)((unsigned int)temp_v13 >> 8);
                temp_v5 = (unsigned char)((unsigned int)temp_v13 >> 0x10);
                *puVar19 = (char)temp_v13;
                puVar19[1] = temp_v4;
                puVar19[2] = temp_v5;
                temp_v2 = (unsigned char)((unsigned int)temp_v13 >> 0x18);
                puVar19[3] = temp_v2;
                puVar19[4] = (char)temp_v13;
                puVar19[5] = temp_v4;
                puVar19[6] = temp_v5;
                puVar19[7] = temp_v2;
                DAT_004ea91c = temp_v7 * DAT_004ea92c;
                DAT_004ea920 = temp_v8 * DAT_004ea930;
                DAT_004ea924 = temp_v9 * DAT_004ea934;
                DAT_004ea928 = temp_v10 * DAT_004ea938;
                temp_v13 = FUN_00246c28();
                temp_v2 = (unsigned char)((unsigned int)temp_v13 >> 8);
                temp_v4 = (unsigned char)((unsigned int)temp_v13 >> 0x10);
                if ((temp_v18 & 1) != 0) {
                  puVar19[0xc] = (char)temp_v13;
                  puVar19[0xd] = temp_v2;
                  puVar19[0xe] = temp_v4;
                  puVar19[0xf] = 0xff;
                  temp_v23 = (float)VectorFloatToUnsigned((float)temp_v29 * temp_v39,3);
                  puVar19[8] = 0;
                  puVar19[9] = 0;
                  puVar19[10] = 0;
                  puVar19[0xb] = SUB41(temp_v23,0);
                  puVar19[0x10] = 0;
                  puVar19[0x11] = 0;
                  puVar19[0x12] = 0;
                  puVar19[0x13] = SUB41(temp_v23,0);
                }
                else {
                  puVar19[0xc] = (char)temp_v13;
                  puVar19[0xd] = temp_v2;
                  puVar19[0xe] = temp_v4;
                  temp_v23 = (float)VectorFloatToUnsigned((float)temp_v29 * 255.0f,3);
                  puVar19[0xf] = (unsigned char)((unsigned int)temp_v13 >> 0x18) | 0x80;
                  puVar19[8] = 0;
                  puVar19[9] = 0;
                  puVar19[10] = 0;
                  puVar19[0xb] = SUB41(temp_v23,0);
                  puVar19[0x10] = 0;
                  puVar19[0x11] = 0;
                  puVar19[0x12] = 0;
                  puVar19[0x13] = SUB41(temp_v23,0);
                }
                *pfVar20 = (float)((int)temp_v17 + 1);
              }
            }
            else if (temp_v40 != 0) {
              FUN_0024b830(0);
              temp_v23 = temp_v23 * temp_v37;
              pfVar20[1] = temp_v23;
              FUN_0024b830(0);
              temp_v26 = ((temp_v35 - *(float *)(temp_v16 + 0x70)) + temp_v23 * *(float *)(temp_v16 + 0x70)) *
                       *(float *)(temp_v16 + 0x6c);
              temp_v17 = temp_v35;
              FUN_0024b830(0);
              temp_v25 = *(float *)(temp_v16 + 0x78);
              temp_v24 = *(float *)(temp_v16 + 0x74);
              pfVar20[3] = temp_v26;
              temp_v20 = (float)VectorSignedToFloat(temp_v15,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v26 = ((temp_v17 - temp_v25) + temp_v23 * temp_v25) * temp_v24 - temp_v26;
              pfVar20[4] = temp_v26 / temp_v20;
              FUN_0024b830(0);
              temp_v23 = ((temp_v17 - *(float *)(temp_v16 + 0x80)) + temp_v26 * *(float *)(temp_v16 + 0x80)) *
                       *(float *)(temp_v16 + 0x7c);
              FUN_0024b830(0);
              temp_v20 = *(float *)(temp_v16 + 0x88);
              temp_v24 = *(float *)(temp_v16 + 0x84);
              pfVar20[5] = temp_v23;
              temp_v25 = (float)VectorSignedToFloat(temp_v15,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v23 = ((temp_v17 - temp_v20) + temp_v26 * temp_v20) * temp_v24 - temp_v23;
              pfVar20[6] = temp_v23 / temp_v25;
              FUN_0024b830(0);
              temp_v26 = ((temp_v17 - *(float *)(temp_v16 + 0x90)) + temp_v23 * *(float *)(temp_v16 + 0x90)) *
                       *(float *)(temp_v16 + 0x8c);
              FUN_0024b830(0);
              temp_v25 = *(float *)(temp_v16 + 0x98);
              temp_v24 = *(float *)(temp_v16 + 0x94);
              pfVar20[7] = temp_v26;
              temp_v20 = (float)VectorSignedToFloat(temp_v15,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v26 = ((temp_v17 - temp_v25) + temp_v23 * temp_v25) * temp_v24 - temp_v26;
              pfVar20[8] = temp_v26 / temp_v20;
              FUN_0024b830(0);
              temp_v23 = (temp_v17 - *(float *)(temp_v16 + 0x68)) + temp_v26 * *(float *)(temp_v16 + 0x68);
              pfVar20[9] = *(float *)(temp_v16 + 0x60) * temp_v23;
              temp_v23 = *(float *)(temp_v16 + 100) * temp_v23;
              pfVar20[10] = temp_v23;
              FUN_0024b830(0);
              temp_v23 = ((temp_v17 - *(float *)(temp_v16 + 0xa0)) + temp_v23 * *(float *)(temp_v16 + 0xa0)) *
                       *(float *)(temp_v16 + 0x9c);
              pfVar20[2] = temp_v23;
              if (!temp_v6) {
                *pfVar20 = 0.0f;
              }
              else {
                randomAdvanceShiftRegister();
                __aeabi_uidivmod();
                temp_v17 = (float)VectorUnsignedToFloat(temp_v14,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v23 = (float)(int)temp_v17;
                pfVar20[3] = pfVar20[3] + pfVar20[4] * temp_v17;
                pfVar20[5] = pfVar20[5] + pfVar20[6] * temp_v17;
                pfVar20[7] = pfVar20[7] + pfVar20[8] * temp_v17;
                *pfVar20 = temp_v23;
              }
              temp_v40 = temp_v40 - 1;
            }
          }
          temp_v18 = temp_v18 + 1;
          pfVar20 = pfVar20 + 0xb;
          pfVar18 = pfVar18 + 0xf;
          puVar19 = puVar19 + 0x14;
        } while ((int)temp_v18 < temp_v19);
      }
    }
  }
  return;
}

} /* extern "C" */
