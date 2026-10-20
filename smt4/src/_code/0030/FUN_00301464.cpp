/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00301464` (_code @ 0x301464, 0x758 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(...);
int FUN_0024add8(int, float *);
int FUN_0024b660(...);
int FUN_0024b77c(void);
int FUN_0024b7bc(int, float *);
int FUN_0024b830(...);
int FUN_002a2c7c(void);
int VectorSignedToFloat(double, int);
int VectorUnsignedToFloat(...);

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
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
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_0024add8. */
/* Supplied declaration required: FUN_0024b660. */
/* Supplied declaration required: FUN_0024b77c. */
/* Supplied declaration required: FUN_0024b7bc. */
/* Supplied declaration required: FUN_0024b830. */
extern int FUN_00269a58(void);
/* Supplied declaration required: FUN_002a2c7c. */


void FUN_00301464(int param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 10 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  float temp_v2;
  int temp_v3;
  float *pfVar5;
  unsigned int temp_v4;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  unsigned int temp_v5;
  unsigned int temp_v6;
  float temp_v7;
  unsigned int in_fpscr;
  unsigned int temp_v8;
  float in_s0;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  long long temp_v13;
  float temp_v14;
  float temp_v15;
  long long temp_v16;
  unsigned long long temp_v17;
  unsigned long long temp_v18;
  unsigned long long temp_v19;
  float temp_v20;
  unsigned long long temp_v21;
  float temp_v22;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float *temp_v23;
  float temp_v24;
  
  pfVar9 = *(float **)(param_1 + 0x20);
  temp_v6 = *(unsigned int *)(param_1 + 4);
  temp_v1 = *(unsigned int *)(param_1 + 0xc);
  pfVar7 = *(float **)(param_1 + 0x18);
  pfVar8 = *(float **)(param_1 + 0x1c);
  temp_v24 = pfVar9[0x2e];
  if (temp_v24 != 0.0f) {
    temp_v2 = pfVar9[8];
    DAT_004ea91c = pfVar9[4];
    DAT_004ea920 = pfVar9[5];
    DAT_004ea924 = pfVar9[6];
    DAT_004ea928 = pfVar9[7];
    temp_v23 = (float *)(unsigned int)*(unsigned char *)(pfVar9 + 0x27);
    temp_v16 = (unsigned long long)(unsigned int)pfVar9[0x3a] << 0x20;
    temp_v17 = romwright_piece_4_4(pfVar9[0x3d],pfVar9[0x39]);
    temp_v13 = (unsigned long long)(unsigned int)pfVar9[0x36] << 0x20;
    FUN_002a2c7c();
    if ((temp_v2 != 0.0f) && (*(int *)(param_1 + 0x10) >= (int)temp_v2)) {
      temp_v7 = 0.0f;
    }
    else {
      temp_v7 = 1.1f;
      in_s0 = (float)temp_v13;
      if ((*(int *)(param_1 + 0x10) == 0) && (*(char *)((int)pfVar9 + 0xbd) != '\0')) {
        temp_v10 = pfVar9[10];
        temp_v5 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v10 < in_s0) << 0x1f) |
                 ((unsigned int)(temp_v10 == in_s0) << 0x1e);
        in_fpscr = temp_v5 | ((unsigned int)((temp_v10 != temp_v10) || (in_s0 != in_s0)) << 0x1c);
        temp_v0 = (unsigned char)(temp_v5 >> 0x18);
        if ((unsigned char)((temp_v0 >> 6) & 1) || temp_v0 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
          temp_v7 = *(float *)(param_1 + 4);
        }
        else {
          FUN_0024b830(0);
          temp_v10 = (float)VectorUnsignedToFloat
                                    (*(unsigned int *)(param_1 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v7 = (float)(int)(in_s0 * (temp_v7 - pfVar9[10]) * temp_v10);
          in_s0 = temp_v7;
        }
      }
      else {
        temp_v10 = pfVar9[10];
        temp_v5 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v10 < in_s0) << 0x1f) |
                 ((unsigned int)(temp_v10 == in_s0) << 0x1e);
        in_fpscr = temp_v5 | ((unsigned int)((temp_v10 != temp_v10) || (in_s0 != in_s0)) << 0x1c);
        temp_v0 = (unsigned char)(temp_v5 >> 0x18);
        if (!((unsigned char)((temp_v0 >> 6) & 1) || temp_v0 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1))) {
          FUN_0024b830(0);
          temp_v10 = (float)VectorUnsignedToFloat(pfVar9[9],(unsigned char)(in_fpscr >> 0x16) & 3);
          in_s0 = *(float *)(param_1 + 0x14) + temp_v10 * in_s0 * (temp_v7 - pfVar9[10]);
          *(float *)(param_1 + 0x14) = in_s0;
        }
        else {
          in_s0 = (float)VectorUnsignedToFloat(pfVar9[9],(unsigned char)(in_fpscr >> 0x16) & 3);
          in_s0 = *(float *)(param_1 + 0x14) + in_s0;
          *(float *)(param_1 + 0x14) = in_s0;
        }
        temp_v7 = (float)(int)romwright_fabs_4(in_s0);
        temp_v10 = (float)VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
        in_s0 = in_s0 - temp_v10;
        *(float *)(param_1 + 0x14) = in_s0;
      }
    }
    temp_v5 = 0;
    if (temp_v6 != 0) {
      temp_v19 = 0x3f00000000000000;
      temp_v21 = 0x40c90fdb40000000;
      temp_v18 = romwright_piece_4_4(0x3f800000,(int)temp_v13);
      do {
        if ((int)temp_v24 <= (int)pfVar7[4]) {
          if (temp_v2 == 0.0f) {
            temp_v10 = -NAN;
          }
          else {
            temp_v10 = -NAN;
          }
          pfVar7[4] = temp_v10;
          FUN_0024b7bc(param_1,pfVar7);
        }
        temp_v9 = (float)((unsigned long long)temp_v16 >> 0x20);
        temp_v11 = (float)((unsigned long long)temp_v19 >> 0x20);
        temp_v10 = pfVar7[4];
        if (temp_v10 != -NAN) {
          if (temp_v10 != -NAN) {
            temp_v22 = *pfVar7;
            fStack_74 = pfVar7[1];
            fStack_70 = pfVar7[2];
            fStack_6c = pfVar7[3];
            temp_v11 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
            DAT_004ea92c = *pfVar7;
            DAT_004ea930 = pfVar7[1];
            DAT_004ea934 = pfVar7[2];
            DAT_004ea938 = pfVar7[3];
            temp_v11 = pfVar8[3] + (float)temp_v17 * temp_v11;
            temp_v12 = pfVar8[1];
            if (temp_v11 < (float)temp_v18) {
              temp_v11 = (float)temp_v18;
            }
            pfVar8[1] = temp_v12 - temp_v9;
            DAT_004ea91c = *pfVar8 * temp_v11 + DAT_004ea92c;
            temp_v9 = (temp_v12 - temp_v9) + DAT_004ea930;
            temp_v11 = pfVar8[2] * temp_v11 + DAT_004ea934;
            temp_v12 = (float)temp_v13 + DAT_004ea938;
            DAT_004ea920 = temp_v9;
            DAT_004ea924 = temp_v11;
            DAT_004ea928 = temp_v12;
            *pfVar7 = DAT_004ea91c;
            pfVar7[1] = temp_v9;
            pfVar7[2] = temp_v11;
            pfVar7[3] = temp_v12;
            temp_v9 = (float)((unsigned long long)temp_v13 >> 0x20);
            in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v9 <= DAT_004ea920) << 0x1d);
            if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
              temp_v11 = pfVar8[4] * (float)((unsigned long long)temp_v17 >> 0x20);
              pfVar8[4] = temp_v11;
              pfVar8[1] = pfVar8[1] * temp_v11;
              pfVar7[1] = temp_v9 + (pfVar7[1] - temp_v9) * temp_v11;
            }
            FUN_0024b660(pfVar7,pfVar9,temp_v10,&temp_v22);
            pfVar7[6] = pfVar7[6] * pfVar8[5];
            temp_v9 = pfVar7[7];
            temp_v11 = pfVar8[7];
            pfVar7[7] = temp_v9 * temp_v11;
            in_s0 = temp_v9 * temp_v11 + pfVar8[6];
            pfVar7[7] = in_s0;
            FUN_0024add8(param_1,pfVar7);
            temp_v3 = FUN_00269a58();
            pfVar7[4] = (float)(temp_v3 + (int)temp_v10);
          }
          else if (temp_v7 != 0.0f) {
            FUN_0024b830(0);
            temp_v12 = (((float)((unsigned long long)temp_v18 >> 0x20) - pfVar9[0x35]) + in_s0 * pfVar9[0x35]) *
                     pfVar9[0x34];
            FUN_0024b830(0);
            temp_v20 = (float)temp_v21;
            temp_v14 = temp_v12 - (float)((unsigned long long)temp_v18 >> 0x20);
            temp_v10 = (in_s0 - temp_v11) * temp_v20;
            temp_v15 = temp_v10 * temp_v12;
            FUN_0024b830(0);
            DAT_004ea924 = (temp_v10 - temp_v11) * temp_v20 * temp_v12;
            DAT_004ea928 = (float)temp_v13;
            temp_v10 = romwright_sqrt_4(temp_v15 * temp_v15 + temp_v14 * temp_v14 + DAT_004ea924 * DAT_004ea924);
            temp_v12 = (float)temp_v18;
            temp_v4 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v10 < temp_v12) << 0x1f) |
                    ((unsigned int)(temp_v10 == temp_v12) << 0x1e);
            temp_v8 = temp_v4 | ((unsigned int)((temp_v10 != temp_v10) || (temp_v12 != temp_v12)) << 0x1c);
            temp_v0 = (unsigned char)(temp_v4 >> 0x18);
            DAT_004ea91c = temp_v15;
            DAT_004ea920 = temp_v14;
            if (!(unsigned char)((temp_v0 >> 6) & 1) && temp_v0 >> 7 == ((unsigned char)(temp_v8 >> 0x1c) & 1)) {
              DAT_004ea91c = temp_v15 / temp_v10;
              DAT_004ea920 = temp_v14 / temp_v10;
              DAT_004ea924 = DAT_004ea924 / temp_v10;
            }
            if ((temp_v1 & 1) == 0) {
              temp_v14 = DAT_004ea91c * DAT_004ea960;
              temp_v15 = DAT_004ea91c * DAT_004ea964;
              temp_v10 = DAT_004ea91c * DAT_004ea968;
              temp_v12 = DAT_004ea920 * DAT_004ea974;
              DAT_004ea91c = DAT_004ea91c * DAT_004ea95c + DAT_004ea920 * DAT_004ea96c +
                             DAT_004ea924 * DAT_004ea97c;
              DAT_004ea928 = temp_v10 + DAT_004ea920 * DAT_004ea978 + DAT_004ea924 * DAT_004ea988;
              temp_v10 = DAT_004ea920;
              DAT_004ea920 = temp_v14 + DAT_004ea920 * DAT_004ea970 + DAT_004ea924 * DAT_004ea980;
              DAT_004ea924 = temp_v15 + temp_v12 + DAT_004ea924 * DAT_004ea984;
            }
            temp_v15 = DAT_004ea924;
            temp_v14 = DAT_004ea920;
            temp_v12 = DAT_004ea91c;
            temp_v16 = CONCAT44(temp_v9,DAT_004ea924);
            temp_v13 = CONCAT44((int)((unsigned long long)temp_v13 >> 0x20),DAT_004ea928);
            *pfVar8 = DAT_004ea91c;
            pfVar8[1] = temp_v14;
            pfVar8[2] = temp_v15;
            FUN_0024b830(0);
            temp_v10 = romwright_fabs_4((((float)((unsigned long long)temp_v18 >> 0x20) - pfVar9[0x38]) +
                         temp_v10 * pfVar9[0x38]) * pfVar9[0x37]);
            pfVar8[3] = temp_v10;
            FUN_0024b830(0);
            temp_v10 = -(pfVar9[0x3b] *
                      (((float)((unsigned long long)temp_v18 >> 0x20) - pfVar9[0x3c]) + temp_v10 * pfVar9[0x3c]))
            ;
            pfVar8[4] = temp_v10;
            FUN_0024b830(0);
            DAT_004ea920 = temp_v14;
            DAT_004ea91c = temp_v12;
            DAT_004ea938 = (float)temp_v18;
            temp_v19 = CONCAT44(temp_v11,DAT_004ea938);
            DAT_004ea924 = (float)temp_v16;
            in_fpscr = (temp_v8 & 0xfffffff) | ((unsigned int)(DAT_004ea938 <= pfVar9[0x37]) << 0x1d);
            DAT_004ea92c = (((float)((unsigned long long)temp_v18 >> 0x20) - pfVar9[0x33]) +
                           temp_v10 * pfVar9[0x33]) * pfVar9[0x32];
            if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
              DAT_004ea91c = -DAT_004ea91c;
              DAT_004ea920 = -DAT_004ea920;
              DAT_004ea924 = -DAT_004ea924;
            }
            if ((temp_v1 & 1) != 0) {
              DAT_004ea91c = DAT_004ea91c * DAT_004ea92c;
              DAT_004ea920 = DAT_004ea920 * DAT_004ea92c;
              DAT_004ea924 = DAT_004ea924 * DAT_004ea92c;
              temp_v10 = (float)temp_v13 * DAT_004ea938;
              DAT_004ea930 = DAT_004ea92c;
              DAT_004ea934 = DAT_004ea92c;
            }
            else {
              DAT_004ea91c = DAT_004ea91c * DAT_004ea92c;
              DAT_004ea920 = DAT_004ea920 * DAT_004ea92c;
              DAT_004ea924 = DAT_004ea924 * DAT_004ea92c;
              temp_v10 = (float)temp_v13 * DAT_004ea938;
              DAT_004ea92c = *pfVar9;
              DAT_004ea930 = pfVar9[1];
              DAT_004ea934 = pfVar9[2];
              DAT_004ea938 = pfVar9[3];
              DAT_004ea91c = DAT_004ea91c + DAT_004ea92c;
              DAT_004ea920 = DAT_004ea920 + DAT_004ea930;
              DAT_004ea924 = DAT_004ea924 + DAT_004ea934;
              temp_v10 = temp_v10 + DAT_004ea938;
            }
            temp_v12 = DAT_004ea924;
            temp_v11 = DAT_004ea920;
            temp_v9 = DAT_004ea91c;
            DAT_004ea928 = temp_v10;
            pfVar7[3] = temp_v10;
            *pfVar7 = temp_v9;
            pfVar7[1] = temp_v11;
            pfVar7[2] = temp_v12;
            FUN_0024b830(0);
            temp_v9 = (float)((unsigned long long)temp_v18 >> 0x20);
            pfVar5 = temp_v23;
            if (temp_v23 == (float *)0x2) {
              pfVar5 = pfVar8 + 6;
            }
            pfVar8[5] = (temp_v9 - pfVar9[0x1b]) + temp_v10 * pfVar9[0x1b];
            if (temp_v23 == (float *)0x2) {
              *pfVar5 = (float)temp_v18;
              pfVar5[1] = temp_v9;
            }
            else {
              FUN_0024b830(0);
              pfVar8[7] = ((float)((unsigned long long)temp_v18 >> 0x20) - pfVar9[0x26]) +
                          temp_v10 * pfVar9[0x26];
              if (temp_v23 != (float *)0x1) {
                pfVar8[6] = (float)temp_v18;
              }
              else {
                FUN_0024b830(0);
                temp_v4 = 0;
                pfVar8[6] = temp_v10 * (float)((unsigned long long)temp_v21 >> 0x20);
                FUN_0024b77c();
                if ((temp_v4 & 1) != 0) {
                  pfVar8[7] = -pfVar8[7];
                }
              }
            }
            pfVar7[4] = 0.0f;
            FUN_0024b660(pfVar7,pfVar9);
            temp_v7 = (float)((int)temp_v7 - 1);
            pfVar7[6] = pfVar7[6] * pfVar8[5];
            temp_v10 = pfVar7[7];
            temp_v9 = pfVar8[7];
            pfVar7[7] = temp_v10 * temp_v9;
            in_s0 = temp_v10 * temp_v9 + pfVar8[6];
            pfVar7[7] = in_s0;
          }
        }
        temp_v5 = temp_v5 + 1;
        pfVar8 = pfVar8 + 8;
        pfVar7 = pfVar7 + 10;
      } while (temp_v5 < temp_v6);
    }
  }
  return;
}

} /* extern "C" */
