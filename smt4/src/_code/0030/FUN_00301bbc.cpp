/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00301bbc` (_code @ 0x301bbc, 0x854 bytes) from smt4_v1.2.0.cxi.
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
int VectorSignedToFloat(double, int);
int VectorUnsignedToFloat(...);
int __aeabi_uidivmod(void);

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
/* Supplied declaration required: __aeabi_uidivmod. */


void FUN_00301bbc(int param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 12 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  float temp_v2;
  float temp_v3;
  int temp_v4;
  float *pfVar6;
  unsigned int temp_v5;
  unsigned int temp_v6;
  float *pfVar8;
  float *pfVar9;
  unsigned int temp_v7;
  float *pfVar11;
  unsigned int temp_v8;
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
  float temp_v19;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  unsigned int temp_v20;
  unsigned int temp_v21;
  float temp_v22;
  
  pfVar11 = *(float **)(param_1 + 0x20);
  temp_v8 = *(unsigned int *)(param_1 + 4);
  temp_v20 = *(unsigned int *)(param_1 + 0xc);
  pfVar8 = *(float **)(param_1 + 0x18);
  pfVar9 = *(float **)(param_1 + 0x1c);
  temp_v22 = pfVar11[0x2e];
  if (temp_v22 != 0.0f) {
    temp_v2 = pfVar11[8];
    DAT_004ea91c = pfVar11[4];
    DAT_004ea920 = pfVar11[5];
    DAT_004ea924 = pfVar11[6];
    DAT_004ea928 = pfVar11[7];
    temp_v21 = (unsigned int)*(unsigned char *)(pfVar11 + 0x27);
    temp_v15 = 0.0f;
    temp_v14 = romwright_piece_4_4(pfVar11[0x38],pfVar11[0x39]);
    temp_v16 = temp_v15;
    FUN_002a2c7c();
    if ((temp_v2 != 0.0f) && (*(int *)(param_1 + 0x10) >= (int)temp_v2)) {
      temp_v9 = 0.0f;
      temp_v1 = 0;
    }
    else {
      temp_v9 = 1.1f;
      if ((*(int *)(param_1 + 0x10) == 0) && (*(char *)((int)pfVar11 + 0xbd) != '\0')) {
        in_s0 = pfVar11[10];
        temp_v1 = 1;
        temp_v7 = (in_fpscr & 0xfffffff) | ((unsigned int)(in_s0 < temp_v16) << 0x1f) |
                 ((unsigned int)(in_s0 == temp_v16) << 0x1e);
        in_fpscr = temp_v7 | ((unsigned int)((in_s0 != in_s0) || (temp_v16 != temp_v16)) << 0x1c);
        temp_v0 = (unsigned char)(temp_v7 >> 0x18);
        if ((unsigned char)((temp_v0 >> 6) & 1) || temp_v0 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
          temp_v9 = *(float *)(param_1 + 4);
        }
        else {
          FUN_0024b830(0);
          temp_v3 = (float)VectorUnsignedToFloat
                                   (*(unsigned int *)(param_1 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v9 = (float)(int)(in_s0 * (temp_v9 - pfVar11[10]) * temp_v3);
          in_s0 = temp_v9;
        }
      }
      else {
        temp_v3 = pfVar11[10];
        temp_v1 = 0;
        temp_v7 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v3 < temp_v16) << 0x1f) |
                 ((unsigned int)(temp_v3 == temp_v16) << 0x1e);
        in_fpscr = temp_v7 | ((unsigned int)((temp_v3 != temp_v3) || (temp_v16 != temp_v16)) << 0x1c);
        temp_v0 = (unsigned char)(temp_v7 >> 0x18);
        if (!((unsigned char)((temp_v0 >> 6) & 1) || temp_v0 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1))) {
          FUN_0024b830();
          temp_v13 = (float)VectorUnsignedToFloat(pfVar11[9],(unsigned char)(in_fpscr >> 0x16) & 3);
          in_s0 = *(float *)(param_1 + 0x14) + temp_v13 * temp_v3 * (temp_v9 - pfVar11[10]);
          *(float *)(param_1 + 0x14) = in_s0;
        }
        else {
          in_s0 = (float)VectorUnsignedToFloat(pfVar11[9],(unsigned char)(in_fpscr >> 0x16) & 3);
          in_s0 = *(float *)(param_1 + 0x14) + in_s0;
          *(float *)(param_1 + 0x14) = in_s0;
        }
        temp_v9 = (float)(int)romwright_fabs_4(in_s0);
        temp_v3 = (float)VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
        in_s0 = in_s0 - temp_v3;
        *(float *)(param_1 + 0x14) = in_s0;
      }
    }
    temp_v7 = 0;
    if (temp_v8 != 0) {
      temp_v18 = 0x40c90fdb40000000;
      temp_v17 = 0x3f0000003f800000;
      do {
        if ((int)temp_v22 <= (int)pfVar8[4]) {
          if (temp_v2 == 0.0f) {
            temp_v3 = -NAN;
          }
          else {
            temp_v3 = -NAN;
          }
          pfVar8[4] = temp_v3;
          FUN_0024b7bc(param_1,pfVar8);
        }
        temp_v3 = pfVar8[4];
        if (temp_v3 != -NAN) {
          if (temp_v3 != -NAN) {
            temp_v19 = *pfVar8;
            fStack_6c = pfVar8[1];
            fStack_68 = pfVar8[2];
            fStack_64 = pfVar8[3];
            temp_v13 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
            DAT_004ea92c = *pfVar8;
            DAT_004ea930 = pfVar8[1];
            DAT_004ea934 = pfVar8[2];
            DAT_004ea938 = pfVar8[3];
            temp_v13 = pfVar9[3] + (float)((unsigned long long)temp_v14 >> 0x20) * temp_v13;
            temp_v5 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v16 < temp_v13) << 0x1f) |
                    ((unsigned int)(temp_v16 == temp_v13) << 0x1e);
            in_fpscr = temp_v5 | ((unsigned int)((temp_v16 != temp_v16) || (temp_v13 != temp_v13)) << 0x1c);
            temp_v0 = (unsigned char)(temp_v5 >> 0x18);
            if (!(unsigned char)((temp_v0 >> 6) & 1) && temp_v0 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
              temp_v13 = temp_v16;
            }
            temp_v12 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
            DAT_004ea91c = *pfVar9 * temp_v13 + DAT_004ea92c;
            temp_v12 = (pfVar9[1] * temp_v13 - (float)temp_v14 * temp_v12) + DAT_004ea930;
            temp_v13 = pfVar9[2] * temp_v13 + DAT_004ea934;
            temp_v11 = temp_v15 + DAT_004ea938;
            DAT_004ea920 = temp_v12;
            DAT_004ea924 = temp_v13;
            DAT_004ea928 = temp_v11;
            *pfVar8 = DAT_004ea91c;
            pfVar8[1] = temp_v12;
            pfVar8[2] = temp_v13;
            pfVar8[3] = temp_v11;
            FUN_0024b660(pfVar8,pfVar11,temp_v3,&temp_v19);
            pfVar8[6] = pfVar8[6] * pfVar9[4];
            temp_v13 = pfVar8[7];
            temp_v12 = pfVar9[6];
            pfVar8[7] = temp_v13 * temp_v12;
            in_s0 = temp_v13 * temp_v12 + pfVar9[5];
            pfVar8[7] = in_s0;
            FUN_0024add8(param_1,pfVar8);
            temp_v4 = effGetFrameCounter();
            pfVar8[4] = (float)(temp_v4 + (int)temp_v3);
          }
          else if (temp_v9 != 0.0f) {
            FUN_0024b830(0);
            temp_v13 = (((float)temp_v17 - pfVar11[0x35]) + in_s0 * pfVar11[0x35]) * pfVar11[0x34];
            FUN_0024b830(0);
            temp_v12 = (float)temp_v17 - temp_v13;
            temp_v3 = (in_s0 - (float)((unsigned long long)temp_v17 >> 0x20)) * (float)temp_v18;
            temp_v11 = temp_v3 * temp_v13;
            FUN_0024b830(0);
            DAT_004ea924 = (temp_v3 - (float)((unsigned long long)temp_v17 >> 0x20)) * (float)temp_v18 * temp_v13;
            temp_v3 = romwright_sqrt_4(temp_v11 * temp_v11 + temp_v12 * temp_v12 + DAT_004ea924 * DAT_004ea924);
            temp_v5 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v3 < temp_v16) << 0x1f) |
                    ((unsigned int)(temp_v3 == temp_v16) << 0x1e);
            temp_v10 = temp_v5 | ((unsigned int)((temp_v3 != temp_v3) || (temp_v16 != temp_v16)) << 0x1c);
            temp_v0 = (unsigned char)(temp_v5 >> 0x18);
            DAT_004ea91c = temp_v11;
            DAT_004ea920 = temp_v12;
            if (!(unsigned char)((temp_v0 >> 6) & 1) && temp_v0 >> 7 == ((unsigned char)(temp_v10 >> 0x1c) & 1)) {
              DAT_004ea91c = temp_v11 / temp_v3;
              DAT_004ea920 = temp_v12 / temp_v3;
              DAT_004ea924 = DAT_004ea924 / temp_v3;
            }
            DAT_004ea928 = temp_v15;
            if ((temp_v20 & 1) == 0) {
              temp_v13 = DAT_004ea91c * DAT_004ea960;
              temp_v12 = DAT_004ea91c * DAT_004ea964;
              temp_v3 = DAT_004ea91c * DAT_004ea968;
              temp_v15 = DAT_004ea920 * DAT_004ea974;
              DAT_004ea91c = DAT_004ea91c * DAT_004ea95c + DAT_004ea920 * DAT_004ea96c +
                             DAT_004ea924 * DAT_004ea97c;
              DAT_004ea928 = temp_v3 + DAT_004ea920 * DAT_004ea978 + DAT_004ea924 * DAT_004ea988;
              temp_v3 = DAT_004ea920;
              DAT_004ea920 = temp_v13 + DAT_004ea920 * DAT_004ea970 + DAT_004ea924 * DAT_004ea980;
              DAT_004ea924 = temp_v12 + temp_v15 + DAT_004ea924 * DAT_004ea984;
            }
            temp_v15 = DAT_004ea928;
            temp_v11 = DAT_004ea924;
            temp_v12 = DAT_004ea920;
            temp_v13 = DAT_004ea91c;
            *pfVar9 = DAT_004ea91c;
            pfVar9[1] = temp_v12;
            pfVar9[2] = temp_v11;
            FUN_0024b830(0);
            temp_v3 = romwright_fabs_4((((float)temp_v17 - pfVar11[0x37]) + temp_v3 * pfVar11[0x37]) * pfVar11[0x36]);
            pfVar9[3] = temp_v3;
            FUN_0024b830(0);
            in_fpscr = (temp_v10 & 0xfffffff) | ((unsigned int)(temp_v16 <= pfVar11[0x36]) << 0x1d);
            DAT_004ea92c = (((float)temp_v17 - pfVar11[0x33]) + temp_v3 * pfVar11[0x33]) * pfVar11[0x32]
            ;
            DAT_004ea91c = temp_v13;
            DAT_004ea920 = temp_v12;
            DAT_004ea924 = temp_v11;
            if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
              DAT_004ea91c = -temp_v13;
              DAT_004ea920 = -temp_v12;
              DAT_004ea924 = -temp_v11;
            }
            if ((temp_v20 & 1) != 0) {
              DAT_004ea91c = DAT_004ea91c * DAT_004ea92c;
              DAT_004ea920 = DAT_004ea920 * DAT_004ea92c;
              DAT_004ea924 = DAT_004ea924 * DAT_004ea92c;
              temp_v3 = temp_v15 * temp_v16;
              DAT_004ea930 = DAT_004ea92c;
              DAT_004ea934 = DAT_004ea92c;
              DAT_004ea938 = temp_v16;
            }
            else {
              DAT_004ea91c = DAT_004ea91c * DAT_004ea92c;
              DAT_004ea920 = DAT_004ea920 * DAT_004ea92c;
              DAT_004ea924 = DAT_004ea924 * DAT_004ea92c;
              DAT_004ea92c = *pfVar11;
              DAT_004ea930 = pfVar11[1];
              DAT_004ea934 = pfVar11[2];
              DAT_004ea938 = pfVar11[3];
              DAT_004ea91c = DAT_004ea91c + DAT_004ea92c;
              DAT_004ea920 = DAT_004ea920 + DAT_004ea930;
              DAT_004ea924 = DAT_004ea924 + DAT_004ea934;
              temp_v3 = temp_v15 * temp_v16 + DAT_004ea938;
            }
            temp_v11 = DAT_004ea924;
            temp_v12 = DAT_004ea920;
            temp_v13 = DAT_004ea91c;
            DAT_004ea928 = temp_v3;
            pfVar8[3] = temp_v3;
            *pfVar8 = temp_v13;
            pfVar8[1] = temp_v12;
            pfVar8[2] = temp_v11;
            pfVar6 = (float *)0x0;
            temp_v13 = temp_v16;
            FUN_0024b830();
            if (temp_v21 == 2) {
              pfVar6 = pfVar9 + 5;
            }
            pfVar9[4] = ((float)temp_v17 - pfVar11[0x1b]) + temp_v3 * pfVar11[0x1b];
            if (temp_v21 == 2) {
              *pfVar6 = temp_v13;
              pfVar6[1] = (float)temp_v17;
            }
            else {
              FUN_0024b830(0);
              pfVar9[6] = ((float)temp_v17 - pfVar11[0x26]) + temp_v3 * pfVar11[0x26];
              if (temp_v21 != 1) {
                pfVar9[5] = temp_v13;
              }
              else {
                FUN_0024b830(0);
                temp_v5 = 0;
                pfVar9[5] = temp_v3 * (float)((unsigned long long)temp_v18 >> 0x20);
                randomAdvanceShiftRegister();
                if ((temp_v5 & 1) != 0) {
                  pfVar9[6] = -pfVar9[6];
                }
              }
            }
            temp_v19 = *pfVar8;
            fStack_6c = pfVar8[1];
            fStack_68 = pfVar8[2];
            fStack_64 = pfVar8[3];
            pfVar8[4] = 0.0f;
            if (temp_v1) {
              randomAdvanceShiftRegister(0);
              __aeabi_uidivmod();
              DAT_004ea92c = *pfVar8;
              DAT_004ea930 = pfVar8[1];
              DAT_004ea934 = pfVar8[2];
              DAT_004ea938 = pfVar8[3];
              temp_v12 = (float)VectorUnsignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v11 = (float)((unsigned long long)temp_v17 >> 0x20);
              temp_v3 = pfVar9[3] * temp_v12 +
                      (float)((unsigned long long)temp_v14 >> 0x20) * temp_v12 * temp_v12 * temp_v11;
              in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v13 <= temp_v3) << 0x1d);
              if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
                temp_v3 = temp_v13;
              }
              temp_v13 = *pfVar9 * temp_v3 + DAT_004ea92c;
              temp_v11 = (pfVar9[1] * temp_v3 - (float)temp_v14 * temp_v12 * temp_v12 * temp_v11) + DAT_004ea930
              ;
              temp_v3 = pfVar9[2] * temp_v3 + DAT_004ea934;
              DAT_004ea928 = temp_v15 + DAT_004ea938;
              DAT_004ea91c = temp_v13;
              DAT_004ea920 = temp_v11;
              DAT_004ea924 = temp_v3;
              pfVar8[3] = DAT_004ea928;
              *pfVar8 = temp_v13;
              pfVar8[1] = temp_v11;
              pfVar8[2] = temp_v3;
              pfVar8[4] = (float)(int)temp_v12;
            }
            FUN_0024b660(pfVar8,pfVar11,pfVar8[4],&temp_v19);
            pfVar8[6] = pfVar8[6] * pfVar9[4];
            temp_v3 = pfVar8[7];
            temp_v13 = pfVar9[6];
            pfVar8[7] = temp_v3 * temp_v13;
            in_s0 = temp_v3 * temp_v13 + pfVar9[5];
            pfVar8[7] = in_s0;
            if (temp_v1) {
              FUN_0024b5f0(param_1,pfVar8);
              temp_v4 = effGetFrameCounter();
              pfVar8[4] = (float)(temp_v4 + (int)pfVar8[4]);
            }
            temp_v9 = (float)((int)temp_v9 - 1);
          }
        }
        temp_v7 = temp_v7 + 1;
        pfVar9 = pfVar9 + 7;
        pfVar8 = pfVar8 + 10;
      } while (temp_v7 < temp_v8);
    }
  }
  return;
}

} /* extern "C" */
