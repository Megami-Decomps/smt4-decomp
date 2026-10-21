/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030c078` (_code @ 0x30c078, 0x878 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0024add8(int, float *);
int FUN_0024b5f0(int, float *);
int FUN_0024b660(float *, float *, double, float *);
int randomAdvanceShiftRegister(...);
int FUN_0024b7bc(int, float *);
int FUN_0024b830(...);
int FUN_002a2c7c(void);
int phaseCosInterpolate(void);
int FUN_002b70cc(void);
int VectorSignedToFloat(double, int);
int VectorUnsignedToFloat(...);
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
/* Supplied declaration required: randomAdvanceShiftRegister. */
/* Supplied declaration required: FUN_0024b7bc. */
/* Supplied declaration required: FUN_0024b830. */
extern int effGetFrameCounter(void);
/* Supplied declaration required: FUN_002a2c7c. */
/* Supplied declaration required: phaseCosInterpolate. */
/* Supplied declaration required: FUN_002b70cc. */
/* Supplied declaration required: __aeabi_uidivmod. */


void FUN_0030c078(int param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 14 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  float temp_v2;
  int temp_v3;
  float *pfVar5;
  unsigned int temp_v4;
  unsigned int temp_v5;
  float *pfVar7;
  float *pfVar8;
  unsigned int temp_v6;
  float *pfVar10;
  unsigned int temp_v7;
  float temp_v8;
  float temp_v9;
  unsigned int in_fpscr;
  unsigned int temp_v10;
  float in_s0;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  unsigned long long temp_v14;
  float temp_v15;
  float temp_v16;
  unsigned long long temp_v17;
  unsigned long long temp_v18;
  unsigned long long temp_v19;
  unsigned long long temp_v20;
  float temp_v21;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  unsigned int temp_v22;
  unsigned int temp_v23;
  float temp_v24;
  
  pfVar10 = *(float **)(param_1 + 0x20);
  temp_v7 = *(unsigned int *)(param_1 + 4);
  temp_v22 = *(unsigned int *)(param_1 + 0xc);
  pfVar7 = *(float **)(param_1 + 0x18);
  pfVar8 = *(float **)(param_1 + 0x1c);
  temp_v24 = pfVar10[0x2e];
  if (temp_v24 != 0.0f) {
    temp_v15 = 0.0f;
    DAT_004ea91c = pfVar10[4];
    DAT_004ea920 = pfVar10[5];
    DAT_004ea924 = pfVar10[6];
    DAT_004ea928 = pfVar10[7];
    temp_v9 = pfVar10[8];
    temp_v23 = (unsigned int)*(unsigned char *)(pfVar10 + 0x27);
    temp_v14 = romwright_piece_4_4(pfVar10[0x38],pfVar10[0x39]);
    temp_v16 = temp_v15;
    FUN_002a2c7c();
    if ((temp_v9 != 0.0f) && (*(int *)(param_1 + 0x10) >= (int)temp_v9)) {
      temp_v8 = 0.0f;
      temp_v1 = 0;
    }
    else {
      temp_v8 = 1.1f;
      if ((*(int *)(param_1 + 0x10) == 0) && (*(char *)((int)pfVar10 + 0xbd) != '\0')) {
        in_s0 = pfVar10[10];
        temp_v1 = 1;
        temp_v6 = (in_fpscr & 0xfffffff) | ((unsigned int)(in_s0 < temp_v16) << 0x1f) |
                ((unsigned int)(in_s0 == temp_v16) << 0x1e);
        in_fpscr = temp_v6 | ((unsigned int)((in_s0 != in_s0) || (temp_v16 != temp_v16)) << 0x1c);
        temp_v0 = (unsigned char)(temp_v6 >> 0x18);
        if ((unsigned char)((temp_v0 >> 6) & 1) || temp_v0 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
          temp_v8 = *(float *)(param_1 + 4);
        }
        else {
          FUN_0024b830(0);
          temp_v2 = (float)VectorUnsignedToFloat
                                   (*(unsigned int *)(param_1 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v8 = (float)(int)(in_s0 * (temp_v8 - pfVar10[10]) * temp_v2);
          in_s0 = temp_v8;
        }
      }
      else {
        temp_v2 = pfVar10[10];
        temp_v1 = 0;
        temp_v6 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v2 < temp_v16) << 0x1f) |
                ((unsigned int)(temp_v2 == temp_v16) << 0x1e);
        in_fpscr = temp_v6 | ((unsigned int)((temp_v2 != temp_v2) || (temp_v16 != temp_v16)) << 0x1c);
        temp_v0 = (unsigned char)(temp_v6 >> 0x18);
        if (!((unsigned char)((temp_v0 >> 6) & 1) || temp_v0 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1))) {
          FUN_0024b830();
          temp_v13 = (float)VectorUnsignedToFloat(pfVar10[9],(unsigned char)(in_fpscr >> 0x16) & 3);
          in_s0 = *(float *)(param_1 + 0x14) + temp_v13 * temp_v2 * (temp_v8 - pfVar10[10]);
          *(float *)(param_1 + 0x14) = in_s0;
        }
        else {
          in_s0 = (float)VectorUnsignedToFloat(pfVar10[9],(unsigned char)(in_fpscr >> 0x16) & 3);
          in_s0 = *(float *)(param_1 + 0x14) + in_s0;
          *(float *)(param_1 + 0x14) = in_s0;
        }
        temp_v8 = (float)(int)romwright_fabs_4(in_s0);
        temp_v2 = (float)VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
        in_s0 = in_s0 - temp_v2;
        *(float *)(param_1 + 0x14) = in_s0;
      }
    }
    temp_v6 = 0;
    if (temp_v7 != 0) {
      temp_v19 = 0x3fc90fdb3c8efa35;
      temp_v18 = 0x400000004222f983;
      temp_v20 = 0x40c90fdb;
      temp_v17 = 0x3f0000003f800000;
      do {
        if ((int)temp_v24 <= (int)pfVar7[4]) {
          if (temp_v9 == 0.0f) {
            temp_v2 = -NAN;
          }
          else {
            temp_v2 = -NAN;
          }
          pfVar7[4] = temp_v2;
          FUN_0024b7bc(param_1,pfVar7);
        }
        temp_v2 = pfVar7[4];
        if (temp_v2 != -NAN) {
          if (temp_v2 != -NAN) {
            temp_v21 = *pfVar7;
            fStack_7c = pfVar7[1];
            fStack_78 = pfVar7[2];
            fStack_74 = pfVar7[3];
            temp_v13 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
            DAT_004ea92c = *pfVar7;
            DAT_004ea930 = pfVar7[1];
            DAT_004ea934 = pfVar7[2];
            DAT_004ea938 = pfVar7[3];
            temp_v13 = pfVar8[3] + (float)((unsigned long long)temp_v14 >> 0x20) * temp_v13;
            temp_v4 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v16 < temp_v13) << 0x1f) |
                    ((unsigned int)(temp_v16 == temp_v13) << 0x1e);
            in_fpscr = temp_v4 | ((unsigned int)((temp_v16 != temp_v16) || (temp_v13 != temp_v13)) << 0x1c);
            temp_v0 = (unsigned char)(temp_v4 >> 0x18);
            if (!(unsigned char)((temp_v0 >> 6) & 1) && temp_v0 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
              temp_v13 = temp_v16;
            }
            temp_v12 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
            DAT_004ea91c = *pfVar8 * temp_v13 + DAT_004ea92c;
            temp_v12 = (pfVar8[1] * temp_v13 - (float)temp_v14 * temp_v12) + DAT_004ea930;
            temp_v13 = pfVar8[2] * temp_v13 + DAT_004ea934;
            temp_v11 = temp_v15 + DAT_004ea938;
            DAT_004ea920 = temp_v12;
            DAT_004ea924 = temp_v13;
            DAT_004ea928 = temp_v11;
            *pfVar7 = DAT_004ea91c;
            pfVar7[1] = temp_v12;
            pfVar7[2] = temp_v13;
            pfVar7[3] = temp_v11;
            FUN_0024b660(pfVar7,pfVar10,temp_v2,&temp_v21);
            pfVar7[6] = pfVar7[6] * pfVar8[4];
            temp_v12 = pfVar7[7];
            temp_v13 = pfVar8[6];
            pfVar7[7] = temp_v12 * temp_v13;
            in_s0 = temp_v12 * temp_v13 + pfVar8[5];
            pfVar7[7] = in_s0;
            FUN_0024add8(param_1,pfVar7);
            temp_v3 = effGetFrameCounter();
            pfVar7[4] = (float)(temp_v3 + (int)temp_v2);
          }
          else if (temp_v8 != 0.0f) {
            FUN_0024b830(0);
            temp_v12 = (float)((unsigned long long)temp_v17 >> 0x20);
            temp_v13 = (float)VectorSignedToFloat(pfVar10[0x3a],(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v2 = (float)temp_v19;
            temp_v13 = (in_s0 - temp_v12) * (float)((unsigned long long)temp_v18 >> 0x20) * temp_v13 * temp_v12 * temp_v2
                     - (float)((unsigned long long)temp_v19 >> 0x20);
            FUN_0024b830(0);
            temp_v13 = temp_v13 * (float)temp_v18;
            temp_v12 = (((float)temp_v17 - pfVar10[0x35]) + temp_v2 * pfVar10[0x35]) * pfVar10[0x34];
            temp_v2 = temp_v13;
            phaseCosInterpolate();
            temp_v11 = temp_v12 - (float)temp_v17;
            temp_v13 = temp_v13 * temp_v12;
            FUN_002b70cc();
            DAT_004ea924 = temp_v2 * temp_v12;
            temp_v2 = romwright_sqrt_4(temp_v13 * temp_v13 + temp_v11 * temp_v11 + DAT_004ea924 * DAT_004ea924);
            temp_v4 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v2 < temp_v16) << 0x1f) |
                    ((unsigned int)(temp_v2 == temp_v16) << 0x1e);
            temp_v10 = temp_v4 | ((unsigned int)((temp_v2 != temp_v2) || (temp_v16 != temp_v16)) << 0x1c);
            temp_v0 = (unsigned char)(temp_v4 >> 0x18);
            DAT_004ea91c = temp_v13;
            DAT_004ea920 = temp_v11;
            if (!(unsigned char)((temp_v0 >> 6) & 1) && temp_v0 >> 7 == ((unsigned char)(temp_v10 >> 0x1c) & 1)) {
              DAT_004ea91c = temp_v13 / temp_v2;
              DAT_004ea920 = temp_v11 / temp_v2;
              DAT_004ea924 = DAT_004ea924 / temp_v2;
            }
            DAT_004ea928 = temp_v15;
            if ((temp_v22 & 1) == 0) {
              temp_v13 = DAT_004ea91c * DAT_004ea960;
              temp_v12 = DAT_004ea91c * DAT_004ea964;
              temp_v2 = DAT_004ea91c * DAT_004ea968;
              temp_v15 = DAT_004ea920 * DAT_004ea974;
              DAT_004ea91c = DAT_004ea91c * DAT_004ea95c + DAT_004ea920 * DAT_004ea96c +
                             DAT_004ea924 * DAT_004ea97c;
              DAT_004ea928 = temp_v2 + DAT_004ea920 * DAT_004ea978 + DAT_004ea924 * DAT_004ea988;
              temp_v2 = DAT_004ea920;
              DAT_004ea920 = temp_v13 + DAT_004ea920 * DAT_004ea970 + DAT_004ea924 * DAT_004ea980;
              DAT_004ea924 = temp_v12 + temp_v15 + DAT_004ea924 * DAT_004ea984;
            }
            temp_v15 = DAT_004ea928;
            temp_v11 = DAT_004ea924;
            temp_v12 = DAT_004ea920;
            temp_v13 = DAT_004ea91c;
            *pfVar8 = DAT_004ea91c;
            pfVar8[1] = temp_v12;
            pfVar8[2] = temp_v11;
            FUN_0024b830(0);
            temp_v2 = romwright_fabs_4((((float)temp_v17 - pfVar10[0x37]) + temp_v2 * pfVar10[0x37]) * pfVar10[0x36]);
            pfVar8[3] = temp_v2;
            FUN_0024b830(0);
            in_fpscr = (temp_v10 & 0xfffffff) | ((unsigned int)(temp_v16 <= pfVar10[0x36]) << 0x1d);
            DAT_004ea92c = (((float)temp_v17 - pfVar10[0x33]) + temp_v2 * pfVar10[0x33]) * pfVar10[0x32]
            ;
            DAT_004ea91c = temp_v13;
            DAT_004ea920 = temp_v12;
            DAT_004ea924 = temp_v11;
            if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
              DAT_004ea91c = -temp_v13;
              DAT_004ea924 = -temp_v11;
              DAT_004ea920 = -temp_v12;
            }
            if ((temp_v22 & 1) != 0) {
              DAT_004ea91c = DAT_004ea91c * DAT_004ea92c;
              DAT_004ea920 = DAT_004ea920 * DAT_004ea92c;
              DAT_004ea924 = DAT_004ea924 * DAT_004ea92c;
              temp_v2 = temp_v15 * temp_v16;
              DAT_004ea930 = DAT_004ea92c;
              DAT_004ea934 = DAT_004ea92c;
              DAT_004ea938 = temp_v16;
            }
            else {
              DAT_004ea91c = DAT_004ea91c * DAT_004ea92c;
              DAT_004ea920 = DAT_004ea920 * DAT_004ea92c;
              DAT_004ea924 = DAT_004ea924 * DAT_004ea92c;
              DAT_004ea92c = *pfVar10;
              DAT_004ea930 = pfVar10[1];
              DAT_004ea934 = pfVar10[2];
              DAT_004ea938 = pfVar10[3];
              DAT_004ea91c = DAT_004ea91c + DAT_004ea92c;
              DAT_004ea920 = DAT_004ea920 + DAT_004ea930;
              DAT_004ea924 = DAT_004ea924 + DAT_004ea934;
              temp_v2 = temp_v15 * temp_v16 + DAT_004ea938;
            }
            temp_v11 = DAT_004ea924;
            temp_v12 = DAT_004ea920;
            temp_v13 = DAT_004ea91c;
            DAT_004ea928 = temp_v2;
            pfVar7[3] = temp_v2;
            *pfVar7 = temp_v13;
            pfVar7[1] = temp_v12;
            pfVar7[2] = temp_v11;
            pfVar5 = (float *)0x0;
            temp_v13 = temp_v16;
            FUN_0024b830();
            if (temp_v23 == 2) {
              pfVar5 = pfVar8 + 5;
            }
            pfVar8[4] = ((float)temp_v17 - pfVar10[0x1b]) + temp_v2 * pfVar10[0x1b];
            if (temp_v23 == 2) {
              *pfVar5 = temp_v13;
              pfVar5[1] = (float)temp_v17;
            }
            else {
              FUN_0024b830(0);
              pfVar8[6] = ((float)temp_v17 - pfVar10[0x26]) + temp_v2 * pfVar10[0x26];
              if (temp_v23 != 1) {
                pfVar8[5] = temp_v13;
              }
              else {
                FUN_0024b830(0);
                temp_v4 = 0;
                pfVar8[5] = temp_v2 * (float)temp_v20;
                randomAdvanceShiftRegister();
                if ((temp_v4 & 1) != 0) {
                  pfVar8[6] = -pfVar8[6];
                }
              }
            }
            temp_v21 = *pfVar7;
            fStack_7c = pfVar7[1];
            fStack_78 = pfVar7[2];
            fStack_74 = pfVar7[3];
            pfVar7[4] = 0.0f;
            if (temp_v1) {
              randomAdvanceShiftRegister(0);
              __aeabi_uidivmod();
              DAT_004ea92c = *pfVar7;
              DAT_004ea930 = pfVar7[1];
              DAT_004ea934 = pfVar7[2];
              DAT_004ea938 = pfVar7[3];
              temp_v12 = (float)VectorUnsignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v11 = (float)((unsigned long long)temp_v17 >> 0x20);
              temp_v2 = pfVar8[3] * temp_v12 +
                      (float)((unsigned long long)temp_v14 >> 0x20) * temp_v12 * temp_v12 * temp_v11;
              in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v13 <= temp_v2) << 0x1d);
              if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
                temp_v2 = temp_v13;
              }
              temp_v13 = *pfVar8 * temp_v2 + DAT_004ea92c;
              temp_v11 = (pfVar8[1] * temp_v2 - (float)temp_v14 * temp_v12 * temp_v12 * temp_v11) + DAT_004ea930
              ;
              temp_v2 = pfVar8[2] * temp_v2 + DAT_004ea934;
              DAT_004ea928 = temp_v15 + DAT_004ea938;
              DAT_004ea91c = temp_v13;
              DAT_004ea920 = temp_v11;
              DAT_004ea924 = temp_v2;
              pfVar7[3] = DAT_004ea928;
              *pfVar7 = temp_v13;
              pfVar7[1] = temp_v11;
              pfVar7[2] = temp_v2;
              pfVar7[4] = (float)(int)temp_v12;
            }
            FUN_0024b660(pfVar7,pfVar10,pfVar7[4],&temp_v21);
            pfVar7[6] = pfVar7[6] * pfVar8[4];
            temp_v2 = pfVar7[7];
            temp_v13 = pfVar8[6];
            pfVar7[7] = temp_v2 * temp_v13;
            in_s0 = temp_v2 * temp_v13 + pfVar8[5];
            pfVar7[7] = in_s0;
            if (temp_v1) {
              FUN_0024b5f0(param_1,pfVar7);
              temp_v3 = effGetFrameCounter();
              pfVar7[4] = (float)(temp_v3 + (int)pfVar7[4]);
            }
            temp_v8 = (float)((int)temp_v8 - 1);
          }
        }
        temp_v6 = temp_v6 + 1;
        pfVar8 = pfVar8 + 7;
        pfVar7 = pfVar7 + 10;
      } while (temp_v6 < temp_v7);
    }
  }
  return;
}

} /* extern "C" */
