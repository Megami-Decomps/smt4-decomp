/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003acac0` (_code @ 0x3acac0, 0x950 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(double, double);
int FUN_001a1ee0(void);
int FUN_001b63b0(void);
int sysMemClear(float *, int);
int mathEvaluateWeightedCurve(void);
int randomAdvanceShiftRegister(void);
int shiftRandomNextFraction(...);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);
int __aeabi_uidivmod(void);

/* stack frame of param_1: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spF8; /* 0xf8: local_f8 */
} param_1_stack;

extern float DAT_005c1120; /* 0x5c1120 */
extern float DAT_005c1124; /* 0x5c1124 */
extern float DAT_005c1128; /* 0x5c1128 */
extern float DAT_005c112c; /* 0x5c112c */
extern unsigned char DAT_005c1130; /* 0x5c1130 */
extern unsigned char DAT_005c1131; /* 0x5c1131 */
extern unsigned char DAT_005c1132; /* 0x5c1132 */
extern unsigned char DAT_005c1133; /* 0x5c1133 */
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
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
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
/* Supplied declaration required: FUN_001a1ee0. */
extern unsigned int effGetFrameStep(void);
/* Supplied declaration required: FUN_001b63b0. */
/* Supplied declaration required: sysMemClear. */
extern int FUN_0037a844(void);
/* Supplied declaration required: mathEvaluateWeightedCurve. */
/* Supplied declaration required: randomAdvanceShiftRegister. */
/* Supplied declaration required: shiftRandomNextFraction. */
/* Supplied declaration required: __aeabi_uidivmod. */


void FUN_003acac0(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 12 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  int *piVar10;
  int temp_v9;
  float temp_v10;
  int temp_v11;
  float temp_v12;
  float *pfVar14;
  float *pfVar15;
  int temp_v13;
  unsigned int temp_v14;
  float *pfVar18;
  int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int in_fpscr;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
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
  float temp_v32;
  unsigned long long temp_v33;
  float temp_v34;
  unsigned long long temp_v35;
  unsigned int temp_v36;
  
  temp_v6 = effGetFrameStep();
  temp_v15 = *(int *)(param_1 + 0x40);
  temp_v6 = VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
  if ((*(int *)(param_1 + 0x34) <= *(int *)(temp_v15 + 0x34)) || (*(int *)(temp_v15 + 0x34) == 0)) {
    temp_v7 = *(int *)(temp_v15 + 0x80);
    temp_v8 = *(unsigned int *)(temp_v15 + 0x38);
    if (temp_v7 != 0) {
      if ((*(char *)(temp_v15 + 0xb8) == '\0') || (*(int *)(param_1 + 0x34) != 0)) {
        temp_v2 = 0;
        temp_v36 = *(unsigned int *)(temp_v15 + 0x84);
      }
      else {
        temp_v2 = 1;
        temp_v36 = temp_v8;
      }
      temp_v0 = *(char *)(temp_v15 + 0x88);
      temp_v16 = 0;
      temp_v18 = *(float *)(temp_v15 + 0xd8);
      piVar10 = (int *)(*(unsigned int **)(param_1 + 0x3c))[1];
      pfVar18 = (float *)**(unsigned int **)(param_1 + 0x3c);
      temp_v19 = *(float *)(temp_v15 + 0xe4);
      pfVar15 = *(float **)(*piVar10 + 0x30);
      temp_v13 = *(int *)(*piVar10 + 0x3c);
      piVar10[0x16] = piVar10[0x16] | 5;
      temp_v14 = *(int *)(temp_v15 + 0x8c) + 1;
      temp_v9 = (int)*(short *)((int)piVar10 + 10);
      temp_v27 = *(float *)(temp_v15 + 0x98);
      temp_v35 = romwright_piece_4_4(temp_v6,*(unsigned int *)(temp_v15 + 0xec));
      temp_v20 = *(float *)(temp_v15 + 0xa4);
      temp_v25 = (float)VectorUnsignedToFloat(temp_v14,(unsigned char)(in_fpscr >> 0x16) & 3);
      if (temp_v8 != 0) {
        temp_v34 = 0.25f;
        temp_v21 = -temp_v19;
        do {
          temp_v10 = *pfVar18;
          if (temp_v10 != -NAN) {
            if (temp_v10 != -NAN) {
              if (temp_v7 <= (int)temp_v10) {
                if (temp_v0 != '\0') {
                  temp_v21 = -NAN;
                }
                else {
                  sysMemClear(pfVar15,temp_v9 * 0xc);
                  temp_v21 = -NAN;
                }
                *pfVar18 = temp_v21;
                pfVar14 = (float *)(piVar10[1] + (temp_v16 & 0xffff) * 0x10);
                temp_v21 = (float)VectorUnsignedToFloat
                                          ((unsigned int)DAT_005c1130,(unsigned char)(in_fpscr >> 0x16) & 3);
                *pfVar14 = temp_v21 * 0.003921569f * 0.003921569f;
                temp_v21 = (float)VectorUnsignedToFloat
                                          ((unsigned int)DAT_005c1131,(unsigned char)(in_fpscr >> 0x16) & 3);
                pfVar14[1] = temp_v21 * 0.003921569f * 0.003921569f;
                temp_v21 = (float)VectorUnsignedToFloat
                                          ((unsigned int)DAT_005c1132,(unsigned char)(in_fpscr >> 0x16) & 3);
                pfVar14[2] = temp_v21 * 0.003921569f * 0.003921569f;
                temp_v21 = (float)VectorUnsignedToFloat
                                          ((unsigned int)DAT_005c1133,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v21 = temp_v21 * 0.003921569f * 0.003921569f;
                pfVar14[3] = temp_v21;
                pfVar15 = pfVar15 + temp_v9 * 3;
                temp_v13 = temp_v13 + temp_v9 * 8;
              }
              else {
                temp_v21 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v10 = (float)VectorUnsignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v26 = pfVar18[0xb];
                temp_v33 = CONCAT44(pfVar18[10],pfVar18[5]);
                temp_v10 = temp_v21 / temp_v10 - (float)temp_v35;
                temp_v28 = pfVar18[2] + temp_v10 * temp_v10 * pfVar18[10];
                temp_v29 = (pfVar18[7] + (pfVar18[6] + temp_v18 * temp_v21 * 0.5f) * temp_v21) * 40.743664f;
                temp_v10 = temp_v29;
                FUN_001b63b0();
                FUN_001a1ee0();
                temp_v31 = CONCAT44(temp_v29,temp_v10);
                DAT_006472ec = temp_v29 * temp_v28;
                DAT_006472f4 = temp_v10 * temp_v28;
                temp_v10 = 0.0f;
                DAT_006472f0 = (float)temp_v33;
                DAT_006472f8 = 0.0f;
                DAT_00647308 = 0.0f;
                DAT_006472fc = DAT_006472ec;
                DAT_00647300 = DAT_006472f0;
                DAT_00647304 = DAT_006472f4;
                temp_v11 = FUN_0037a844();
                if (temp_v11 != 0) {
                  temp_v28 = temp_v21;
                  mathEvaluateWeightedCurve();
                  temp_v29 = (float)temp_v33 + temp_v21;
                  temp_v21 = temp_v28;
                }
                else {
                  temp_v29 = (pfVar18[4] + (float)temp_v33) - temp_v19 * temp_v21;
                }
                temp_v28 = (float)VectorUnsignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v21 = (temp_v21 + 1.0f) / temp_v28 - (float)temp_v35;
                temp_v21 = pfVar18[2] + pfVar18[3] +
                         temp_v21 * temp_v21 * (float)((unsigned long long)temp_v33 >> 0x20);
                temp_v32 = (float)((unsigned long long)temp_v31 >> 0x20);
                temp_v30 = (float)temp_v31;
                DAT_006472dc = temp_v32 * temp_v21 - DAT_006472ec;
                DAT_006472e0 = temp_v29 - DAT_006472f0;
                DAT_006472e4 = temp_v30 * temp_v21 - DAT_006472f4;
                temp_v21 = temp_v10 - DAT_006472f8;
                temp_v28 = romwright_sqrt_4(DAT_006472dc * DAT_006472dc + DAT_006472e0 * DAT_006472e0 +
                              DAT_006472e4 * DAT_006472e4);
                temp_v17 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v28 < temp_v10) << 0x1f) |
                         ((unsigned int)(temp_v28 == temp_v10) << 0x1e);
                in_fpscr = temp_v17 | ((unsigned int)((temp_v28 != temp_v28) || (temp_v10 != temp_v10)) << 0x1c);
                temp_v1 = (unsigned char)(temp_v17 >> 0x18);
                if (!(unsigned char)((temp_v1 >> 6) & 1) && temp_v1 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                  DAT_006472dc = DAT_006472dc / temp_v28;
                  DAT_006472e0 = DAT_006472e0 / temp_v28;
                  DAT_006472e4 = DAT_006472e4 / temp_v28;
                }
                temp_v5 = DAT_006472e4;
                temp_v4 = DAT_006472e0;
                temp_v3 = DAT_006472dc;
                DAT_006472e8 = temp_v21;
                pfVar18[5] = temp_v29;
                pfVar18[2] = pfVar18[2] + pfVar18[3];
                temp_v23 = pfVar18[9] / temp_v25;
                temp_v22 = pfVar18[8] * temp_v34;
                temp_v24 = DAT_006472dc * temp_v10;
                temp_v29 = DAT_006472dc * temp_v30;
                temp_v28 = DAT_006472e0 * temp_v32;
                DAT_006472dc = (DAT_006472e0 * temp_v30 - DAT_006472e4 * temp_v10) * temp_v22;
                DAT_006472e0 = (DAT_006472e4 * temp_v32 - temp_v29) * temp_v22;
                DAT_006472e4 = (temp_v24 - temp_v28) * temp_v22;
                DAT_006472e8 = DAT_006472e8 * temp_v22;
                temp_v17 = 0;
                DAT_006472ec = DAT_006472dc;
                DAT_006472f0 = DAT_006472e0;
                DAT_006472f4 = DAT_006472e4;
                DAT_006472f8 = DAT_006472e8;
                if (temp_v14 != 0) {
                  do {
                    temp_v10 = (float)VectorUnsignedToFloat(temp_v17,(unsigned char)(in_fpscr >> 0x16) & 3);
                    temp_v17 = temp_v17 + 1;
                    temp_v10 = temp_v26 + temp_v27 * (temp_v10 / temp_v25);
                    DAT_006472dc = DAT_006472fc + DAT_006472ec;
                    DAT_006472e0 = DAT_00647300 + DAT_006472f0;
                    DAT_006472e4 = DAT_00647304 + DAT_006472f4;
                    DAT_005c1124 = DAT_006472e0;
                    DAT_005c1128 = DAT_006472e4;
                    pfVar15[3] = DAT_006472dc;
                    pfVar15[4] = DAT_005c1124;
                    pfVar15[5] = DAT_005c1128;
                    DAT_005c1124 = DAT_006472e0 + DAT_006472f0;
                    DAT_005c1128 = DAT_006472e4 + DAT_006472f4;
                    *pfVar15 = DAT_006472dc + DAT_006472ec;
                    pfVar15[1] = DAT_005c1124;
                    pfVar15[2] = DAT_005c1128;
                    DAT_006472dc = DAT_006472fc - DAT_006472ec;
                    DAT_006472e0 = DAT_00647300 - DAT_006472f0;
                    DAT_006472e4 = DAT_00647304 - DAT_006472f4;
                    DAT_006472e8 = DAT_00647308 - DAT_006472f8;
                    DAT_005c1124 = DAT_006472e0;
                    DAT_005c1128 = DAT_006472e4;
                    pfVar15[6] = DAT_006472dc;
                    pfVar15[7] = DAT_005c1124;
                    pfVar15[8] = DAT_005c1128;
                    DAT_005c1120 = DAT_006472dc - DAT_006472ec;
                    DAT_005c1124 = DAT_006472e0 - DAT_006472f0;
                    DAT_005c1128 = DAT_006472e4 - DAT_006472f4;
                    DAT_005c112c = DAT_006472e8 - DAT_006472f8;
                    pfVar15[9] = DAT_005c1120;
                    pfVar15[10] = DAT_005c1124;
                    pfVar15[0xb] = DAT_005c1128;
                    *(float *)(temp_v13 + 4) = temp_v10;
                    *(float *)(temp_v13 + 0xc) = temp_v10;
                    *(float *)(temp_v13 + 0x14) = temp_v10;
                    *(float *)(temp_v13 + 0x1c) = temp_v10;
                    pfVar15 = pfVar15 + 0xc;
                    temp_v13 = temp_v13 + 0x20;
                    DAT_006472dc = temp_v3 * temp_v23;
                    DAT_006472e0 = temp_v4 * temp_v23;
                    DAT_006472e4 = temp_v5 * temp_v23;
                    DAT_006472e8 = temp_v21 * temp_v23;
                    DAT_006472fc = DAT_006472fc + DAT_006472dc;
                    DAT_00647300 = DAT_00647300 + DAT_006472e0;
                    DAT_00647304 = DAT_00647304 + DAT_006472e4;
                    DAT_00647308 = DAT_00647308 + DAT_006472e8;
                  } while (temp_v17 < temp_v14);
                }
                temp_v21 = (float)VectorSignedToFloat(*pfVar18,(unsigned char)(in_fpscr >> 0x16) & 3);
                pfVar18[0xb] = pfVar18[0xb] + temp_v20;
                temp_v21 = (float)(int)(temp_v21 + (float)((unsigned long long)temp_v35 >> 0x20));
                *pfVar18 = temp_v21;
              }
            }
            else {
              sysMemClear(pfVar15,temp_v9 * 0xc);
              if (temp_v36 != 0) {
                shiftRandomNextFraction(0);
                temp_v26 = 1.0f;
                temp_v29 = ((1.0f - *(float *)(temp_v15 + 0xc0)) + temp_v21 * *(float *)(temp_v15 + 0xc0)) *
                         *(float *)(temp_v15 + 0xbc);
                shiftRandomNextFraction(0);
                temp_v10 = (float)VectorUnsignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v21 = ((temp_v26 - *(float *)(temp_v15 + 200)) + temp_v21 * *(float *)(temp_v15 + 200)) *
                         *(float *)(temp_v15 + 0xc4) - temp_v29;
                pfVar18[3] = temp_v21 / temp_v10;
                pfVar18[2] = temp_v29;
                shiftRandomNextFraction(0);
                temp_v21 = ((temp_v26 - *(float *)(temp_v15 + 0xe0)) + temp_v21 * *(float *)(temp_v15 + 0xe0))
                         * *(float *)(temp_v15 + 0xdc);
                pfVar18[4] = temp_v21;
                shiftRandomNextFraction(0);
                temp_v21 = temp_v21 * *(float *)(temp_v15 + 0xcc);
                pfVar18[5] = temp_v21;
                shiftRandomNextFraction(0);
                temp_v21 = ((temp_v26 - *(float *)(temp_v15 + 0xe8)) + temp_v21 * *(float *)(temp_v15 + 0xe8))
                         * *(float *)(temp_v15 + 0xf0);
                pfVar18[10] = temp_v21;
                shiftRandomNextFraction(0);
                temp_v21 = temp_v21 * 6.2831855f;
                pfVar18[7] = temp_v21;
                shiftRandomNextFraction(0);
                temp_v21 = ((temp_v26 - *(float *)(temp_v15 + 0xd4)) + temp_v21 * *(float *)(temp_v15 + 0xd4))
                         * *(float *)(temp_v15 + 0xd0);
                pfVar18[6] = temp_v21;
                shiftRandomNextFraction(0);
                temp_v21 = ((temp_v26 - *(float *)(temp_v15 + 0xb4)) + temp_v21 * *(float *)(temp_v15 + 0xb4))
                         * *(float *)(temp_v15 + 0xb0);
                pfVar18[8] = temp_v21;
                shiftRandomNextFraction(0);
                temp_v21 = ((temp_v26 - *(float *)(temp_v15 + 0xac)) + temp_v21 * *(float *)(temp_v15 + 0xac))
                         * 10.0f * *(float *)(temp_v15 + 0xa8);
                pfVar18[9] = temp_v21;
                shiftRandomNextFraction(0);
                temp_v21 = ((temp_v26 - *(float *)(temp_v15 + 0x9c)) + temp_v21 * *(float *)(temp_v15 + 0x9c))
                         * *(float *)(temp_v15 + 0x98);
                pfVar18[0xb] = temp_v21;
                if (!temp_v2) {
                  *pfVar18 = 0.0f;
                }
                else {
                  randomAdvanceShiftRegister();
                  __aeabi_uidivmod();
                  temp_v21 = (float)VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
                  *pfVar18 = temp_v12;
                  pfVar18[2] = pfVar18[2] + pfVar18[3] * temp_v21;
                  pfVar18[5] = (pfVar18[5] + pfVar18[4] * temp_v21) - temp_v19 * temp_v21 * temp_v21 * 0.5f;
                }
                temp_v36 = temp_v36 - 1;
              }
              pfVar15 = pfVar15 + temp_v9 * 3;
              temp_v13 = temp_v13 + temp_v9 * 8;
            }
          }
          else {
            pfVar15 = pfVar15 + temp_v9 * 3;
            temp_v13 = temp_v13 + temp_v9 * 8;
          }
          temp_v16 = temp_v16 + 1;
          pfVar18 = pfVar18 + 0xc;
        } while (temp_v16 < temp_v8);
      }
    }
  }
  return;
}

} /* extern "C" */
