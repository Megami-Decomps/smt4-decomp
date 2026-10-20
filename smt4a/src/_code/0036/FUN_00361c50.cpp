/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00361c50` (_code @ 0x361c50, 0x8f8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(int, double);
int FUN_001a1ee0(void);
int FUN_001acf08(void);
int FUN_001b63b0(void);
int FUN_001bc460(void);
int FUN_0027134c(int, float *);
int FUN_002fe2e8(int, float *);
int FUN_00321d7c(...);
int FUN_00321e98(...);
int FUN_00375c74(int, float *, char [4], int *);
int FUN_00514500(...);
int FUN_00514540(int);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);
int aeabi_uidivmod(void);

/* stack frame of param_1: 12 slot(s), 45 byte(s) */
typedef struct {
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned char sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int sp118; /* 0x118: local_118 */
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
/* Supplied declaration required: FUN_001acf08. */
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
/* Supplied declaration required: aeabi_uidivmod. */


void FUN_00361c50(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 16 native warning(s); review required */
  unsigned long long temp_v0;
  unsigned int temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  float *pfVar8;
  float *pfVar9;
  unsigned int temp_v8;
  float *pfVar11;
  float temp_v9;
  unsigned int temp_v10;
  unsigned int in_fpscr;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  unsigned long long temp_v17;
  unsigned long long temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  unsigned long long temp_v22;
  float temp_v23;
  float temp_v24;
  unsigned long long temp_v25;
  float temp_v26;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  unsigned int temp_v27;
  int temp_v28;
  char temp_v29 [4];
  unsigned int temp_v30;
  float temp_v31;
  
  temp_v1 = FUN_001acf08();
  temp_v27 = *(unsigned int *)(param_1 + 0xc);
  pfVar11 = *(float **)(param_1 + 0x20);
  temp_v10 = *(unsigned int *)(param_1 + 4);
  pfVar8 = *(float **)(param_1 + 0x1c);
  temp_v1 = VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v9 = pfVar11[0x2e];
  pfVar9 = *(float **)(param_1 + 0x18);
  if (temp_v9 != 0.0f) {
    temp_v31 = pfVar11[8];
    temp_v16 = 0.0f;
    temp_v30 = (unsigned int)*(unsigned char *)(pfVar11 + 0x27);
    temp_v2 = *pfVar11;
    temp_v17 = romwright_piece_4_4(pfVar11[0x3c],temp_v1);
    temp_v18 = romwright_piece_4_4(pfVar11[1],pfVar11[0x3b]);
    temp_v19 = pfVar11[2];
    temp_v3 = pfVar11[3];
    temp_v20 = pfVar11[7];
    temp_v22 = *(unsigned long long *)(pfVar11 + 4);
    temp_v23 = pfVar11[6];
    temp_v11 = temp_v16;
    FUN_00375c74(param_1,pfVar11,temp_v29,&temp_v28);
    temp_v8 = 0;
    if (temp_v10 != 0) {
      temp_v25 = CONCAT44(0x4222f983,temp_v16);
      temp_v0 = (unsigned long long)temp_v22 >> 0x20;
      temp_v16 = temp_v2;
      temp_v21 = temp_v20;
      temp_v24 = temp_v23;
      do {
        if ((int)temp_v9 <= (int)pfVar9[4]) {
          if (temp_v31 == 0.0f) {
            temp_v4 = -NAN;
          }
          else {
            temp_v4 = -NAN;
          }
          pfVar9[4] = temp_v4;
          FUN_002fe2e8(param_1,pfVar9);
        }
        temp_v4 = pfVar9[4];
        if (temp_v4 != -NAN) {
          if (temp_v4 != -NAN) {
            temp_v26 = *pfVar9;
            fStack_94 = pfVar9[1];
            fStack_90 = pfVar9[2];
            fStack_8c = pfVar9[3];
            temp_v15 = 0.5f;
            temp_v12 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v16 = pfVar8[10] + (pfVar8[0xb] + (float)temp_v18 * temp_v12 * 0.5f) * temp_v12;
            temp_v5 = FUN_0037a844();
            temp_v14 = (float)((unsigned long long)temp_v17 >> 0x20);
            temp_v13 = (float)temp_v17;
            if (temp_v5 == 0) {
              temp_v12 = pfVar8[0xc] - temp_v14 * temp_v12;
            }
            else {
              temp_v12 = -(temp_v15 * temp_v14) * temp_v13 * ((temp_v12 * 2.0f - temp_v13) + 1.0f) +
                       pfVar8[0xc] * temp_v13;
            }
            pfVar8[7] = pfVar8[7] + temp_v12;
            pfVar8[8] = pfVar8[8] + pfVar8[9] * temp_v13;
            temp_v16 = temp_v16 * (float)((unsigned long long)temp_v25 >> 0x20);
            temp_v12 = temp_v16;
            FUN_001b63b0();
            temp_v15 = pfVar8[7];
            temp_v16 = temp_v16 * pfVar8[8];
            FUN_001a1ee0();
            temp_v12 = temp_v12 * pfVar8[8];
            if ((temp_v27 & 1) == 0) {
              DAT_006472dc = pfVar8[3];
              DAT_006472e0 = pfVar8[4];
              DAT_006472e4 = pfVar8[5];
              DAT_006472e8 = pfVar8[6];
              FUN_001bc460();
              DAT_006472dc = temp_v16 * DAT_0064731c + temp_v15 * DAT_0064732c + temp_v12 * DAT_0064733c;
              DAT_006472e0 = temp_v16 * DAT_00647320 + temp_v15 * DAT_00647330 + temp_v12 * DAT_00647340;
              DAT_006472e4 = temp_v16 * DAT_00647324 + temp_v15 * DAT_00647334 + temp_v12 * DAT_00647344;
              temp_v11 = temp_v16 * DAT_00647328 + temp_v15 * DAT_00647338 + temp_v12 * DAT_00647348;
              temp_v16 = DAT_006472dc + *pfVar8;
              temp_v15 = DAT_006472e0 + pfVar8[1];
              temp_v12 = DAT_006472e4 + pfVar8[2];
              DAT_006472e8 = temp_v11;
            }
            *pfVar9 = temp_v16;
            pfVar9[1] = temp_v15;
            pfVar9[2] = temp_v12;
            FUN_00321d7c(pfVar9,pfVar11,temp_v4,&temp_v26);
            pfVar9[6] = pfVar9[6] * pfVar8[0xd];
            temp_v16 = pfVar9[7];
            temp_v12 = pfVar8[0xf];
            pfVar9[7] = temp_v16 * temp_v12;
            temp_v16 = temp_v16 * temp_v12 + pfVar8[0xe];
            pfVar9[7] = temp_v16;
            FUN_0027134c(param_1,pfVar9);
            temp_v5 = FUN_001acf08();
            pfVar9[4] = (float)(temp_v5 + (int)temp_v4);
          }
          else if (temp_v28 != 0) {
            FUN_00514540(0);
            temp_v4 = pfVar11[0x34];
            temp_v14 = 1.0f;
            temp_v13 = ((1.0f - temp_v4) + temp_v16 * temp_v4) * pfVar11[0x33];
            FUN_00514540(0);
            temp_v16 = pfVar11[0x36];
            temp_v15 = pfVar11[0x35];
            pfVar8[8] = temp_v13;
            temp_v12 = (float)VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v16 = ((temp_v14 - temp_v16) + temp_v4 * temp_v16) * temp_v15 - temp_v13;
            pfVar8[9] = temp_v16 / temp_v12;
            FUN_00514540(0);
            temp_v16 = temp_v16 * 6.2831855f;
            pfVar8[10] = temp_v16;
            FUN_00514540(0);
            temp_v16 = ((temp_v14 - pfVar11[0x38]) + temp_v16 * pfVar11[0x38]) * pfVar11[0x37];
            pfVar8[0xb] = temp_v16;
            FUN_00514540(0);
            temp_v12 = (float)((unsigned long long)temp_v25 >> 0x20);
            pfVar8[0xc] = ((temp_v14 - pfVar11[0x3a]) + temp_v16 * pfVar11[0x3a]) * pfVar11[0x39];
            temp_v15 = pfVar8[10] * temp_v12;
            FUN_001b63b0();
            temp_v14 = 0.0f;
            temp_v12 = pfVar8[10] * temp_v12;
            FUN_001a1ee0();
            temp_v4 = temp_v12;
            FUN_00514540(0);
            pfVar8[7] = temp_v12 * pfVar11[0x32];
            temp_v15 = temp_v15 * temp_v13;
            temp_v4 = temp_v4 * temp_v13;
            temp_v12 = (float)temp_v25 * temp_v14;
            temp_v16 = pfVar8[7];
            DAT_006472dc = temp_v15;
            DAT_006472e0 = temp_v16;
            DAT_006472e4 = temp_v4;
            DAT_006472e8 = temp_v12;
            DAT_006472ec = temp_v13;
            DAT_006472f0 = temp_v13;
            DAT_006472f4 = temp_v13;
            DAT_006472f8 = temp_v14;
            if ((temp_v27 & 1) == 0) {
              *pfVar8 = temp_v2;
              pfVar8[1] = (float)((unsigned long long)temp_v18 >> 0x20);
              pfVar8[2] = temp_v19;
              DAT_006472dc = (float)temp_v22;
              pfVar8[3] = DAT_006472dc;
              pfVar8[4] = (float)temp_v0;
              pfVar8[5] = temp_v23;
              pfVar8[6] = temp_v20;
              DAT_006472e0 = (float)((unsigned long long)temp_v22 >> 0x20);
              DAT_006472e4 = temp_v24;
              DAT_006472e8 = temp_v21;
              FUN_001bc460();
              DAT_006472f0 = (float)((unsigned long long)temp_v18 >> 0x20);
              DAT_006472dc = temp_v15 * DAT_0064731c + temp_v16 * DAT_0064732c + temp_v4 * DAT_0064733c +
                             temp_v2;
              DAT_006472e0 = temp_v15 * DAT_00647320 + temp_v16 * DAT_00647330 + temp_v4 * DAT_00647340 +
                             DAT_006472f0;
              DAT_006472e4 = temp_v15 * DAT_00647324 + temp_v16 * DAT_00647334 + temp_v4 * DAT_00647344 +
                             temp_v19;
              temp_v16 = temp_v15 * DAT_00647328 + temp_v16 * DAT_00647338 + temp_v4 * DAT_00647348 + temp_v3;
              temp_v11 = temp_v12;
              DAT_006472e8 = temp_v16;
              DAT_006472ec = temp_v2;
              DAT_006472f4 = temp_v19;
              DAT_006472f8 = temp_v3;
            }
            temp_v15 = DAT_006472e4;
            temp_v12 = DAT_006472e0;
            temp_v4 = DAT_006472dc;
            pfVar9[3] = DAT_006472e8;
            *pfVar9 = temp_v4;
            pfVar9[1] = temp_v12;
            pfVar9[2] = temp_v15;
            FUN_00514540(0);
            temp_v4 = 1.0f;
            pfVar8[0xd] = (1.0f - pfVar11[0x1b]) + temp_v16 * pfVar11[0x1b];
            if (temp_v30 != 2) {
              FUN_00514540(0);
              temp_v12 = pfVar11[0x26];
              temp_v4 = temp_v4 - temp_v12;
              temp_v16 = temp_v16 * temp_v12;
              if (temp_v30 != 1) {
                temp_v12 = 0.0f;
              }
              pfVar8[0xf] = temp_v4 + temp_v16;
              if (temp_v30 != 1) {
                pfVar8[0xe] = temp_v12;
              }
              else {
                FUN_00514540(0);
                temp_v6 = 0;
                pfVar8[0xe] = temp_v12 * 6.2831855f;
                FUN_00514500();
                if ((temp_v6 & 1) != 0) {
                  pfVar8[0xf] = -pfVar8[0xf];
                }
              }
            }
            else {
              pfVar8[0xe] = 0.0f;
              pfVar8[0xf] = 1.0f;
            }
            temp_v26 = *pfVar9;
            fStack_94 = pfVar9[1];
            fStack_90 = pfVar9[2];
            fStack_8c = pfVar9[3];
            pfVar9[4] = 0.0f;
            if (temp_v29[0] != '\0') {
              FUN_00514500(0);
              aeabi_uidivmod();
              temp_v12 = (float)VectorUnsignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v4 = (float)((unsigned long long)temp_v25 >> 0x20);
              pfVar8[8] = pfVar8[8] + pfVar8[9] * temp_v12;
              pfVar8[7] = (pfVar8[7] + pfVar8[0xc] * temp_v12) -
                          (float)((unsigned long long)temp_v17 >> 0x20) * temp_v12 * temp_v12 * 0.5f;
              temp_v16 = pfVar8[10] * temp_v4;
              FUN_001b63b0();
              temp_v15 = pfVar8[7];
              temp_v16 = temp_v16 * pfVar8[8];
              temp_v4 = pfVar8[10] * temp_v4;
              FUN_001a1ee0();
              temp_v4 = temp_v4 * pfVar8[8];
              DAT_006472dc = temp_v16;
              DAT_006472e0 = temp_v15;
              DAT_006472e4 = temp_v4;
              DAT_006472e8 = temp_v11;
              if ((temp_v27 & 1) == 0) {
                DAT_006472dc = (float)temp_v22;
                DAT_006472e0 = (float)((unsigned long long)temp_v22 >> 0x20);
                DAT_006472e4 = temp_v24;
                DAT_006472e8 = temp_v21;
                FUN_001bc460();
                DAT_006472f0 = (float)((unsigned long long)temp_v18 >> 0x20);
                DAT_006472dc = temp_v16 * DAT_0064731c + temp_v15 * DAT_0064732c + temp_v4 * DAT_0064733c
                               + temp_v2;
                DAT_006472e0 = temp_v16 * DAT_00647320 + temp_v15 * DAT_00647330 + temp_v4 * DAT_00647340
                               + DAT_006472f0;
                DAT_006472e4 = temp_v16 * DAT_00647324 + temp_v15 * DAT_00647334 + temp_v4 * DAT_00647344
                               + temp_v19;
                DAT_006472e8 = temp_v16 * DAT_00647328 + temp_v15 * DAT_00647338 + temp_v4 * DAT_00647348
                               + temp_v3;
                DAT_006472ec = temp_v2;
                DAT_006472f4 = temp_v19;
                DAT_006472f8 = temp_v3;
              }
              temp_v15 = DAT_006472e4;
              temp_v4 = DAT_006472e0;
              temp_v16 = DAT_006472dc;
              pfVar9[3] = DAT_006472e8;
              *pfVar9 = temp_v16;
              pfVar9[1] = temp_v4;
              pfVar9[2] = temp_v15;
              pfVar9[4] = (float)(int)temp_v12;
            }
            FUN_00321d7c(pfVar9,pfVar11,pfVar9[4],&temp_v26);
            pfVar9[6] = pfVar9[6] * pfVar8[0xd];
            temp_v16 = pfVar9[7];
            temp_v4 = pfVar8[0xf];
            pfVar9[7] = temp_v16 * temp_v4;
            temp_v16 = temp_v16 * temp_v4 + pfVar8[0xe];
            pfVar9[7] = temp_v16;
            if (temp_v29[0] != '\0') {
              FUN_00321e98(param_1,pfVar9);
              temp_v5 = FUN_001acf08();
              pfVar9[4] = (float)(temp_v5 + (int)pfVar9[4]);
            }
            temp_v28 = temp_v28 - 1;
          }
        }
        temp_v8 = temp_v8 + 1;
        pfVar8 = pfVar8 + 0x10;
        pfVar9 = pfVar9 + 10;
      } while (temp_v8 < temp_v10);
    }
  }
  return;
}

} /* extern "C" */
