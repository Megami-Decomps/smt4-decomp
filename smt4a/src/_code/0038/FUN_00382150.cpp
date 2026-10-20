/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00382150` (_code @ 0x382150, 0xbc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(double, double);
int FUN_001a1ee0(void);
int FUN_001b63b0(void);
int FUN_00221d78(unsigned int);
int FUN_00514500(void);
int FUN_00514540(...);
int VectorFloatToUnsigned(double, int);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);
int aeabi_uidivmod(void);

/* stack frame of param_1: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
} param_1_stack;

extern float DAT_005c1100; /* 0x5c1100 */
extern float DAT_005c1104; /* 0x5c1104 */
extern float DAT_005c1108; /* 0x5c1108 */
extern float DAT_005c110c; /* 0x5c110c */
extern float DAT_005c1120; /* 0x5c1120 */
extern float DAT_005c1124; /* 0x5c1124 */
extern float DAT_005c1128; /* 0x5c1128 */
extern float DAT_005c112c; /* 0x5c112c */
extern float DAT_006472dc; /* 0x6472dc */
extern float DAT_006472e0; /* 0x6472e0 */
extern float DAT_006472e4; /* 0x6472e4 */
extern float DAT_006472e8; /* 0x6472e8 */
extern float DAT_006472ec; /* 0x6472ec */
extern float DAT_006472f0; /* 0x6472f0 */
extern float DAT_006472f4; /* 0x6472f4 */
extern float DAT_006472f8; /* 0x6472f8 */
extern float DAT_006472fc; /* 0x6472fc */
extern float DAT_00647300; /* 0x647300 */
extern float DAT_00647304; /* 0x647304 */
extern float DAT_00647308; /* 0x647308 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
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
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_001a1ee0. */
extern unsigned int FUN_001acf08(void);
/* Supplied declaration required: FUN_001b63b0. */
extern unsigned int FUN_00221cb0(void);
/* Supplied declaration required: FUN_00221d78. */
/* Supplied declaration required: FUN_00514500. */
/* Supplied declaration required: FUN_00514540. */
/* Supplied declaration required: aeabi_uidivmod. */


void FUN_00382150(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 12 native warning(s); review required */
  unsigned int temp_v0;
  char temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  unsigned int temp_v11;
  int temp_v12;
  int temp_v13;
  unsigned int temp_v14;
  int temp_v15;
  unsigned char *puVar16;
  float *pfVar17;
  float *pfVar18;
  unsigned char *puVar19;
  float *pfVar20;
  int temp_v16;
  float temp_v17;
  unsigned int temp_v18;
  int temp_v19;
  unsigned int in_fpscr;
  float temp_v20;
  unsigned int temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  float temp_v27;
  float temp_v28;
  float temp_v29;
  float temp_v30;
  unsigned long long temp_v31;
  long long temp_v32;
  float temp_v33;
  float temp_v34;
  float temp_v35;
  float temp_v36;
  float temp_v37;
  float temp_v38;
  float temp_v39;
  float temp_v40;
  int temp_v41;
  
  temp_v11 = FUN_001acf08();
  temp_v16 = *(int *)(param_1 + 0x40);
  temp_v20 = (float)VectorSignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
  if ((*(int *)(param_1 + 0x34) <= *(int *)(temp_v16 + 0x34)) || (*(int *)(temp_v16 + 0x34) == 0)) {
    temp_v15 = *(int *)(temp_v16 + 0x4c);
    temp_v19 = *(int *)(temp_v16 + 0x38);
    pfVar20 = (float *)**(unsigned int **)(param_1 + 0x3c);
    temp_v12 = (*(unsigned int **)(param_1 + 0x3c))[1];
    if (temp_v15 != 0) {
      if ((*(char *)(temp_v16 + 0x55) == '\0') || (*(int *)(param_1 + 0x34) != 0)) {
        temp_v6 = 0;
        temp_v41 = *(int *)(temp_v16 + 0x50);
      }
      else {
        temp_v6 = 1;
        temp_v41 = temp_v19;
      }
      temp_v31 = 0;
      pfVar18 = *(float **)(*(int *)(temp_v12 + 8) + 0x30);
      puVar19 = *(unsigned char **)(*(int *)(temp_v12 + 8) + 0x38);
      *(unsigned int *)(temp_v12 + 0x54) = *(unsigned int *)(temp_v12 + 0x54) | 0x21;
      FUN_00221d78(*(unsigned int *)(temp_v16 + 0x58) & 0xffffff);
      temp_v10 = DAT_006472e8;
      temp_v9 = DAT_006472e4;
      temp_v8 = DAT_006472e0;
      temp_v7 = DAT_006472dc;
      FUN_00221d78(*(unsigned int *)(temp_v16 + 0x5c) & 0xffffff);
      temp_v23 = (float)VectorSignedToFloat(temp_v15,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v25 = (float)VectorSignedToFloat(temp_v15,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v32 = (unsigned long long)*(unsigned int *)(temp_v16 + 0xa4) << 0x20;
      temp_v18 = 0;
      temp_v1 = *(char *)(temp_v16 + 0x54);
      temp_v12 = (int)(*(float *)(temp_v16 + 0x44) * temp_v23);
      temp_v23 = (float)(int)(*(float *)(temp_v16 + 0x48) * temp_v25);
      if (0 < temp_v19) {
        temp_v29 = (float)((unsigned long long)temp_v31 >> 0x20);
        temp_v39 = 6.2831855f;
        temp_v40 = 0.5f;
        temp_v38 = 40.743664f;
        temp_v37 = 1.0f;
        temp_v25 = temp_v23;
        temp_v33 = DAT_006472e8;
        temp_v34 = DAT_006472e4;
        temp_v35 = DAT_006472dc;
        temp_v36 = DAT_006472e0;
        do {
          temp_v17 = *pfVar20;
          if (temp_v17 != -NAN) {
            if (temp_v17 != -NAN) {
              if ((int)temp_v17 >= temp_v15) {
                temp_v13 = 0;
                do {
                  pfVar17 = pfVar18 + temp_v13 * 3;
                  puVar16 = puVar19 + temp_v13 * 4;
                  *pfVar17 = temp_v29;
                  pfVar17[1] = temp_v29;
                  pfVar17[2] = temp_v29;
                  *puVar16 = 0;
                  puVar16[1] = 0;
                  temp_v13 = temp_v13 + 1;
                  puVar16[2] = 0;
                  puVar16[3] = 0;
                } while (temp_v13 < 5);
                if (temp_v1 == '\0') {
                  temp_v25 = -NAN;
                }
                else {
                  temp_v25 = -NAN;
                }
                *pfVar20 = temp_v25;
                temp_v25 = temp_v29;
              }
              else {
                temp_v27 = pfVar20[7];
                temp_v28 = (float)((unsigned long long)temp_v32 >> 0x20);
                temp_v32 = CONCAT44(temp_v28,pfVar20[5]);
                temp_v25 = (float)VectorSignedToFloat(temp_v17,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v30 = (float)((unsigned long long)temp_v31 >> 0x20);
                temp_v28 = (pfVar20[1] + (pfVar20[2] + temp_v28 * temp_v25 * temp_v40) * temp_v25) * temp_v38;
                temp_v25 = temp_v28;
                FUN_001b63b0();
                FUN_001a1ee0();
                temp_v31 = CONCAT44(temp_v30,temp_v37);
                DAT_006472dc = temp_v28 * temp_v27;
                DAT_006472e4 = temp_v25 * temp_v27;
                temp_v22 = temp_v28 * (float)temp_v32;
                DAT_006472e0 = temp_v37 - temp_v27;
                temp_v27 = temp_v25 * (float)temp_v32;
                temp_v26 = romwright_sqrt_4(DAT_006472dc * DAT_006472dc + DAT_006472e0 * DAT_006472e0 +
                              DAT_006472e4 * DAT_006472e4);
                temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v26 < temp_v29) << 0x1f) |
                        ((unsigned int)(temp_v26 == temp_v29) << 0x1e);
                in_fpscr = temp_v0 | ((unsigned int)((temp_v26 != temp_v26) || (temp_v29 != temp_v29)) << 0x1c);
                temp_v3 = (unsigned char)(temp_v0 >> 0x18);
                if (!(unsigned char)((temp_v3 >> 6) & 1) && temp_v3 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                  DAT_006472dc = DAT_006472dc / temp_v26;
                  DAT_006472e0 = DAT_006472e0 / temp_v26;
                  DAT_006472e4 = DAT_006472e4 / temp_v26;
                }
                DAT_006472fc = DAT_006472dc;
                DAT_00647300 = DAT_006472e0;
                DAT_00647304 = DAT_006472e4;
                DAT_006472f4 = pfVar20[9];
                DAT_006472ec = temp_v25 * DAT_006472f4;
                DAT_006472f0 = temp_v29 * DAT_006472f4;
                DAT_006472f4 = -temp_v28 * DAT_006472f4;
                temp_v26 = pfVar20[10];
                temp_v24 = -temp_v28 * temp_v26;
                DAT_006472f8 = temp_v37 * temp_v26;
                DAT_005c1124 = temp_v30;
                DAT_005c1128 = temp_v27;
                DAT_006472dc = temp_v22;
                DAT_006472e0 = temp_v30;
                DAT_006472e4 = temp_v27;
                DAT_00647308 = temp_v37;
                pfVar18[9] = temp_v22;
                pfVar18[10] = DAT_005c1124;
                pfVar18[0xb] = DAT_005c1128;
                DAT_006472dc = DAT_006472dc + DAT_006472ec;
                DAT_005c1124 = DAT_006472e0 + DAT_006472f0;
                DAT_005c1128 = DAT_006472e4 + DAT_006472f4;
                DAT_006472e0 = DAT_005c1124;
                DAT_006472e4 = DAT_005c1128;
                pfVar18[6] = DAT_006472dc;
                pfVar18[7] = DAT_005c1124;
                pfVar18[8] = DAT_005c1128;
                DAT_005c1124 = (DAT_006472e0 - DAT_006472f0) - DAT_006472f0;
                DAT_005c1128 = (DAT_006472e4 - DAT_006472f4) - DAT_006472f4;
                pfVar18[0xc] = (DAT_006472dc - DAT_006472ec) - DAT_006472ec;
                pfVar18[0xd] = DAT_005c1124;
                pfVar18[0xe] = DAT_005c1128;
                temp_v28 = pfVar20[3];
                DAT_006472dc = temp_v22 + DAT_006472fc * temp_v28 + temp_v25 * temp_v26;
                DAT_005c1124 = temp_v30 + DAT_00647300 * temp_v28 + temp_v29 * temp_v26;
                DAT_005c1128 = temp_v27 + DAT_00647304 * temp_v28 + temp_v24;
                DAT_006472e8 = temp_v30 + DAT_00647308 * temp_v28 + DAT_006472f8;
                DAT_006472e0 = DAT_005c1124;
                DAT_006472e4 = DAT_005c1128;
                DAT_006472ec = temp_v25 * temp_v26;
                DAT_006472f0 = temp_v29 * temp_v26;
                DAT_006472f4 = temp_v24;
                *pfVar18 = DAT_006472dc;
                pfVar18[1] = DAT_005c1124;
                pfVar18[2] = DAT_005c1128;
                DAT_005c1120 = (DAT_006472dc - DAT_006472ec) - DAT_006472ec;
                DAT_005c1124 = (DAT_006472e0 - DAT_006472f0) - DAT_006472f0;
                DAT_005c1128 = (DAT_006472e4 - DAT_006472f4) - DAT_006472f4;
                DAT_005c112c = (DAT_006472e8 - DAT_006472f8) - DAT_006472f8;
                pfVar18[3] = DAT_005c1120;
                pfVar18[4] = DAT_005c1124;
                pfVar18[5] = DAT_005c1128;
                pfVar20[3] = pfVar20[3] + pfVar20[4];
                pfVar20[7] = pfVar20[7] + pfVar20[8];
                pfVar20[5] = pfVar20[5] + pfVar20[6];
                if ((int)temp_v17 < temp_v12) {
                  temp_v28 = (float)VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v25 = (float)VectorSignedToFloat(temp_v17,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v31 = CONCAT44(temp_v30,temp_v25 / temp_v28);
                }
                else if ((int)temp_v23 < (int)temp_v17) {
                  temp_v25 = (float)VectorSignedToFloat(temp_v15 - (int)temp_v23,
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v28 = (float)VectorSignedToFloat(temp_v15 - (int)temp_v17,
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v31 = CONCAT44(temp_v30,temp_v28 / temp_v25);
                }
                DAT_006472f8 = (float)temp_v31;
                DAT_006472ec = DAT_005c1100 * DAT_006472f8;
                DAT_006472f0 = DAT_005c1104 * DAT_006472f8;
                DAT_006472f4 = DAT_005c1108 * DAT_006472f8;
                DAT_006472f8 = DAT_005c110c * DAT_006472f8;
                DAT_006472dc = temp_v35 * DAT_006472ec;
                DAT_006472e0 = temp_v36 * DAT_006472f0;
                DAT_006472e4 = temp_v34 * DAT_006472f4;
                DAT_006472e8 = temp_v33 * DAT_006472f8;
                temp_v11 = FUN_00221cb0();
                temp_v4 = (unsigned char)((unsigned int)temp_v11 >> 8);
                temp_v5 = (unsigned char)((unsigned int)temp_v11 >> 0x10);
                *puVar19 = (char)temp_v11;
                puVar19[1] = temp_v4;
                puVar19[2] = temp_v5;
                temp_v2 = (unsigned char)((unsigned int)temp_v11 >> 0x18);
                puVar19[3] = temp_v2;
                puVar19[4] = (char)temp_v11;
                puVar19[5] = temp_v4;
                puVar19[6] = temp_v5;
                puVar19[7] = temp_v2;
                DAT_006472dc = temp_v7 * DAT_006472ec;
                DAT_006472e0 = temp_v8 * DAT_006472f0;
                DAT_006472e4 = temp_v9 * DAT_006472f4;
                DAT_006472e8 = temp_v10 * DAT_006472f8;
                temp_v11 = FUN_00221cb0();
                temp_v2 = (unsigned char)((unsigned int)temp_v11 >> 8);
                temp_v4 = (unsigned char)((unsigned int)temp_v11 >> 0x10);
                if ((temp_v18 & 1) != 0) {
                  puVar19[0xc] = (char)temp_v11;
                  puVar19[0xd] = temp_v2;
                  puVar19[0xe] = temp_v4;
                  temp_v11 = VectorFloatToUnsigned((float)temp_v31 * 128.0f,3);
                  puVar19[0xf] = 0xff;
                  puVar19[8] = 0;
                  puVar19[9] = 0;
                  puVar19[10] = 0;
                  puVar19[0xb] = (char)temp_v11;
                  puVar19[0x10] = 0;
                  puVar19[0x11] = 0;
                  puVar19[0x12] = 0;
                  puVar19[0x13] = (char)temp_v11;
                }
                else {
                  puVar19[0xc] = (char)temp_v11;
                  puVar19[0xd] = temp_v2;
                  puVar19[0xe] = temp_v4;
                  temp_v21 = VectorFloatToUnsigned((float)temp_v31 * 255.0f,3);
                  puVar19[0xf] = (unsigned char)((unsigned int)temp_v11 >> 0x18) | 0x80;
                  puVar19[8] = 0;
                  puVar19[9] = 0;
                  puVar19[10] = 0;
                  puVar19[0xb] = (char)temp_v21;
                  puVar19[0x10] = 0;
                  puVar19[0x11] = 0;
                  puVar19[0x12] = 0;
                  puVar19[0x13] = (char)temp_v21;
                }
                temp_v25 = (float)VectorSignedToFloat(temp_v17,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v25 = (float)(int)(temp_v25 + temp_v20);
                *pfVar20 = temp_v25;
              }
            }
            else if (temp_v41 != 0) {
              FUN_00514540(0);
              temp_v25 = temp_v25 * temp_v39;
              pfVar20[1] = temp_v25;
              FUN_00514540(0);
              temp_v28 = ((temp_v37 - *(float *)(temp_v16 + 0x70)) + temp_v25 * *(float *)(temp_v16 + 0x70)) *
                       *(float *)(temp_v16 + 0x6c);
              temp_v17 = temp_v37;
              FUN_00514540(0);
              temp_v22 = *(float *)(temp_v16 + 0x78);
              temp_v26 = *(float *)(temp_v16 + 0x74);
              pfVar20[3] = temp_v28;
              temp_v27 = (float)VectorSignedToFloat(temp_v15,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v28 = ((temp_v37 - temp_v22) + temp_v25 * temp_v22) * temp_v26 - temp_v28;
              pfVar20[4] = temp_v28 / temp_v27;
              FUN_00514540(0);
              temp_v25 = ((temp_v37 - *(float *)(temp_v16 + 0x80)) + temp_v28 * *(float *)(temp_v16 + 0x80)) *
                       *(float *)(temp_v16 + 0x7c);
              FUN_00514540(0);
              temp_v22 = *(float *)(temp_v16 + 0x88);
              temp_v26 = *(float *)(temp_v16 + 0x84);
              pfVar20[5] = temp_v25;
              temp_v27 = (float)VectorSignedToFloat(temp_v15,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v25 = ((temp_v37 - temp_v22) + temp_v28 * temp_v22) * temp_v26 - temp_v25;
              pfVar20[6] = temp_v25 / temp_v27;
              FUN_00514540(0);
              temp_v28 = ((temp_v37 - *(float *)(temp_v16 + 0x90)) + temp_v25 * *(float *)(temp_v16 + 0x90)) *
                       *(float *)(temp_v16 + 0x8c);
              FUN_00514540(0);
              temp_v27 = *(float *)(temp_v16 + 0x98);
              temp_v26 = *(float *)(temp_v16 + 0x94);
              pfVar20[7] = temp_v28;
              temp_v22 = (float)VectorSignedToFloat(temp_v15,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v28 = ((temp_v37 - temp_v27) + temp_v25 * temp_v27) * temp_v26 - temp_v28;
              pfVar20[8] = temp_v28 / temp_v22;
              FUN_00514540(0);
              temp_v25 = (temp_v37 - *(float *)(temp_v16 + 0x68)) + temp_v28 * *(float *)(temp_v16 + 0x68);
              pfVar20[9] = *(float *)(temp_v16 + 0x60) * temp_v25;
              temp_v25 = *(float *)(temp_v16 + 100) * temp_v25;
              pfVar20[10] = temp_v25;
              FUN_00514540(0);
              temp_v25 = ((temp_v37 - *(float *)(temp_v16 + 0xa0)) + temp_v25 * *(float *)(temp_v16 + 0xa0)) *
                       *(float *)(temp_v16 + 0x9c);
              pfVar20[2] = temp_v25;
              if (!temp_v6) {
                *pfVar20 = 0.0f;
              }
              else {
                FUN_00514500();
                aeabi_uidivmod();
                temp_v37 = (float)VectorUnsignedToFloat(temp_v14,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v25 = (float)(int)temp_v37;
                pfVar20[3] = pfVar20[3] + pfVar20[4] * temp_v37;
                pfVar20[5] = pfVar20[5] + pfVar20[6] * temp_v37;
                pfVar20[7] = pfVar20[7] + pfVar20[8] * temp_v37;
                *pfVar20 = temp_v25;
              }
              temp_v41 = temp_v41 - 1;
              temp_v37 = temp_v17;
            }
          }
          temp_v18 = temp_v18 + 1;
          pfVar20 = pfVar20 + 0xb;
          pfVar18 = pfVar18 + 0xf;
          puVar19 = puVar19 + 0x14;
        } while ((int)temp_v18 < temp_v19);
      }
    }
  }
  return;
}

} /* extern "C" */
