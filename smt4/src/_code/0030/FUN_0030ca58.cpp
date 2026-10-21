/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030ca58` (_code @ 0x30ca58, 0x8ec bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(...);
int FUN_0024add8(int, float *);
int FUN_0024b5f0(...);
int FUN_0024b660(...);
int randomAdvanceShiftRegister(...);
int FUN_0024b7bc(int, float *);
int FUN_0024b830(...);
int FUN_002a2c7c(void);
int FUN_002b7064(void);
int FUN_002b70cc(void);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(unsigned int, int);
int __aeabi_uidivmod(void);

/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
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
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Supplied declaration required: FUN_0024add8. */
/* Supplied declaration required: FUN_0024b5f0. */
/* Supplied declaration required: FUN_0024b660. */
/* Supplied declaration required: randomAdvanceShiftRegister. */
/* Supplied declaration required: FUN_0024b7bc. */
/* Supplied declaration required: FUN_0024b830. */
extern int effGetFrameCounter(void);
/* Supplied declaration required: FUN_002a2c7c. */
/* Supplied declaration required: FUN_002b7064. */
/* Supplied declaration required: FUN_002b70cc. */
/* Supplied declaration required: __aeabi_uidivmod. */


void FUN_0030ca58(int param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 15 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  float temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  float *pfVar6;
  float *pfVar7;
  unsigned int temp_v6;
  unsigned int *puVar9;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  unsigned long long temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  unsigned long long temp_v19;
  unsigned long long temp_v20;
  unsigned long long temp_v21;
  float temp_v22;
  unsigned long long temp_v23;
  float temp_v24;
  float temp_v25;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  unsigned int temp_v26;
  int temp_v27;
  unsigned int temp_v28;
  
  puVar9 = *(unsigned int **)(param_1 + 0x20);
  temp_v8 = *(unsigned int *)(param_1 + 4);
  temp_v26 = *(unsigned int *)(param_1 + 0xc);
  pfVar6 = *(float **)(param_1 + 0x18);
  pfVar7 = *(float **)(param_1 + 0x1c);
  temp_v7 = puVar9[0x2e];
  if (temp_v7 != 0) {
    temp_v27 = puVar9[8];
    DAT_004ea91c = (float)puVar9[4];
    DAT_004ea920 = (float)puVar9[5];
    DAT_004ea924 = (float)puVar9[6];
    DAT_004ea928 = (float)puVar9[7];
    temp_v28 = (unsigned int)*(unsigned char *)(puVar9 + 0x27);
    temp_v17 = 0.0f;
    temp_v16 = (float)puVar9[0x37];
    temp_v18 = (float)puVar9[0x36];
    temp_v19 = romwright_piece_4_4(puVar9[3],*puVar9);
    temp_v20 = *(unsigned long long *)(puVar9 + 1);
    FUN_002a2c7c();
    temp_v11 = temp_v17;
    if ((temp_v27 != 0) && (*(int *)(param_1 + 0x10) >= temp_v27)) {
      temp_v1 = 0;
      temp_v24 = 0.0f;
    }
    else {
      temp_v22 = 1.1f;
      if ((*(int *)(param_1 + 0x10) == 0) && (*(char *)((int)puVar9 + 0xbd) != '\0')) {
        temp_v2 = (float)puVar9[10];
        temp_v1 = 1;
        temp_v6 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v2 < temp_v17) << 0x1f) |
                ((unsigned int)(temp_v2 == temp_v17) << 0x1e);
        in_fpscr = temp_v6 | ((unsigned int)((temp_v2 != temp_v2) || (temp_v17 != temp_v17)) << 0x1c);
        temp_v0 = (unsigned char)(temp_v6 >> 0x18);
        if ((unsigned char)((temp_v0 >> 6) & 1) || temp_v0 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
          in_s0 = *(float *)(param_1 + 4);
          temp_v24 = in_s0;
        }
        else {
          FUN_0024b830(0);
          temp_v2 = (float)VectorUnsignedToFloat
                                   (*(unsigned int *)(param_1 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
          in_s0 = (float)(int)(temp_v17 * (temp_v22 - (float)puVar9[10]) * temp_v2);
          temp_v24 = in_s0;
        }
      }
      else {
        temp_v11 = (float)puVar9[10];
        temp_v1 = 0;
        temp_v6 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v11 < temp_v17) << 0x1f) |
                ((unsigned int)(temp_v11 == temp_v17) << 0x1e);
        in_fpscr = temp_v6 | ((unsigned int)((temp_v11 != temp_v11) || (temp_v17 != temp_v17)) << 0x1c);
        temp_v0 = (unsigned char)(temp_v6 >> 0x18);
        if (!((unsigned char)((temp_v0 >> 6) & 1) || temp_v0 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1))) {
          temp_v11 = temp_v17;
          FUN_0024b830();
          temp_v2 = (float)VectorUnsignedToFloat(puVar9[9],(unsigned char)(in_fpscr >> 0x16) & 3);
          in_s0 = *(float *)(param_1 + 0x14) + temp_v2 * temp_v17 * (temp_v22 - (float)puVar9[10]);
          *(float *)(param_1 + 0x14) = in_s0;
          temp_v17 = temp_v11;
        }
        else {
          in_s0 = (float)VectorUnsignedToFloat(puVar9[9],(unsigned char)(in_fpscr >> 0x16) & 3);
          in_s0 = *(float *)(param_1 + 0x14) + in_s0;
          *(float *)(param_1 + 0x14) = in_s0;
        }
        temp_v24 = (float)(int)romwright_fabs_4(in_s0);
        temp_v11 = (float)VectorSignedToFloat(temp_v24,(unsigned char)(in_fpscr >> 0x16) & 3);
        in_s0 = in_s0 - temp_v11;
        *(float *)(param_1 + 0x14) = in_s0;
        temp_v11 = temp_v17;
      }
    }
    temp_v6 = 0;
    if (temp_v8 != 0) {
      temp_v22 = 6.2831855f;
      temp_v23 = 0x3f80000040490fdb;
      temp_v21 = 0x3f00000000000000;
      temp_v17 = 40.743664f;
      do {
        if (temp_v7 <= (int)pfVar6[4]) {
          if (temp_v27 == 0) {
            temp_v2 = -NAN;
          }
          else {
            temp_v2 = -NAN;
          }
          pfVar6[4] = temp_v2;
          FUN_0024b7bc(param_1,pfVar6);
        }
        temp_v10 = (float)((unsigned long long)temp_v21 >> 0x20);
        temp_v2 = pfVar6[4];
        if (temp_v2 != -NAN) {
          if (temp_v2 != -NAN) {
            temp_v25 = *pfVar6;
            fStack_7c = pfVar6[1];
            fStack_78 = pfVar6[2];
            fStack_74 = pfVar6[3];
            temp_v9 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
            if (((unsigned int)*(unsigned char *)(puVar9 + 0x39) & ((temp_v6 & 1) - 1)) != 0) {
              temp_v12 = pfVar7[2] - temp_v18 * temp_v9 * temp_v10;
            }
            else {
              temp_v12 = pfVar7[2] + temp_v18 * temp_v9 * temp_v10;
            }
            temp_v14 = *pfVar7 + pfVar7[1];
            *pfVar7 = temp_v14;
            pfVar7[4] = (pfVar7[4] - temp_v16 * temp_v9) + pfVar7[5];
            temp_v9 = (pfVar7[3] + temp_v12 * temp_v9) * temp_v17;
            temp_v21 = CONCAT44(temp_v10,temp_v9);
            FUN_002b7064();
            temp_v9 = temp_v9 * temp_v14;
            temp_v10 = (float)temp_v21;
            temp_v12 = pfVar7[4];
            FUN_002b70cc();
            DAT_004ea924 = temp_v10 * temp_v14;
            DAT_004ea91c = temp_v9;
            DAT_004ea920 = temp_v12;
            DAT_004ea928 = temp_v11;
            if ((temp_v26 & 1) == 0) {
              temp_v10 = DAT_004ea924 * DAT_004ea988;
              DAT_004ea92c = (float)temp_v19;
              DAT_004ea938 = (float)((unsigned long long)temp_v19 >> 0x20);
              DAT_004ea930 = (float)temp_v20;
              DAT_004ea934 = (float)((unsigned long long)temp_v20 >> 0x20);
              DAT_004ea91c = temp_v9 * DAT_004ea95c + temp_v12 * DAT_004ea96c +
                             DAT_004ea924 * DAT_004ea97c + DAT_004ea92c;
              DAT_004ea920 = temp_v9 * DAT_004ea960 + temp_v12 * DAT_004ea970 +
                             DAT_004ea924 * DAT_004ea980 + DAT_004ea930;
              DAT_004ea924 = temp_v9 * DAT_004ea964 + temp_v12 * DAT_004ea974 +
                             DAT_004ea924 * DAT_004ea984 + DAT_004ea934;
              DAT_004ea928 = temp_v9 * DAT_004ea968 + temp_v12 * DAT_004ea978 + temp_v10 + DAT_004ea938;
            }
            temp_v12 = DAT_004ea928;
            temp_v9 = DAT_004ea924;
            temp_v10 = DAT_004ea920;
            *pfVar6 = DAT_004ea91c;
            pfVar6[1] = temp_v10;
            pfVar6[2] = temp_v9;
            pfVar6[3] = temp_v12;
            FUN_0024b660(pfVar6,puVar9,temp_v2,&temp_v25);
            pfVar6[6] = pfVar6[6] * pfVar7[6];
            temp_v9 = pfVar6[7];
            temp_v10 = pfVar7[8];
            pfVar6[7] = temp_v9 * temp_v10;
            in_s0 = temp_v9 * temp_v10 + pfVar7[7];
            pfVar6[7] = in_s0;
            FUN_0024add8(param_1,pfVar6);
            temp_v4 = effGetFrameCounter();
            pfVar6[4] = (float)(temp_v4 + (int)temp_v2);
          }
          else if (temp_v24 != 0.0f) {
            FUN_0024b830(0);
            temp_v2 = (float)((unsigned long long)temp_v23 >> 0x20);
            temp_v21 = CONCAT44(temp_v10,temp_v2);
            temp_v2 = (in_s0 * (float)temp_v23 * (float)puVar9[0x38] +
                    (temp_v2 - (float)puVar9[0x38]) * (float)temp_v23 * temp_v10) * temp_v17;
            temp_v15 = CONCAT44(temp_v2,temp_v17);
            FUN_002b70cc();
            temp_v17 = (float)puVar9[0x32];
            temp_v9 = (float)puVar9[0x33];
            temp_v10 = (float)VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
            *pfVar7 = temp_v17 * temp_v2;
            temp_v17 = temp_v9 * temp_v2 - temp_v17 * temp_v2;
            pfVar7[1] = temp_v17 / temp_v10;
            if (((unsigned int)*(unsigned char *)(puVar9 + 0x39) & ((temp_v6 & 1) - 1)) != 0) {
              FUN_0024b830(0);
              temp_v2 = -((float)puVar9[0x34] *
                       (((float)temp_v21 - (float)puVar9[0x35]) + temp_v17 * (float)puVar9[0x35]));
            }
            else {
              FUN_0024b830(0);
              temp_v2 = (((float)temp_v21 - (float)puVar9[0x35]) + temp_v17 * (float)puVar9[0x35]) *
                      (float)puVar9[0x34];
            }
            pfVar7[2] = temp_v2;
            FUN_0024b830(0);
            temp_v17 = (float)temp_v15;
            pfVar7[3] = temp_v2 * temp_v22;
            temp_v2 = (float)((unsigned long long)temp_v15 >> 0x20);
            FUN_002b7064();
            temp_v10 = (float)puVar9[0x32];
            temp_v12 = (float)puVar9[0x33];
            temp_v9 = (float)VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
            pfVar7[4] = temp_v10 * temp_v2;
            pfVar7[5] = (temp_v12 * temp_v2 - temp_v10 * temp_v2) / temp_v9;
            temp_v9 = *pfVar7;
            temp_v2 = pfVar7[3] * temp_v17;
            FUN_002b7064();
            temp_v2 = temp_v2 * temp_v9;
            temp_v12 = pfVar7[4];
            temp_v10 = pfVar7[3] * temp_v17;
            FUN_002b70cc();
            temp_v10 = temp_v10 * temp_v9;
            DAT_004ea91c = temp_v2;
            DAT_004ea920 = temp_v12;
            DAT_004ea924 = temp_v10;
            DAT_004ea928 = temp_v11;
            if ((temp_v26 & 1) == 0) {
              DAT_004ea92c = (float)temp_v19;
              DAT_004ea938 = (float)((unsigned long long)temp_v19 >> 0x20);
              DAT_004ea930 = (float)temp_v20;
              DAT_004ea934 = (float)((unsigned long long)temp_v20 >> 0x20);
              DAT_004ea91c = temp_v2 * DAT_004ea95c + temp_v12 * DAT_004ea96c + temp_v10 * DAT_004ea97c +
                             DAT_004ea92c;
              DAT_004ea920 = temp_v2 * DAT_004ea960 + temp_v12 * DAT_004ea970 + temp_v10 * DAT_004ea980 +
                             DAT_004ea930;
              DAT_004ea924 = temp_v2 * DAT_004ea964 + temp_v12 * DAT_004ea974 + temp_v10 * DAT_004ea984 +
                             DAT_004ea934;
              temp_v10 = temp_v2 * DAT_004ea968 + temp_v12 * DAT_004ea978 + temp_v10 * DAT_004ea988 +
                       DAT_004ea938;
              DAT_004ea928 = temp_v10;
            }
            temp_v12 = DAT_004ea924;
            temp_v9 = DAT_004ea920;
            temp_v2 = DAT_004ea91c;
            pfVar6[3] = DAT_004ea928;
            *pfVar6 = temp_v2;
            pfVar6[1] = temp_v9;
            pfVar6[2] = temp_v12;
            FUN_0024b830(0);
            pfVar7[6] = ((float)temp_v21 - (float)puVar9[0x1b]) + temp_v10 * (float)puVar9[0x1b];
            if (temp_v28 != 2) {
              FUN_0024b830(0);
              temp_v2 = temp_v10 * (float)puVar9[0x26];
              if (temp_v28 != 1) {
                temp_v10 = 0.0f;
              }
              pfVar7[8] = ((float)temp_v21 - (float)puVar9[0x26]) + temp_v2;
              if (temp_v28 != 1) {
                pfVar7[7] = temp_v10;
              }
              else {
                FUN_0024b830(0);
                temp_v3 = 0;
                pfVar7[7] = temp_v10 * temp_v22;
                randomAdvanceShiftRegister();
                if ((temp_v3 & 1) != 0) {
                  pfVar7[8] = -pfVar7[8];
                }
              }
            }
            else {
              pfVar7[7] = 0.0f;
              pfVar7[8] = (float)temp_v21;
            }
            temp_v2 = (float)((unsigned long long)temp_v21 >> 0x20);
            temp_v25 = *pfVar6;
            fStack_7c = pfVar6[1];
            fStack_78 = pfVar6[2];
            fStack_74 = pfVar6[3];
            pfVar6[4] = 0.0f;
            if (temp_v1) {
              randomAdvanceShiftRegister(0);
              __aeabi_uidivmod();
              temp_v9 = (float)VectorUnsignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
              pfVar7[4] = pfVar7[4] - temp_v16 * temp_v9 * temp_v9 * temp_v2;
              temp_v12 = *pfVar7 + pfVar7[1] * temp_v9;
              *pfVar7 = temp_v12;
              temp_v10 = pfVar7[3] * temp_v17;
              FUN_002b7064();
              temp_v21 = CONCAT44(temp_v2,temp_v10 * temp_v12);
              temp_v10 = pfVar7[4];
              temp_v2 = pfVar7[3] * temp_v17;
              FUN_002b70cc();
              DAT_004ea924 = temp_v2 * temp_v12;
              DAT_004ea91c = (float)temp_v21;
              DAT_004ea920 = temp_v10;
              DAT_004ea928 = temp_v11;
              if ((temp_v26 & 1) == 0) {
                temp_v12 = DAT_004ea91c * DAT_004ea960;
                temp_v14 = DAT_004ea91c * DAT_004ea964;
                temp_v13 = DAT_004ea91c * DAT_004ea968;
                temp_v2 = DAT_004ea924 * DAT_004ea988;
                DAT_004ea92c = (float)temp_v19;
                DAT_004ea938 = (float)((unsigned long long)temp_v19 >> 0x20);
                DAT_004ea930 = (float)temp_v20;
                DAT_004ea934 = (float)((unsigned long long)temp_v20 >> 0x20);
                DAT_004ea91c = DAT_004ea91c * DAT_004ea95c + temp_v10 * DAT_004ea96c +
                               DAT_004ea924 * DAT_004ea97c + DAT_004ea92c;
                DAT_004ea920 = temp_v12 + temp_v10 * DAT_004ea970 + DAT_004ea924 * DAT_004ea980 +
                               DAT_004ea930;
                DAT_004ea924 = temp_v14 + temp_v10 * DAT_004ea974 + DAT_004ea924 * DAT_004ea984 +
                               DAT_004ea934;
                DAT_004ea928 = temp_v13 + temp_v10 * DAT_004ea978 + temp_v2 + DAT_004ea938;
              }
              temp_v12 = DAT_004ea924;
              temp_v10 = DAT_004ea920;
              temp_v2 = DAT_004ea91c;
              pfVar6[3] = DAT_004ea928;
              *pfVar6 = temp_v2;
              pfVar6[1] = temp_v10;
              pfVar6[2] = temp_v12;
              pfVar6[4] = (float)(int)temp_v9;
            }
            FUN_0024b660(pfVar6,puVar9,pfVar6[4],&temp_v25);
            pfVar6[6] = pfVar6[6] * pfVar7[6];
            temp_v2 = pfVar6[7];
            temp_v10 = pfVar7[8];
            pfVar6[7] = temp_v2 * temp_v10;
            in_s0 = temp_v2 * temp_v10 + pfVar7[7];
            pfVar6[7] = in_s0;
            if (temp_v1) {
              FUN_0024b5f0(param_1,pfVar6);
              temp_v4 = effGetFrameCounter();
              pfVar6[4] = (float)(temp_v4 + (int)pfVar6[4]);
            }
            temp_v24 = (float)((int)temp_v24 - 1);
          }
        }
        temp_v6 = temp_v6 + 1;
        pfVar7 = pfVar7 + 9;
        pfVar6 = pfVar6 + 10;
      } while (temp_v6 < temp_v8);
    }
  }
  return;
}

} /* extern "C" */
