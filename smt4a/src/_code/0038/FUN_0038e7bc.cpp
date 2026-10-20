/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038e7bc` (_code @ 0x38e7bc, 0x87c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(...);
int FUN_001a1ee0(void);
int effGetFrameStep(void);
int FUN_001bc460(void);
int FUN_0027134c(int, float *);
int FUN_002fe2e8(int, float *);
int FUN_00321d7c(...);
int FUN_00321e98(...);
int FUN_00375c74(int, float *, char [4], int *);
int FUN_00514500(void);
int FUN_00514540(...);
int VectorSignedToFloat(...);

/* stack frame of param_1: 6 slot(s), 21 byte(s) */
typedef struct {
    unsigned int sp68; /* 0x68: local_68 */
    unsigned char sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
} param_1_stack;

extern float DAT_005c1e90; /* 0x5c1e90 */
extern float DAT_005c1e94; /* 0x5c1e94 */
extern float DAT_005c1e98; /* 0x5c1e98 */
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
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_001a1ee0. */
/* Supplied declaration required: effGetFrameStep. */
/* Supplied declaration required: FUN_001bc460. */
/* Supplied declaration required: FUN_0027134c. */
/* Supplied declaration required: FUN_002fe2e8. */
/* Supplied declaration required: FUN_00321d7c. */
/* Supplied declaration required: FUN_00321e98. */
/* Supplied declaration required: FUN_00375c74. */
extern int FUN_0037a844(void);
/* Supplied declaration required: FUN_00514500. */
/* Supplied declaration required: FUN_00514540. */


void FUN_0038e7bc(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 13 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  float *pfVar5;
  unsigned int temp_v4;
  float *pfVar7;
  float *pfVar8;
  unsigned int temp_v5;
  float *pfVar10;
  float temp_v6;
  unsigned int temp_v7;
  unsigned int in_fpscr;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  unsigned long long temp_v14;
  unsigned int temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  long long temp_v19;
  float temp_v20;
  unsigned long long temp_v21;
  unsigned long long temp_v22;
  unsigned long long temp_v23;
  int temp_v24;
  float temp_v25;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float *temp_v26;
  char temp_v27 [4];
  float temp_v28;
  
  temp_v1 = effGetFrameStep();
  temp_v2 = *(unsigned int *)(param_1 + 0xc);
  pfVar10 = *(float **)(param_1 + 0x20);
  temp_v7 = *(unsigned int *)(param_1 + 4);
  pfVar7 = *(float **)(param_1 + 0x18);
  pfVar8 = *(float **)(param_1 + 0x1c);
  temp_v1 = VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v6 = pfVar10[0x2e];
  if (temp_v6 != 0.0f) {
    temp_v28 = pfVar10[8];
    DAT_006472dc = pfVar10[4];
    DAT_006472e0 = pfVar10[5];
    DAT_006472e4 = pfVar10[6];
    DAT_006472e8 = pfVar10[7];
    temp_v26 = (float *)(unsigned int)*(unsigned char *)(pfVar10 + 0x27);
    temp_v15 = 0;
    temp_v16 = pfVar10[0x35];
    temp_v20 = pfVar10[0x3f];
    temp_v14 = romwright_piece_4_4(pfVar10[0x3c],temp_v1);
    FUN_001bc460();
    FUN_00375c74(param_1,pfVar10,temp_v27,&temp_v24);
    temp_v5 = 0;
    if (temp_v7 != 0) {
      temp_v8 = (float)temp_v14;
      temp_v18 = 1.0f;
      temp_v21 = CONCAT44(0x4222f983,temp_v20);
      temp_v22 = 0x400000003f000000;
      temp_v19 = (unsigned long long)(unsigned int)((temp_v8 * 2.0f - temp_v8) + 1.0f) << 0x20;
      temp_v23 = CONCAT44(temp_v8 - 1.0f,temp_v15);
      do {
        if ((int)temp_v6 <= (int)pfVar7[4]) {
          if (temp_v28 == 0.0f) {
            temp_v20 = -NAN;
          }
          else {
            temp_v20 = -NAN;
          }
          pfVar7[4] = temp_v20;
          FUN_002fe2e8(param_1,pfVar7);
        }
        temp_v1 = (unsigned int)((unsigned long long)temp_v19 >> 0x20);
        temp_v20 = pfVar7[4];
        if (temp_v20 != -NAN) {
          if (temp_v20 != -NAN) {
            temp_v25 = *pfVar7;
            fStack_7c = pfVar7[1];
            fStack_78 = pfVar7[2];
            fStack_74 = pfVar7[3];
            temp_v8 = pfVar8[6] * (float)((unsigned long long)temp_v21 >> 0x20);
            FUN_001a1ee0();
            temp_v9 = pfVar8[8] * (temp_v8 - pfVar8[7]);
            *pfVar7 = *pfVar7 + pfVar8[3] * temp_v9;
            pfVar7[1] = pfVar7[1] + pfVar8[4] * temp_v9;
            pfVar7[2] = pfVar7[2] + pfVar8[5] * temp_v9;
            temp_v3 = FUN_0037a844();
            temp_v9 = (float)temp_v14;
            if (temp_v3 != 0) {
              temp_v10 = -((float)temp_v22 * temp_v16) * temp_v9 * (float)((unsigned long long)temp_v19 >> 0x20) +
                       pfVar8[0xb] * temp_v9;
              pfVar8[0xb] = pfVar8[0xb] - temp_v16 * temp_v9;
            }
            else {
              temp_v10 = pfVar8[0xb] - temp_v16;
              pfVar8[0xb] = temp_v10;
            }
            *pfVar7 = *pfVar7 + *pfVar8 * temp_v10;
            pfVar7[1] = pfVar7[1] + pfVar8[1] * temp_v10;
            pfVar7[2] = pfVar7[2] + pfVar8[2] * temp_v10;
            pfVar8[6] = pfVar8[6] + pfVar8[10] * temp_v9;
            pfVar8[8] = pfVar8[8] + pfVar8[9] * temp_v9;
            pfVar8[7] = temp_v8;
            temp_v8 = (float)((unsigned long long)temp_v14 >> 0x20);
            in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v8 <= pfVar7[1]) << 0x1d);
            if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
              if ((int)temp_v9 >= 0x3f800001) {
                pfVar8[0xb] = pfVar8[0xb] + temp_v16 * (float)((unsigned long long)temp_v23 >> 0x20);
                pfVar7[1] = (pfVar7[1] - temp_v8) / temp_v9 + temp_v8;
              }
              temp_v9 = pfVar8[0xc] * (float)temp_v21;
              pfVar8[0xc] = temp_v9;
              pfVar8[0xb] = pfVar8[0xb] * temp_v9;
              pfVar7[1] = temp_v8 + (pfVar7[1] - temp_v8) * temp_v9;
            }
            FUN_00321d7c(pfVar7,pfVar10,temp_v20,&temp_v25);
            pfVar7[6] = pfVar7[6] * pfVar8[0xd];
            temp_v9 = pfVar7[7];
            temp_v8 = pfVar8[0xf];
            pfVar7[7] = temp_v9 * temp_v8;
            pfVar7[7] = temp_v9 * temp_v8 + pfVar8[0xe];
            FUN_0027134c(param_1,pfVar7);
            temp_v3 = effGetFrameStep();
            pfVar7[4] = (float)(temp_v3 + (int)temp_v20);
          }
          else if (temp_v24 != 0) {
            if ((temp_v2 & 1) != 0) {
              temp_v20 = (float)temp_v23;
              pfVar8[1] = temp_v18;
              *pfVar8 = temp_v20;
              pfVar8[2] = temp_v20;
            }
            else {
              temp_v20 = DAT_005c1e90 * DAT_0064731c + DAT_005c1e94 * DAT_0064732c +
                       DAT_005c1e98 * DAT_0064733c;
              DAT_006472e8 = DAT_005c1e90 * DAT_00647328 + DAT_005c1e94 * DAT_00647338 +
                             DAT_005c1e98 * DAT_00647348;
              temp_v8 = DAT_005c1e90 * DAT_00647320 + DAT_005c1e94 * DAT_00647330 +
                       DAT_005c1e98 * DAT_00647340;
              temp_v9 = DAT_005c1e90 * DAT_00647324 + DAT_005c1e94 * DAT_00647334 +
                       DAT_005c1e98 * DAT_00647344;
              DAT_006472dc = temp_v20;
              DAT_006472e0 = temp_v8;
              DAT_006472e4 = temp_v9;
              *pfVar8 = temp_v20;
              pfVar8[1] = temp_v8;
              pfVar8[2] = temp_v9;
            }
            FUN_00514540(0);
            temp_v20 = temp_v20 - (float)temp_v22;
            temp_v8 = (float)((unsigned long long)temp_v22 >> 0x20);
            temp_v9 = (float)temp_v23;
            temp_v10 = temp_v20 * temp_v8;
            FUN_00514540(0);
            DAT_006472e4 = (temp_v20 - (float)temp_v22) * temp_v8;
            temp_v20 = romwright_sqrt_4(temp_v10 * temp_v10 + temp_v9 * temp_v9 + DAT_006472e4 * DAT_006472e4);
            temp_v4 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v20 < temp_v9) << 0x1f) |
                    ((unsigned int)(temp_v20 == temp_v9) << 0x1e);
            in_fpscr = temp_v4 | ((unsigned int)((temp_v20 != temp_v20) || (temp_v9 != temp_v9)) << 0x1c);
            temp_v0 = (unsigned char)(temp_v4 >> 0x18);
            DAT_006472dc = temp_v10;
            DAT_006472e0 = temp_v9;
            if (!(unsigned char)((temp_v0 >> 6) & 1) && temp_v0 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
              DAT_006472dc = temp_v10 / temp_v20;
              DAT_006472e0 = temp_v9 / temp_v20;
              DAT_006472e4 = DAT_006472e4 / temp_v20;
            }
            DAT_006472e8 = temp_v9;
            if ((temp_v2 & 1) == 0) {
              temp_v10 = DAT_006472dc * DAT_00647320;
              temp_v9 = DAT_006472dc * DAT_00647324;
              temp_v8 = DAT_006472e0 * DAT_00647334;
              DAT_006472e8 = DAT_006472dc * DAT_00647328 + DAT_006472e0 * DAT_00647338 +
                             DAT_006472e4 * DAT_00647348;
              DAT_006472dc = DAT_006472dc * DAT_0064731c + DAT_006472e0 * DAT_0064732c +
                             DAT_006472e4 * DAT_0064733c;
              temp_v20 = DAT_006472e0;
              DAT_006472e0 = temp_v10 + DAT_006472e0 * DAT_00647330 + DAT_006472e4 * DAT_00647340;
              DAT_006472e4 = temp_v9 + temp_v8 + DAT_006472e4 * DAT_00647344;
            }
            temp_v10 = DAT_006472e4;
            temp_v9 = DAT_006472e0;
            temp_v8 = DAT_006472dc;
            temp_v19 = CONCAT44(temp_v1,DAT_006472e8);
            pfVar8[3] = DAT_006472dc;
            pfVar8[4] = temp_v9;
            pfVar8[5] = temp_v10;
            FUN_00514540(0);
            temp_v20 = ((temp_v18 - pfVar10[0x34]) + temp_v20 * pfVar10[0x34]) * pfVar10[0x33];
            pfVar8[0xb] = temp_v20;
            FUN_00514540(0);
            temp_v20 = -(pfVar10[0x3d] * ((temp_v18 - pfVar10[0x3e]) + temp_v20 * pfVar10[0x3e]));
            pfVar8[0xc] = temp_v20;
            FUN_00514540(0);
            temp_v11 = pfVar10[0x37];
            temp_v17 = ((temp_v18 - temp_v11) + temp_v20 * temp_v11) * pfVar10[0x36];
            FUN_00514540(0);
            temp_v20 = pfVar10[0x39];
            temp_v13 = pfVar10[0x38];
            pfVar8[8] = temp_v17;
            temp_v12 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v12 = (((temp_v18 - temp_v20) + temp_v11 * temp_v20) * temp_v13 - temp_v17) / temp_v12;
            pfVar8[9] = temp_v12;
            FUN_00514540(0);
            temp_v20 = ((temp_v18 - pfVar10[0x3b]) + temp_v12 * pfVar10[0x3b]) * pfVar10[0x3a];
            pfVar8[10] = temp_v20;
            FUN_00514540(0);
            pfVar8[6] = temp_v20 * 6.2831855f;
            temp_v20 = temp_v20 * 6.2831855f * (float)((unsigned long long)temp_v21 >> 0x20);
            FUN_001a1ee0();
            pfVar8[7] = temp_v20;
            FUN_00514540(0);
            temp_v11 = (float)temp_v23;
            DAT_006472ec = (temp_v20 - (float)temp_v22) * (float)((unsigned long long)temp_v22 >> 0x20) *
                           pfVar10[0x32];
            if ((temp_v2 & 1) != 0) {
              DAT_006472dc = temp_v8 * DAT_006472ec;
              DAT_006472e0 = temp_v9 * DAT_006472ec;
              DAT_006472e4 = temp_v10 * DAT_006472ec;
              temp_v20 = (float)temp_v19 * temp_v11;
              DAT_006472f0 = DAT_006472ec;
              DAT_006472f4 = DAT_006472ec;
              DAT_006472f8 = temp_v11;
            }
            else {
              temp_v8 = temp_v8 * DAT_006472ec;
              temp_v9 = temp_v9 * DAT_006472ec;
              temp_v10 = temp_v10 * DAT_006472ec;
              DAT_006472ec = *pfVar10;
              DAT_006472f0 = pfVar10[1];
              DAT_006472f4 = pfVar10[2];
              DAT_006472f8 = pfVar10[3];
              DAT_006472dc = temp_v8 + DAT_006472ec;
              DAT_006472e0 = temp_v9 + DAT_006472f0;
              DAT_006472e4 = temp_v10 + DAT_006472f4;
              temp_v20 = (float)temp_v19 * temp_v11 + DAT_006472f8;
            }
            temp_v10 = DAT_006472e4;
            temp_v9 = DAT_006472e0;
            temp_v8 = DAT_006472dc;
            DAT_006472e8 = temp_v20;
            pfVar7[3] = temp_v20;
            *pfVar7 = temp_v8;
            pfVar7[1] = temp_v9;
            pfVar7[2] = temp_v10;
            FUN_00514540(0);
            temp_v8 = pfVar10[0x1b];
            pfVar5 = temp_v26;
            if (temp_v26 == (float *)0x2) {
              pfVar5 = pfVar8 + 0xe;
            }
            pfVar8[0xd] = (temp_v18 - temp_v8) + temp_v20 * temp_v8;
            if (temp_v26 == (float *)0x2) {
              *pfVar5 = temp_v11;
              pfVar5[1] = temp_v18;
            }
            else {
              FUN_00514540(0);
              temp_v20 = pfVar10[0x26];
              pfVar8[0xf] = (temp_v18 - temp_v20) + temp_v8 * temp_v20;
              if (temp_v26 != (float *)0x1) {
                pfVar8[0xe] = temp_v11;
              }
              else {
                FUN_00514540(0);
                temp_v4 = 0;
                pfVar8[0xe] = temp_v20 * 6.2831855f;
                FUN_00514500();
                if ((temp_v4 & 1) != 0) {
                  pfVar8[0xf] = -pfVar8[0xf];
                }
              }
            }
            pfVar7[4] = 0.0f;
            temp_v25 = *pfVar7;
            fStack_7c = pfVar7[1];
            fStack_78 = pfVar7[2];
            fStack_74 = pfVar7[3];
            FUN_00321d7c(pfVar7,pfVar10,pfVar7[4],&temp_v25);
            pfVar7[6] = pfVar7[6] * pfVar8[0xd];
            temp_v20 = pfVar7[7];
            temp_v8 = pfVar8[0xf];
            pfVar7[7] = temp_v20 * temp_v8;
            pfVar7[7] = temp_v20 * temp_v8 + pfVar8[0xe];
            if (temp_v27[0] != '\0') {
              FUN_00321e98(param_1,pfVar7);
              temp_v3 = effGetFrameStep();
              pfVar7[4] = (float)(temp_v3 + (int)pfVar7[4]);
            }
            temp_v24 = temp_v24 - 1;
          }
        }
        temp_v5 = temp_v5 + 1;
        pfVar8 = pfVar8 + 0x10;
        pfVar7 = pfVar7 + 10;
      } while (temp_v5 < temp_v7);
    }
  }
  return;
}

} /* extern "C" */
