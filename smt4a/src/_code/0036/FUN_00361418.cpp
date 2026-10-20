/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00361418` (_code @ 0x361418, 0x834 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(...);
int FUN_001a1ee0(void);
int effGetFrameStep(void);
int FUN_001b63b0(void);
int FUN_0027134c(int, float *);
int FUN_002fe2e8(int, float *);
int FUN_00321d7c(...);
int FUN_00321e98(...);
int FUN_00375c74(int, unsigned int *, char [4], int *);
int FUN_00514500(...);
int FUN_00514540(...);
int FUN_005145f4(void);
int FUN_005147dc(void);
int FUN_00514904(void);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);
int __aeabi_uidivmod(void);

/* stack frame of param_1: 7 slot(s), 25 byte(s) */
typedef struct {
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned char sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spD4; /* 0xd4: local_d4 */
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
/* Supplied declaration required: FUN_0027134c. */
/* Supplied declaration required: FUN_002fe2e8. */
/* Supplied declaration required: FUN_00321d7c. */
/* Supplied declaration required: FUN_00321e98. */
/* Supplied declaration required: FUN_00375c74. */
extern int FUN_0037a844(void);
/* Supplied declaration required: FUN_00514500. */
/* Supplied declaration required: FUN_00514540. */
/* Supplied declaration required: FUN_005145f4. */
/* Supplied declaration required: FUN_005147dc. */
/* Supplied declaration required: FUN_00514904. */
/* Supplied declaration required: __aeabi_uidivmod. */


void FUN_00361418(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 18 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  float temp_v2;
  float temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  float *pfVar7;
  float *pfVar8;
  unsigned int temp_v7;
  unsigned int *puVar10;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int in_fpscr;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  long long temp_v17;
  unsigned long long temp_v18;
  unsigned long long temp_v19;
  float temp_v20;
  unsigned long long temp_v21;
  unsigned long long temp_v22;
  float temp_v23;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  unsigned int temp_v24;
  int temp_v25;
  char temp_v26 [4];
  int temp_v27;
  
  temp_v0 = effGetFrameStep();
  temp_v1 = *(unsigned int *)(param_1 + 0xc);
  puVar10 = *(unsigned int **)(param_1 + 0x20);
  temp_v9 = *(unsigned int *)(param_1 + 4);
  pfVar7 = *(float **)(param_1 + 0x1c);
  temp_v15 = (float)VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v8 = puVar10[0x2e];
  pfVar8 = *(float **)(param_1 + 0x18);
  if (temp_v8 != 0) {
    temp_v27 = puVar10[8];
    temp_v20 = 0.0f;
    temp_v24 = (unsigned int)*(unsigned char *)(puVar10 + 0x27);
    temp_v2 = (float)puVar10[3];
    temp_v17 = (unsigned long long)(unsigned int)puVar10[0x39] << 0x20;
    temp_v18 = romwright_piece_4_4(*puVar10,puVar10[0x38]);
    temp_v19 = *(unsigned long long *)(puVar10 + 1);
    temp_v16 = temp_v15;
    FUN_00375c74(param_1,puVar10,temp_v26,&temp_v25);
    temp_v7 = 0;
    if (temp_v9 != 0) {
      temp_v22 = 0x3f8000003f000000;
      temp_v21 = 0x40490fdb4222f983;
      do {
        if (temp_v8 <= (int)pfVar8[4]) {
          if (temp_v27 == 0) {
            temp_v3 = -NAN;
          }
          else {
            temp_v3 = -NAN;
          }
          pfVar8[4] = temp_v3;
          FUN_002fe2e8(param_1,pfVar8);
        }
        temp_v10 = (float)((unsigned long long)temp_v17 >> 0x20);
        temp_v3 = pfVar8[4];
        if (temp_v3 != -NAN) {
          if (temp_v3 != -NAN) {
            temp_v23 = *pfVar8;
            fStack_84 = pfVar8[1];
            fStack_80 = pfVar8[2];
            fStack_7c = pfVar8[3];
            temp_v12 = (float)temp_v22;
            temp_v11 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v15 = pfVar7[8] + (pfVar7[7] + (float)temp_v18 * temp_v11 * temp_v12) * temp_v11;
            temp_v4 = FUN_0037a844();
            if (temp_v4 == 0) {
              temp_v11 = -(temp_v10 * temp_v11);
            }
            else {
              temp_v11 = -(temp_v12 * temp_v10) * temp_v16 *
                       ((temp_v11 * 2.0f - temp_v16) + (float)((unsigned long long)temp_v22 >> 0x20)) +
                       temp_v20 * temp_v16;
            }
            pfVar7[9] = pfVar7[9] + temp_v11;
            pfVar7[5] = pfVar7[5] + pfVar7[6] * temp_v16;
            FUN_005147dc();
            FUN_00514904();
            FUN_005145f4();
            temp_v15 = temp_v15 * (float)temp_v21;
            temp_v12 = pfVar7[5];
            temp_v11 = temp_v15;
            FUN_001b63b0();
            temp_v17 = CONCAT44(temp_v10,temp_v15 * temp_v12);
            temp_v15 = temp_v20;
            FUN_001a1ee0();
            temp_v11 = temp_v11 * temp_v12;
            temp_v10 = (float)temp_v17;
            DAT_006472dc = temp_v10 * DAT_0064731c + temp_v15 * DAT_0064732c + temp_v11 * DAT_0064733c;
            DAT_006472e8 = temp_v10 * DAT_00647328 + temp_v15 * DAT_00647338 + temp_v11 * DAT_00647348;
            DAT_006472e0 = temp_v10 * DAT_00647320 + temp_v15 * DAT_00647330 + temp_v11 * DAT_00647340;
            DAT_006472e4 = temp_v10 * DAT_00647324 + temp_v15 * DAT_00647334 + temp_v11 * DAT_00647344;
            temp_v15 = DAT_006472e0;
            temp_v10 = DAT_006472e4;
            temp_v11 = DAT_006472dc;
            if ((temp_v1 & 1) == 0) {
              temp_v11 = DAT_006472dc + *pfVar7;
              temp_v15 = DAT_006472e0 + pfVar7[1];
              temp_v10 = DAT_006472e4 + pfVar7[2];
            }
            *pfVar8 = temp_v11;
            pfVar8[1] = temp_v15 + pfVar7[9];
            pfVar8[2] = temp_v10;
            FUN_00321d7c(pfVar8,puVar10,temp_v3,&temp_v23);
            pfVar8[6] = pfVar8[6] * pfVar7[10];
            temp_v15 = pfVar8[7];
            temp_v10 = pfVar7[0xc];
            pfVar8[7] = temp_v15 * temp_v10;
            temp_v15 = temp_v15 * temp_v10 + pfVar7[0xb];
            pfVar8[7] = temp_v15;
            FUN_0027134c(param_1,pfVar8);
            temp_v4 = effGetFrameStep();
            pfVar8[4] = (float)(temp_v4 + (int)temp_v3);
          }
          else if (temp_v25 != 0) {
            FUN_00514540(0);
            temp_v14 = (float)((unsigned long long)temp_v22 >> 0x20);
            temp_v3 = (float)puVar10[0x32];
            temp_v13 = ((temp_v14 - (float)puVar10[0x33]) + temp_v15 * (float)puVar10[0x33]) * temp_v3;
            FUN_00514540(0);
            temp_v15 = (float)puVar10[0x35];
            temp_v12 = (float)puVar10[0x34];
            pfVar7[5] = temp_v13;
            temp_v11 = (float)VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v11 = (((temp_v14 - temp_v15) + temp_v3 * temp_v15) * temp_v12 - temp_v13) / temp_v11;
            pfVar7[6] = temp_v11;
            FUN_00514540(0);
            temp_v3 = ((temp_v14 - (float)puVar10[0x37]) + temp_v11 * (float)puVar10[0x37]) *
                    (float)puVar10[0x36];
            pfVar7[7] = temp_v3;
            FUN_00514540(0);
            temp_v3 = temp_v3 * 1.5707964f;
            pfVar7[8] = temp_v3;
            pfVar7[9] = temp_v20;
            temp_v15 = temp_v20;
            FUN_00514540(0);
            temp_v11 = (float)temp_v22;
            temp_v12 = 2.0f;
            temp_v3 = (temp_v3 - temp_v11) * 2.0f * (float)((unsigned long long)temp_v21 >> 0x20);
            pfVar7[3] = temp_v3;
            FUN_00514540(0);
            pfVar7[4] = (temp_v3 - temp_v11) * temp_v12 * (float)((unsigned long long)temp_v21 >> 0x20);
            FUN_005147dc();
            FUN_00514904();
            FUN_005145f4();
            temp_v3 = pfVar7[8] * (float)temp_v21;
            FUN_001b63b0();
            temp_v17 = CONCAT44(temp_v10,temp_v3 * temp_v13);
            temp_v3 = pfVar7[8] * (float)temp_v21;
            FUN_001a1ee0();
            temp_v3 = temp_v3 * temp_v13;
            temp_v10 = (float)temp_v17;
            DAT_006472dc = temp_v10 * DAT_0064731c + temp_v15 * DAT_0064732c + temp_v3 * DAT_0064733c;
            DAT_006472e0 = temp_v10 * DAT_00647320 + temp_v15 * DAT_00647330 + temp_v3 * DAT_00647340;
            DAT_006472e4 = temp_v10 * DAT_00647324 + temp_v15 * DAT_00647334 + temp_v3 * DAT_00647344;
            temp_v3 = temp_v10 * DAT_00647328 + temp_v15 * DAT_00647338 + temp_v3 * DAT_00647348;
            if ((temp_v1 & 1) == 0) {
              DAT_006472ec = (float)((unsigned long long)temp_v18 >> 0x20);
              DAT_006472f0 = (float)temp_v19;
              DAT_006472f4 = (float)((unsigned long long)temp_v19 >> 0x20);
              DAT_006472e8 = temp_v3;
              *pfVar7 = DAT_006472ec;
              pfVar7[1] = DAT_006472f0;
              pfVar7[2] = DAT_006472f4;
              DAT_006472dc = DAT_006472dc + DAT_006472ec;
              DAT_006472e0 = DAT_006472e0 + DAT_006472f0;
              DAT_006472e4 = DAT_006472e4 + DAT_006472f4;
              temp_v3 = DAT_006472e8 + temp_v2;
              DAT_006472f8 = temp_v2;
            }
            temp_v12 = DAT_006472e4;
            temp_v11 = DAT_006472e0;
            temp_v10 = DAT_006472dc;
            DAT_006472e8 = temp_v3;
            pfVar8[3] = temp_v3;
            *pfVar8 = temp_v10;
            pfVar8[1] = temp_v11;
            pfVar8[2] = temp_v12;
            FUN_00514540(0);
            temp_v11 = (float)((unsigned long long)temp_v22 >> 0x20);
            temp_v10 = (float)puVar10[0x1b];
            pfVar7[10] = (temp_v11 - temp_v10) + temp_v3 * temp_v10;
            if (temp_v24 != 2) {
              FUN_00514540(0);
              temp_v12 = (float)puVar10[0x26];
              temp_v3 = temp_v12;
              if (temp_v24 != 1) {
                temp_v3 = temp_v15;
              }
              pfVar7[0xc] = (temp_v11 - temp_v12) + temp_v10 * temp_v12;
              if (temp_v24 != 1) {
                pfVar7[0xb] = temp_v3;
              }
              else {
                FUN_00514540(0);
                temp_v5 = 0;
                pfVar7[0xb] = temp_v3 * 6.2831855f;
                FUN_00514500();
                if ((temp_v5 & 1) != 0) {
                  pfVar7[0xc] = -pfVar7[0xc];
                }
              }
            }
            else {
              pfVar7[0xb] = temp_v15;
              pfVar7[0xc] = temp_v11;
            }
            temp_v3 = (float)((unsigned long long)temp_v17 >> 0x20);
            temp_v23 = *pfVar8;
            fStack_84 = pfVar8[1];
            fStack_80 = pfVar8[2];
            fStack_7c = pfVar8[3];
            pfVar8[4] = 0.0f;
            if (temp_v26[0] != '\0') {
              FUN_00514500(0);
              __aeabi_uidivmod();
              temp_v14 = (float)VectorUnsignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
              pfVar7[9] = pfVar7[9] - temp_v3 * temp_v14 * temp_v14 * (float)temp_v22;
              temp_v10 = pfVar7[5] + pfVar7[6] * temp_v14;
              temp_v17 = CONCAT44(temp_v3,temp_v10);
              pfVar7[5] = temp_v10;
              temp_v3 = pfVar7[8] * (float)temp_v21;
              FUN_001b63b0();
              temp_v3 = temp_v3 * (float)temp_v17;
              temp_v10 = pfVar7[8] * (float)temp_v21;
              FUN_001a1ee0();
              temp_v10 = temp_v10 * (float)temp_v17;
              temp_v11 = temp_v3 * DAT_0064731c + temp_v15 * DAT_0064732c + temp_v10 * DAT_0064733c;
              temp_v12 = temp_v3 * DAT_00647320 + temp_v15 * DAT_00647330 + temp_v10 * DAT_00647340;
              temp_v13 = temp_v3 * DAT_00647324 + temp_v15 * DAT_00647334 + temp_v10 * DAT_00647344;
              temp_v15 = temp_v3 * DAT_00647328 + temp_v15 * DAT_00647338 + temp_v10 * DAT_00647348;
              DAT_006472dc = temp_v11;
              DAT_006472e0 = temp_v12;
              DAT_006472e4 = temp_v13;
              DAT_006472e8 = temp_v15;
              if ((temp_v1 & 1) == 0) {
                DAT_006472dc = (float)((unsigned long long)temp_v18 >> 0x20) + temp_v11;
                DAT_006472e0 = (float)temp_v19 + temp_v12;
                DAT_006472e4 = (float)((unsigned long long)temp_v19 >> 0x20) + temp_v13;
                DAT_006472e8 = temp_v2 + temp_v15;
                DAT_006472ec = temp_v11;
                DAT_006472f0 = temp_v12;
                DAT_006472f4 = temp_v13;
                DAT_006472f8 = temp_v15;
              }
              temp_v10 = DAT_006472e4;
              temp_v3 = DAT_006472e0;
              temp_v15 = DAT_006472dc;
              pfVar8[3] = DAT_006472e8;
              *pfVar8 = temp_v15;
              pfVar8[1] = temp_v3;
              pfVar8[2] = temp_v10;
              pfVar8[1] = temp_v3 + pfVar7[9];
              pfVar8[4] = (float)(int)temp_v14;
            }
            FUN_00321d7c(pfVar8,puVar10,pfVar8[4],&temp_v23);
            pfVar8[6] = pfVar8[6] * pfVar7[10];
            temp_v15 = pfVar8[7];
            temp_v3 = pfVar7[0xc];
            pfVar8[7] = temp_v15 * temp_v3;
            temp_v15 = temp_v15 * temp_v3 + pfVar7[0xb];
            pfVar8[7] = temp_v15;
            if (temp_v26[0] != '\0') {
              FUN_00321e98(param_1,pfVar8);
              temp_v4 = effGetFrameStep();
              pfVar8[4] = (float)(temp_v4 + (int)pfVar8[4]);
            }
            temp_v25 = temp_v25 - 1;
          }
        }
        temp_v7 = temp_v7 + 1;
        pfVar7 = pfVar7 + 0xd;
        pfVar8 = pfVar8 + 10;
      } while (temp_v7 < temp_v9);
    }
  }
  return;
}

} /* extern "C" */
