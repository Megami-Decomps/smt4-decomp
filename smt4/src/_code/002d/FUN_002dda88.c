/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dda88` (_code @ 0x2dda88, 0x7a4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
} param_1_stack;

extern float DAT_004ea91c; /* 0x4ea91c */
extern float DAT_004ea920; /* 0x4ea920 */
extern float DAT_004ea924; /* 0x4ea924 */
extern float DAT_004ea928; /* 0x4ea928 */
extern float DAT_004ea92c; /* 0x4ea92c */
extern float DAT_004ea930; /* 0x4ea930 */
extern float DAT_004ea934; /* 0x4ea934 */
extern float DAT_004ea938; /* 0x4ea938 */

/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_0024add8. */
/* Supplied declaration required: FUN_0024b5f0. */
/* Supplied declaration required: FUN_0024b660. */
/* Supplied declaration required: FUN_0024b77c. */
/* Supplied declaration required: FUN_0024b7bc. */
/* Supplied declaration required: FUN_0024b830. */
extern int FUN_00269a58(void);
/* Supplied declaration required: aeabi_uidivmod. */


void FUN_002dda88(int param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 12 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  float temp_v2;
  float temp_v3;
  int temp_v4;
  float *pfVar6;
  unsigned int temp_v5;
  float temp_v6;
  unsigned int temp_v7;
  float *pfVar9;
  float *pfVar10;
  float temp_v8;
  float *pfVar12;
  float temp_v9;
  float temp_v10;
  unsigned int in_fpscr;
  unsigned int temp_v11;
  float in_s0;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  long long temp_v15;
  float temp_v16;
  unsigned int temp_v17;
  unsigned long long temp_v18;
  float temp_v19;
  unsigned long long temp_v20;
  float temp_v21;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  unsigned int temp_v22;
  float temp_v23;
  unsigned int temp_v24;
  
  temp_v9 = *(float *)(param_1 + 4);
  pfVar12 = *(float **)(param_1 + 0x20);
  temp_v24 = *(unsigned int *)(param_1 + 0xc);
  pfVar9 = *(float **)(param_1 + 0x18);
  pfVar10 = *(float **)(param_1 + 0x1c);
  temp_v23 = pfVar12[0x2e];
  if (temp_v23 != 0.0f) {
    temp_v6 = pfVar12[8];
    temp_v17 = 0;
    temp_v22 = (unsigned int)*(unsigned char *)(pfVar12 + 0x27);
    temp_v15 = (unsigned long long)(unsigned int)pfVar12[0x37] << 0x20;
    temp_v16 = pfVar12[0x36];
    if ((temp_v6 != 0.0f) && (*(int *)(param_1 + 0x10) >= (int)temp_v6)) {
      temp_v1 = 0;
      temp_v10 = 0.0f;
    }
    else {
      temp_v8 = 1.1f;
      if ((*(int *)(param_1 + 0x10) == 0) && (*(char *)((int)pfVar12 + 0xbd) != '\0')) {
        in_s0 = pfVar12[10];
        temp_v1 = 1;
        temp_v5 = (in_fpscr & 0xfffffff) | ((unsigned int)(in_s0 < 0.0f) << 0x1f) |
                ((unsigned int)(in_s0 == 0.0f) << 0x1e);
        in_fpscr = temp_v5 | ((unsigned int)(in_s0 != in_s0) << 0x1c);
        temp_v0 = (unsigned char)(temp_v5 >> 0x18);
        temp_v10 = temp_v9;
        if (!(unsigned char)((temp_v0 >> 6) & 1) && temp_v0 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
          FUN_0024b830(0);
          temp_v10 = (float)VectorUnsignedToFloat
                                    (*(unsigned int *)(param_1 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v10 = (float)(int)(in_s0 * (temp_v8 - pfVar12[10]) * temp_v10);
          in_s0 = temp_v10;
        }
      }
      else {
        temp_v10 = pfVar12[10];
        temp_v1 = 0;
        temp_v5 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v10 < 0.0f) << 0x1f) |
                ((unsigned int)(temp_v10 == 0.0f) << 0x1e);
        in_fpscr = temp_v5 | ((unsigned int)(temp_v10 != temp_v10) << 0x1c);
        temp_v0 = (unsigned char)(temp_v5 >> 0x18);
        if (!((unsigned char)((temp_v0 >> 6) & 1) || temp_v0 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1))) {
          FUN_0024b830();
          temp_v19 = (float)VectorUnsignedToFloat(pfVar12[9],(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v8 = *(float *)(param_1 + 0x14) + temp_v19 * temp_v10 * (temp_v8 - pfVar12[10]);
          *(float *)(param_1 + 0x14) = temp_v8;
        }
        else {
          temp_v8 = (float)VectorUnsignedToFloat(pfVar12[9],(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v8 = *(float *)(param_1 + 0x14) + temp_v8;
          *(float *)(param_1 + 0x14) = temp_v8;
        }
        temp_v10 = (float)(int)romwright_fabs_4(temp_v8);
        temp_v19 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
        in_s0 = temp_v8 - temp_v19;
        *(float *)(param_1 + 0x14) = in_s0;
      }
    }
    temp_v8 = 0.0f;
    if (temp_v9 != 0.0f) {
      temp_v19 = 2.0f;
      temp_v20 = 0x40c90fdb3f800000;
      temp_v18 = romwright_piece_4_4(0x3f000000,temp_v17);
      do {
        if ((int)temp_v23 <= (int)pfVar9[4]) {
          if (temp_v6 == 0.0f) {
            temp_v3 = -NAN;
          }
          else {
            temp_v3 = -NAN;
          }
          pfVar9[4] = temp_v3;
          FUN_0024b7bc(param_1,pfVar9);
        }
        temp_v3 = pfVar9[4];
        if (temp_v3 != -NAN) {
          if (temp_v3 != -NAN) {
            temp_v21 = *pfVar9;
            fStack_6c = pfVar9[1];
            fStack_68 = pfVar9[2];
            fStack_64 = pfVar9[3];
            temp_v14 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
            DAT_004ea92c = *pfVar9;
            DAT_004ea930 = pfVar9[1];
            DAT_004ea934 = pfVar9[2];
            DAT_004ea938 = pfVar9[3];
            temp_v14 = pfVar10[3] + temp_v16 * temp_v14;
            temp_v13 = (float)temp_v18;
            temp_v5 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v13 < temp_v14) << 0x1f) |
                    ((unsigned int)(temp_v13 == temp_v14) << 0x1e);
            in_fpscr = temp_v5 | ((unsigned int)((temp_v13 != temp_v13) || (temp_v14 != temp_v14)) << 0x1c);
            temp_v0 = (unsigned char)(temp_v5 >> 0x18);
            if (!(unsigned char)((temp_v0 >> 6) & 1) && temp_v0 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
              temp_v14 = temp_v13;
            }
            temp_v13 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
            DAT_004ea91c = *pfVar10 * temp_v14 + DAT_004ea92c;
            temp_v13 = (pfVar10[1] * temp_v14 - (float)((unsigned long long)temp_v15 >> 0x20) * temp_v13) +
                     DAT_004ea930;
            temp_v14 = pfVar10[2] * temp_v14 + DAT_004ea934;
            temp_v12 = (float)temp_v15 + DAT_004ea938;
            DAT_004ea920 = temp_v13;
            DAT_004ea924 = temp_v14;
            DAT_004ea928 = temp_v12;
            *pfVar9 = DAT_004ea91c;
            pfVar9[1] = temp_v13;
            pfVar9[2] = temp_v14;
            pfVar9[3] = temp_v12;
            FUN_0024b660(pfVar9,pfVar12,temp_v3,&temp_v21);
            pfVar9[6] = pfVar9[6] * pfVar10[4];
            temp_v14 = pfVar9[7];
            temp_v13 = pfVar10[6];
            pfVar9[7] = temp_v14 * temp_v13;
            in_s0 = temp_v14 * temp_v13 + pfVar10[5];
            pfVar9[7] = in_s0;
            FUN_0024add8(param_1,pfVar9);
            temp_v4 = FUN_00269a58();
            pfVar9[4] = (float)(temp_v4 + (int)temp_v3);
          }
          else if (temp_v10 != 0.0f) {
            FUN_0024b830(0);
            temp_v3 = in_s0 - (float)((unsigned long long)temp_v18 >> 0x20);
            temp_v14 = temp_v3 * temp_v19;
            FUN_0024b830(0);
            temp_v3 = temp_v3 - (float)((unsigned long long)temp_v18 >> 0x20);
            temp_v13 = temp_v3 * temp_v19;
            FUN_0024b830(0);
            DAT_004ea924 = (temp_v3 - (float)((unsigned long long)temp_v18 >> 0x20)) * temp_v19;
            DAT_004ea928 = (float)temp_v15;
            temp_v3 = romwright_sqrt_4(temp_v14 * temp_v14 + temp_v13 * temp_v13 + DAT_004ea924 * DAT_004ea924);
            temp_v12 = (float)temp_v18;
            temp_v5 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v3 < temp_v12) << 0x1f) |
                    ((unsigned int)(temp_v3 == temp_v12) << 0x1e);
            temp_v11 = temp_v5 | ((unsigned int)((temp_v3 != temp_v3) || (temp_v12 != temp_v12)) << 0x1c);
            temp_v0 = (unsigned char)(temp_v5 >> 0x18);
            DAT_004ea91c = temp_v14;
            DAT_004ea920 = temp_v13;
            if (!(unsigned char)((temp_v0 >> 6) & 1) && temp_v0 >> 7 == ((unsigned char)(temp_v11 >> 0x1c) & 1)) {
              DAT_004ea91c = temp_v14 / temp_v3;
              DAT_004ea920 = temp_v13 / temp_v3;
              DAT_004ea924 = DAT_004ea924 / temp_v3;
            }
            temp_v12 = DAT_004ea924;
            temp_v13 = DAT_004ea920;
            temp_v14 = DAT_004ea91c;
            pfVar10[2] = DAT_004ea924;
            *pfVar10 = temp_v14;
            pfVar10[1] = temp_v13;
            FUN_0024b830(0);
            temp_v3 = romwright_fabs_4((((float)temp_v20 - pfVar12[0x35]) + temp_v3 * pfVar12[0x35]) * pfVar12[0x34]);
            pfVar10[3] = temp_v3;
            FUN_0024b830(0);
            DAT_004ea920 = temp_v13;
            DAT_004ea91c = temp_v14;
            temp_v14 = (float)temp_v18;
            in_fpscr = (temp_v11 & 0xfffffff) | ((unsigned int)(temp_v14 <= pfVar12[0x34]) << 0x1d);
            DAT_004ea92c = (((float)temp_v20 - pfVar12[0x33]) + temp_v3 * pfVar12[0x33]) * pfVar12[0x32]
            ;
            DAT_004ea924 = temp_v12;
            if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
              DAT_004ea91c = -DAT_004ea91c;
              DAT_004ea920 = -DAT_004ea920;
              DAT_004ea924 = -temp_v12;
            }
            if ((temp_v24 & 1) != 0) {
              DAT_004ea91c = DAT_004ea91c * DAT_004ea92c;
              DAT_004ea920 = DAT_004ea920 * DAT_004ea92c;
              DAT_004ea924 = DAT_004ea924 * DAT_004ea92c;
              temp_v3 = (float)temp_v15 * temp_v14;
              DAT_004ea930 = DAT_004ea92c;
              DAT_004ea934 = DAT_004ea92c;
              DAT_004ea938 = temp_v14;
            }
            else {
              DAT_004ea91c = DAT_004ea91c * DAT_004ea92c;
              DAT_004ea920 = DAT_004ea920 * DAT_004ea92c;
              DAT_004ea924 = DAT_004ea924 * DAT_004ea92c;
              DAT_004ea92c = *pfVar12;
              DAT_004ea930 = pfVar12[1];
              DAT_004ea934 = pfVar12[2];
              DAT_004ea938 = pfVar12[3];
              DAT_004ea91c = DAT_004ea91c + DAT_004ea92c;
              DAT_004ea920 = DAT_004ea920 + DAT_004ea930;
              DAT_004ea924 = DAT_004ea924 + DAT_004ea934;
              temp_v3 = (float)temp_v15 * temp_v14 + DAT_004ea938;
            }
            temp_v2 = DAT_004ea924;
            temp_v12 = DAT_004ea920;
            temp_v13 = DAT_004ea91c;
            DAT_004ea928 = temp_v3;
            pfVar9[3] = temp_v3;
            *pfVar9 = temp_v13;
            pfVar9[1] = temp_v12;
            pfVar9[2] = temp_v2;
            pfVar6 = (float *)0x0;
            FUN_0024b830();
            if (temp_v22 == 2) {
              pfVar6 = pfVar10 + 5;
            }
            pfVar10[4] = ((float)temp_v20 - pfVar12[0x1b]) + temp_v3 * pfVar12[0x1b];
            if (temp_v22 == 2) {
              *pfVar6 = temp_v14;
              pfVar6[1] = (float)temp_v20;
            }
            else {
              FUN_0024b830(0);
              pfVar10[6] = ((float)temp_v20 - pfVar12[0x26]) + temp_v3 * pfVar12[0x26];
              if (temp_v22 != 1) {
                pfVar10[5] = temp_v14;
              }
              else {
                FUN_0024b830(0);
                temp_v5 = 0;
                pfVar10[5] = temp_v3 * (float)((unsigned long long)temp_v20 >> 0x20);
                FUN_0024b77c();
                if ((temp_v5 & 1) != 0) {
                  pfVar10[6] = -pfVar10[6];
                }
              }
            }
            temp_v21 = *pfVar9;
            fStack_6c = pfVar9[1];
            fStack_68 = pfVar9[2];
            fStack_64 = pfVar9[3];
            pfVar9[4] = 0.0f;
            if (temp_v1) {
              FUN_0024b77c(0);
              aeabi_uidivmod();
              DAT_004ea92c = *pfVar9;
              DAT_004ea930 = pfVar9[1];
              DAT_004ea934 = pfVar9[2];
              DAT_004ea938 = pfVar9[3];
              temp_v13 = (float)VectorUnsignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v12 = (float)((unsigned long long)temp_v18 >> 0x20);
              temp_v3 = pfVar10[3] * temp_v13 + temp_v16 * temp_v13 * temp_v13 * temp_v12;
              in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v14 <= temp_v3) << 0x1d);
              if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
                temp_v3 = temp_v14;
              }
              temp_v14 = *pfVar10 * temp_v3 + DAT_004ea92c;
              temp_v12 = (pfVar10[1] * temp_v3 -
                       (float)((unsigned long long)temp_v15 >> 0x20) * temp_v13 * temp_v13 * temp_v12) + DAT_004ea930
              ;
              temp_v3 = pfVar10[2] * temp_v3 + DAT_004ea934;
              DAT_004ea928 = (float)temp_v15 + DAT_004ea938;
              DAT_004ea91c = temp_v14;
              DAT_004ea920 = temp_v12;
              DAT_004ea924 = temp_v3;
              pfVar9[3] = DAT_004ea928;
              *pfVar9 = temp_v14;
              pfVar9[1] = temp_v12;
              pfVar9[2] = temp_v3;
              pfVar9[4] = (float)(int)temp_v13;
            }
            FUN_0024b660(pfVar9,pfVar12,pfVar9[4],&temp_v21);
            pfVar9[6] = pfVar9[6] * pfVar10[4];
            temp_v3 = pfVar9[7];
            temp_v14 = pfVar10[6];
            pfVar9[7] = temp_v3 * temp_v14;
            in_s0 = temp_v3 * temp_v14 + pfVar10[5];
            pfVar9[7] = in_s0;
            if (temp_v1) {
              FUN_0024b5f0(param_1,pfVar9);
              temp_v4 = FUN_00269a58();
              pfVar9[4] = (float)((int)pfVar9[4] + temp_v4);
            }
            temp_v10 = (float)((int)temp_v10 - 1);
          }
        }
        temp_v8 = (float)((int)temp_v8 + 1);
        pfVar10 = pfVar10 + 7;
        pfVar9 = pfVar9 + 10;
      } while ((unsigned int)temp_v8 < (unsigned int)temp_v9);
    }
  }
  return;
}
