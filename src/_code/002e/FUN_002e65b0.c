/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e65b0` (_code @ 0x2e65b0, 0x9bc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spF8; /* 0xf8: local_f8 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp114; /* 0x114: local_114 */
} param_1_stack;

extern float DAT_004ea91c; /* 0x4ea91c */
extern float DAT_004ea920; /* 0x4ea920 */
extern float DAT_004ea924; /* 0x4ea924 */
extern float DAT_004ea928; /* 0x4ea928 */
extern float DAT_004ea92c; /* 0x4ea92c */
extern float DAT_004ea930; /* 0x4ea930 */
extern float DAT_004ea934; /* 0x4ea934 */
extern float DAT_004ea938; /* 0x4ea938 */
extern float DAT_004ea95c; /* 0x4ea95c */
extern float DAT_004ea960; /* 0x4ea960 */
extern float DAT_004ea964; /* 0x4ea964 */
extern float DAT_004ea968; /* 0x4ea968 */
extern float DAT_004ea96c; /* 0x4ea96c */
extern float DAT_004ea970; /* 0x4ea970 */
extern float DAT_004ea974; /* 0x4ea974 */
extern float DAT_004ea978; /* 0x4ea978 */
extern float DAT_004ea97c; /* 0x4ea97c */
extern float DAT_004ea980; /* 0x4ea980 */
extern float DAT_004ea984; /* 0x4ea984 */
extern float DAT_004ea988; /* 0x4ea988 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
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
/* Supplied declaration required: FUN_0024add8. */
/* Supplied declaration required: FUN_0024b5f0. */
/* Supplied declaration required: FUN_0024b660. */
/* Supplied declaration required: FUN_0024b77c. */
/* Supplied declaration required: FUN_0024b7bc. */
/* Supplied declaration required: FUN_0024b830. */
extern int FUN_00269a58(void);
/* Supplied declaration required: FUN_002a2c7c. */
/* Supplied declaration required: FUN_002b7064. */
/* Supplied declaration required: FUN_002b70cc. */
/* Supplied declaration required: FUN_002c6a20. */


void FUN_002e65b0(int param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 15 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  unsigned long long temp_v19;
  unsigned long long temp_v20;
  unsigned long long temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  unsigned long long temp_v25;
  float temp_v26;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float temp_v27;
  int temp_v28;
  float temp_v29;
  unsigned int temp_v30;
  
  pfVar10 = *(float **)(param_1 + 0x20);
  temp_v10 = *(float *)(param_1 + 4);
  temp_v1 = *(unsigned int *)(param_1 + 0xc);
  temp_v9 = pfVar10[0x2e];
  pfVar8 = *(float **)(param_1 + 0x1c);
  pfVar9 = *(float **)(param_1 + 0x18);
  if (temp_v9 != 0.0f) {
    temp_v29 = pfVar10[8];
    temp_v18 = 0.0f;
    temp_v30 = (unsigned int)*(unsigned char *)(pfVar10 + 0x27);
    temp_v19 = romwright_piece_4_4(pfVar10[0x3b],pfVar10[0x3c]);
    temp_v22 = *pfVar10;
    temp_v20 = *(unsigned long long *)(pfVar10 + 1);
    temp_v2 = pfVar10[3];
    temp_v23 = pfVar10[5];
    temp_v3 = pfVar10[6];
    temp_v21 = romwright_piece_4_4(pfVar10[4],pfVar10[7]);
    temp_v24 = temp_v18;
    if ((temp_v29 != 0.0f) && (*(int *)(param_1 + 0x10) >= (int)temp_v29)) {
      temp_v28 = 0;
      temp_v27 = 0.0f;
    }
    else {
      temp_v8 = 1.1f;
      if ((*(int *)(param_1 + 0x10) == 0) && (*(char *)((int)pfVar10 + 0xbd) != '\0')) {
        temp_v12 = pfVar10[10];
        temp_v28 = 1;
        temp_v5 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v12 < 0.0f) << 0x1f) |
                ((unsigned int)(temp_v12 == 0.0f) << 0x1e);
        in_fpscr = temp_v5 | ((unsigned int)NAN(temp_v12) << 0x1c);
        temp_v0 = (unsigned char)(temp_v5 >> 0x18);
        in_s0 = temp_v18;
        temp_v27 = temp_v10;
        if (!(unsigned char)((temp_v0 >> 6) & 1) && temp_v0 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
          temp_v12 = temp_v18;
          FUN_0024b830(0);
          temp_v13 = (float)VectorUnsignedToFloat
                                    (*(unsigned int *)(param_1 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
          in_s0 = (float)(int)(temp_v18 * (temp_v8 - pfVar10[10]) * temp_v13);
          temp_v18 = temp_v12;
          temp_v27 = in_s0;
        }
      }
      else {
        temp_v12 = pfVar10[10];
        temp_v28 = 0;
        temp_v5 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v12 < 0.0f) << 0x1f) |
                ((unsigned int)(temp_v12 == 0.0f) << 0x1e);
        in_fpscr = temp_v5 | ((unsigned int)NAN(temp_v12) << 0x1c);
        temp_v0 = (unsigned char)(temp_v5 >> 0x18);
        if (!((unsigned char)((temp_v0 >> 6) & 1) || temp_v0 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1))) {
          temp_v12 = temp_v18;
          FUN_0024b830();
          temp_v13 = (float)VectorUnsignedToFloat(pfVar10[9],(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v8 = *(float *)(param_1 + 0x14) + temp_v13 * temp_v18 * (temp_v8 - pfVar10[10]);
          *(float *)(param_1 + 0x14) = temp_v8;
          temp_v18 = temp_v12;
        }
        else {
          temp_v8 = (float)VectorUnsignedToFloat(pfVar10[9],(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v8 = *(float *)(param_1 + 0x14) + temp_v8;
          *(float *)(param_1 + 0x14) = temp_v8;
        }
        temp_v12 = (float)VectorSignedToFloat((int)romwright_fabs_4(temp_v8),(unsigned char)(in_fpscr >> 0x16) & 3);
        *(float *)(param_1 + 0x14) = temp_v8 - temp_v12;
        in_s0 = temp_v8 - temp_v12;
        temp_v27 = (float)(int)romwright_fabs_4(temp_v8);
      }
    }
    temp_v8 = 0.0f;
    if (temp_v10 != 0.0f) {
      temp_v25 = 0x3f0000004222f983;
      temp_v13 = (float)temp_v21;
      temp_v12 = temp_v23;
      do {
        if ((int)temp_v9 <= (int)pfVar9[4]) {
          if (temp_v29 == 0.0f) {
            temp_v4 = -NAN;
          }
          else {
            temp_v4 = -NAN;
          }
          pfVar9[4] = temp_v4;
          FUN_0024b7bc(param_1,pfVar9);
        }
        temp_v4 = pfVar9[4];
        if (temp_v4 != -NAN) {
          if (temp_v4 != -NAN) {
            temp_v26 = *pfVar9;
            fStack_84 = pfVar9[1];
            fStack_80 = pfVar9[2];
            fStack_7c = pfVar9[3];
            temp_v11 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
            pfVar8[7] = (pfVar8[7] + pfVar8[0xc]) - (float)temp_v19 * temp_v11;
            pfVar8[8] = pfVar8[8] + pfVar8[9];
            temp_v16 = (pfVar8[10] +
                     (pfVar8[0xb] +
                     (float)((unsigned long long)temp_v19 >> 0x20) * temp_v11 *
                     (float)((unsigned long long)temp_v25 >> 0x20)) * temp_v11) * (float)temp_v25;
            temp_v11 = temp_v16;
            FUN_002b7064();
            temp_v14 = pfVar8[7];
            temp_v16 = temp_v16 * pfVar8[8];
            FUN_002b70cc();
            temp_v11 = temp_v11 * pfVar8[8];
            if ((temp_v1 & 1) == 0) {
              DAT_004ea91c = pfVar8[3];
              DAT_004ea920 = pfVar8[4];
              DAT_004ea924 = pfVar8[5];
              DAT_004ea928 = pfVar8[6];
              FUN_002a2c7c();
              DAT_004ea91c = temp_v16 * DAT_004ea95c + temp_v14 * DAT_004ea96c + temp_v11 * DAT_004ea97c;
              DAT_004ea920 = temp_v16 * DAT_004ea960 + temp_v14 * DAT_004ea970 + temp_v11 * DAT_004ea980;
              DAT_004ea924 = temp_v16 * DAT_004ea964 + temp_v14 * DAT_004ea974 + temp_v11 * DAT_004ea984;
              temp_v18 = temp_v16 * DAT_004ea968 + temp_v14 * DAT_004ea978 + temp_v11 * DAT_004ea988;
              temp_v16 = DAT_004ea91c + *pfVar8;
              temp_v14 = DAT_004ea920 + (float)*(unsigned long long *)(pfVar8 + 1);
              temp_v11 = DAT_004ea924 + (float)((unsigned long long)*(unsigned long long *)(pfVar8 + 1) >> 0x20);
              DAT_004ea928 = temp_v18;
            }
            *pfVar9 = temp_v16;
            pfVar9[1] = temp_v14;
            pfVar9[2] = temp_v11;
            FUN_0024b660(pfVar9,pfVar10,temp_v4,&temp_v26);
            pfVar9[6] = pfVar9[6] * pfVar8[0xd];
            temp_v11 = pfVar9[7];
            temp_v16 = pfVar8[0xf];
            pfVar9[7] = temp_v11 * temp_v16;
            in_s0 = temp_v11 * temp_v16 + pfVar8[0xe];
            pfVar9[7] = in_s0;
            FUN_0024add8(param_1,pfVar9);
            temp_v6 = FUN_00269a58();
            pfVar9[4] = (float)(temp_v6 + (int)temp_v4);
          }
          else if (temp_v27 != 0.0f) {
            FUN_0024b830(0);
            temp_v14 = 1.0f;
            temp_v15 = ((1.0f - pfVar10[0x34]) + in_s0 * pfVar10[0x34]) * pfVar10[0x33];
            FUN_0024b830(0);
            temp_v4 = pfVar10[0x36];
            temp_v16 = pfVar10[0x35];
            pfVar8[8] = temp_v15;
            temp_v11 = (float)VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v4 = ((temp_v14 - temp_v4) + in_s0 * temp_v4) * temp_v16 - temp_v15;
            pfVar8[9] = temp_v4 / temp_v11;
            FUN_0024b830(0);
            temp_v4 = temp_v4 * 6.2831855f;
            pfVar8[10] = temp_v4;
            FUN_0024b830(0);
            temp_v4 = ((temp_v14 - pfVar10[0x38]) + temp_v4 * pfVar10[0x38]) * pfVar10[0x37];
            pfVar8[0xb] = temp_v4;
            FUN_0024b830(0);
            temp_v11 = (float)temp_v25;
            pfVar8[0xc] = ((temp_v14 - pfVar10[0x3a]) + temp_v4 * pfVar10[0x3a]) * pfVar10[0x39];
            temp_v16 = pfVar8[10] * temp_v11;
            FUN_002b7064();
            temp_v17 = 0.0f;
            temp_v11 = pfVar8[10] * temp_v11;
            FUN_002b70cc();
            temp_v4 = temp_v11;
            FUN_0024b830(0);
            pfVar8[7] = temp_v11 * pfVar10[0x32];
            temp_v16 = temp_v16 * temp_v15;
            temp_v4 = temp_v4 * temp_v15;
            temp_v11 = temp_v24 * temp_v17;
            temp_v14 = pfVar8[7];
            DAT_004ea91c = temp_v16;
            DAT_004ea920 = temp_v14;
            DAT_004ea924 = temp_v4;
            DAT_004ea928 = temp_v11;
            DAT_004ea92c = temp_v15;
            DAT_004ea930 = temp_v15;
            DAT_004ea934 = temp_v15;
            DAT_004ea938 = temp_v17;
            if ((temp_v1 & 1) == 0) {
              *pfVar8 = temp_v22;
              pfVar8[1] = (float)temp_v20;
              pfVar8[2] = (float)((unsigned long long)temp_v20 >> 0x20);
              DAT_004ea91c = (float)((unsigned long long)temp_v21 >> 0x20);
              pfVar8[3] = DAT_004ea91c;
              pfVar8[4] = temp_v23;
              pfVar8[5] = temp_v3;
              pfVar8[6] = temp_v13;
              DAT_004ea928 = (float)temp_v21;
              DAT_004ea920 = temp_v12;
              DAT_004ea924 = temp_v3;
              FUN_002a2c7c();
              DAT_004ea930 = (float)temp_v20;
              DAT_004ea934 = (float)((unsigned long long)temp_v20 >> 0x20);
              DAT_004ea91c = temp_v16 * DAT_004ea95c + temp_v14 * DAT_004ea96c + temp_v4 * DAT_004ea97c +
                             temp_v22;
              DAT_004ea920 = temp_v16 * DAT_004ea960 + temp_v14 * DAT_004ea970 + temp_v4 * DAT_004ea980 +
                             DAT_004ea930;
              DAT_004ea924 = temp_v16 * DAT_004ea964 + temp_v14 * DAT_004ea974 + temp_v4 * DAT_004ea984 +
                             DAT_004ea934;
              temp_v14 = temp_v16 * DAT_004ea968 + temp_v14 * DAT_004ea978 + temp_v4 * DAT_004ea988 + temp_v2;
              temp_v18 = temp_v11;
              DAT_004ea928 = temp_v14;
              DAT_004ea92c = temp_v22;
              DAT_004ea938 = temp_v2;
            }
            temp_v16 = DAT_004ea924;
            temp_v11 = DAT_004ea920;
            temp_v4 = DAT_004ea91c;
            pfVar9[3] = DAT_004ea928;
            *pfVar9 = temp_v4;
            pfVar9[1] = temp_v11;
            pfVar9[2] = temp_v16;
            FUN_0024b830(0);
            temp_v4 = 1.0f;
            pfVar8[0xd] = (1.0f - pfVar10[0x1b]) + temp_v14 * pfVar10[0x1b];
            if (temp_v30 == 2) {
              pfVar8[0xe] = temp_v17;
              pfVar8[0xf] = 1.0f;
            }
            else {
              FUN_0024b830(0);
              pfVar8[0xf] = (temp_v4 - pfVar10[0x26]) + temp_v14 * pfVar10[0x26];
              if (temp_v30 != 1) {
                pfVar8[0xe] = temp_v17;
              }
              else {
                FUN_0024b830(0);
                temp_v5 = 0;
                pfVar8[0xe] = temp_v14 * 6.2831855f;
                FUN_0024b77c();
                if ((temp_v5 & 1) != 0) {
                  pfVar8[0xf] = -pfVar8[0xf];
                }
              }
            }
            temp_v26 = *pfVar9;
            fStack_84 = pfVar9[1];
            fStack_80 = pfVar9[2];
            fStack_7c = pfVar9[3];
            pfVar9[4] = 0.0f;
            if (temp_v28 != 0) {
              FUN_0024b77c(0);
              FUN_002c6a20();
              temp_v14 = (float)VectorUnsignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v11 = (float)temp_v25;
              pfVar8[8] = pfVar8[8] + pfVar8[9] * temp_v14;
              pfVar8[7] = (pfVar8[7] + pfVar8[0xc] * temp_v14) -
                          (float)temp_v19 * temp_v14 * temp_v14 * (float)((unsigned long long)temp_v25 >> 0x20);
              temp_v4 = pfVar8[10] * temp_v11;
              FUN_002b7064();
              temp_v16 = pfVar8[7];
              temp_v4 = temp_v4 * pfVar8[8];
              temp_v11 = pfVar8[10] * temp_v11;
              FUN_002b70cc();
              temp_v11 = temp_v11 * pfVar8[8];
              DAT_004ea91c = temp_v4;
              DAT_004ea920 = temp_v16;
              DAT_004ea924 = temp_v11;
              DAT_004ea928 = temp_v18;
              if ((temp_v1 & 1) == 0) {
                DAT_004ea91c = (float)((unsigned long long)temp_v21 >> 0x20);
                DAT_004ea928 = (float)temp_v21;
                DAT_004ea920 = temp_v12;
                DAT_004ea924 = temp_v3;
                FUN_002a2c7c();
                DAT_004ea930 = (float)temp_v20;
                DAT_004ea934 = (float)((unsigned long long)temp_v20 >> 0x20);
                DAT_004ea91c = temp_v4 * DAT_004ea95c + temp_v16 * DAT_004ea96c + temp_v11 * DAT_004ea97c
                               + temp_v22;
                DAT_004ea920 = temp_v4 * DAT_004ea960 + temp_v16 * DAT_004ea970 + temp_v11 * DAT_004ea980
                               + DAT_004ea930;
                DAT_004ea924 = temp_v4 * DAT_004ea964 + temp_v16 * DAT_004ea974 + temp_v11 * DAT_004ea984
                               + DAT_004ea934;
                DAT_004ea928 = temp_v4 * DAT_004ea968 + temp_v16 * DAT_004ea978 + temp_v11 * DAT_004ea988
                               + temp_v2;
                DAT_004ea92c = temp_v22;
                DAT_004ea938 = temp_v2;
              }
              temp_v16 = DAT_004ea924;
              temp_v11 = DAT_004ea920;
              temp_v4 = DAT_004ea91c;
              pfVar9[3] = DAT_004ea928;
              *pfVar9 = temp_v4;
              pfVar9[1] = temp_v11;
              pfVar9[2] = temp_v16;
              pfVar9[4] = (float)(int)temp_v14;
            }
            FUN_0024b660(pfVar9,pfVar10,pfVar9[4],&temp_v26);
            pfVar9[6] = pfVar9[6] * pfVar8[0xd];
            temp_v4 = pfVar9[7];
            temp_v11 = pfVar8[0xf];
            pfVar9[7] = temp_v4 * temp_v11;
            in_s0 = temp_v4 * temp_v11 + pfVar8[0xe];
            pfVar9[7] = in_s0;
            if (temp_v28 != 0) {
              FUN_0024b5f0(param_1,pfVar9);
              temp_v6 = FUN_00269a58();
              pfVar9[4] = (float)(temp_v6 + (int)pfVar9[4]);
            }
            temp_v27 = (float)((int)temp_v27 - 1);
          }
        }
        temp_v8 = (float)((int)temp_v8 + 1);
        pfVar8 = pfVar8 + 0x10;
        pfVar9 = pfVar9 + 10;
      } while ((unsigned int)temp_v8 < (unsigned int)temp_v10);
    }
  }
  return;
}
