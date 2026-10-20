/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003939e4` (_code @ 0x3939e4, 0xa24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(double, double);
int FUN_001a1ee0(void);
int FUN_001b63b0(void);
int FUN_002e6354(float *, int);
int FUN_00514500(void);
int FUN_00514540(...);
int FUN_005145f4(void);
int FUN_005147dc(void);
int FUN_00514904(void);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);
int aeabi_uidivmod(void);

/* stack frame of param_1: 14 slot(s), 56 byte(s) */
typedef struct {
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int sp104; /* 0x104: local_104 */
    unsigned int sp120; /* 0x120: local_120 */
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
extern unsigned int FUN_001acf08(void);
/* Supplied declaration required: FUN_001b63b0. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_00514500. */
/* Supplied declaration required: FUN_00514540. */
/* Supplied declaration required: FUN_005145f4. */
/* Supplied declaration required: FUN_005147dc. */
/* Supplied declaration required: FUN_00514904. */
/* Supplied declaration required: aeabi_uidivmod. */


void FUN_003939e4(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 14 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int *piVar7;
  float temp_v6;
  int temp_v7;
  float temp_v8;
  float temp_v9;
  float *pfVar11;
  int temp_v10;
  float *pfVar13;
  int temp_v11;
  unsigned int in_fpscr;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  unsigned int temp_v21;
  long long temp_v22;
  unsigned long long temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  float temp_v27;
  unsigned long long temp_v28;
  float *temp_v29;
  unsigned int temp_v30;
  unsigned int temp_v31;
  unsigned long long temp_v32;
  
  temp_v3 = FUN_001acf08();
  temp_v10 = *(int *)(param_1 + 0x40);
  temp_v3 = VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
  if ((*(int *)(param_1 + 0x34) <= *(int *)(temp_v10 + 0x34)) || (*(int *)(temp_v10 + 0x34) == 0)) {
    temp_v4 = *(int *)(temp_v10 + 0x80);
    temp_v5 = *(unsigned int *)(temp_v10 + 0x38);
    if (temp_v4 != 0) {
      if ((*(char *)(temp_v10 + 0xb8) == '\0') || (*(int *)(param_1 + 0x34) != 0)) {
        temp_v2 = 0;
        temp_v31 = *(unsigned int *)(temp_v10 + 0x84);
      }
      else {
        temp_v2 = 1;
        temp_v31 = temp_v5;
      }
      temp_v0 = *(char *)(temp_v10 + 0x88);
      temp_v12 = *(float *)(temp_v10 + 0xd4);
      piVar7 = (int *)(*(unsigned int **)(param_1 + 0x3c))[1];
      temp_v29 = (float *)**(unsigned int **)(param_1 + 0x3c);
      pfVar13 = *(float **)(*piVar7 + 0x30);
      temp_v11 = *(int *)(*piVar7 + 0x3c);
      piVar7[0x16] = piVar7[0x16] | 5;
      temp_v30 = 0;
      temp_v6 = (float)(*(int *)(temp_v10 + 0x8c) + 1);
      temp_v7 = (int)*(short *)((int)piVar7 + 10);
      temp_v24 = *(float *)(temp_v10 + 0x98);
      temp_v28 = romwright_piece_4_4(*(unsigned int *)(temp_v10 + 0xa4),temp_v3);
      temp_v21 = VectorUnsignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v22 = (unsigned long long)temp_v21 << 0x20;
      if (temp_v5 != 0) {
        temp_v26 = 0.0f;
        temp_v13 = temp_v6;
        do {
          temp_v8 = *temp_v29;
          if (temp_v8 != -NAN) {
            if (temp_v8 != -NAN) {
              if (temp_v4 <= (int)temp_v8) {
                if (temp_v0 != '\0') {
                  *temp_v29 = -NAN;
                }
                else {
                  FUN_002e6354(pfVar13,temp_v7 * 0xc);
                  *temp_v29 = -NAN;
                }
                temp_v13 = (float)VectorUnsignedToFloat
                                          ((unsigned int)DAT_005c1130,(unsigned char)(in_fpscr >> 0x16) & 3);
                pfVar11 = (float *)(piVar7[1] + (temp_v30 & 0xffff) * 0x10);
                *pfVar11 = temp_v13 * 0.003921569f * 0.003921569f;
                temp_v13 = (float)VectorUnsignedToFloat
                                          ((unsigned int)DAT_005c1131,(unsigned char)(in_fpscr >> 0x16) & 3);
                pfVar11[1] = temp_v13 * 0.003921569f * 0.003921569f;
                temp_v13 = (float)VectorUnsignedToFloat
                                          ((unsigned int)DAT_005c1132,(unsigned char)(in_fpscr >> 0x16) & 3);
                pfVar11[2] = temp_v13 * 0.003921569f * 0.003921569f;
                temp_v13 = (float)VectorUnsignedToFloat
                                          ((unsigned int)DAT_005c1133,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v13 = temp_v13 * 0.003921569f * 0.003921569f;
                pfVar11[3] = temp_v13;
                pfVar13 = pfVar13 + temp_v7 * 3;
                temp_v11 = temp_v11 + temp_v7 * 8;
              }
              else {
                temp_v13 = temp_v29[6];
                temp_v8 = (float)VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v27 = (float)((unsigned long long)temp_v22 >> 0x20);
                temp_v22 = CONCAT44(temp_v27,temp_v26);
                in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v26 == temp_v13) << 0x1e) |
                           ((unsigned int)(temp_v13 <= temp_v26) << 0x1d);
                temp_v17 = temp_v29[4] + temp_v29[5] * (float)temp_v28;
                temp_v32 = CONCAT44(temp_v29[8] * 0.25f,temp_v17);
                temp_v1 = (unsigned char)(in_fpscr >> 0x18);
                temp_v29[4] = temp_v17;
                temp_v8 = temp_v29[7] + (temp_v13 + temp_v12 * temp_v8 * 0.5f) * temp_v8;
                temp_v13 = temp_v29[9];
                if ((unsigned char)((temp_v1 >> 5) & 1) && !(unsigned char)(temp_v1 >> 6)) {
                  temp_v13 = -temp_v13;
                }
                temp_v23 = CONCAT44(temp_v13 / temp_v27,temp_v29[10]);
                FUN_005147dc();
                FUN_00514904();
                FUN_005145f4();
                temp_v25 = 40.743664f;
                temp_v27 = temp_v8 * 40.743664f;
                temp_v13 = temp_v27;
                FUN_001b63b0();
                FUN_001a1ee0();
                temp_v19 = (float)temp_v22;
                temp_v17 = 0.0f;
                if (temp_v6 != 0.0f) {
                  do {
                    temp_v8 = temp_v8 + (float)((unsigned long long)temp_v23 >> 0x20);
                    DAT_006472e8 = (float)temp_v32;
                    DAT_006472dc = (temp_v27 * DAT_0064731c + temp_v19 * DAT_0064732c +
                                   temp_v13 * DAT_0064733c) * DAT_006472e8;
                    DAT_006472e0 = (temp_v27 * DAT_00647320 + temp_v19 * DAT_00647330 +
                                   temp_v13 * DAT_00647340) * DAT_006472e8;
                    DAT_006472e4 = (temp_v27 * DAT_00647324 + temp_v19 * DAT_00647334 +
                                   temp_v13 * DAT_00647344) * DAT_006472e8;
                    DAT_006472e8 = (temp_v27 * DAT_00647328 + temp_v19 * DAT_00647338 +
                                   temp_v13 * DAT_00647348) * DAT_006472e8;
                    temp_v27 = temp_v8 * temp_v25;
                    temp_v13 = temp_v27;
                    DAT_006472fc = DAT_006472dc;
                    DAT_00647300 = DAT_006472e0;
                    DAT_00647304 = DAT_006472e4;
                    DAT_00647308 = DAT_006472e8;
                    FUN_001b63b0();
                    temp_v19 = (float)temp_v22;
                    FUN_001a1ee0();
                    temp_v18 = (float)temp_v32;
                    temp_v20 = (float)temp_v22;
                    temp_v14 = (temp_v27 * DAT_0064731c + temp_v19 * DAT_0064732c + temp_v13 * DAT_0064733c)
                             * temp_v18 - DAT_006472fc;
                    temp_v15 = (temp_v27 * DAT_00647320 + temp_v19 * DAT_00647330 + temp_v13 * DAT_00647340)
                             * temp_v18 - DAT_00647300;
                    temp_v16 = (temp_v27 * DAT_00647324 + temp_v19 * DAT_00647334 + temp_v13 * DAT_00647344)
                             * temp_v18 - DAT_00647304;
                    DAT_006472dc = temp_v15 * DAT_00647304 - temp_v16 * DAT_00647300;
                    DAT_006472e0 = temp_v16 * DAT_006472fc - temp_v14 * DAT_00647304;
                    DAT_006472e4 = temp_v14 * DAT_00647300 - temp_v15 * DAT_006472fc;
                    temp_v14 = romwright_sqrt_4(DAT_006472dc * DAT_006472dc + DAT_006472e0 * DAT_006472e0 +
                                  DAT_006472e4 * DAT_006472e4);
                    temp_v21 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v14 < temp_v20) << 0x1f) |
                             ((unsigned int)(temp_v14 == temp_v20) << 0x1e);
                    in_fpscr = temp_v21 | ((unsigned int)((temp_v14 != temp_v14) || (temp_v20 != temp_v20)) << 0x1c);
                    temp_v1 = (unsigned char)(temp_v21 >> 0x18);
                    if (!(unsigned char)((temp_v1 >> 6) & 1) && temp_v1 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                      DAT_006472dc = DAT_006472dc / temp_v14;
                      DAT_006472e0 = DAT_006472e0 / temp_v14;
                      DAT_006472e4 = DAT_006472e4 / temp_v14;
                    }
                    temp_v14 = (float)VectorUnsignedToFloat(temp_v17,(unsigned char)(in_fpscr >> 0x16) & 3);
                    DAT_006472f8 = (float)((unsigned long long)temp_v32 >> 0x20);
                    DAT_006472ec = DAT_006472dc * DAT_006472f8;
                    DAT_006472f0 = DAT_006472e0 * DAT_006472f8;
                    DAT_006472f4 = DAT_006472e4 * DAT_006472f8;
                    DAT_006472f8 = ((temp_v27 * DAT_00647328 + temp_v19 * DAT_00647338 +
                                    temp_v13 * DAT_00647348) * temp_v18 - DAT_00647308) * DAT_006472f8;
                    DAT_006472dc = DAT_006472fc + DAT_006472ec;
                    DAT_005c1124 = DAT_00647300 + DAT_006472f0;
                    DAT_005c1128 = DAT_00647304 + DAT_006472f4;
                    DAT_006472e0 = DAT_005c1124;
                    DAT_006472e4 = DAT_005c1128;
                    pfVar13[3] = DAT_006472dc;
                    pfVar13[4] = DAT_005c1124;
                    pfVar13[5] = DAT_005c1128;
                    DAT_005c1124 = DAT_006472e0 + DAT_006472f0;
                    DAT_005c1128 = DAT_006472e4 + DAT_006472f4;
                    *pfVar13 = DAT_006472dc + DAT_006472ec;
                    pfVar13[1] = DAT_005c1124;
                    pfVar13[2] = DAT_005c1128;
                    DAT_006472dc = DAT_006472fc - DAT_006472ec;
                    DAT_005c1124 = DAT_00647300 - DAT_006472f0;
                    DAT_005c1128 = DAT_00647304 - DAT_006472f4;
                    DAT_006472e8 = DAT_00647308 - DAT_006472f8;
                    temp_v14 = (float)temp_v23 + temp_v24 * (temp_v14 / (float)((unsigned long long)temp_v22 >> 0x20));
                    DAT_006472e0 = DAT_005c1124;
                    DAT_006472e4 = DAT_005c1128;
                    pfVar13[6] = DAT_006472dc;
                    pfVar13[7] = DAT_005c1124;
                    pfVar13[8] = DAT_005c1128;
                    DAT_005c1120 = DAT_006472dc - DAT_006472ec;
                    DAT_005c1124 = DAT_006472e0 - DAT_006472f0;
                    temp_v17 = (float)((int)temp_v17 + 1);
                    DAT_005c1128 = DAT_006472e4 - DAT_006472f4;
                    DAT_005c112c = DAT_006472e8 - DAT_006472f8;
                    DAT_006472dc = DAT_005c1120;
                    DAT_006472e0 = DAT_005c1124;
                    DAT_006472e4 = DAT_005c1128;
                    DAT_006472e8 = DAT_005c112c;
                    pfVar13[9] = DAT_005c1120;
                    pfVar13[10] = DAT_005c1124;
                    pfVar13[0xb] = DAT_005c1128;
                    *(float *)(temp_v11 + 4) = temp_v14;
                    *(float *)(temp_v11 + 0xc) = temp_v14;
                    *(float *)(temp_v11 + 0x14) = temp_v14;
                    *(float *)(temp_v11 + 0x1c) = temp_v14;
                    pfVar13 = pfVar13 + 0xc;
                    temp_v11 = temp_v11 + 0x20;
                  } while ((unsigned int)temp_v17 < (unsigned int)temp_v6);
                }
                temp_v13 = (float)VectorSignedToFloat(*temp_v29,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v29[10] = temp_v29[10] + (float)((unsigned long long)temp_v28 >> 0x20);
                temp_v13 = (float)(int)(temp_v13 + (float)temp_v28);
                *temp_v29 = temp_v13;
              }
            }
            else {
              FUN_002e6354(pfVar13,temp_v7 * 0xc);
              if (temp_v31 != 0) {
                FUN_00514540(0);
                temp_v27 = 1.0f;
                temp_v17 = ((1.0f - *(float *)(temp_v10 + 0xc0)) + temp_v13 * *(float *)(temp_v10 + 0xc0)) *
                         *(float *)(temp_v10 + 0xbc);
                FUN_00514540(0);
                temp_v8 = (float)VectorUnsignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v13 = ((temp_v27 - *(float *)(temp_v10 + 200)) + temp_v13 * *(float *)(temp_v10 + 200)) *
                         *(float *)(temp_v10 + 0xc4) - temp_v17;
                temp_v29[5] = temp_v13 / temp_v8;
                temp_v29[4] = temp_v17;
                FUN_00514540(0);
                temp_v17 = 0.5f;
                temp_v19 = 2.0f;
                temp_v8 = 3.1415927f;
                temp_v13 = (temp_v13 - 0.5f) * 2.0f * 3.1415927f;
                temp_v29[2] = temp_v13;
                FUN_00514540(0);
                temp_v8 = (temp_v13 - temp_v17) * temp_v19 * temp_v8;
                temp_v29[3] = temp_v8;
                FUN_00514540(0);
                temp_v8 = temp_v8 * 6.2831855f;
                temp_v29[7] = temp_v8;
                FUN_00514540(0);
                temp_v13 = ((temp_v27 - *(float *)(temp_v10 + 0xd0)) + temp_v8 * *(float *)(temp_v10 + 0xd0))
                         * *(float *)(temp_v10 + 0xcc);
                temp_v29[6] = temp_v13;
                FUN_00514540(0);
                temp_v13 = ((temp_v27 - *(float *)(temp_v10 + 0xb4)) + temp_v13 * *(float *)(temp_v10 + 0xb4))
                         * *(float *)(temp_v10 + 0xb0);
                temp_v29[8] = temp_v13;
                FUN_00514540(0);
                temp_v13 = ((temp_v27 - *(float *)(temp_v10 + 0xac)) + temp_v13 * *(float *)(temp_v10 + 0xac))
                         * *(float *)(temp_v10 + 0xa8);
                temp_v29[9] = temp_v13;
                FUN_00514540(0);
                temp_v13 = ((temp_v27 - *(float *)(temp_v10 + 0x9c)) + temp_v13 * *(float *)(temp_v10 + 0x9c))
                         * *(float *)(temp_v10 + 0x98);
                temp_v29[10] = temp_v13;
                if (!temp_v2) {
                  *temp_v29 = 0.0f;
                }
                else {
                  FUN_00514500();
                  aeabi_uidivmod();
                  temp_v13 = (float)VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
                  *temp_v29 = temp_v9;
                  temp_v29[4] = temp_v29[4] + temp_v29[5] * temp_v13;
                }
                temp_v31 = temp_v31 - 1;
              }
              pfVar13 = pfVar13 + temp_v7 * 3;
              temp_v11 = temp_v11 + temp_v7 * 8;
            }
          }
          else {
            pfVar13 = pfVar13 + temp_v7 * 3;
            temp_v11 = temp_v11 + temp_v7 * 8;
          }
          temp_v30 = temp_v30 + 1;
          temp_v29 = temp_v29 + 0xb;
        } while (temp_v30 < temp_v5);
      }
    }
  }
  return;
}

} /* extern "C" */
