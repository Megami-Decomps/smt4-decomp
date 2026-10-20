/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039ee10` (_code @ 0x39ee10, 0x850 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(...);
int FUN_001a1ee0(void);
int effGetFrameStep(void);
int FUN_001b63b0(void);
int FUN_001bc460(void);
int FUN_0027134c(int, float *);
int FUN_002fe2e8(int, float *);
int FUN_00321d7c(...);
int FUN_00321e98(...);
int FUN_00375c74(int, float *, char [4], int *);
int FUN_00514500(...);
int FUN_00514540(...);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);
int __aeabi_uidivmod(void);

/* stack frame of param_1: 6 slot(s), 21 byte(s) */
typedef struct {
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned char sp70; /* 0x70: local_70 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
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
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001a1ee0. */
/* Supplied declaration required: effGetFrameStep. */
/* Supplied declaration required: FUN_001b63b0. */
/* Supplied declaration required: FUN_001bc460. */
/* Supplied declaration required: FUN_0027134c. */
/* Supplied declaration required: FUN_002fe2e8. */
/* Supplied declaration required: FUN_00321d7c. */
/* Supplied declaration required: FUN_00321e98. */
/* Supplied declaration required: FUN_00375c74. */
extern int FUN_0037a844(void);
/* Supplied declaration required: FUN_00514500. */
/* Supplied declaration required: FUN_00514540. */
/* Supplied declaration required: __aeabi_uidivmod. */


void FUN_0039ee10(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 17 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
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
  unsigned int in_fpscr;
  unsigned int temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  long long temp_v15;
  float temp_v16;
  unsigned int temp_v17;
  long long temp_v18;
  float temp_v19;
  unsigned long long temp_v20;
  float temp_v21;
  unsigned long long temp_v22;
  float temp_v23;
  unsigned long long temp_v24;
  int temp_v25;
  unsigned int temp_v26;
  float temp_v27;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  char temp_v28 [4];
  float *temp_v29;
  float temp_v30;
  
  temp_v1 = effGetFrameStep();
  temp_v26 = *(unsigned int *)(param_1 + 0xc);
  pfVar10 = *(float **)(param_1 + 0x20);
  temp_v7 = *(unsigned int *)(param_1 + 4);
  pfVar7 = *(float **)(param_1 + 0x18);
  pfVar8 = *(float **)(param_1 + 0x1c);
  temp_v14 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v8 = pfVar10[0x2e];
  if (temp_v8 != 0.0f) {
    temp_v19 = 0.0f;
    DAT_006472dc = pfVar10[4];
    DAT_006472e0 = pfVar10[5];
    DAT_006472e4 = pfVar10[6];
    DAT_006472e8 = pfVar10[7];
    temp_v30 = pfVar10[8];
    temp_v29 = (float *)(unsigned int)*(unsigned char *)(pfVar10 + 0x27);
    temp_v15 = (unsigned long long)(unsigned int)pfVar10[0x39] << 0x20;
    temp_v16 = pfVar10[0x38];
    temp_v2 = temp_v19;
    FUN_001bc460();
    FUN_00375c74(param_1,pfVar10,temp_v28,&temp_v25);
    temp_v6 = 0;
    if (temp_v7 != 0) {
      temp_v21 = 0.5f;
      temp_v24 = 0x4222f9833fc90fdb;
      temp_v10 = (float)((unsigned long long)temp_v15 >> 0x20) * 0.5f;
      temp_v22 = 0x400000003f800000;
      temp_v20 = CONCAT44(temp_v2,temp_v10 * temp_v14);
      temp_v18 = (unsigned long long)(unsigned int)(temp_v16 * 0.5f * temp_v14) << 0x20;
      do {
        if ((int)temp_v8 <= (int)pfVar7[4]) {
          if (temp_v30 == 0.0f) {
            temp_v2 = -NAN;
          }
          else {
            temp_v2 = -NAN;
          }
          pfVar7[4] = temp_v2;
          FUN_002fe2e8(param_1,pfVar7);
        }
        temp_v17 = (unsigned int)((unsigned long long)temp_v18 >> 0x20);
        temp_v1 = (unsigned int)((unsigned long long)temp_v15 >> 0x20);
        temp_v2 = pfVar7[4];
        if (temp_v2 != -NAN) {
          if (temp_v2 != -NAN) {
            temp_v27 = *pfVar7;
            fStack_7c = pfVar7[1];
            fStack_78 = pfVar7[2];
            fStack_74 = pfVar7[3];
            DAT_006472ec = *pfVar7;
            DAT_006472f0 = pfVar7[1];
            DAT_006472f4 = pfVar7[2];
            DAT_006472f8 = pfVar7[3];
            temp_v3 = FUN_0037a844();
            temp_v10 = (float)((unsigned long long)temp_v20 >> 0x20);
            if (temp_v3 != 0) {
              temp_v23 = (float)((unsigned long long)temp_v22 >> 0x20);
              temp_v11 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v11 = (float)((unsigned long long)temp_v18 >> 0x20) *
                       ((temp_v11 * temp_v23 - temp_v14) + (float)temp_v22) + pfVar8[3] * temp_v14;
              temp_v4 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v10 < temp_v11) << 0x1f) |
                      ((unsigned int)(temp_v10 == temp_v11) << 0x1e);
              in_fpscr = temp_v4 | ((unsigned int)((temp_v10 != temp_v10) || (temp_v11 != temp_v11)) << 0x1c);
              temp_v0 = (unsigned char)(temp_v4 >> 0x18);
              if (!(unsigned char)((temp_v0 >> 6) & 1) && temp_v0 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                temp_v11 = temp_v10;
              }
              temp_v13 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
              DAT_006472dc = *pfVar8 * temp_v11;
              temp_v12 = pfVar8[2] * temp_v11;
              temp_v10 = temp_v11 * pfVar8[1] -
                       ((float)temp_v20 * ((temp_v13 * temp_v23 - temp_v14) + (float)temp_v22) +
                       temp_v10 * temp_v14);
            }
            else {
              temp_v11 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v11 = pfVar8[3] + temp_v16 * temp_v11;
              in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v10 <= temp_v11) << 0x1d);
              if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
                temp_v11 = temp_v10;
              }
              temp_v10 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
              DAT_006472dc = *pfVar8 * temp_v11;
              temp_v12 = pfVar8[2] * temp_v11;
              temp_v10 = pfVar8[1] * temp_v11 - (float)((unsigned long long)temp_v15 >> 0x20) * temp_v10;
            }
            DAT_006472dc = DAT_006472dc + DAT_006472ec;
            temp_v10 = temp_v10 + DAT_006472f0;
            temp_v12 = temp_v12 + DAT_006472f4;
            temp_v11 = temp_v19 + DAT_006472f8;
            DAT_006472e0 = temp_v10;
            DAT_006472e4 = temp_v12;
            DAT_006472e8 = temp_v11;
            *pfVar7 = DAT_006472dc;
            pfVar7[1] = temp_v10;
            pfVar7[2] = temp_v12;
            pfVar7[3] = temp_v11;
            FUN_00321d7c(pfVar7,pfVar10,temp_v2,&temp_v27);
            pfVar7[6] = pfVar7[6] * pfVar8[4];
            temp_v10 = pfVar7[7];
            temp_v11 = pfVar8[6];
            pfVar7[7] = temp_v10 * temp_v11;
            temp_v10 = temp_v10 * temp_v11 + pfVar8[5];
            pfVar7[7] = temp_v10;
            FUN_0027134c(param_1,pfVar7);
            temp_v3 = effGetFrameStep();
            pfVar7[4] = (float)(temp_v3 + (int)temp_v2);
          }
          else if (temp_v25 != 0) {
            FUN_00514540(0);
            temp_v2 = (float)VectorSignedToFloat(pfVar10[0x3a],(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v2 = (temp_v10 - temp_v21) * (float)((unsigned long long)temp_v22 >> 0x20) * temp_v2 * temp_v21;
            temp_v10 = temp_v2 * 0.017453292f - (float)temp_v24;
            FUN_00514540(0);
            temp_v10 = temp_v10 * (float)((unsigned long long)temp_v24 >> 0x20);
            temp_v11 = (((float)temp_v22 - pfVar10[0x35]) + temp_v2 * pfVar10[0x35]) * pfVar10[0x34];
            temp_v2 = temp_v10;
            FUN_001b63b0();
            temp_v12 = temp_v11 - (float)temp_v22;
            temp_v10 = temp_v10 * temp_v11;
            FUN_001a1ee0();
            DAT_006472e4 = temp_v2 * temp_v11;
            temp_v2 = romwright_sqrt_4(temp_v10 * temp_v10 + temp_v12 * temp_v12 + DAT_006472e4 * DAT_006472e4);
            temp_v11 = (float)((unsigned long long)temp_v20 >> 0x20);
            temp_v4 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v2 < temp_v11) << 0x1f) |
                    ((unsigned int)(temp_v2 == temp_v11) << 0x1e);
            temp_v9 = temp_v4 | ((unsigned int)((temp_v2 != temp_v2) || (temp_v11 != temp_v11)) << 0x1c);
            temp_v0 = (unsigned char)(temp_v4 >> 0x18);
            DAT_006472dc = temp_v10;
            DAT_006472e0 = temp_v12;
            if (!(unsigned char)((temp_v0 >> 6) & 1) && temp_v0 >> 7 == ((unsigned char)(temp_v9 >> 0x1c) & 1)) {
              DAT_006472dc = temp_v10 / temp_v2;
              DAT_006472e0 = temp_v12 / temp_v2;
              DAT_006472e4 = DAT_006472e4 / temp_v2;
            }
            DAT_006472e8 = temp_v19;
            if ((temp_v26 & 1) == 0) {
              temp_v11 = DAT_006472dc * DAT_00647320;
              temp_v12 = DAT_006472dc * DAT_00647324;
              temp_v10 = DAT_006472dc * DAT_00647328;
              temp_v19 = DAT_006472e0 * DAT_00647334;
              temp_v2 = DAT_006472e0 * DAT_00647338;
              DAT_006472dc = DAT_006472dc * DAT_0064731c + DAT_006472e0 * DAT_0064732c +
                             DAT_006472e4 * DAT_0064733c;
              DAT_006472e0 = temp_v11 + DAT_006472e0 * DAT_00647330 + DAT_006472e4 * DAT_00647340;
              temp_v2 = temp_v10 + temp_v2 + DAT_006472e4 * DAT_00647348;
              DAT_006472e4 = temp_v12 + temp_v19 + DAT_006472e4 * DAT_00647344;
              DAT_006472e8 = temp_v2;
            }
            temp_v19 = DAT_006472e8;
            temp_v11 = DAT_006472e4;
            temp_v10 = DAT_006472e0;
            temp_v18 = CONCAT44(temp_v17,DAT_006472dc);
            temp_v15 = CONCAT44(temp_v1,DAT_006472e0);
            *pfVar8 = DAT_006472dc;
            pfVar8[1] = temp_v10;
            pfVar8[2] = temp_v11;
            FUN_00514540(0);
            temp_v2 = romwright_fabs_4((((float)temp_v22 - pfVar10[0x37]) + temp_v2 * pfVar10[0x37]) * pfVar10[0x36]);
            pfVar8[3] = temp_v2;
            FUN_00514540(0);
            DAT_006472dc = (float)temp_v18;
            temp_v10 = (float)((unsigned long long)temp_v20 >> 0x20);
            DAT_006472e0 = (float)temp_v15;
            DAT_006472ec = (((float)temp_v22 - pfVar10[0x33]) + temp_v2 * pfVar10[0x33]) * pfVar10[0x32]
            ;
            in_fpscr = (temp_v9 & 0xfffffff) | ((unsigned int)(temp_v10 <= pfVar10[0x36]) << 0x1d);
            DAT_006472e4 = temp_v11;
            if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
              DAT_006472dc = -DAT_006472dc;
              DAT_006472e0 = -DAT_006472e0;
              DAT_006472e4 = -temp_v11;
            }
            if ((temp_v26 & 1) != 0) {
              DAT_006472dc = DAT_006472dc * DAT_006472ec;
              DAT_006472e0 = DAT_006472e0 * DAT_006472ec;
              DAT_006472e4 = DAT_006472e4 * DAT_006472ec;
              temp_v2 = temp_v19 * temp_v10;
              DAT_006472f0 = DAT_006472ec;
              DAT_006472f4 = DAT_006472ec;
              DAT_006472f8 = temp_v10;
            }
            else {
              DAT_006472dc = DAT_006472dc * DAT_006472ec;
              DAT_006472e0 = DAT_006472e0 * DAT_006472ec;
              DAT_006472e4 = DAT_006472e4 * DAT_006472ec;
              DAT_006472ec = *pfVar10;
              DAT_006472f0 = pfVar10[1];
              DAT_006472f4 = pfVar10[2];
              DAT_006472f8 = pfVar10[3];
              DAT_006472dc = DAT_006472dc + DAT_006472ec;
              DAT_006472e0 = DAT_006472e0 + DAT_006472f0;
              DAT_006472e4 = DAT_006472e4 + DAT_006472f4;
              temp_v2 = temp_v19 * temp_v10 + DAT_006472f8;
            }
            temp_v23 = DAT_006472e4;
            temp_v12 = DAT_006472e0;
            temp_v11 = DAT_006472dc;
            DAT_006472e8 = temp_v2;
            pfVar7[3] = temp_v2;
            *pfVar7 = temp_v11;
            pfVar7[1] = temp_v12;
            pfVar7[2] = temp_v23;
            FUN_00514540(0);
            temp_v11 = pfVar10[0x1b];
            pfVar5 = temp_v29;
            if (temp_v29 == (float *)0x2) {
              pfVar5 = pfVar8 + 5;
            }
            pfVar8[4] = ((float)temp_v22 - temp_v11) + temp_v2 * temp_v11;
            if (temp_v29 == (float *)0x2) {
              *pfVar5 = temp_v10;
              pfVar5[1] = (float)temp_v22;
            }
            else {
              FUN_00514540(0);
              temp_v2 = pfVar10[0x26];
              pfVar8[6] = ((float)temp_v22 - temp_v2) + temp_v11 * temp_v2;
              if (temp_v29 != (float *)0x1) {
                pfVar8[5] = temp_v10;
              }
              else {
                FUN_00514540(0);
                temp_v4 = 0;
                pfVar8[5] = temp_v2 * 6.2831855f;
                FUN_00514500();
                if ((temp_v4 & 1) != 0) {
                  pfVar8[6] = -pfVar8[6];
                }
              }
            }
            temp_v27 = *pfVar7;
            fStack_7c = pfVar7[1];
            fStack_78 = pfVar7[2];
            fStack_74 = pfVar7[3];
            pfVar7[4] = 0.0f;
            if (temp_v28[0] != '\0') {
              FUN_00514500(0);
              __aeabi_uidivmod();
              DAT_006472ec = *pfVar7;
              DAT_006472f8 = pfVar7[3];
              DAT_006472f0 = pfVar7[1];
              DAT_006472f4 = pfVar7[2];
              temp_v11 = (float)VectorUnsignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v2 = pfVar8[3] * temp_v11 + temp_v16 * temp_v11 * temp_v11 * temp_v21;
              in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v10 <= temp_v2) << 0x1d);
              if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
                temp_v2 = temp_v10;
              }
              DAT_006472dc = *pfVar8 * temp_v2 + DAT_006472ec;
              temp_v10 = (pfVar8[1] * temp_v2 -
                       (float)((unsigned long long)temp_v15 >> 0x20) * temp_v11 * temp_v11 * temp_v21) + DAT_006472f0
              ;
              temp_v2 = pfVar8[2] * temp_v2 + DAT_006472f4;
              temp_v12 = temp_v19 + DAT_006472f8;
              DAT_006472e0 = temp_v10;
              DAT_006472e4 = temp_v2;
              DAT_006472e8 = temp_v12;
              *pfVar7 = DAT_006472dc;
              pfVar7[1] = temp_v10;
              pfVar7[2] = temp_v2;
              pfVar7[3] = temp_v12;
              pfVar7[4] = (float)(int)temp_v11;
            }
            FUN_00321d7c(pfVar7,pfVar10,pfVar7[4],&temp_v27);
            pfVar7[6] = pfVar7[6] * pfVar8[4];
            temp_v2 = pfVar7[7];
            temp_v10 = pfVar8[6];
            pfVar7[7] = temp_v2 * temp_v10;
            temp_v10 = temp_v2 * temp_v10 + pfVar8[5];
            pfVar7[7] = temp_v10;
            if (temp_v28[0] != '\0') {
              FUN_00321e98(param_1,pfVar7);
              temp_v3 = effGetFrameStep();
              pfVar7[4] = (float)(temp_v3 + (int)pfVar7[4]);
            }
            temp_v25 = temp_v25 - 1;
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
