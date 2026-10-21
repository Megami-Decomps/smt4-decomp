/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00300bb0` (_code @ 0x300bb0, 0x8ac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(...);
int FUN_0024add8(int, float *);
int FUN_0024b5f0(int, float *);
int FUN_0024b660(float *, float *, double, float *);
int randomAdvanceShiftRegister(void);
int FUN_0024b7bc(int, float *);
int FUN_0024b830(...);
int FUN_002a2c7c(void);
int FUN_002b70cc(void);
int VectorSignedToFloat(double, int);
int VectorUnsignedToFloat(...);

/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
} param_1_stack;

extern float DAT_004736c0; /* 0x4736c0 */
extern float DAT_004736c4; /* 0x4736c4 */
extern float DAT_004736c8; /* 0x4736c8 */
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
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Supplied declaration required: FUN_0024add8. */
/* Supplied declaration required: FUN_0024b5f0. */
/* Supplied declaration required: FUN_0024b660. */
/* Supplied declaration required: randomAdvanceShiftRegister. */
/* Supplied declaration required: FUN_0024b7bc. */
/* Supplied declaration required: FUN_0024b830. */
extern int effGetFrameCounter(void);
/* Supplied declaration required: FUN_002a2c7c. */
/* Supplied declaration required: FUN_002b70cc. */


void FUN_00300bb0(int param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 12 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  unsigned int temp_v4;
  float temp_v5;
  unsigned int temp_v6;
  unsigned int in_fpscr;
  float in_s0;
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
  unsigned int temp_v17;
  long long temp_v18;
  float temp_v19;
  unsigned long long temp_v20;
  long long temp_v21;
  unsigned long long temp_v22;
  unsigned long long temp_v23;
  float temp_v24;
  float temp_v25;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  int temp_v26;
  float temp_v27;
  unsigned int temp_v28;
  
  pfVar7 = *(float **)(param_1 + 0x20);
  temp_v6 = *(unsigned int *)(param_1 + 4);
  temp_v1 = *(unsigned int *)(param_1 + 0xc);
  pfVar5 = *(float **)(param_1 + 0x18);
  pfVar6 = *(float **)(param_1 + 0x1c);
  temp_v5 = pfVar7[0x2e];
  if (temp_v5 != 0.0f) {
    temp_v27 = pfVar7[8];
    DAT_004ea91c = pfVar7[4];
    DAT_004ea920 = pfVar7[5];
    DAT_004ea924 = pfVar7[6];
    DAT_004ea928 = pfVar7[7];
    temp_v28 = (unsigned int)*(unsigned char *)(pfVar7 + 0x27);
    temp_v15 = 0.0f;
    temp_v18 = (unsigned long long)(unsigned int)pfVar7[0x35] << 0x20;
    temp_v19 = pfVar7[0x3f];
    temp_v14 = pfVar7[0x3c];
    FUN_002a2c7c();
    if ((temp_v27 != 0.0f) && (*(int *)(param_1 + 0x10) >= (int)temp_v27)) {
      temp_v26 = 0;
      temp_v24 = 0.0f;
    }
    else {
      temp_v7 = 1.1f;
      if ((*(int *)(param_1 + 0x10) == 0) && (*(char *)((int)pfVar7 + 0xbd) != '\0')) {
        temp_v9 = pfVar7[10];
        temp_v26 = 1;
        temp_v4 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v9 < temp_v15) << 0x1f) |
                ((unsigned int)(temp_v9 == temp_v15) << 0x1e);
        in_fpscr = temp_v4 | ((unsigned int)((temp_v9 != temp_v9) || (temp_v15 != temp_v15)) << 0x1c);
        temp_v0 = (unsigned char)(temp_v4 >> 0x18);
        if ((unsigned char)((temp_v0 >> 6) & 1) || temp_v0 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
          in_s0 = *(float *)(param_1 + 4);
          temp_v24 = in_s0;
        }
        else {
          FUN_0024b830(0);
          temp_v13 = (float)VectorUnsignedToFloat
                                    (*(unsigned int *)(param_1 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
          in_s0 = (float)(int)(temp_v9 * (temp_v7 - pfVar7[10]) * temp_v13);
          temp_v24 = in_s0;
        }
      }
      else {
        temp_v9 = pfVar7[10];
        temp_v26 = 0;
        temp_v4 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v9 < temp_v15) << 0x1f) |
                ((unsigned int)(temp_v9 == temp_v15) << 0x1e);
        in_fpscr = temp_v4 | ((unsigned int)((temp_v9 != temp_v9) || (temp_v15 != temp_v15)) << 0x1c);
        temp_v0 = (unsigned char)(temp_v4 >> 0x18);
        if (!((unsigned char)((temp_v0 >> 6) & 1) || temp_v0 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1))) {
          FUN_0024b830();
          temp_v13 = (float)VectorUnsignedToFloat(pfVar7[9],(unsigned char)(in_fpscr >> 0x16) & 3);
          in_s0 = *(float *)(param_1 + 0x14) + temp_v13 * temp_v9 * (temp_v7 - pfVar7[10]);
          *(float *)(param_1 + 0x14) = in_s0;
        }
        else {
          in_s0 = (float)VectorUnsignedToFloat(pfVar7[9],(unsigned char)(in_fpscr >> 0x16) & 3);
          in_s0 = *(float *)(param_1 + 0x14) + in_s0;
          *(float *)(param_1 + 0x14) = in_s0;
        }
        temp_v24 = (float)(int)romwright_fabs_4(in_s0);
        temp_v7 = (float)VectorSignedToFloat(temp_v24,(unsigned char)(in_fpscr >> 0x16) & 3);
        in_s0 = in_s0 - temp_v7;
        *(float *)(param_1 + 0x14) = in_s0;
      }
    }
    temp_v4 = 0;
    if (temp_v6 != 0) {
      temp_v21 = (unsigned long long)(unsigned int)temp_v15 << 0x20;
      temp_v22 = 0x400000003f000000;
      temp_v23 = 0x40c90fdb;
      temp_v15 = 1.0f;
      temp_v20 = CONCAT44(0x4222f983,temp_v19);
      do {
        if ((int)temp_v5 <= (int)pfVar5[4]) {
          if (temp_v27 == 0.0f) {
            temp_v19 = -NAN;
          }
          else {
            temp_v19 = -NAN;
          }
          pfVar5[4] = temp_v19;
          FUN_0024b7bc(param_1,pfVar5);
        }
        temp_v7 = (float)((unsigned long long)temp_v21 >> 0x20);
        temp_v17 = (unsigned int)((unsigned long long)temp_v18 >> 0x20);
        temp_v19 = pfVar5[4];
        if (temp_v19 != -NAN) {
          if (temp_v19 != -NAN) {
            temp_v25 = *pfVar5;
            fStack_7c = pfVar5[1];
            fStack_78 = pfVar5[2];
            fStack_74 = pfVar5[3];
            temp_v7 = pfVar6[6] * (float)((unsigned long long)temp_v20 >> 0x20);
            FUN_002b70cc();
            temp_v9 = pfVar6[8] * (temp_v7 - pfVar6[7]);
            *pfVar5 = *pfVar5 + pfVar6[3] * temp_v9;
            pfVar5[1] = pfVar5[1] + pfVar6[4] * temp_v9;
            pfVar5[2] = pfVar5[2] + pfVar6[5] * temp_v9;
            temp_v9 = pfVar6[0xb] - (float)((unsigned long long)temp_v18 >> 0x20);
            pfVar6[0xb] = temp_v9;
            *pfVar5 = *pfVar5 + *pfVar6 * temp_v9;
            pfVar5[1] = pfVar5[1] + pfVar6[1] * temp_v9;
            pfVar5[2] = pfVar5[2] + pfVar6[2] * temp_v9;
            pfVar6[6] = pfVar6[6] + pfVar6[10];
            pfVar6[7] = temp_v7;
            pfVar6[8] = pfVar6[8] + pfVar6[9];
            temp_v7 = pfVar5[1];
            temp_v3 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v14 < temp_v7) << 0x1f) |
                    ((unsigned int)(temp_v14 == temp_v7) << 0x1e);
            in_fpscr = temp_v3 | ((unsigned int)((temp_v14 != temp_v14) || (temp_v7 != temp_v7)) << 0x1c);
            temp_v0 = (unsigned char)(temp_v3 >> 0x18);
            if (!(unsigned char)((temp_v0 >> 6) & 1) && temp_v0 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
              temp_v7 = pfVar6[0xc] * (float)temp_v20;
              pfVar6[0xc] = temp_v7;
              pfVar6[0xb] = pfVar6[0xb] * temp_v7;
              pfVar5[1] = temp_v14 + (pfVar5[1] - temp_v14) * temp_v7;
            }
            FUN_0024b660(pfVar5,pfVar7,temp_v19,&temp_v25);
            pfVar5[6] = pfVar5[6] * pfVar6[0xd];
            temp_v9 = pfVar5[7];
            temp_v7 = pfVar6[0xf];
            pfVar5[7] = temp_v9 * temp_v7;
            in_s0 = temp_v9 * temp_v7 + pfVar6[0xe];
            pfVar5[7] = in_s0;
            FUN_0024add8(param_1,pfVar5);
            temp_v2 = effGetFrameCounter();
            pfVar5[4] = (float)(temp_v2 + (int)temp_v19);
          }
          else if (temp_v24 != 0.0f) {
            if ((temp_v1 & 1) != 0) {
              pfVar6[1] = temp_v15;
              *pfVar6 = temp_v7;
              pfVar6[2] = temp_v7;
            }
            else {
              in_s0 = DAT_004736c0 * DAT_004ea95c + DAT_004736c4 * DAT_004ea96c +
                      DAT_004736c8 * DAT_004ea97c;
              DAT_004ea928 = DAT_004736c0 * DAT_004ea968 + DAT_004736c4 * DAT_004ea978 +
                             DAT_004736c8 * DAT_004ea988;
              temp_v19 = DAT_004736c0 * DAT_004ea960 + DAT_004736c4 * DAT_004ea970 +
                       DAT_004736c8 * DAT_004ea980;
              temp_v9 = DAT_004736c0 * DAT_004ea964 + DAT_004736c4 * DAT_004ea974 +
                       DAT_004736c8 * DAT_004ea984;
              DAT_004ea91c = in_s0;
              DAT_004ea920 = temp_v19;
              DAT_004ea924 = temp_v9;
              *pfVar6 = in_s0;
              pfVar6[1] = temp_v19;
              pfVar6[2] = temp_v9;
            }
            FUN_0024b830(0);
            temp_v19 = (float)temp_v22;
            temp_v13 = (float)((unsigned long long)temp_v22 >> 0x20);
            temp_v21 = CONCAT44(temp_v7,temp_v7);
            in_s0 = in_s0 - temp_v19;
            temp_v9 = in_s0 * temp_v13;
            FUN_0024b830(0);
            DAT_004ea924 = (in_s0 - temp_v19) * temp_v13;
            temp_v19 = romwright_sqrt_4(temp_v9 * temp_v9 + temp_v7 * temp_v7 + DAT_004ea924 * DAT_004ea924);
            temp_v3 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v19 < temp_v7) << 0x1f) |
                    ((unsigned int)(temp_v19 == temp_v7) << 0x1e);
            in_fpscr = temp_v3 | ((unsigned int)((temp_v19 != temp_v19) || (temp_v7 != temp_v7)) << 0x1c);
            temp_v0 = (unsigned char)(temp_v3 >> 0x18);
            DAT_004ea91c = temp_v9;
            DAT_004ea920 = temp_v7;
            if (!(unsigned char)((temp_v0 >> 6) & 1) && temp_v0 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
              DAT_004ea91c = temp_v9 / temp_v19;
              DAT_004ea920 = temp_v7 / temp_v19;
              DAT_004ea924 = DAT_004ea924 / temp_v19;
            }
            DAT_004ea928 = temp_v7;
            if ((temp_v1 & 1) == 0) {
              temp_v9 = DAT_004ea91c * DAT_004ea964;
              temp_v13 = DAT_004ea91c * DAT_004ea960;
              temp_v19 = DAT_004ea91c * DAT_004ea968;
              temp_v7 = DAT_004ea920 * DAT_004ea974;
              DAT_004ea91c = DAT_004ea91c * DAT_004ea95c + DAT_004ea920 * DAT_004ea96c +
                             DAT_004ea924 * DAT_004ea97c;
              DAT_004ea928 = temp_v19 + DAT_004ea920 * DAT_004ea978 + DAT_004ea924 * DAT_004ea988;
              temp_v19 = DAT_004ea920;
              DAT_004ea920 = temp_v13 + DAT_004ea920 * DAT_004ea970 + DAT_004ea924 * DAT_004ea980;
              DAT_004ea924 = temp_v9 + temp_v7 + DAT_004ea924 * DAT_004ea984;
            }
            temp_v8 = DAT_004ea928;
            temp_v13 = DAT_004ea924;
            temp_v9 = DAT_004ea920;
            temp_v7 = DAT_004ea91c;
            pfVar6[3] = DAT_004ea91c;
            pfVar6[4] = temp_v9;
            pfVar6[5] = temp_v13;
            FUN_0024b830(0);
            temp_v19 = ((temp_v15 - pfVar7[0x34]) + temp_v19 * pfVar7[0x34]) * pfVar7[0x33];
            pfVar6[0xb] = temp_v19;
            FUN_0024b830(0);
            temp_v19 = -(pfVar7[0x3d] * ((temp_v15 - pfVar7[0x3e]) + temp_v19 * pfVar7[0x3e]));
            pfVar6[0xc] = temp_v19;
            FUN_0024b830(0);
            temp_v16 = ((temp_v15 - pfVar7[0x37]) + temp_v19 * pfVar7[0x37]) * pfVar7[0x36];
            FUN_0024b830(0);
            temp_v10 = pfVar7[0x39];
            temp_v12 = pfVar7[0x38];
            pfVar6[8] = temp_v16;
            temp_v11 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v11 = (((temp_v15 - temp_v10) + temp_v19 * temp_v10) * temp_v12 - temp_v16) / temp_v11;
            pfVar6[9] = temp_v11;
            FUN_0024b830(0);
            temp_v19 = ((temp_v15 - pfVar7[0x3b]) + temp_v11 * pfVar7[0x3b]) * pfVar7[0x3a];
            pfVar6[10] = temp_v19;
            FUN_0024b830(0);
            temp_v18 = CONCAT44(temp_v17,(float)temp_v23);
            temp_v19 = temp_v19 * (float)temp_v23;
            pfVar6[6] = temp_v19;
            temp_v19 = temp_v19 * (float)((unsigned long long)temp_v20 >> 0x20);
            FUN_002b70cc();
            pfVar6[7] = temp_v19;
            FUN_0024b830(0);
            DAT_004ea92c = (temp_v19 - (float)temp_v22) * (float)((unsigned long long)temp_v22 >> 0x20) *
                           pfVar7[0x32];
            DAT_004ea938 = (float)temp_v21;
            if ((temp_v1 & 1) != 0) {
              DAT_004ea91c = temp_v7 * DAT_004ea92c;
              DAT_004ea920 = temp_v9 * DAT_004ea92c;
              DAT_004ea924 = temp_v13 * DAT_004ea92c;
              temp_v8 = temp_v8 * DAT_004ea938;
              DAT_004ea930 = DAT_004ea92c;
              DAT_004ea934 = DAT_004ea92c;
            }
            else {
              temp_v7 = temp_v7 * DAT_004ea92c;
              temp_v9 = temp_v9 * DAT_004ea92c;
              temp_v13 = temp_v13 * DAT_004ea92c;
              temp_v8 = temp_v8 * DAT_004ea938;
              DAT_004ea92c = *pfVar7;
              DAT_004ea930 = pfVar7[1];
              DAT_004ea934 = pfVar7[2];
              DAT_004ea938 = pfVar7[3];
              DAT_004ea91c = temp_v7 + DAT_004ea92c;
              DAT_004ea920 = temp_v9 + DAT_004ea930;
              DAT_004ea924 = temp_v13 + DAT_004ea934;
              temp_v8 = temp_v8 + DAT_004ea938;
            }
            temp_v9 = DAT_004ea924;
            temp_v7 = DAT_004ea920;
            temp_v19 = DAT_004ea91c;
            DAT_004ea928 = temp_v8;
            pfVar5[3] = temp_v8;
            *pfVar5 = temp_v19;
            pfVar5[1] = temp_v7;
            pfVar5[2] = temp_v9;
            FUN_0024b830(0);
            pfVar6[0xd] = (temp_v15 - pfVar7[0x1b]) + temp_v8 * pfVar7[0x1b];
            if (temp_v28 == 2) {
              pfVar6[0xe] = (float)temp_v21;
              pfVar6[0xf] = temp_v15;
            }
            else {
              FUN_0024b830(0);
              pfVar6[0xf] = (temp_v15 - pfVar7[0x26]) + temp_v8 * pfVar7[0x26];
              if (temp_v28 != 1) {
                pfVar6[0xe] = (float)temp_v21;
              }
              else {
                FUN_0024b830(0);
                temp_v3 = 0;
                pfVar6[0xe] = temp_v8 * (float)temp_v18;
                randomAdvanceShiftRegister();
                if ((temp_v3 & 1) != 0) {
                  pfVar6[0xf] = -pfVar6[0xf];
                }
              }
            }
            pfVar5[4] = 0.0f;
            temp_v25 = *pfVar5;
            fStack_7c = pfVar5[1];
            fStack_78 = pfVar5[2];
            fStack_74 = pfVar5[3];
            FUN_0024b660(pfVar5,pfVar7,pfVar5[4],&temp_v25);
            pfVar5[6] = pfVar5[6] * pfVar6[0xd];
            temp_v19 = pfVar5[7];
            temp_v7 = pfVar6[0xf];
            pfVar5[7] = temp_v19 * temp_v7;
            in_s0 = temp_v19 * temp_v7 + pfVar6[0xe];
            pfVar5[7] = in_s0;
            if (temp_v26 != 0) {
              FUN_0024b5f0(param_1,pfVar5);
              temp_v2 = effGetFrameCounter();
              pfVar5[4] = (float)(temp_v2 + (int)pfVar5[4]);
            }
            temp_v24 = (float)((int)temp_v24 - 1);
          }
        }
        temp_v4 = temp_v4 + 1;
        pfVar6 = pfVar6 + 0x10;
        pfVar5 = pfVar5 + 10;
      } while (temp_v4 < temp_v6);
    }
  }
  return;
}

} /* extern "C" */
