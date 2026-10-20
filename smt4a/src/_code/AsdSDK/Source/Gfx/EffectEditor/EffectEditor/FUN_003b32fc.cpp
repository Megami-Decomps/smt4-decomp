/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b32fc` (_code @ 0x3b32fc, 0xba4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a1ee0(void);
int FUN_001b63b0(void);
int FUN_00221d78(unsigned int);
int FUN_00514500(...);
int FUN_00514540(...);
int SUB41(...);
int VectorFloatToUnsigned(...);
int VectorSignedToFloat(...);
int aeabi_uidivmod(void);

/* stack frame of param_1: 20 slot(s), 80 byte(s) */
typedef struct {
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spFC; /* 0xfc: local_fc */
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
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SUB41 (SUBPIECE). */
/* Supplied declaration required: FUN_001a1ee0. */
extern unsigned int FUN_001acf08(void);
/* Supplied declaration required: FUN_001b63b0. */
/* Supplied declaration required: FUN_00221d78. */
/* Supplied declaration required: FUN_00514500. */
/* Supplied declaration required: FUN_00514540. */
/* Supplied declaration required: aeabi_uidivmod. */


void FUN_003b32fc(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 11 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  char temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned char *puVar12;
  float temp_v11;
  float temp_v12;
  float *pfVar14;
  float *pfVar15;
  unsigned char *puVar16;
  float *pfVar17;
  float temp_v13;
  int temp_v14;
  int temp_v15;
  unsigned int in_fpscr;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  float temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  float temp_v27;
  float temp_v28;
  float temp_v29;
  float temp_v30;
  float temp_v31;
  float temp_v32;
  float temp_v33;
  float temp_v34;
  float temp_v35;
  float temp_v36;
  float temp_v37;
  float temp_v38;
  unsigned long long temp_v39;
  float temp_v40;
  int temp_v41;
  int temp_v42;
  int temp_v43;
  float temp_v44;
  int temp_v45;
  
  temp_v8 = FUN_001acf08();
  temp_v14 = *(int *)(param_1 + 0x40);
  temp_v18 = (float)VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
  if ((*(int *)(param_1 + 0x34) <= *(int *)(temp_v14 + 0x34)) || (*(int *)(temp_v14 + 0x34) == 0)) {
    temp_v12 = *(float *)(temp_v14 + 0x4c);
    temp_v15 = *(int *)(temp_v14 + 0x38);
    pfVar17 = (float *)**(unsigned int **)(param_1 + 0x3c);
    temp_v9 = (*(unsigned int **)(param_1 + 0x3c))[1];
    if (temp_v12 != 0.0f) {
      temp_v27 = 1.0f;
      if (*(char *)(temp_v14 + 0x84) != '\0') {
        temp_v18 = -temp_v18;
        temp_v23 = (float)VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v26 = (float)VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v44 = 0.0f;
        temp_v23 = (1.0f - *(float *)(temp_v14 + 0x48)) * temp_v23;
        temp_v26 = (1.0f - *(float *)(temp_v14 + 0x44)) * temp_v26;
        temp_v40 = temp_v12;
      }
      else {
        temp_v23 = (float)VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v26 = (float)VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v40 = 0.0f;
        temp_v23 = *(float *)(temp_v14 + 0x44) * temp_v23;
        temp_v26 = *(float *)(temp_v14 + 0x48) * temp_v26;
        temp_v44 = temp_v12;
      }
      temp_v43 = (int)temp_v18;
      temp_v42 = (int)temp_v23;
      temp_v41 = (int)temp_v26;
      if ((*(char *)(temp_v14 + 0x55) == '\0') || (*(int *)(param_1 + 0x34) != 0)) {
        temp_v4 = 0;
        temp_v45 = *(int *)(temp_v14 + 0x50);
      }
      else {
        temp_v4 = 1;
        temp_v45 = temp_v15;
      }
      temp_v30 = 0.0f;
      pfVar15 = *(float **)(*(int *)(temp_v9 + 8) + 0x30);
      puVar16 = *(unsigned char **)(*(int *)(temp_v9 + 8) + 0x38);
      *(unsigned int *)(temp_v9 + 0x54) = *(unsigned int *)(temp_v9 + 0x54) | 0x21;
      FUN_00221d78(*(unsigned int *)(temp_v14 + 0x58));
      temp_v7 = DAT_006472e8;
      temp_v5 = DAT_006472e4;
      temp_v23 = DAT_006472e0;
      temp_v18 = DAT_006472dc;
      FUN_00221d78(*(unsigned int *)(temp_v14 + 0x5c));
      temp_v6 = DAT_006472e4;
      temp_v26 = DAT_006472dc;
      temp_v9 = 0;
      temp_v2 = *(char *)(temp_v14 + 0x54);
      temp_v29 = *(float *)(temp_v14 + 0x80);
      if (0 < temp_v15) {
        temp_v35 = 0.5f;
        temp_v38 = 6.2831855f;
        temp_v39 = 0xbf000000;
        temp_v37 = 40.743664f;
        temp_v34 = 255.0f;
        temp_v16 = temp_v29 * 0.5f;
        temp_v36 = temp_v16;
        temp_v31 = temp_v30;
        temp_v32 = DAT_006472e8;
        temp_v33 = DAT_006472e0;
        do {
          temp_v13 = *pfVar17;
          if (temp_v13 != -NAN) {
            if (temp_v13 != -NAN) {
              if (temp_v13 == temp_v44) {
                temp_v10 = 0;
                do {
                  pfVar14 = pfVar15 + temp_v10 * 3;
                  puVar12 = puVar16 + temp_v10 * 4;
                  *pfVar14 = temp_v30;
                  pfVar14[1] = temp_v30;
                  pfVar14[2] = temp_v30;
                  *puVar12 = 0;
                  puVar12[1] = 0;
                  temp_v10 = temp_v10 + 1;
                  puVar12[2] = 0;
                  puVar12[3] = 0;
                } while (temp_v10 < 4);
                if (temp_v2 == '\0') {
                  temp_v16 = -NAN;
                }
                else {
                  temp_v16 = -NAN;
                }
                *pfVar17 = temp_v16;
                temp_v16 = temp_v30;
              }
              else {
                temp_v0 = in_fpscr & 0xfffffff;
                temp_v1 = temp_v0 | ((unsigned int)(temp_v30 < temp_v29) << 0x1f) |
                        ((unsigned int)(temp_v30 == temp_v29) << 0x1e);
                in_fpscr = temp_v1 | ((unsigned int)((temp_v30 != temp_v30) || (temp_v29 != temp_v29)) << 0x1c);
                temp_v3 = (unsigned char)(temp_v1 >> 0x18);
                temp_v16 = (float)VectorSignedToFloat(temp_v13,(unsigned char)(in_fpscr >> 0x16) & 3);
                if (!(unsigned char)((temp_v3 >> 6) & 1) && temp_v3 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                  temp_v19 = (pfVar17[1] / temp_v36) * (float)temp_v39;
                  temp_v0 = temp_v0 | ((unsigned int)(temp_v16 < temp_v19) << 0x1f) |
                          ((unsigned int)(temp_v16 == temp_v19) << 0x1e);
                  in_fpscr = temp_v0 | ((unsigned int)((temp_v16 != temp_v16) || (temp_v19 != temp_v19)) << 0x1c);
                  temp_v3 = (unsigned char)(temp_v0 >> 0x18);
                  if (!(unsigned char)((temp_v3 >> 6) & 1) && temp_v3 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                    temp_v16 = temp_v19;
                  }
                }
                temp_v28 = pfVar17[4] + (pfVar17[1] + temp_v29 * temp_v16 * temp_v35) * temp_v16;
                temp_v19 = pfVar17[2] * temp_v37;
                temp_v16 = temp_v19;
                FUN_001b63b0();
                FUN_001a1ee0();
                temp_v17 = pfVar17[3];
                DAT_006472fc = temp_v19 * temp_v28;
                DAT_00647300 = temp_v31 * temp_v28;
                DAT_00647304 = temp_v16 * temp_v28;
                DAT_00647308 = temp_v31 * temp_v28;
                DAT_006472f8 = pfVar17[5];
                temp_v28 = temp_v16 * DAT_006472f8;
                temp_v24 = temp_v31 * DAT_006472f8;
                temp_v25 = -temp_v19 * DAT_006472f8;
                DAT_006472f8 = temp_v31 * DAT_006472f8;
                DAT_006472dc = temp_v19 * temp_v17 + DAT_006472fc + temp_v28;
                DAT_005c1124 = temp_v31 * temp_v17 + DAT_00647300 + temp_v24;
                DAT_005c1128 = temp_v16 * temp_v17 + DAT_00647304 + temp_v25;
                DAT_006472e0 = DAT_005c1124;
                DAT_006472e4 = DAT_005c1128;
                DAT_006472ec = temp_v28;
                DAT_006472f0 = temp_v24;
                DAT_006472f4 = temp_v25;
                *pfVar15 = DAT_006472dc;
                pfVar15[1] = DAT_005c1124;
                pfVar15[2] = DAT_005c1128;
                DAT_005c1124 = (DAT_006472e0 - DAT_006472f0) - DAT_006472f0;
                DAT_005c1128 = (DAT_006472e4 - DAT_006472f4) - DAT_006472f4;
                pfVar15[3] = (DAT_006472dc - DAT_006472ec) - DAT_006472ec;
                pfVar15[4] = DAT_005c1124;
                pfVar15[5] = DAT_005c1128;
                DAT_006472dc = -(temp_v19 * temp_v17) + DAT_006472fc + temp_v28;
                DAT_005c1124 = -(temp_v31 * temp_v17) + DAT_00647300 + temp_v24;
                DAT_005c1128 = -(temp_v16 * temp_v17) + DAT_00647304 + temp_v25;
                DAT_006472e8 = temp_v31 * temp_v17 + DAT_00647308 + DAT_006472f8;
                DAT_006472e0 = DAT_005c1124;
                DAT_006472e4 = DAT_005c1128;
                DAT_006472ec = temp_v28;
                DAT_006472f0 = temp_v24;
                DAT_006472f4 = temp_v25;
                pfVar15[6] = DAT_006472dc;
                pfVar15[7] = DAT_005c1124;
                pfVar15[8] = DAT_005c1128;
                DAT_005c1120 = (DAT_006472dc - DAT_006472ec) - DAT_006472ec;
                DAT_005c1124 = (DAT_006472e0 - DAT_006472f0) - DAT_006472f0;
                DAT_005c1128 = (DAT_006472e4 - DAT_006472f4) - DAT_006472f4;
                DAT_005c112c = (DAT_006472e8 - DAT_006472f8) - DAT_006472f8;
                pfVar15[9] = DAT_005c1120;
                pfVar15[10] = DAT_005c1124;
                pfVar15[0xb] = DAT_005c1128;
                if ((int)temp_v13 < temp_v42) {
                  temp_v19 = (float)VectorSignedToFloat(temp_v42,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v16 = (float)VectorSignedToFloat(temp_v13,(unsigned char)(in_fpscr >> 0x16) & 3);
                  DAT_006472f8 = temp_v16 / temp_v19;
                }
                else {
                  DAT_006472f8 = temp_v27;
                  if (temp_v41 < (int)temp_v13) {
                    temp_v16 = (float)VectorSignedToFloat((int)temp_v12 - temp_v41,
                                                        (unsigned char)(in_fpscr >> 0x16) & 3);
                    temp_v19 = (float)VectorSignedToFloat((int)temp_v12 - (int)temp_v13,
                                                        (unsigned char)(in_fpscr >> 0x16) & 3);
                    DAT_006472f8 = temp_v19 / temp_v16;
                  }
                }
                DAT_006472ec = DAT_005c1100 * DAT_006472f8;
                DAT_006472f0 = DAT_005c1104 * DAT_006472f8;
                DAT_006472f4 = DAT_005c1108 * DAT_006472f8;
                DAT_006472f8 = DAT_005c110c * DAT_006472f8;
                temp_v8 = VectorFloatToUnsigned(temp_v26 * DAT_006472ec * temp_v34,3);
                temp_v20 = VectorFloatToUnsigned(temp_v33 * DAT_006472f0 * temp_v34,3);
                temp_v21 = VectorFloatToUnsigned(temp_v6 * DAT_006472f4 * temp_v34,3);
                temp_v22 = VectorFloatToUnsigned(temp_v32 * DAT_006472f8 * temp_v34,3);
                *puVar16 = (char)temp_v22;
                puVar16[1] = (char)temp_v21;
                puVar16[2] = (char)temp_v20;
                puVar16[3] = (char)temp_v8;
                puVar16[4] = (char)temp_v22;
                puVar16[5] = (char)temp_v21;
                puVar16[6] = (char)temp_v20;
                puVar16[7] = (char)temp_v8;
                DAT_006472dc = temp_v18 * DAT_006472ec;
                DAT_006472e0 = temp_v23 * DAT_006472f0;
                DAT_006472e4 = temp_v5 * DAT_006472f4;
                DAT_006472e8 = temp_v7 * DAT_006472f8;
                temp_v8 = VectorFloatToUnsigned(DAT_006472e0 * temp_v34,3);
                temp_v21 = VectorFloatToUnsigned(DAT_006472dc * temp_v34,3);
                temp_v20 = VectorFloatToUnsigned(DAT_006472e4 * temp_v34,3);
                temp_v16 = (float)VectorFloatToUnsigned(DAT_006472e8 * temp_v34,3);
                puVar16[8] = SUB41(temp_v16,0);
                puVar16[9] = (char)temp_v20;
                puVar16[10] = (char)temp_v8;
                puVar16[0xb] = (char)temp_v21;
                puVar16[0xc] = SUB41(temp_v16,0);
                puVar16[0xd] = (char)temp_v20;
                puVar16[0xe] = (char)temp_v8;
                puVar16[0xf] = (char)temp_v21;
                *pfVar17 = (float)((int)temp_v13 + temp_v43);
              }
            }
            else if (temp_v45 != 0) {
              FUN_00514540(0);
              temp_v16 = temp_v16 * temp_v38;
              pfVar17[2] = temp_v16;
              temp_v13 = *(float *)(temp_v14 + 0x6c);
              FUN_00514540(0);
              temp_v13 = ((temp_v27 - temp_v13) + temp_v16 * temp_v13) * *(float *)(temp_v14 + 0x68);
              pfVar17[3] = temp_v13;
              temp_v19 = *(float *)(temp_v14 + 0x74);
              temp_v16 = temp_v27;
              FUN_00514540(0);
              temp_v13 = ((temp_v16 - temp_v19) + temp_v13 * temp_v19) * *(float *)(temp_v14 + 0x70);
              pfVar17[4] = temp_v13;
              FUN_00514540(0);
              temp_v13 = ((temp_v16 - *(float *)(temp_v14 + 0x7c)) + temp_v13 * *(float *)(temp_v14 + 0x7c)) *
                       *(float *)(temp_v14 + 0x78);
              pfVar17[1] = temp_v13;
              FUN_00514540(0);
              temp_v16 = *(float *)(temp_v14 + 0x60) *
                       ((temp_v16 - *(float *)(temp_v14 + 100)) + temp_v13 * *(float *)(temp_v14 + 100));
              pfVar17[5] = temp_v16;
              if (!temp_v4) {
                *pfVar17 = temp_v40;
                temp_v16 = temp_v40;
              }
              else {
                FUN_00514500(0);
                aeabi_uidivmod();
                *pfVar17 = temp_v11;
              }
              temp_v45 = temp_v45 - 1;
            }
          }
          temp_v9 = temp_v9 + 1;
          pfVar17 = pfVar17 + 6;
          pfVar15 = pfVar15 + 0xc;
          puVar16 = puVar16 + 0x10;
        } while (temp_v9 < temp_v15);
      }
    }
  }
  return;
}

} /* extern "C" */
