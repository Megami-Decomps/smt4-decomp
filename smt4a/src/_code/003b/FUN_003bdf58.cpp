/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bdf58` (_code @ 0x3bdf58, 0xd30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(...);
int FUN_001a1ee0(void);
int FUN_001b63b0(void);
int FUN_00221d78(unsigned int);
int FUN_00514500(...);
int FUN_00514540(...);
int SUB41(...);
int VectorFloatToUnsigned(...);
int VectorSignedToFloat(...);
int aeabi_uidivmod(void);

/* stack frame of param_1: 30 slot(s), 120 byte(s) */
typedef struct {
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spF8; /* 0xf8: local_f8 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp100; /* 0x100: local_100 */
    unsigned int sp104; /* 0x104: local_104 */
    unsigned int sp10C; /* 0x10c: local_10c */
    unsigned int sp120; /* 0x120: local_120 */
    unsigned int sp130; /* 0x130: local_130 */
    unsigned int sp134; /* 0x134: local_134 */
    unsigned int sp138; /* 0x138: local_138 */
    unsigned int sp13C; /* 0x13c: local_13c */
    unsigned int sp140; /* 0x140: local_140 */
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
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SUB41 (SUBPIECE). */
/* Supplied declaration required: FUN_001a1ee0. */
extern unsigned int FUN_001acf08(void);
/* Supplied declaration required: FUN_001b63b0. */
/* Supplied declaration required: FUN_00221d78. */
/* Supplied declaration required: FUN_00514500. */
/* Supplied declaration required: FUN_00514540. */
/* Supplied declaration required: aeabi_uidivmod. */


void FUN_003bdf58(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 12 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  char temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  int temp_v12;
  int temp_v13;
  unsigned char *puVar15;
  int temp_v14;
  float *pfVar16;
  int temp_v15;
  unsigned int in_fpscr;
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
  unsigned int temp_v26;
  unsigned int temp_v27;
  unsigned int temp_v28;
  float temp_v29;
  float temp_v30;
  float temp_v31;
  float temp_v32;
  float temp_v33;
  float temp_v34;
  long long temp_v35;
  float temp_v36;
  long long temp_v37;
  long long temp_v38;
  float temp_v39;
  float temp_v40;
  float temp_v41;
  float temp_v42;
  float temp_v43;
  unsigned long long temp_v44;
  int *temp_v45;
  int temp_v46;
  int temp_v47;
  unsigned char *temp_v48;
  int temp_v49;
  int temp_v50;
  float *temp_v51;
  int temp_v52;
  int temp_v53;
  int temp_v54;
  
  temp_v10 = FUN_001acf08();
  temp_v11 = *(int *)(param_1 + 0x40);
  temp_v19 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
  if ((*(int *)(param_1 + 0x34) <= *(int *)(temp_v11 + 0x34)) || (*(int *)(temp_v11 + 0x34) == 0)) {
    temp_v15 = *(int *)(temp_v11 + 0x4c);
    temp_v12 = *(int *)(temp_v11 + 0x38);
    temp_v45 = (int *)**(unsigned int **)(param_1 + 0x3c);
    temp_v13 = (*(unsigned int **)(param_1 + 0x3c))[1];
    if (temp_v15 != 0) {
      temp_v33 = 1.0f;
      if (*(char *)(temp_v11 + 0x94) != '\0') {
        temp_v19 = -temp_v19;
        temp_v53 = 0;
        temp_v20 = (float)VectorSignedToFloat(temp_v15,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v29 = (float)VectorSignedToFloat(temp_v15,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v20 = (1.0f - *(float *)(temp_v11 + 0x48)) * temp_v20;
        temp_v29 = (1.0f - *(float *)(temp_v11 + 0x44)) * temp_v29;
        temp_v46 = temp_v15;
      }
      else {
        temp_v20 = (float)VectorSignedToFloat(temp_v15,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v29 = (float)VectorSignedToFloat(temp_v15,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v46 = 0;
        temp_v20 = *(float *)(temp_v11 + 0x44) * temp_v20;
        temp_v29 = *(float *)(temp_v11 + 0x48) * temp_v29;
        temp_v53 = temp_v15;
      }
      temp_v52 = (int)temp_v19;
      temp_v50 = (int)temp_v20;
      temp_v47 = (int)temp_v29;
      if ((*(char *)(temp_v11 + 0x55) == '\0') || (*(int *)(param_1 + 0x34) != 0)) {
        temp_v4 = 0;
        temp_v54 = *(int *)(temp_v11 + 0x50);
      }
      else {
        temp_v4 = 1;
        temp_v54 = temp_v12;
      }
      temp_v35 = 0;
      temp_v51 = *(float **)(*(int *)(temp_v13 + 8) + 0x30);
      temp_v48 = *(unsigned char **)(*(int *)(temp_v13 + 8) + 0x38);
      *(unsigned int *)(temp_v13 + 0x54) = *(unsigned int *)(temp_v13 + 0x54) | 0x21;
      FUN_00221d78(*(unsigned int *)(temp_v11 + 0x58));
      temp_v8 = DAT_006472e8;
      temp_v6 = DAT_006472e4;
      temp_v20 = DAT_006472e0;
      temp_v19 = DAT_006472dc;
      FUN_00221d78(*(unsigned int *)(temp_v11 + 0x5c));
      temp_v9 = DAT_006472e8;
      temp_v7 = DAT_006472e4;
      temp_v5 = DAT_006472e0;
      temp_v29 = DAT_006472dc;
      temp_v49 = 0;
      temp_v37 = (unsigned long long)(unsigned int)*(float *)(temp_v11 + 0x90) << 0x20;
      temp_v2 = *(char *)(temp_v11 + 0x54);
      if (0 < temp_v12) {
        temp_v39 = 0.5f;
        temp_v38 = temp_v35 << 0x20;
        temp_v43 = 6.2831855f;
        temp_v44 = 0xbf000000;
        temp_v42 = 40.743664f;
        temp_v41 = 255.0f;
        temp_v16 = *(float *)(temp_v11 + 0x90) * 0.5f;
        temp_v40 = temp_v16;
        do {
          temp_v22 = (float)temp_v35;
          temp_v13 = *temp_v45;
          if (temp_v13 != -2) {
            if (temp_v13 != -1) {
              temp_v16 = (float)((unsigned long long)temp_v38 >> 0x20);
              if (temp_v13 == temp_v53) {
                temp_v13 = 0;
                do {
                  pfVar16 = temp_v51 + temp_v13 * 3;
                  puVar15 = temp_v48 + temp_v13 * 4;
                  *pfVar16 = temp_v16;
                  pfVar16[1] = temp_v16;
                  pfVar16[2] = temp_v16;
                  *puVar15 = 0;
                  puVar15[1] = 0;
                  temp_v13 = temp_v13 + 1;
                  puVar15[2] = 0;
                  puVar15[3] = 0;
                } while (temp_v13 < 4);
                if (temp_v2 == '\0') {
                  temp_v13 = -2;
                }
                else {
                  temp_v13 = -1;
                }
                *temp_v45 = temp_v13;
              }
              else {
                temp_v17 = (float)VectorSignedToFloat(temp_v13,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v18 = (float)((unsigned long long)temp_v37 >> 0x20);
                temp_v0 = in_fpscr & 0xfffffff;
                temp_v1 = temp_v0 | ((unsigned int)(temp_v16 < temp_v18) << 0x1f) |
                        ((unsigned int)(temp_v16 == temp_v18) << 0x1e);
                in_fpscr = temp_v1 | ((unsigned int)((temp_v16 != temp_v16) || (temp_v18 != temp_v18)) << 0x1c);
                temp_v3 = (unsigned char)(temp_v1 >> 0x18);
                if (!(unsigned char)((temp_v3 >> 6) & 1) && temp_v3 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                  temp_v21 = ((float)temp_v45[1] / temp_v40) * (float)temp_v44;
                  temp_v0 = temp_v0 | ((unsigned int)(temp_v17 < temp_v21) << 0x1f) |
                          ((unsigned int)(temp_v17 == temp_v21) << 0x1e);
                  in_fpscr = temp_v0 | ((unsigned int)((temp_v17 != temp_v17) || (temp_v21 != temp_v21)) << 0x1c);
                  temp_v3 = (unsigned char)(temp_v0 >> 0x18);
                  if (!(unsigned char)((temp_v3 >> 6) & 1) && temp_v3 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                    temp_v17 = temp_v21;
                  }
                }
                temp_v37 = CONCAT44(temp_v18,temp_v45[6]);
                temp_v34 = (float)temp_v45[4] + (float)temp_v45[5] * temp_v17;
                temp_v17 = ((float)temp_v45[1] + temp_v18 * temp_v17 * temp_v39) * temp_v17;
                temp_v18 = (float)temp_v45[2] * temp_v42;
                temp_v38 = CONCAT44(temp_v16,temp_v18);
                FUN_001b63b0();
                temp_v16 = (float)temp_v38;
                FUN_001a1ee0();
                temp_v36 = (float)temp_v37;
                temp_v21 = (float)temp_v45[3];
                temp_v23 = temp_v18 * temp_v36 * temp_v21;
                temp_v24 = (temp_v33 - temp_v36) * temp_v21;
                temp_v25 = temp_v16 * temp_v36 * temp_v21;
                DAT_00647300 = (temp_v33 - temp_v36) * temp_v17;
                DAT_00647308 = temp_v22 * temp_v17;
                temp_v35 = CONCAT44(temp_v18,DAT_00647308);
                DAT_006472f8 = (float)temp_v45[7];
                temp_v32 = temp_v16 * DAT_006472f8;
                temp_v30 = (float)((unsigned long long)temp_v38 >> 0x20) * DAT_006472f8;
                temp_v31 = -temp_v18 * DAT_006472f8;
                DAT_006472f8 = DAT_00647308 * DAT_006472f8;
                DAT_006472fc = temp_v18 * temp_v36 * temp_v17 + temp_v18 * temp_v34;
                DAT_00647304 = temp_v16 * temp_v36 * temp_v17 + temp_v16 * temp_v34;
                DAT_006472dc = temp_v23 + DAT_006472fc + temp_v32;
                DAT_005c1124 = temp_v24 + DAT_00647300 + temp_v30;
                DAT_005c1128 = temp_v25 + DAT_00647304 + temp_v31;
                DAT_006472e0 = DAT_005c1124;
                DAT_006472e4 = DAT_005c1128;
                DAT_006472ec = temp_v32;
                DAT_006472f0 = temp_v30;
                DAT_006472f4 = temp_v31;
                *temp_v51 = DAT_006472dc;
                temp_v51[1] = DAT_005c1124;
                temp_v51[2] = DAT_005c1128;
                DAT_005c1124 = (DAT_006472e0 - DAT_006472f0) - DAT_006472f0;
                DAT_005c1128 = (DAT_006472e4 - DAT_006472f4) - DAT_006472f4;
                temp_v51[3] = (DAT_006472dc - DAT_006472ec) - DAT_006472ec;
                temp_v51[4] = DAT_005c1124;
                temp_v51[5] = DAT_005c1128;
                DAT_006472dc = -temp_v23 + DAT_006472fc + temp_v32;
                DAT_005c1124 = -temp_v24 + DAT_00647300 + temp_v30;
                DAT_005c1128 = -temp_v25 + DAT_00647304 + temp_v31;
                DAT_006472e8 = temp_v22 * temp_v21 + DAT_00647308 + DAT_006472f8;
                DAT_006472e0 = DAT_005c1124;
                DAT_006472e4 = DAT_005c1128;
                DAT_006472ec = temp_v32;
                DAT_006472f0 = temp_v30;
                DAT_006472f4 = temp_v31;
                temp_v51[6] = DAT_006472dc;
                temp_v51[7] = DAT_005c1124;
                temp_v51[8] = DAT_005c1128;
                DAT_005c1120 = (DAT_006472dc - DAT_006472ec) - DAT_006472ec;
                DAT_005c1124 = (DAT_006472e0 - DAT_006472f0) - DAT_006472f0;
                DAT_005c1128 = (DAT_006472e4 - DAT_006472f4) - DAT_006472f4;
                DAT_005c112c = (DAT_006472e8 - DAT_006472f8) - DAT_006472f8;
                temp_v51[9] = DAT_005c1120;
                temp_v51[10] = DAT_005c1124;
                temp_v51[0xb] = DAT_005c1128;
                if (temp_v13 < temp_v50) {
                  temp_v22 = (float)VectorSignedToFloat(temp_v13,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v16 = (float)VectorSignedToFloat(temp_v50,(unsigned char)(in_fpscr >> 0x16) & 3);
                  DAT_006472f8 = temp_v22 / temp_v16;
                }
                else {
                  DAT_006472f8 = temp_v33;
                  if (temp_v47 < temp_v13) {
                    temp_v22 = (float)VectorSignedToFloat(temp_v15 - temp_v13,(unsigned char)(in_fpscr >> 0x16) & 3
                                                       );
                    temp_v16 = (float)VectorSignedToFloat(temp_v15 - temp_v47,
                                                        (unsigned char)(in_fpscr >> 0x16) & 3);
                    DAT_006472f8 = temp_v22 / temp_v16;
                  }
                }
                DAT_006472ec = DAT_005c1100 * DAT_006472f8;
                DAT_006472f0 = DAT_005c1104 * DAT_006472f8;
                DAT_006472f4 = DAT_005c1108 * DAT_006472f8;
                DAT_006472f8 = DAT_005c110c * DAT_006472f8;
                temp_v10 = VectorFloatToUnsigned(temp_v29 * DAT_006472ec * temp_v41,3);
                temp_v26 = VectorFloatToUnsigned(temp_v5 * DAT_006472f0 * temp_v41,3);
                temp_v27 = VectorFloatToUnsigned(temp_v7 * DAT_006472f4 * temp_v41,3);
                temp_v28 = VectorFloatToUnsigned(temp_v9 * DAT_006472f8 * temp_v41,3);
                *temp_v48 = (char)temp_v28;
                temp_v48[1] = (char)temp_v27;
                temp_v48[2] = (char)temp_v26;
                temp_v48[3] = (char)temp_v10;
                temp_v48[4] = (char)temp_v28;
                temp_v48[5] = (char)temp_v27;
                temp_v48[6] = (char)temp_v26;
                temp_v48[7] = (char)temp_v10;
                DAT_006472dc = temp_v19 * DAT_006472ec;
                DAT_006472e0 = temp_v20 * DAT_006472f0;
                DAT_006472e4 = temp_v6 * DAT_006472f4;
                DAT_006472e8 = temp_v8 * DAT_006472f8;
                temp_v10 = VectorFloatToUnsigned(DAT_006472dc * temp_v41,3);
                temp_v26 = VectorFloatToUnsigned(DAT_006472e0 * temp_v41,3);
                temp_v27 = VectorFloatToUnsigned(DAT_006472e4 * temp_v41,3);
                temp_v16 = (float)VectorFloatToUnsigned(DAT_006472e8 * temp_v41,3);
                temp_v48[8] = SUB41(temp_v16,0);
                temp_v48[9] = (char)temp_v27;
                temp_v48[10] = (char)temp_v26;
                temp_v48[0xb] = (char)temp_v10;
                temp_v48[0xc] = SUB41(temp_v16,0);
                temp_v48[0xd] = (char)temp_v27;
                temp_v48[0xe] = (char)temp_v26;
                temp_v48[0xf] = (char)temp_v10;
                *temp_v45 = temp_v13 + temp_v52;
              }
            }
            else if (temp_v54 != 0) {
              FUN_00514540(0);
              temp_v16 = temp_v16 * temp_v43;
              temp_v45[2] = (int)temp_v16;
              temp_v22 = *(float *)(temp_v11 + 0x6c);
              FUN_00514540(0);
              temp_v16 = ((temp_v33 - temp_v22) + temp_v16 * temp_v22) * *(float *)(temp_v11 + 0x68);
              temp_v45[3] = (int)temp_v16;
              temp_v22 = temp_v33;
              FUN_00514540(0);
              temp_v17 = ((temp_v33 - *(float *)(temp_v11 + 0x74)) + temp_v16 * *(float *)(temp_v11 + 0x74)) *
                       *(float *)(temp_v11 + 0x70);
              FUN_00514540(0);
              temp_v21 = *(float *)(temp_v11 + 0x7c);
              temp_v23 = *(float *)(temp_v11 + 0x78);
              temp_v18 = (float)VectorSignedToFloat(temp_v15,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v45[4] = (int)temp_v17;
              temp_v17 = ((temp_v33 - temp_v21) + temp_v16 * temp_v21) * temp_v23 - temp_v17;
              temp_v45[5] = (int)(temp_v17 / temp_v18);
              FUN_00514540(0);
              temp_v16 = ((temp_v33 - *(float *)(temp_v11 + 0x8c)) + temp_v17 * *(float *)(temp_v11 + 0x8c)) *
                       *(float *)(temp_v11 + 0x88);
              temp_v45[1] = (int)temp_v16;
              FUN_00514540(0);
              temp_v16 = *(float *)(temp_v11 + 0x60) *
                       ((temp_v33 - *(float *)(temp_v11 + 100)) + temp_v16 * *(float *)(temp_v11 + 100));
              temp_v45[7] = (int)temp_v16;
              FUN_00514540(0);
              temp_v16 = ((temp_v33 - *(float *)(temp_v11 + 0x84)) + temp_v16 * *(float *)(temp_v11 + 0x84)) *
                       *(float *)(temp_v11 + 0x80);
              temp_v45[6] = (int)temp_v16;
              if (temp_v4) {
                FUN_00514500(0);
                aeabi_uidivmod();
                *temp_v45 = temp_v14;
              }
              else {
                *temp_v45 = temp_v46;
              }
              temp_v54 = temp_v54 - 1;
              temp_v33 = temp_v22;
            }
          }
          temp_v49 = temp_v49 + 1;
          temp_v45 = temp_v45 + 8;
          temp_v51 = temp_v51 + 0xc;
          temp_v48 = temp_v48 + 0x10;
        } while (temp_v49 < temp_v12);
      }
    }
  }
  return;
}

} /* extern "C" */
