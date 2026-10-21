/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038f038` (_code @ 0x38f038, 0x764 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(...);
int effGetFrameStep(void);
int FUN_001bc460(void);
int FUN_0027134c(int, float *);
int FUN_002fe2e8(int, float *);
int FUN_00321d7c(...);
int FUN_00375c74(int, float *, unsigned char [68], int *);
int randomAdvanceShiftRegister(void);
int FUN_00514540(...);
int VectorSignedToFloat(...);

/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
} param_1_stack;

extern float DAT_006472dc; /* 0x6472dc */
extern float DAT_006472e0; /* 0x6472e0 */
extern float DAT_006472e4; /* 0x6472e4 */
extern float DAT_006472e8; /* 0x6472e8 */
extern float DAT_006472ec; /* 0x6472ec */
extern float DAT_006472f0; /* 0x6472f0 */
extern float DAT_006472f4; /* 0x6472f4 */
extern float DAT_006472f8; /* 0x6472f8 */
extern float DAT_0064731c; /* 0x64731c */
extern float DAT_00647320; /* 0x647320 */
extern float DAT_00647324; /* 0x647324 */
extern float DAT_00647328; /* 0x647328 */
extern float DAT_0064732c; /* 0x64732c */
extern float DAT_00647330; /* 0x647330 */
extern float DAT_00647334; /* 0x647334 */
extern float DAT_00647338; /* 0x647338 */
extern float DAT_0064733c; /* 0x64733c */
extern float DAT_00647340; /* 0x647340 */
extern float DAT_00647344; /* 0x647344 */
extern float DAT_00647348; /* 0x647348 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
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
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Supplied declaration required: effGetFrameStep. */
/* Supplied declaration required: FUN_001bc460. */
/* Supplied declaration required: FUN_0027134c. */
/* Supplied declaration required: FUN_002fe2e8. */
/* Supplied declaration required: FUN_00321d7c. */
/* Supplied declaration required: FUN_00375c74. */
extern int FUN_0037a844(void);
/* Supplied declaration required: randomAdvanceShiftRegister. */
/* Supplied declaration required: FUN_00514540. */


void FUN_0038f038(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 11 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  float temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  float *pfVar6;
  float *pfVar7;
  unsigned int temp_v5;
  float *pfVar9;
  unsigned int temp_v6;
  float temp_v7;
  unsigned int in_fpscr;
  unsigned int temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  unsigned long long temp_v14;
  long long temp_v15;
  long long temp_v16;
  unsigned long long temp_v17;
  unsigned long long temp_v18;
  unsigned int temp_v19;
  long long temp_v20;
  unsigned long long temp_v21;
  int temp_v22;
  unsigned int temp_v23;
  float temp_v24;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  unsigned int temp_v25;
  float temp_v26;
  float temp_v27;
  unsigned char temp_v28 [68];
  int temp_v29;
  
  temp_v29 = param_1;
  temp_v1 = effGetFrameStep();
  temp_v23 = *(unsigned int *)(temp_v29 + 0xc);
  temp_v1 = VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  pfVar9 = *(float **)(temp_v29 + 0x20);
  temp_v6 = *(unsigned int *)(temp_v29 + 4);
  pfVar6 = *(float **)(temp_v29 + 0x18);
  pfVar7 = *(float **)(temp_v29 + 0x1c);
  temp_v7 = pfVar9[0x2e];
  if (temp_v7 != 0.0f) {
    temp_v26 = pfVar9[8];
    DAT_006472dc = pfVar9[4];
    DAT_006472e0 = pfVar9[5];
    DAT_006472e4 = pfVar9[6];
    DAT_006472e8 = pfVar9[7];
    temp_v25 = (unsigned int)*(unsigned char *)(pfVar9 + 0x27);
    temp_v15 = (unsigned long long)(unsigned int)pfVar9[0x3a] << 0x20;
    temp_v16 = (unsigned long long)(unsigned int)pfVar9[0x39] << 0x20;
    temp_v14 = romwright_piece_4_4(pfVar9[0x36],temp_v1);
    temp_v20 = (unsigned long long)(unsigned int)pfVar9[0x3d] << 0x20;
    FUN_001bc460();
    FUN_00375c74(temp_v29,pfVar9,temp_v28,&temp_v22);
    temp_v5 = 0;
    if (temp_v6 != 0) {
      temp_v21 = romwright_piece_4_4(0x40000000,(int)temp_v15);
      temp_v2 = (float)temp_v14;
      temp_v9 = temp_v2 * 2.0f - temp_v2;
      temp_v27 = temp_v2 - 1.0f;
      temp_v17 = CONCAT44((float)((unsigned long long)temp_v16 >> 0x20) * 0.5f * temp_v2,0x3f800000);
      temp_v18 = CONCAT44(0x3f000000,temp_v9 + 1.0f);
      do {
        if ((int)temp_v7 <= (int)pfVar6[4]) {
          if (temp_v26 == 0.0f) {
            temp_v2 = -NAN;
          }
          else {
            temp_v2 = -NAN;
          }
          pfVar6[4] = temp_v2;
          FUN_002fe2e8(temp_v29,pfVar6);
        }
        temp_v19 = (unsigned int)((unsigned long long)temp_v20 >> 0x20);
        temp_v1 = (unsigned int)((unsigned long long)temp_v16 >> 0x20);
        temp_v2 = pfVar6[4];
        if (temp_v2 != -NAN) {
          if (temp_v2 != -NAN) {
            temp_v24 = *pfVar6;
            fStack_84 = pfVar6[1];
            fStack_80 = pfVar6[2];
            fStack_7c = pfVar6[3];
            DAT_006472ec = *pfVar6;
            DAT_006472f0 = pfVar6[1];
            DAT_006472f4 = pfVar6[2];
            DAT_006472f8 = pfVar6[3];
            temp_v3 = FUN_0037a844();
            temp_v9 = (float)temp_v14;
            temp_v11 = (float)((unsigned long long)temp_v15 >> 0x20);
            if (temp_v3 != 0) {
              temp_v13 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v13 = (float)((unsigned long long)temp_v17 >> 0x20) *
                       ((temp_v13 * (float)((unsigned long long)temp_v21 >> 0x20) - temp_v9) + (float)temp_v17) +
                       pfVar7[3] * temp_v9;
              temp_v12 = -((float)((unsigned long long)temp_v18 >> 0x20) * temp_v11) * temp_v9 * (float)temp_v18 +
                       pfVar7[1] * temp_v9;
              pfVar7[1] = pfVar7[1] - temp_v11 * temp_v9;
            }
            else {
              temp_v12 = pfVar7[1] - temp_v11;
              temp_v13 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
              pfVar7[1] = temp_v12;
              temp_v13 = pfVar7[3] + (float)((unsigned long long)temp_v16 >> 0x20) * temp_v13;
            }
            if (temp_v13 < (float)temp_v21) {
              temp_v13 = (float)temp_v21;
            }
            DAT_006472dc = *pfVar7 * temp_v13 + DAT_006472ec;
            temp_v12 = temp_v12 + DAT_006472f0;
            temp_v13 = pfVar7[2] * temp_v13 + DAT_006472f4;
            temp_v10 = (float)temp_v15 + DAT_006472f8;
            DAT_006472e0 = temp_v12;
            DAT_006472e4 = temp_v13;
            DAT_006472e8 = temp_v10;
            *pfVar6 = DAT_006472dc;
            pfVar6[1] = temp_v12;
            pfVar6[2] = temp_v13;
            pfVar6[3] = temp_v10;
            temp_v13 = (float)((unsigned long long)temp_v14 >> 0x20);
            in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v13 <= DAT_006472e0) << 0x1d);
            if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
              if ((int)temp_v9 >= 0x3f800001) {
                pfVar7[1] = pfVar7[1] + temp_v11 * temp_v27;
                pfVar6[1] = (pfVar6[1] - temp_v13) / temp_v9 + temp_v13;
              }
              temp_v9 = pfVar7[4] * (float)((unsigned long long)temp_v20 >> 0x20);
              pfVar7[4] = temp_v9;
              pfVar7[1] = pfVar7[1] * temp_v9;
              pfVar6[1] = temp_v13 + (pfVar6[1] - temp_v13) * temp_v9;
            }
            FUN_00321d7c(pfVar6,pfVar9,temp_v2,&temp_v24);
            pfVar6[6] = pfVar6[6] * pfVar7[5];
            temp_v9 = pfVar6[7];
            temp_v11 = pfVar7[7];
            pfVar6[7] = temp_v9 * temp_v11;
            temp_v9 = temp_v9 * temp_v11 + pfVar7[6];
            pfVar6[7] = temp_v9;
            FUN_0027134c(temp_v29,pfVar6);
            temp_v3 = effGetFrameStep();
            pfVar6[4] = (float)(temp_v3 + (int)temp_v2);
          }
          else if (temp_v22 != 0) {
            FUN_00514540(0);
            temp_v9 = ((float)temp_v17 - pfVar9[0x35]) + temp_v9 * pfVar9[0x35];
            temp_v2 = temp_v9 * pfVar9[0x34];
            FUN_00514540(0);
            temp_v11 = temp_v2 - (float)temp_v17;
            temp_v9 = (temp_v9 - (float)((unsigned long long)temp_v18 >> 0x20)) *
                     (float)((unsigned long long)temp_v21 >> 0x20);
            temp_v13 = temp_v9 * temp_v2;
            FUN_00514540(0);
            temp_v12 = (float)temp_v21;
            temp_v20 = CONCAT44(temp_v19,temp_v12);
            DAT_006472e4 = (temp_v9 - (float)((unsigned long long)temp_v18 >> 0x20)) *
                           (float)((unsigned long long)temp_v21 >> 0x20) * temp_v2;
            DAT_006472e8 = (float)temp_v15;
            temp_v9 = romwright_sqrt_4(temp_v13 * temp_v13 + temp_v11 * temp_v11 + DAT_006472e4 * DAT_006472e4);
            temp_v4 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v9 < temp_v12) << 0x1f) |
                    ((unsigned int)(temp_v9 == temp_v12) << 0x1e);
            temp_v8 = temp_v4 | ((unsigned int)((temp_v9 != temp_v9) || (temp_v12 != temp_v12)) << 0x1c);
            temp_v0 = (unsigned char)(temp_v4 >> 0x18);
            DAT_006472dc = temp_v13;
            DAT_006472e0 = temp_v11;
            if (!(unsigned char)((temp_v0 >> 6) & 1) && temp_v0 >> 7 == ((unsigned char)(temp_v8 >> 0x1c) & 1)) {
              DAT_006472dc = temp_v13 / temp_v9;
              DAT_006472e0 = temp_v11 / temp_v9;
              DAT_006472e4 = DAT_006472e4 / temp_v9;
            }
            if ((temp_v23 & 1) == 0) {
              temp_v11 = DAT_006472dc * DAT_00647320;
              temp_v13 = DAT_006472dc * DAT_00647324;
              temp_v9 = DAT_006472dc * DAT_00647328;
              temp_v2 = DAT_006472e0 * DAT_00647334;
              DAT_006472dc = DAT_006472dc * DAT_0064731c + DAT_006472e0 * DAT_0064732c +
                             DAT_006472e4 * DAT_0064733c;
              DAT_006472e8 = temp_v9 + DAT_006472e0 * DAT_00647338 + DAT_006472e4 * DAT_00647348;
              temp_v9 = DAT_006472e0;
              DAT_006472e0 = temp_v11 + DAT_006472e0 * DAT_00647330 + DAT_006472e4 * DAT_00647340;
              DAT_006472e4 = temp_v13 + temp_v2 + DAT_006472e4 * DAT_00647344;
            }
            temp_v13 = DAT_006472e4;
            temp_v11 = DAT_006472e0;
            temp_v2 = DAT_006472dc;
            temp_v15 = CONCAT44((int)((unsigned long long)temp_v15 >> 0x20),DAT_006472e8);
            temp_v16 = CONCAT44(temp_v1,DAT_006472e4);
            *pfVar7 = DAT_006472dc;
            pfVar7[1] = temp_v11;
            pfVar7[2] = temp_v13;
            FUN_00514540(0);
            temp_v9 = romwright_fabs_4((((float)temp_v17 - pfVar9[0x38]) + temp_v9 * pfVar9[0x38]) * pfVar9[0x37]);
            pfVar7[3] = temp_v9;
            FUN_00514540(0);
            temp_v9 = -(pfVar9[0x3b] * (((float)temp_v17 - pfVar9[0x3c]) + temp_v9 * pfVar9[0x3c]));
            pfVar7[4] = temp_v9;
            FUN_00514540(0);
            DAT_006472e0 = temp_v11;
            DAT_006472dc = temp_v2;
            DAT_006472e4 = (float)temp_v16;
            DAT_006472ec = (((float)temp_v17 - pfVar9[0x33]) + temp_v9 * pfVar9[0x33]) * pfVar9[0x32];
            DAT_006472f8 = (float)temp_v20;
            in_fpscr = (temp_v8 & 0xfffffff) | ((unsigned int)(DAT_006472f8 <= pfVar9[0x37]) << 0x1d);
            if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
              DAT_006472dc = -DAT_006472dc;
              DAT_006472e0 = -DAT_006472e0;
              DAT_006472e4 = -DAT_006472e4;
            }
            if ((temp_v23 & 1) != 0) {
              DAT_006472dc = DAT_006472dc * DAT_006472ec;
              DAT_006472e0 = DAT_006472e0 * DAT_006472ec;
              DAT_006472e4 = DAT_006472e4 * DAT_006472ec;
              temp_v9 = (float)temp_v15 * DAT_006472f8;
              DAT_006472f0 = DAT_006472ec;
              DAT_006472f4 = DAT_006472ec;
            }
            else {
              DAT_006472dc = DAT_006472dc * DAT_006472ec;
              DAT_006472e0 = DAT_006472e0 * DAT_006472ec;
              DAT_006472e4 = DAT_006472e4 * DAT_006472ec;
              temp_v9 = (float)temp_v15 * DAT_006472f8;
              DAT_006472ec = *pfVar9;
              DAT_006472f0 = pfVar9[1];
              DAT_006472f4 = pfVar9[2];
              DAT_006472f8 = pfVar9[3];
              DAT_006472dc = DAT_006472dc + DAT_006472ec;
              DAT_006472e0 = DAT_006472e0 + DAT_006472f0;
              DAT_006472e4 = DAT_006472e4 + DAT_006472f4;
              temp_v9 = temp_v9 + DAT_006472f8;
            }
            temp_v13 = DAT_006472e4;
            temp_v11 = DAT_006472e0;
            temp_v2 = DAT_006472dc;
            DAT_006472e8 = temp_v9;
            pfVar6[3] = temp_v9;
            *pfVar6 = temp_v2;
            pfVar6[1] = temp_v11;
            pfVar6[2] = temp_v13;
            FUN_00514540(0);
            pfVar7[5] = ((float)temp_v17 - pfVar9[0x1b]) + temp_v9 * pfVar9[0x1b];
            if (temp_v25 == 2) {
              pfVar7[6] = (float)temp_v20;
              pfVar7[7] = (float)temp_v17;
            }
            else {
              FUN_00514540(0);
              pfVar7[7] = ((float)temp_v17 - pfVar9[0x26]) + temp_v9 * pfVar9[0x26];
              if (temp_v25 != 1) {
                pfVar7[6] = (float)temp_v20;
              }
              else {
                FUN_00514540(0);
                temp_v4 = 0;
                pfVar7[6] = temp_v9 * 6.2831855f;
                randomAdvanceShiftRegister();
                if ((temp_v4 & 1) != 0) {
                  pfVar7[7] = -pfVar7[7];
                }
              }
            }
            pfVar6[4] = 0.0f;
            FUN_00321d7c(pfVar6,pfVar9);
            pfVar6[6] = pfVar6[6] * pfVar7[5];
            temp_v9 = pfVar6[7];
            temp_v2 = pfVar7[7];
            pfVar6[7] = temp_v9 * temp_v2;
            temp_v9 = temp_v9 * temp_v2 + pfVar7[6];
            pfVar6[7] = temp_v9;
            temp_v22 = temp_v22 - 1;
          }
        }
        temp_v5 = temp_v5 + 1;
        pfVar7 = pfVar7 + 8;
        pfVar6 = pfVar6 + 10;
      } while (temp_v5 < temp_v6);
    }
  }
  return;
}

} /* extern "C" */
