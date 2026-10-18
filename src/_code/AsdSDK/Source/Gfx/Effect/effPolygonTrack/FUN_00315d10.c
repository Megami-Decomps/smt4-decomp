/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00315d10` (_code @ 0x315d10, 0x8ec bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spEC; /* 0xec: local_ec */
} param_1_stack;

extern float DAT_00472550; /* 0x472550 */
extern float DAT_00472554; /* 0x472554 */
extern float DAT_00472558; /* 0x472558 */
extern float DAT_0047255c; /* 0x47255c */
extern unsigned char DAT_00472560; /* 0x472560 */
extern unsigned char DAT_00472561; /* 0x472561 */
extern unsigned char DAT_00472562; /* 0x472562 */
extern unsigned char DAT_00472563; /* 0x472563 */
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

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Supplied declaration required: FUN_0024b990. */
/* Supplied declaration required: FUN_0024ba44. */
/* Supplied declaration required: FUN_002b73a4. */
/* Supplied declaration required: FUN_002b740c. */
/* Supplied declaration required: FUN_002c4b30. */
/* Supplied declaration required: FUN_002c6c10. */


void FUN_00315d10(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 11 native warning(s); review required */
  unsigned int temp_v0;
  char temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  float temp_v4;
  int *piVar6;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  float *pfVar11;
  float *pfVar12;
  int temp_v10;
  float temp_v11;
  int *piVar15;
  int temp_v12;
  unsigned int temp_v13;
  unsigned int in_fpscr;
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
  float temp_v28;
  float temp_v29;
  float temp_v30;
  float temp_v31;
  float temp_v32;
  unsigned int temp_v33;
  
  temp_v12 = *(int *)(param_1 + 0x40);
  if ((*(int *)(param_1 + 0x34) <= *(int *)(temp_v12 + 0x34)) || (*(int *)(temp_v12 + 0x34) == 0)) {
    temp_v7 = *(int *)(temp_v12 + 0x80);
    temp_v8 = *(unsigned int *)(temp_v12 + 0x38);
    if (temp_v7 != 0) {
      if ((*(char *)(temp_v12 + 0xb8) == '\0') || (*(int *)(param_1 + 0x34) != 0)) {
        temp_v3 = 0;
        temp_v33 = *(unsigned int *)(temp_v12 + 0x84);
      }
      else {
        temp_v3 = 1;
        temp_v33 = temp_v8;
      }
      temp_v1 = *(char *)(temp_v12 + 0x88);
      temp_v13 = 0;
      temp_v14 = *(float *)(temp_v12 + 0xd8);
      piVar6 = (int *)(*(unsigned int **)(param_1 + 0x3c))[1];
      piVar15 = (int *)**(unsigned int **)(param_1 + 0x3c);
      temp_v15 = *(float *)(temp_v12 + 0xe4);
      pfVar12 = *(float **)(*piVar6 + 0x30);
      temp_v10 = *(int *)(*piVar6 + 0x3c);
      piVar6[0x16] = piVar6[0x16] | 5;
      temp_v11 = (float)(*(int *)(temp_v12 + 0x8c) + 1);
      temp_v5 = (int)*(short *)((int)piVar6 + 10);
      temp_v16 = *(float *)(temp_v12 + 0xec);
      temp_v24 = *(float *)(temp_v12 + 0x98);
      temp_v17 = *(float *)(temp_v12 + 0xa4);
      temp_v22 = (float)VectorUnsignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
      if (temp_v8 != 0) {
        temp_v30 = 1.0f;
        temp_v32 = 0.5f;
        temp_v29 = 0.25f;
        temp_v18 = temp_v11;
        do {
          temp_v6 = *piVar15;
          if (temp_v6 != -2) {
            if (temp_v6 != -1) {
              if (temp_v7 <= temp_v6) {
                if (temp_v1 != '\0') {
                  temp_v6 = -1;
                }
                else {
                  FUN_002c4b30(pfVar12,temp_v5 * 0xc);
                  temp_v6 = -2;
                }
                *piVar15 = temp_v6;
                pfVar11 = (float *)(piVar6[1] + (temp_v13 & 0xffff) * 0x10);
                temp_v18 = (float)VectorUnsignedToFloat
                                          ((unsigned int)DAT_00472560,(unsigned char)(in_fpscr >> 0x16) & 3);
                *pfVar11 = temp_v18 * 0.003921569f * 0.003921569f;
                temp_v18 = (float)VectorUnsignedToFloat
                                          ((unsigned int)DAT_00472561,(unsigned char)(in_fpscr >> 0x16) & 3);
                pfVar11[1] = temp_v18 * 0.003921569f * 0.003921569f;
                temp_v18 = (float)VectorUnsignedToFloat
                                          ((unsigned int)DAT_00472562,(unsigned char)(in_fpscr >> 0x16) & 3);
                pfVar11[2] = temp_v18 * 0.003921569f * 0.003921569f;
                temp_v18 = (float)VectorUnsignedToFloat
                                          ((unsigned int)DAT_00472563,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v18 = temp_v18 * 0.003921569f * 0.003921569f;
                pfVar11[3] = temp_v18;
                pfVar12 = pfVar12 + temp_v5 * 3;
                temp_v10 = temp_v10 + temp_v5 * 8;
              }
              else {
                temp_v25 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v18 = (float)VectorUnsignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v28 = (float)piVar15[10];
                temp_v23 = (float)piVar15[0xb];
                temp_v26 = (float)piVar15[5];
                temp_v18 = temp_v25 / temp_v18 - temp_v16;
                temp_v27 = (float)piVar15[2] + temp_v18 * temp_v18 * temp_v28;
                temp_v31 = ((float)piVar15[7] +
                         ((float)piVar15[6] + temp_v14 * temp_v25 * temp_v32) * temp_v25) * 40.743664f;
                temp_v18 = temp_v31;
                FUN_002b73a4();
                FUN_002b740c();
                temp_v19 = (float)VectorUnsignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
                DAT_004ea93c = temp_v31 * temp_v27;
                DAT_004ea944 = temp_v18 * temp_v27;
                temp_v19 = (temp_v25 + temp_v30) / temp_v19 - temp_v16;
                DAT_004ea948 = 0.0f;
                temp_v25 = ((float)piVar15[4] + temp_v26) - temp_v15 * temp_v25;
                temp_v19 = (float)piVar15[2] + (float)piVar15[3] + temp_v19 * temp_v19 * temp_v28;
                DAT_004ea91c = temp_v31 * temp_v19 - DAT_004ea93c;
                DAT_004ea920 = temp_v25 - temp_v26;
                DAT_004ea924 = temp_v18 * temp_v19 - DAT_004ea944;
                DAT_004ea928 = 0.0f;
                temp_v19 = romwright_sqrt_4(DAT_004ea91c * DAT_004ea91c + DAT_004ea920 * DAT_004ea920 +
                              DAT_004ea924 * DAT_004ea924);
                temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v19 < 0.0f) << 0x1f) |
                        ((unsigned int)(temp_v19 == 0.0f) << 0x1e);
                in_fpscr = temp_v0 | ((unsigned int)NAN(temp_v19) << 0x1c);
                temp_v2 = (unsigned char)(temp_v0 >> 0x18);
                if (!(unsigned char)((temp_v2 >> 6) & 1) && temp_v2 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                  DAT_004ea91c = DAT_004ea91c / temp_v19;
                  DAT_004ea920 = DAT_004ea920 / temp_v19;
                  DAT_004ea924 = DAT_004ea924 / temp_v19;
                }
                temp_v4 = DAT_004ea924;
                temp_v28 = DAT_004ea920;
                temp_v27 = DAT_004ea91c;
                DAT_004ea940 = temp_v26;
                piVar15[5] = (int)temp_v25;
                piVar15[2] = (int)((float)piVar15[2] + (float)piVar15[3]);
                temp_v20 = (float)piVar15[9] / temp_v22;
                temp_v26 = (float)piVar15[8] * temp_v29;
                temp_v21 = DAT_004ea924 * temp_v31;
                temp_v19 = DAT_004ea924 * 0.0f;
                temp_v25 = DAT_004ea91c * temp_v18;
                DAT_004ea924 = (DAT_004ea91c * 0.0f - DAT_004ea920 * temp_v31) * temp_v26;
                DAT_004ea91c = (DAT_004ea920 * temp_v18 - temp_v19) * temp_v26;
                DAT_004ea920 = (temp_v21 - temp_v25) * temp_v26;
                DAT_004ea928 = DAT_004ea928 * temp_v26;
                temp_v18 = 0.0f;
                DAT_004ea92c = DAT_004ea91c;
                DAT_004ea930 = DAT_004ea920;
                DAT_004ea934 = DAT_004ea924;
                DAT_004ea938 = DAT_004ea928;
                if (temp_v11 != 0.0f) {
                  do {
                    temp_v31 = (float)VectorUnsignedToFloat(temp_v18,(unsigned char)(in_fpscr >> 0x16) & 3);
                    temp_v18 = (float)((int)temp_v18 + 1);
                    temp_v31 = temp_v23 + temp_v24 * (temp_v31 / temp_v22);
                    DAT_004ea91c = DAT_004ea93c + DAT_004ea92c;
                    DAT_00472554 = DAT_004ea940 + DAT_004ea930;
                    DAT_00472558 = DAT_004ea944 + DAT_004ea934;
                    DAT_004ea920 = DAT_00472554;
                    DAT_004ea924 = DAT_00472558;
                    pfVar12[3] = DAT_004ea91c;
                    pfVar12[4] = DAT_00472554;
                    pfVar12[5] = DAT_00472558;
                    DAT_00472554 = DAT_004ea920 + DAT_004ea930;
                    DAT_00472558 = DAT_004ea924 + DAT_004ea934;
                    *pfVar12 = DAT_004ea91c + DAT_004ea92c;
                    pfVar12[1] = DAT_00472554;
                    pfVar12[2] = DAT_00472558;
                    DAT_004ea91c = DAT_004ea93c - DAT_004ea92c;
                    DAT_00472554 = DAT_004ea940 - DAT_004ea930;
                    DAT_00472558 = DAT_004ea944 - DAT_004ea934;
                    DAT_004ea928 = DAT_004ea948 - DAT_004ea938;
                    DAT_004ea920 = DAT_00472554;
                    DAT_004ea924 = DAT_00472558;
                    pfVar12[6] = DAT_004ea91c;
                    pfVar12[7] = DAT_00472554;
                    pfVar12[8] = DAT_00472558;
                    DAT_00472550 = DAT_004ea91c - DAT_004ea92c;
                    DAT_00472554 = DAT_004ea920 - DAT_004ea930;
                    DAT_00472558 = DAT_004ea924 - DAT_004ea934;
                    DAT_0047255c = DAT_004ea928 - DAT_004ea938;
                    pfVar12[9] = DAT_00472550;
                    pfVar12[10] = DAT_00472554;
                    pfVar12[0xb] = DAT_00472558;
                    *(float *)(temp_v10 + 4) = temp_v31;
                    *(float *)(temp_v10 + 0xc) = temp_v31;
                    *(float *)(temp_v10 + 0x14) = temp_v31;
                    *(float *)(temp_v10 + 0x1c) = temp_v31;
                    pfVar12 = pfVar12 + 0xc;
                    temp_v10 = temp_v10 + 0x20;
                    DAT_004ea91c = temp_v27 * temp_v20;
                    DAT_004ea920 = temp_v28 * temp_v20;
                    DAT_004ea924 = temp_v4 * temp_v20;
                    DAT_004ea928 = temp_v20 * 0.0f;
                    DAT_004ea93c = DAT_004ea93c + DAT_004ea91c;
                    DAT_004ea940 = DAT_004ea940 + DAT_004ea920;
                    DAT_004ea944 = DAT_004ea944 + DAT_004ea924;
                    DAT_004ea948 = DAT_004ea948 + DAT_004ea928;
                  } while ((unsigned int)temp_v18 < (unsigned int)temp_v11);
                }
                temp_v18 = (float)piVar15[0xb] + temp_v17;
                piVar15[0xb] = (int)temp_v18;
                *piVar15 = *piVar15 + 1;
              }
            }
            else {
              FUN_002c4b30(pfVar12,temp_v5 * 0xc);
              if (temp_v33 != 0) {
                FUN_0024ba44(0);
                temp_v19 = ((temp_v30 - *(float *)(temp_v12 + 0xc0)) + temp_v18 * *(float *)(temp_v12 + 0xc0))
                         * *(float *)(temp_v12 + 0xbc);
                FUN_0024ba44(0);
                temp_v31 = (float)VectorUnsignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v18 = ((temp_v30 - *(float *)(temp_v12 + 200)) + temp_v18 * *(float *)(temp_v12 + 200)) *
                         *(float *)(temp_v12 + 0xc4) - temp_v19;
                piVar15[3] = (int)(temp_v18 / temp_v31);
                piVar15[2] = (int)temp_v19;
                FUN_0024ba44(0);
                temp_v18 = ((temp_v30 - *(float *)(temp_v12 + 0xe0)) + temp_v18 * *(float *)(temp_v12 + 0xe0))
                         * *(float *)(temp_v12 + 0xdc);
                piVar15[4] = (int)temp_v18;
                FUN_0024ba44(0);
                temp_v18 = temp_v18 * *(float *)(temp_v12 + 0xcc);
                piVar15[5] = (int)temp_v18;
                FUN_0024ba44(0);
                temp_v18 = ((temp_v30 - *(float *)(temp_v12 + 0xe8)) + temp_v18 * *(float *)(temp_v12 + 0xe8))
                         * *(float *)(temp_v12 + 0xf0);
                piVar15[10] = (int)temp_v18;
                FUN_0024ba44(0);
                temp_v18 = temp_v18 * 6.2831855f;
                piVar15[7] = (int)temp_v18;
                FUN_0024ba44(0);
                temp_v18 = ((temp_v30 - *(float *)(temp_v12 + 0xd4)) + temp_v18 * *(float *)(temp_v12 + 0xd4))
                         * *(float *)(temp_v12 + 0xd0);
                piVar15[6] = (int)temp_v18;
                FUN_0024ba44(0);
                temp_v18 = ((temp_v30 - *(float *)(temp_v12 + 0xb4)) + temp_v18 * *(float *)(temp_v12 + 0xb4))
                         * *(float *)(temp_v12 + 0xb0);
                piVar15[8] = (int)temp_v18;
                FUN_0024ba44(0);
                temp_v18 = ((temp_v30 - *(float *)(temp_v12 + 0xac)) + temp_v18 * *(float *)(temp_v12 + 0xac))
                         * 10.0f * *(float *)(temp_v12 + 0xa8);
                piVar15[9] = (int)temp_v18;
                FUN_0024ba44(0);
                temp_v18 = ((temp_v30 - *(float *)(temp_v12 + 0x9c)) + temp_v18 * *(float *)(temp_v12 + 0x9c))
                         * *(float *)(temp_v12 + 0x98);
                piVar15[0xb] = (int)temp_v18;
                if (!temp_v3) {
                  *piVar15 = 0;
                }
                else {
                  FUN_0024b990();
                  FUN_002c6c10();
                  temp_v18 = (float)VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
                  *piVar15 = temp_v9;
                  piVar15[2] = (int)((float)piVar15[2] + (float)piVar15[3] * temp_v18);
                  piVar15[5] = (int)(((float)piVar15[5] + (float)piVar15[4] * temp_v18) -
                                    temp_v15 * temp_v18 * temp_v18 * temp_v32);
                }
                temp_v33 = temp_v33 - 1;
              }
              pfVar12 = pfVar12 + temp_v5 * 3;
              temp_v10 = temp_v10 + temp_v5 * 8;
            }
          }
          else {
            pfVar12 = pfVar12 + temp_v5 * 3;
            temp_v10 = temp_v10 + temp_v5 * 8;
          }
          temp_v13 = temp_v13 + 1;
          piVar15 = piVar15 + 0xc;
        } while (temp_v13 < temp_v8);
      }
    }
  }
  return;
}
