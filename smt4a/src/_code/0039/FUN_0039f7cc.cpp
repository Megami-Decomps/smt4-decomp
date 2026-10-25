/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039f7cc` (_code @ 0x39f7cc, 0x830 bytes) from smt4a.cxi.
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
int FUN_00375c74(int, unsigned int *, char [4], int *);
int randomAdvanceShiftRegister(...);
int shiftRandomNextFraction(...);
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
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
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
/* Supplied declaration required: randomAdvanceShiftRegister. */
/* Supplied declaration required: shiftRandomNextFraction. */
/* Supplied declaration required: __aeabi_uidivmod. */


void FUN_0039f7cc(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 16 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  float temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  float *pfVar6;
  float *pfVar7;
  unsigned int *puVar8;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int in_fpscr;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  unsigned int temp_v11;
  unsigned long long temp_v12;
  long long temp_v13;
  float temp_v14;
  unsigned long long temp_v15;
  long long temp_v16;
  float temp_v17;
  unsigned long long temp_v18;
  unsigned long long temp_v19;
  float temp_v20;
  float temp_v21;
  unsigned long long temp_v22;
  int temp_v23;
  float temp_v24;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  char temp_v25 [4];
  unsigned int temp_v26;
  int temp_v27;
  
  temp_v0 = effGetFrameStep();
  temp_v1 = *(unsigned int *)(param_1 + 0xc);
  puVar8 = *(unsigned int **)(param_1 + 0x20);
  temp_v7 = *(unsigned int *)(param_1 + 4);
  pfVar6 = *(float **)(param_1 + 0x18);
  pfVar7 = *(float **)(param_1 + 0x1c);
  temp_v11 = VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v13 = (unsigned long long)temp_v11 << 0x20;
  temp_v6 = puVar8[0x2e];
  if (temp_v6 != 0) {
    temp_v27 = puVar8[8];
    DAT_006472dc = (float)puVar8[4];
    DAT_006472e0 = (float)puVar8[5];
    DAT_006472e4 = (float)puVar8[6];
    DAT_006472e8 = (float)puVar8[7];
    temp_v26 = (unsigned int)*(unsigned char *)(puVar8 + 0x27);
    temp_v14 = (float)puVar8[0x37];
    temp_v16 = (unsigned long long)(unsigned int)puVar8[0x36] << 0x20;
    temp_v18 = romwright_piece_4_4(*puVar8,puVar8[1]);
    temp_v0 = puVar8[2];
    temp_v17 = (float)puVar8[3];
    FUN_001bc460();
    temp_v10 = (float)((unsigned long long)temp_v13 >> 0x20);
    FUN_00375c74(param_1,puVar8,temp_v25,&temp_v23);
    temp_v11 = 0;
    if (temp_v7 != 0) {
      temp_v22 = 0x40c90fdb3f800000;
      temp_v19 = romwright_piece_4_4(0x3f000000,temp_v0);
      temp_v21 = 40.743664f;
      do {
        if (temp_v6 <= (int)pfVar6[4]) {
          if (temp_v27 == 0) {
            temp_v2 = -NAN;
          }
          else {
            temp_v2 = -NAN;
          }
          pfVar6[4] = temp_v2;
          FUN_002fe2e8(param_1,pfVar6);
        }
        temp_v20 = (float)((unsigned long long)temp_v13 >> 0x20);
        temp_v2 = pfVar6[4];
        if (temp_v2 != -NAN) {
          if (temp_v2 != -NAN) {
            temp_v24 = *pfVar6;
            fStack_7c = pfVar6[1];
            fStack_78 = pfVar6[2];
            fStack_74 = pfVar6[3];
            temp_v10 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v8 = (float)((unsigned long long)temp_v16 >> 0x20);
            temp_v9 = (float)((unsigned long long)temp_v19 >> 0x20);
            if (((unsigned int)*(unsigned char *)(puVar8 + 0x39) & ((temp_v11 & 1) - 1)) == 0) {
              temp_v8 = pfVar7[2] + temp_v8 * temp_v10 * temp_v9;
            }
            else {
              temp_v8 = pfVar7[2] - temp_v8 * temp_v10 * temp_v9;
            }
            temp_v8 = temp_v8 * temp_v10;
            temp_v3 = FUN_0037a844();
            if (temp_v3 != 0) {
              temp_v10 = pfVar7[4] +
                       -((float)((unsigned long long)temp_v19 >> 0x20) * temp_v14) * temp_v20 *
                       ((temp_v10 * 2.0f - temp_v20) + (float)temp_v22) + pfVar7[5] * temp_v20;
            }
            else {
              temp_v10 = (pfVar7[4] - temp_v14 * temp_v10) + pfVar7[5];
            }
            pfVar7[4] = temp_v10;
            temp_v10 = *pfVar7 + pfVar7[1] * temp_v20;
            temp_v13 = CONCAT44(temp_v20,temp_v10);
            *pfVar7 = temp_v10;
            temp_v20 = (pfVar7[3] + temp_v8) * temp_v21;
            temp_v10 = temp_v20;
            FUN_001b63b0();
            temp_v20 = temp_v20 * (float)temp_v13;
            temp_v8 = pfVar7[4];
            FUN_001a1ee0();
            DAT_006472e4 = temp_v10 * (float)temp_v13;
            DAT_006472e8 = (float)temp_v16;
            DAT_006472dc = temp_v20;
            DAT_006472e0 = temp_v8;
            if ((temp_v1 & 1) == 0) {
              temp_v10 = DAT_006472e4 * DAT_00647348;
              DAT_006472ec = (float)((unsigned long long)temp_v18 >> 0x20);
              DAT_006472f0 = (float)temp_v18;
              DAT_006472f4 = (float)temp_v19;
              DAT_006472dc = temp_v20 * DAT_0064731c + temp_v8 * DAT_0064732c +
                             DAT_006472e4 * DAT_0064733c + DAT_006472ec;
              DAT_006472e0 = temp_v20 * DAT_00647320 + temp_v8 * DAT_00647330 +
                             DAT_006472e4 * DAT_00647340 + DAT_006472f0;
              DAT_006472e4 = temp_v20 * DAT_00647324 + temp_v8 * DAT_00647334 +
                             DAT_006472e4 * DAT_00647344 + DAT_006472f4;
              DAT_006472e8 = temp_v20 * DAT_00647328 + temp_v8 * DAT_00647338 + temp_v10 + temp_v17;
              DAT_006472f8 = temp_v17;
            }
            temp_v8 = DAT_006472e8;
            temp_v20 = DAT_006472e4;
            temp_v10 = DAT_006472e0;
            *pfVar6 = DAT_006472dc;
            pfVar6[1] = temp_v10;
            pfVar6[2] = temp_v20;
            pfVar6[3] = temp_v8;
            FUN_00321d7c(pfVar6,puVar8,temp_v2,&temp_v24);
            pfVar6[6] = pfVar6[6] * pfVar7[6];
            temp_v20 = pfVar6[7];
            temp_v10 = pfVar7[8];
            pfVar6[7] = temp_v20 * temp_v10;
            temp_v10 = temp_v20 * temp_v10 + pfVar7[7];
            pfVar6[7] = temp_v10;
            FUN_0027134c(param_1,pfVar6);
            temp_v3 = effGetFrameStep();
            pfVar6[4] = (float)(temp_v3 + (int)temp_v2);
          }
          else if (temp_v23 != 0) {
            shiftRandomNextFraction(0);
            temp_v8 = (float)temp_v22;
            temp_v12 = CONCAT44(temp_v20,temp_v21);
            temp_v21 = (temp_v10 * 3.1415927f * (float)puVar8[0x38] +
                     (temp_v8 - (float)puVar8[0x38]) * 3.1415927f * (float)((unsigned long long)temp_v19 >> 0x20)
                     ) * temp_v21;
            temp_v15 = CONCAT44(temp_v14,temp_v21);
            FUN_001a1ee0();
            temp_v10 = (float)puVar8[0x32];
            temp_v2 = (float)puVar8[0x33];
            temp_v14 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
            *pfVar7 = temp_v10 * temp_v21;
            temp_v10 = temp_v2 * temp_v21 - temp_v10 * temp_v21;
            pfVar7[1] = temp_v10 / temp_v14;
            if (((unsigned int)*(unsigned char *)(puVar8 + 0x39) & ((temp_v11 & 1) - 1)) != 0) {
              shiftRandomNextFraction(0);
              temp_v10 = -((float)puVar8[0x34] *
                        ((temp_v8 - (float)puVar8[0x35]) + temp_v10 * (float)puVar8[0x35]));
            }
            else {
              shiftRandomNextFraction(0);
              temp_v10 = ((temp_v8 - (float)puVar8[0x35]) + temp_v10 * (float)puVar8[0x35]) *
                       (float)puVar8[0x34];
            }
            pfVar7[2] = temp_v10;
            shiftRandomNextFraction(0);
            temp_v21 = (float)temp_v12;
            pfVar7[3] = temp_v10 * (float)((unsigned long long)temp_v22 >> 0x20);
            temp_v10 = (float)temp_v15;
            FUN_001b63b0();
            temp_v14 = (float)((unsigned long long)temp_v15 >> 0x20);
            temp_v2 = (float)puVar8[0x32];
            temp_v9 = (float)puVar8[0x33];
            temp_v20 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
            pfVar7[4] = temp_v2 * temp_v10;
            pfVar7[5] = (temp_v9 * temp_v10 - temp_v2 * temp_v10) / temp_v20;
            temp_v13 = romwright_piece_4_4((int)((unsigned long long)temp_v12 >> 0x20),*pfVar7);
            temp_v10 = pfVar7[3] * temp_v21;
            FUN_001b63b0();
            temp_v10 = temp_v10 * (float)temp_v13;
            temp_v20 = pfVar7[4];
            temp_v2 = pfVar7[3] * temp_v21;
            FUN_001a1ee0();
            DAT_006472e4 = temp_v2 * (float)temp_v13;
            DAT_006472e8 = (float)temp_v16;
            DAT_006472dc = temp_v10;
            DAT_006472e0 = temp_v20;
            if ((temp_v1 & 1) == 0) {
              temp_v2 = DAT_006472e4 * DAT_00647348;
              DAT_006472ec = (float)((unsigned long long)temp_v18 >> 0x20);
              DAT_006472f0 = (float)temp_v18;
              DAT_006472f4 = (float)temp_v19;
              DAT_006472dc = temp_v10 * DAT_0064731c + temp_v20 * DAT_0064732c +
                             DAT_006472e4 * DAT_0064733c + DAT_006472ec;
              DAT_006472e0 = temp_v10 * DAT_00647320 + temp_v20 * DAT_00647330 +
                             DAT_006472e4 * DAT_00647340 + DAT_006472f0;
              DAT_006472e4 = temp_v10 * DAT_00647324 + temp_v20 * DAT_00647334 +
                             DAT_006472e4 * DAT_00647344 + DAT_006472f4;
              DAT_006472e8 = temp_v10 * DAT_00647328 + temp_v20 * DAT_00647338 + temp_v2 + temp_v17;
              DAT_006472f8 = temp_v17;
            }
            temp_v9 = DAT_006472e8;
            temp_v20 = DAT_006472e4;
            temp_v2 = DAT_006472e0;
            temp_v10 = DAT_006472dc;
            *pfVar6 = DAT_006472dc;
            pfVar6[1] = temp_v2;
            pfVar6[2] = temp_v20;
            pfVar6[3] = temp_v9;
            shiftRandomNextFraction(0);
            temp_v10 = (temp_v8 - (float)puVar8[0x1b]) + temp_v10 * (float)puVar8[0x1b];
            pfVar7[6] = temp_v10;
            if (temp_v26 != 2) {
              shiftRandomNextFraction(0);
              temp_v10 = (temp_v8 - (float)puVar8[0x26]) + temp_v10 * (float)puVar8[0x26];
              pfVar7[8] = temp_v10;
              if (temp_v26 != 1) {
                pfVar7[7] = 0.0f;
              }
              else {
                shiftRandomNextFraction(0);
                temp_v4 = 0;
                pfVar7[7] = temp_v10 * (float)((unsigned long long)temp_v22 >> 0x20);
                randomAdvanceShiftRegister();
                if ((temp_v4 & 1) != 0) {
                  pfVar7[8] = -pfVar7[8];
                }
              }
            }
            else {
              pfVar7[7] = 0.0f;
              pfVar7[8] = temp_v8;
            }
            temp_v0 = (unsigned int)((unsigned long long)temp_v13 >> 0x20);
            temp_v24 = *pfVar6;
            fStack_7c = pfVar6[1];
            fStack_78 = pfVar6[2];
            fStack_74 = pfVar6[3];
            pfVar6[4] = 0.0f;
            if (temp_v25[0] != '\0') {
              randomAdvanceShiftRegister(0);
              __aeabi_uidivmod();
              temp_v10 = (float)VectorUnsignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v13 = CONCAT44(temp_v0,temp_v10);
              pfVar7[4] = pfVar7[4] - temp_v14 * temp_v10 * temp_v10 * (float)((unsigned long long)temp_v19 >> 0x20);
              temp_v20 = *pfVar7 + pfVar7[1] * temp_v10;
              *pfVar7 = temp_v20;
              temp_v10 = pfVar7[3] * temp_v21;
              FUN_001b63b0();
              temp_v10 = temp_v10 * temp_v20;
              temp_v8 = pfVar7[4];
              temp_v2 = pfVar7[3] * temp_v21;
              FUN_001a1ee0();
              DAT_006472e4 = temp_v2 * temp_v20;
              DAT_006472e8 = (float)temp_v16;
              DAT_006472dc = temp_v10;
              DAT_006472e0 = temp_v8;
              if ((temp_v1 & 1) == 0) {
                temp_v2 = DAT_006472e4 * DAT_00647348;
                DAT_006472ec = (float)((unsigned long long)temp_v18 >> 0x20);
                DAT_006472f0 = (float)temp_v18;
                DAT_006472f4 = (float)temp_v19;
                DAT_006472dc = temp_v10 * DAT_0064731c + temp_v8 * DAT_0064732c +
                               DAT_006472e4 * DAT_0064733c + DAT_006472ec;
                DAT_006472e0 = temp_v10 * DAT_00647320 + temp_v8 * DAT_00647330 +
                               DAT_006472e4 * DAT_00647340 + DAT_006472f0;
                DAT_006472e4 = temp_v10 * DAT_00647324 + temp_v8 * DAT_00647334 +
                               DAT_006472e4 * DAT_00647344 + DAT_006472f4;
                DAT_006472e8 = temp_v10 * DAT_00647328 + temp_v8 * DAT_00647338 + temp_v2 + temp_v17;
                DAT_006472f8 = temp_v17;
              }
              temp_v20 = DAT_006472e8;
              temp_v2 = DAT_006472e4;
              temp_v10 = DAT_006472e0;
              *pfVar6 = DAT_006472dc;
              pfVar6[1] = temp_v10;
              pfVar6[4] = (float)(int)(float)temp_v13;
              pfVar6[2] = temp_v2;
              pfVar6[3] = temp_v20;
            }
            FUN_00321d7c(pfVar6,puVar8,pfVar6[4],&temp_v24);
            pfVar6[6] = pfVar6[6] * pfVar7[6];
            temp_v2 = pfVar6[7];
            temp_v10 = pfVar7[8];
            pfVar6[7] = temp_v2 * temp_v10;
            temp_v10 = temp_v2 * temp_v10 + pfVar7[7];
            pfVar6[7] = temp_v10;
            if (temp_v25[0] != '\0') {
              FUN_00321e98(param_1,pfVar6);
              temp_v3 = effGetFrameStep();
              pfVar6[4] = (float)(temp_v3 + (int)pfVar6[4]);
            }
            temp_v23 = temp_v23 - 1;
          }
        }
        temp_v11 = temp_v11 + 1;
        pfVar7 = pfVar7 + 9;
        pfVar6 = pfVar6 + 10;
      } while (temp_v11 < temp_v7);
    }
  }
  return;
}

} /* extern "C" */
