/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00394a34` (_code @ 0x394a34, 0x824 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a1ee0(void);
int FUN_001b63b0(void);
int sysMemClear(float *, int);
int randomAdvanceShiftRegister(void);
int shiftRandomNextFraction(...);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);
int __aeabi_uidivmod(void);

/* stack frame of param_1: 14 slot(s), 56 byte(s) */
typedef struct {
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spF8; /* 0xf8: local_f8 */
    unsigned int spFC; /* 0xfc: local_fc */
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
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
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
/* Supplied declaration required: randomAdvanceShiftRegister. */
/* Supplied declaration required: shiftRandomNextFraction. */
/* Supplied declaration required: __aeabi_uidivmod. */


void FUN_00394a34(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 10 native warning(s); review required */
  unsigned int temp_v0;
  char temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int *piVar8;
  int temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float *pfVar12;
  int temp_v11;
  float *pfVar14;
  int temp_v12;
  float temp_v13;
  float *pfVar17;
  unsigned int in_fpscr;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
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
  float temp_v31;
  unsigned int temp_v32;
  unsigned int temp_v33;
  
  temp_v4 = effGetFrameStep();
  temp_v11 = *(int *)(param_1 + 0x40);
  temp_v14 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
  if ((*(int *)(param_1 + 0x34) <= *(int *)(temp_v11 + 0x34)) || (*(int *)(temp_v11 + 0x34) == 0)) {
    temp_v5 = *(int *)(temp_v11 + 0x80);
    temp_v6 = *(unsigned int *)(temp_v11 + 0x38);
    if (temp_v5 != 0) {
      if ((*(char *)(temp_v11 + 0xb8) == '\0') || (*(int *)(param_1 + 0x34) != 0)) {
        temp_v3 = 0;
        temp_v33 = *(unsigned int *)(temp_v11 + 0x84);
      }
      else {
        temp_v3 = 1;
        temp_v33 = temp_v6;
      }
      temp_v1 = *(char *)(temp_v11 + 0x88);
      temp_v15 = *(float *)(temp_v11 + 0xf4);
      piVar8 = (int *)(*(unsigned int **)(param_1 + 0x3c))[1];
      pfVar17 = (float *)**(unsigned int **)(param_1 + 0x3c);
      pfVar14 = *(float **)(*piVar8 + 0x30);
      temp_v12 = *(int *)(*piVar8 + 0x3c);
      piVar8[0x16] = piVar8[0x16] | 5;
      temp_v32 = 0;
      temp_v13 = (float)(*(int *)(temp_v11 + 0x8c) + 1);
      temp_v7 = (int)*(short *)((int)piVar8 + 10);
      temp_v16 = *(float *)(temp_v11 + 0xa4);
      temp_v29 = *(float *)(temp_v11 + 0x98);
      temp_v30 = *(float *)(temp_v11 + 0xe4);
      temp_v23 = (float)VectorUnsignedToFloat(temp_v13,(unsigned char)(in_fpscr >> 0x16) & 3);
      if (temp_v6 != 0) {
        temp_v9 = temp_v13;
        do {
          temp_v8 = *pfVar17;
          if (temp_v8 != -NAN) {
            if (temp_v8 != -NAN) {
              if (temp_v5 <= (int)temp_v8) {
                if (temp_v1 != '\0') {
                  temp_v9 = -NAN;
                }
                else {
                  sysMemClear(pfVar14,temp_v7 * 0xc);
                  temp_v9 = -NAN;
                }
                *pfVar17 = temp_v9;
                temp_v9 = (float)VectorUnsignedToFloat
                                          ((unsigned int)DAT_005c1130,(unsigned char)(in_fpscr >> 0x16) & 3);
                pfVar12 = (float *)(piVar8[1] + (temp_v32 & 0xffff) * 0x10);
                *pfVar12 = temp_v9 * 0.003921569f * 0.003921569f;
                temp_v9 = (float)VectorUnsignedToFloat
                                          ((unsigned int)DAT_005c1131,(unsigned char)(in_fpscr >> 0x16) & 3);
                pfVar12[1] = temp_v9 * 0.003921569f * 0.003921569f;
                temp_v9 = (float)VectorUnsignedToFloat
                                          ((unsigned int)DAT_005c1132,(unsigned char)(in_fpscr >> 0x16) & 3);
                pfVar12[2] = temp_v9 * 0.003921569f * 0.003921569f;
                temp_v9 = (float)VectorUnsignedToFloat
                                          ((unsigned int)DAT_005c1133,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v9 = temp_v9 * 0.003921569f * 0.003921569f;
                pfVar12[3] = temp_v9;
                pfVar14 = pfVar14 + temp_v7 * 3;
                temp_v12 = temp_v12 + temp_v7 * 8;
              }
              else {
                temp_v18 = (float)VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v20 = pfVar17[6];
                temp_v9 = 0.0f;
                temp_v21 = 0.0f;
                temp_v22 = pfVar17[8] * 0.25f;
                in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v20 == 0.0f) << 0x1e) |
                           ((unsigned int)(temp_v20 <= 0.0f) << 0x1d);
                temp_v8 = pfVar17[4] + pfVar17[5] * temp_v14;
                temp_v26 = pfVar17[2] + pfVar17[3] * temp_v14;
                pfVar17[4] = temp_v8;
                temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                temp_v8 = temp_v8 / temp_v23;
                pfVar17[2] = temp_v26;
                temp_v17 = pfVar17[9];
                if ((unsigned char)((temp_v2 >> 5) & 1) && !(unsigned char)(temp_v2 >> 6)) {
                  temp_v17 = -temp_v17;
                }
                temp_v28 = pfVar17[10];
                temp_v27 = pfVar17[0xb];
                temp_v20 = pfVar17[7] + (temp_v20 + temp_v15 * temp_v18 * 0.5f) * temp_v18;
                temp_v17 = temp_v17 / temp_v23;
                temp_v18 = temp_v21;
                if (temp_v13 != 0.0f) {
                  do {
                    temp_v19 = (float)VectorUnsignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
                    temp_v19 = temp_v19 / temp_v23 - temp_v30;
                    temp_v25 = temp_v19 * temp_v19 * temp_v28;
                    temp_v31 = temp_v20 * 40.743664f;
                    temp_v24 = temp_v26 + temp_v25;
                    temp_v19 = temp_v31;
                    FUN_001b63b0();
                    FUN_001a1ee0();
                    DAT_006472dc = temp_v31 * temp_v25;
                    DAT_006472e4 = temp_v19 * temp_v25;
                    DAT_00647304 = temp_v19 * temp_v24;
                    DAT_006472fc = temp_v31 * temp_v24;
                    temp_v19 = romwright_sqrt_4(DAT_006472dc * DAT_006472dc + temp_v8 * temp_v8 +
                                  DAT_006472e4 * DAT_006472e4);
                    temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v19 < 0.0f) << 0x1f) |
                            ((unsigned int)(temp_v19 == 0.0f) << 0x1e);
                    in_fpscr = temp_v0 | ((unsigned int)(temp_v19 != temp_v19) << 0x1c);
                    temp_v2 = (unsigned char)(temp_v0 >> 0x18);
                    DAT_006472e0 = temp_v8;
                    if (!(unsigned char)((temp_v2 >> 6) & 1) && temp_v2 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                      DAT_006472dc = DAT_006472dc / temp_v19;
                      DAT_006472e0 = temp_v8 / temp_v19;
                      DAT_006472e4 = DAT_006472e4 / temp_v19;
                    }
                    temp_v20 = temp_v20 + temp_v17;
                    temp_v19 = (float)VectorUnsignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
                    temp_v19 = temp_v27 + temp_v29 * (temp_v19 / temp_v23);
                    DAT_006472ec = DAT_006472dc * temp_v22;
                    DAT_006472f0 = DAT_006472e0 * temp_v22;
                    DAT_006472f4 = DAT_006472e4 * temp_v22;
                    DAT_006472f8 = temp_v21 * temp_v22;
                    DAT_00647308 = 0.0f;
                    DAT_006472dc = DAT_006472fc + DAT_006472ec;
                    DAT_005c1124 = temp_v18 + DAT_006472f0;
                    DAT_005c1128 = DAT_00647304 + DAT_006472f4;
                    DAT_006472e0 = DAT_005c1124;
                    DAT_006472e4 = DAT_005c1128;
                    DAT_00647300 = temp_v18;
                    pfVar14[3] = DAT_006472dc;
                    pfVar14[4] = DAT_005c1124;
                    pfVar14[5] = DAT_005c1128;
                    DAT_005c1124 = DAT_006472e0 + DAT_006472f0;
                    DAT_005c1128 = DAT_006472e4 + DAT_006472f4;
                    temp_v9 = (float)((int)temp_v9 + 1);
                    *pfVar14 = DAT_006472dc + DAT_006472ec;
                    pfVar14[1] = DAT_005c1124;
                    pfVar14[2] = DAT_005c1128;
                    DAT_006472dc = DAT_006472fc - DAT_006472ec;
                    DAT_005c1124 = DAT_00647300 - DAT_006472f0;
                    DAT_005c1128 = DAT_00647304 - DAT_006472f4;
                    DAT_006472e8 = DAT_00647308 - DAT_006472f8;
                    DAT_006472e0 = DAT_005c1124;
                    DAT_006472e4 = DAT_005c1128;
                    pfVar14[6] = DAT_006472dc;
                    pfVar14[7] = DAT_005c1124;
                    pfVar14[8] = DAT_005c1128;
                    DAT_005c1120 = DAT_006472dc - DAT_006472ec;
                    DAT_005c1124 = DAT_006472e0 - DAT_006472f0;
                    DAT_005c1128 = DAT_006472e4 - DAT_006472f4;
                    DAT_005c112c = DAT_006472e8 - DAT_006472f8;
                    DAT_006472dc = DAT_005c1120;
                    DAT_006472e0 = DAT_005c1124;
                    DAT_006472e4 = DAT_005c1128;
                    DAT_006472e8 = DAT_005c112c;
                    pfVar14[9] = DAT_005c1120;
                    pfVar14[10] = DAT_005c1124;
                    pfVar14[0xb] = DAT_005c1128;
                    *(float *)(temp_v12 + 4) = temp_v19;
                    *(float *)(temp_v12 + 0xc) = temp_v19;
                    *(float *)(temp_v12 + 0x14) = temp_v19;
                    *(float *)(temp_v12 + 0x1c) = temp_v19;
                    pfVar14 = pfVar14 + 0xc;
                    temp_v12 = temp_v12 + 0x20;
                    temp_v18 = temp_v18 + temp_v8;
                  } while ((unsigned int)temp_v9 < (unsigned int)temp_v13);
                }
                temp_v9 = (float)VectorSignedToFloat(*pfVar17,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v9 = (float)(int)(temp_v9 + temp_v14);
                *pfVar17 = temp_v9;
                pfVar17[0xb] = pfVar17[0xb] + temp_v16 * temp_v14;
              }
            }
            else {
              sysMemClear(pfVar14,temp_v7 * 0xc);
              if (temp_v33 != 0) {
                shiftRandomNextFraction(0);
                temp_v18 = 1.0f;
                temp_v17 = ((1.0f - *(float *)(temp_v11 + 0xc0)) + temp_v9 * *(float *)(temp_v11 + 0xc0)) *
                         *(float *)(temp_v11 + 0xbc);
                shiftRandomNextFraction(0);
                temp_v8 = (float)VectorUnsignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v9 = ((temp_v18 - *(float *)(temp_v11 + 200)) + temp_v9 * *(float *)(temp_v11 + 200)) *
                         *(float *)(temp_v11 + 0xc4) - temp_v17;
                pfVar17[3] = temp_v9 / temp_v8;
                pfVar17[2] = temp_v17;
                shiftRandomNextFraction(0);
                temp_v17 = ((temp_v18 - *(float *)(temp_v11 + 0xd0)) + temp_v9 * *(float *)(temp_v11 + 0xd0))
                         * *(float *)(temp_v11 + 0xcc);
                shiftRandomNextFraction(0);
                temp_v8 = (float)VectorUnsignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v9 = ((temp_v18 - *(float *)(temp_v11 + 0xd8)) + temp_v9 * *(float *)(temp_v11 + 0xd8))
                         * *(float *)(temp_v11 + 0xd4) - temp_v17;
                pfVar17[5] = temp_v9 / temp_v8;
                pfVar17[4] = temp_v17;
                shiftRandomNextFraction(0);
                temp_v9 = ((temp_v18 - *(float *)(temp_v11 + 0xe0)) + temp_v9 * *(float *)(temp_v11 + 0xe0))
                         * *(float *)(temp_v11 + 0xe8);
                pfVar17[10] = temp_v9;
                shiftRandomNextFraction(0);
                temp_v9 = temp_v9 * 6.2831855f;
                pfVar17[7] = temp_v9;
                shiftRandomNextFraction(0);
                temp_v9 = ((temp_v18 - *(float *)(temp_v11 + 0xf0)) + temp_v9 * *(float *)(temp_v11 + 0xf0))
                         * *(float *)(temp_v11 + 0xec);
                pfVar17[6] = temp_v9;
                shiftRandomNextFraction(0);
                temp_v9 = ((temp_v18 - *(float *)(temp_v11 + 0xb4)) + temp_v9 * *(float *)(temp_v11 + 0xb4))
                         * *(float *)(temp_v11 + 0xb0);
                pfVar17[8] = temp_v9;
                shiftRandomNextFraction(0);
                temp_v9 = ((temp_v18 - *(float *)(temp_v11 + 0xac)) + temp_v9 * *(float *)(temp_v11 + 0xac))
                         * *(float *)(temp_v11 + 0xa8);
                pfVar17[9] = temp_v9;
                shiftRandomNextFraction(0);
                temp_v9 = ((temp_v18 - *(float *)(temp_v11 + 0x9c)) + temp_v9 * *(float *)(temp_v11 + 0x9c))
                         * *(float *)(temp_v11 + 0x98);
                pfVar17[0xb] = temp_v9;
                if (!temp_v3) {
                  *pfVar17 = 0.0f;
                }
                else {
                  randomAdvanceShiftRegister();
                  __aeabi_uidivmod();
                  *pfVar17 = temp_v10;
                  temp_v9 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
                  pfVar17[4] = pfVar17[4] + pfVar17[5] * temp_v9;
                  pfVar17[2] = pfVar17[2] + pfVar17[3] * temp_v9;
                }
                temp_v33 = temp_v33 - 1;
              }
              pfVar14 = pfVar14 + temp_v7 * 3;
              temp_v12 = temp_v12 + temp_v7 * 8;
            }
          }
          else {
            pfVar14 = pfVar14 + temp_v7 * 3;
            temp_v12 = temp_v12 + temp_v7 * 8;
          }
          pfVar17 = pfVar17 + 0xc;
          temp_v32 = temp_v32 + 1;
        } while (temp_v32 < temp_v6);
      }
    }
  }
  return;
}

} /* extern "C" */
