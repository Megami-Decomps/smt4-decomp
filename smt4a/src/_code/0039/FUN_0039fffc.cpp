/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039fffc` (_code @ 0x39fffc, 0x8f0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a1ee0(void);
int effGetFrameStep(void);
int FUN_001bc460(void);
int FUN_0027134c(int, float *);
int FUN_002fe2e8(int, float *);
int FUN_00321d7c(...);
int FUN_00321e98(...);
int FUN_0034f8b4(...);
int FUN_00375c74(int, float *, char [4], int *);
int randomAdvanceShiftRegister(...);
int shiftRandomNextFraction(...);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);
int __aeabi_uidivmod(void);

/* stack frame of param_1: 6 slot(s), 21 byte(s) */
typedef struct {
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned char sp68; /* 0x68: local_68 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
} param_1_stack;

extern float DAT_005c1ea0; /* 0x5c1ea0 */
extern float DAT_005c1ea4; /* 0x5c1ea4 */
extern float DAT_005c1ea8; /* 0x5c1ea8 */
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
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001a1ee0. */
/* Supplied declaration required: effGetFrameStep. */
/* Supplied declaration required: FUN_001bc460. */
/* Supplied declaration required: FUN_0027134c. */
/* Supplied declaration required: FUN_002fe2e8. */
/* Supplied declaration required: FUN_00321d7c. */
/* Supplied declaration required: FUN_00321e98. */
/* Supplied declaration required: FUN_0034f8b4. */
/* Supplied declaration required: FUN_00375c74. */
extern int FUN_0037a844(void);
/* Supplied declaration required: randomAdvanceShiftRegister. */
/* Supplied declaration required: shiftRandomNextFraction. */
/* Supplied declaration required: __aeabi_uidivmod. */


void FUN_0039fffc(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 16 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  float temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  unsigned int temp_v7;
  float temp_v8;
  unsigned int temp_v9;
  unsigned int in_fpscr;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  unsigned long long temp_v22;
  float temp_v23;
  unsigned long long temp_v24;
  int temp_v25;
  float temp_v26;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  char temp_v27 [4];
  unsigned int temp_v28;
  float temp_v29;
  
  temp_v1 = effGetFrameStep();
  temp_v2 = *(unsigned int *)(param_1 + 0xc);
  pfVar9 = *(float **)(param_1 + 0x20);
  temp_v9 = *(unsigned int *)(param_1 + 4);
  pfVar7 = *(float **)(param_1 + 0x18);
  pfVar8 = *(float **)(param_1 + 0x1c);
  temp_v16 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v8 = pfVar9[0x2e];
  if (temp_v8 != 0.0f) {
    temp_v1 = 0;
    DAT_006472dc = pfVar9[4];
    DAT_006472e0 = pfVar9[5];
    DAT_006472e4 = pfVar9[6];
    DAT_006472e8 = pfVar9[7];
    temp_v29 = pfVar9[8];
    temp_v28 = (unsigned int)*(unsigned char *)(pfVar9 + 0x27);
    temp_v18 = pfVar9[0x35];
    FUN_001bc460();
    temp_v17 = temp_v16;
    FUN_00375c74(param_1,pfVar9,temp_v27,&temp_v25);
    temp_v7 = 0;
    if (temp_v9 != 0) {
      temp_v24 = romwright_piece_4_4(0x40c90fdb,temp_v1);
      temp_v21 = 1.0f;
      temp_v22 = 0x3f0000004222f983;
      temp_v23 = 2.0f;
      do {
        if ((int)temp_v8 <= (int)pfVar7[4]) {
          if (temp_v29 == 0.0f) {
            temp_v3 = -NAN;
          }
          else {
            temp_v3 = -NAN;
          }
          pfVar7[4] = temp_v3;
          FUN_002fe2e8(param_1,pfVar7);
        }
        temp_v3 = pfVar7[4];
        if (temp_v3 != -NAN) {
          if (temp_v3 != -NAN) {
            temp_v26 = *pfVar7;
            fStack_74 = pfVar7[1];
            fStack_70 = pfVar7[2];
            fStack_6c = pfVar7[3];
            temp_v16 = pfVar8[6] * (float)temp_v22;
            FUN_001a1ee0();
            temp_v10 = pfVar8[8] * (temp_v16 - pfVar8[7]);
            *pfVar7 = *pfVar7 + pfVar8[3] * temp_v10;
            pfVar7[1] = pfVar7[1] + pfVar8[4] * temp_v10;
            pfVar7[2] = pfVar7[2] + pfVar8[5] * temp_v10;
            temp_v4 = FUN_0037a844();
            if (temp_v4 != 0) {
              temp_v10 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v10 = -((float)((unsigned long long)temp_v22 >> 0x20) * temp_v18) * temp_v17 *
                       ((temp_v10 * temp_v23 - temp_v17) + temp_v21) + pfVar8[0xb] * temp_v17;
            }
            else {
              temp_v10 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v10 = pfVar8[0xb] - temp_v18 * temp_v10;
            }
            *pfVar7 = *pfVar7 + *pfVar8 * temp_v10;
            pfVar7[1] = pfVar7[1] + pfVar8[1] * temp_v10;
            pfVar7[2] = pfVar7[2] + pfVar8[2] * temp_v10;
            pfVar8[6] = pfVar8[6] + pfVar8[10] * temp_v17;
            pfVar8[8] = pfVar8[8] + pfVar8[9] * temp_v17;
            pfVar8[7] = temp_v16;
            FUN_00321d7c(pfVar7,pfVar9,temp_v3,&temp_v26);
            pfVar7[6] = pfVar7[6] * pfVar8[0xc];
            temp_v16 = pfVar7[7];
            temp_v10 = pfVar8[0xe];
            pfVar7[7] = temp_v16 * temp_v10;
            temp_v16 = temp_v16 * temp_v10 + pfVar8[0xd];
            pfVar7[7] = temp_v16;
            FUN_0034f8b4(pfVar9 + 0x3e,temp_v3,pfVar9[0x2e]);
            pfVar7[8] = temp_v16;
            FUN_0034f8b4(pfVar9 + 0x49,temp_v3,pfVar9[0x2e]);
            pfVar7[9] = temp_v16;
            FUN_0027134c(param_1,pfVar7);
            temp_v4 = effGetFrameStep();
            pfVar7[4] = (float)(temp_v4 + (int)temp_v3);
          }
          else if (temp_v25 != 0) {
            if ((temp_v2 & 1) != 0) {
              pfVar8[1] = temp_v21;
              *pfVar8 = (float)temp_v24;
              pfVar8[2] = (float)temp_v24;
            }
            else {
              temp_v16 = DAT_005c1ea0 * DAT_0064731c + DAT_005c1ea4 * DAT_0064732c +
                       DAT_005c1ea8 * DAT_0064733c;
              DAT_006472e8 = DAT_005c1ea0 * DAT_00647328 + DAT_005c1ea4 * DAT_00647338 +
                             DAT_005c1ea8 * DAT_00647348;
              temp_v3 = DAT_005c1ea0 * DAT_00647320 + DAT_005c1ea4 * DAT_00647330 +
                      DAT_005c1ea8 * DAT_00647340;
              temp_v10 = DAT_005c1ea0 * DAT_00647324 + DAT_005c1ea4 * DAT_00647334 +
                       DAT_005c1ea8 * DAT_00647344;
              DAT_006472dc = temp_v16;
              DAT_006472e0 = temp_v3;
              DAT_006472e4 = temp_v10;
              *pfVar8 = temp_v16;
              pfVar8[1] = temp_v3;
              pfVar8[2] = temp_v10;
            }
            shiftRandomNextFraction(0);
            temp_v16 = temp_v16 - (float)((unsigned long long)temp_v22 >> 0x20);
            temp_v10 = (float)temp_v24;
            temp_v19 = temp_v16 * temp_v23;
            temp_v3 = temp_v10;
            shiftRandomNextFraction(0);
            DAT_006472e4 = (temp_v16 - (float)((unsigned long long)temp_v22 >> 0x20)) * temp_v23;
            temp_v16 = romwright_sqrt_4(temp_v19 * temp_v19 + temp_v10 * temp_v10 + DAT_006472e4 * DAT_006472e4);
            temp_v5 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v16 < temp_v10) << 0x1f) |
                    ((unsigned int)(temp_v16 == temp_v10) << 0x1e);
            in_fpscr = temp_v5 | ((unsigned int)((temp_v16 != temp_v16) || (temp_v10 != temp_v10)) << 0x1c);
            temp_v0 = (unsigned char)(temp_v5 >> 0x18);
            DAT_006472dc = temp_v19;
            DAT_006472e0 = temp_v10;
            if (!(unsigned char)((temp_v0 >> 6) & 1) && temp_v0 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
              DAT_006472dc = temp_v19 / temp_v16;
              DAT_006472e0 = temp_v10 / temp_v16;
              DAT_006472e4 = DAT_006472e4 / temp_v16;
            }
            DAT_006472e8 = temp_v10;
            if ((temp_v2 & 1) == 0) {
              temp_v14 = DAT_006472dc * DAT_00647320;
              temp_v15 = DAT_006472dc * DAT_00647324;
              temp_v19 = DAT_006472dc * DAT_00647328;
              temp_v10 = DAT_006472e0 * DAT_00647334;
              temp_v16 = DAT_006472e0 * DAT_00647338;
              DAT_006472dc = DAT_006472dc * DAT_0064731c + DAT_006472e0 * DAT_0064732c +
                             DAT_006472e4 * DAT_0064733c;
              DAT_006472e0 = temp_v14 + DAT_006472e0 * DAT_00647330 + DAT_006472e4 * DAT_00647340;
              temp_v16 = temp_v19 + temp_v16 + DAT_006472e4 * DAT_00647348;
              DAT_006472e4 = temp_v15 + temp_v10 + DAT_006472e4 * DAT_00647344;
              DAT_006472e8 = temp_v16;
            }
            temp_v15 = DAT_006472e8;
            temp_v14 = DAT_006472e4;
            temp_v19 = DAT_006472e0;
            temp_v10 = DAT_006472dc;
            pfVar8[3] = DAT_006472dc;
            pfVar8[4] = temp_v19;
            pfVar8[5] = temp_v14;
            shiftRandomNextFraction(0);
            temp_v16 = ((temp_v21 - pfVar9[0x34]) + temp_v16 * pfVar9[0x34]) * pfVar9[0x33];
            pfVar8[0xb] = temp_v16;
            shiftRandomNextFraction(0);
            temp_v11 = pfVar9[0x37];
            temp_v20 = ((temp_v21 - temp_v11) + temp_v16 * temp_v11) * pfVar9[0x36];
            shiftRandomNextFraction(0);
            temp_v16 = pfVar9[0x39];
            temp_v13 = pfVar9[0x38];
            pfVar8[8] = temp_v20;
            temp_v12 = (float)VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v20 = ((temp_v21 - temp_v16) + temp_v11 * temp_v16) * temp_v13 - temp_v20;
            pfVar8[9] = temp_v20 / temp_v12;
            shiftRandomNextFraction(0);
            temp_v16 = ((temp_v21 - pfVar9[0x3b]) + temp_v20 * pfVar9[0x3b]) * pfVar9[0x3a];
            pfVar8[10] = temp_v16;
            shiftRandomNextFraction(0);
            temp_v11 = (float)((unsigned long long)temp_v24 >> 0x20);
            pfVar8[6] = temp_v16 * temp_v11;
            temp_v16 = temp_v16 * temp_v11 * (float)temp_v22;
            FUN_001a1ee0();
            pfVar8[7] = temp_v16;
            shiftRandomNextFraction(0);
            DAT_006472ec = (temp_v16 - (float)((unsigned long long)temp_v22 >> 0x20)) * temp_v23 * pfVar9[0x32];
            if ((temp_v2 & 1) != 0) {
              DAT_006472dc = temp_v10 * DAT_006472ec;
              DAT_006472e0 = temp_v19 * DAT_006472ec;
              DAT_006472e4 = temp_v14 * DAT_006472ec;
              temp_v15 = temp_v15 * temp_v3;
              DAT_006472f0 = DAT_006472ec;
              DAT_006472f4 = DAT_006472ec;
              DAT_006472f8 = temp_v3;
            }
            else {
              temp_v10 = temp_v10 * DAT_006472ec;
              temp_v19 = temp_v19 * DAT_006472ec;
              temp_v14 = temp_v14 * DAT_006472ec;
              DAT_006472ec = *pfVar9;
              DAT_006472f0 = pfVar9[1];
              DAT_006472f4 = pfVar9[2];
              DAT_006472f8 = pfVar9[3];
              DAT_006472dc = temp_v10 + DAT_006472ec;
              DAT_006472e0 = temp_v19 + DAT_006472f0;
              DAT_006472e4 = temp_v14 + DAT_006472f4;
              temp_v15 = temp_v15 * temp_v3 + DAT_006472f8;
            }
            temp_v19 = DAT_006472e4;
            temp_v10 = DAT_006472e0;
            temp_v16 = DAT_006472dc;
            DAT_006472e8 = temp_v15;
            pfVar7[3] = temp_v15;
            *pfVar7 = temp_v16;
            pfVar7[1] = temp_v10;
            pfVar7[2] = temp_v19;
            shiftRandomNextFraction(0);
            temp_v16 = pfVar9[0x1b];
            pfVar8[0xc] = (temp_v21 - temp_v16) + temp_v15 * temp_v16;
            if (temp_v28 == 2) {
              pfVar8[0xd] = temp_v3;
              pfVar8[0xe] = temp_v21;
            }
            else {
              shiftRandomNextFraction(0);
              temp_v10 = pfVar9[0x26];
              pfVar8[0xe] = (temp_v21 - temp_v10) + temp_v16 * temp_v10;
              if (temp_v28 != 1) {
                pfVar8[0xd] = temp_v3;
              }
              else {
                shiftRandomNextFraction(0);
                temp_v5 = 0;
                pfVar8[0xd] = temp_v10 * temp_v11;
                randomAdvanceShiftRegister();
                if ((temp_v5 & 1) != 0) {
                  pfVar8[0xe] = -pfVar8[0xe];
                }
              }
            }
            temp_v26 = *pfVar7;
            fStack_74 = pfVar7[1];
            fStack_70 = pfVar7[2];
            fStack_6c = pfVar7[3];
            pfVar7[4] = 0.0f;
            if (temp_v27[0] != '\0') {
              randomAdvanceShiftRegister(0);
              __aeabi_uidivmod();
              temp_v10 = (float)VectorUnsignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v16 = pfVar8[0xb] * temp_v10 -
                       temp_v18 * temp_v10 * temp_v10 * (float)((unsigned long long)temp_v22 >> 0x20);
              *pfVar7 = *pfVar7 + *pfVar8 * temp_v16;
              pfVar7[1] = pfVar7[1] + pfVar8[1] * temp_v16;
              pfVar7[2] = pfVar7[2] + pfVar8[2] * temp_v16;
              temp_v16 = pfVar8[6] + pfVar8[10] * temp_v10;
              pfVar8[6] = temp_v16;
              temp_v16 = temp_v16 * (float)temp_v22;
              pfVar8[8] = pfVar8[8] + pfVar8[9] * temp_v10;
              FUN_001a1ee0();
              temp_v3 = pfVar8[8] * temp_v16;
              *pfVar7 = *pfVar7 + pfVar8[3] * temp_v3;
              pfVar7[1] = pfVar7[1] + pfVar8[4] * temp_v3;
              pfVar7[2] = pfVar7[2] + pfVar8[5] * temp_v3;
              pfVar8[6] = pfVar8[6] + pfVar8[10];
              pfVar8[8] = pfVar8[8] + pfVar8[9];
              pfVar8[7] = temp_v16;
              pfVar7[4] = (float)(int)temp_v10;
            }
            FUN_00321d7c(pfVar7,pfVar9,pfVar7[4],&temp_v26);
            pfVar7[6] = pfVar7[6] * pfVar8[0xc];
            temp_v16 = pfVar7[7];
            temp_v3 = pfVar8[0xe];
            pfVar7[7] = temp_v16 * temp_v3;
            temp_v16 = temp_v16 * temp_v3 + pfVar8[0xd];
            pfVar7[7] = temp_v16;
            FUN_0034f8b4(pfVar9 + 0x3e,0xffffffff,pfVar9[0x2e]);
            pfVar7[8] = temp_v16;
            FUN_0034f8b4(pfVar9 + 0x49,0xffffffff,pfVar9[0x2e]);
            pfVar7[9] = temp_v16;
            if (temp_v27[0] != '\0') {
              FUN_00321e98(param_1,pfVar7);
              temp_v4 = effGetFrameStep();
              pfVar7[4] = (float)(temp_v4 + (int)pfVar7[4]);
            }
            temp_v25 = temp_v25 - 1;
          }
        }
        temp_v7 = temp_v7 + 1;
        pfVar8 = pfVar8 + 0xf;
        pfVar7 = pfVar7 + 10;
      } while (temp_v7 < temp_v9);
    }
  }
  return;
}

} /* extern "C" */
