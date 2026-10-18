/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c694c` (_code @ 0x3c694c, 0x13d0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 28 slot(s), 112 byte(s) */
typedef struct {
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp104; /* 0x104: local_104 */
    unsigned int sp108; /* 0x108: local_108 */
    unsigned int sp110; /* 0x110: local_110 */
    unsigned int sp138; /* 0x138: local_138 */
    unsigned int sp13C; /* 0x13c: local_13c */
    unsigned int sp140; /* 0x140: local_140 */
    unsigned int sp144; /* 0x144: local_144 */
    unsigned int sp148; /* 0x148: local_148 */
} param_1_stack;

extern float DAT_005c1100; /* 0x5c1100 */
extern float DAT_005c1104; /* 0x5c1104 */
extern float DAT_005c1108; /* 0x5c1108 */
extern float DAT_005c110c; /* 0x5c110c */
extern float DAT_005c1110; /* 0x5c1110 */
extern float DAT_005c1114; /* 0x5c1114 */
extern float DAT_005c1118; /* 0x5c1118 */
extern float DAT_005c111c; /* 0x5c111c */
extern unsigned int DAT_005c1120; /* 0x5c1120 */
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

/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001a1ee0. */
extern int FUN_001acf08(void);
/* Supplied declaration required: FUN_001bc460. */
/* Supplied declaration required: FUN_00221ee0. */
/* Supplied declaration required: FUN_002f8b30. */
/* Supplied declaration required: FUN_0037ee54. */
/* Supplied declaration required: FUN_00514500. */
/* Supplied declaration required: FUN_00514540. */
/* Supplied declaration required: FUN_005147a0. */
/* Supplied declaration required: aeabi_uidivmod. */


void FUN_003c694c(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 14 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  float temp_v3;
  float *pfVar5;
  int temp_v4;
  int temp_v5;
  float *pfVar7;
  int temp_v6;
  float *unaff_r8;
  unsigned int in_fpscr;
  unsigned int temp_v7;
  float temp_v8;
  float temp_v9;
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
  float temp_v22;
  float temp_v23;
  float temp_v24;
  float temp_v25;
  unsigned long long temp_v26;
  float temp_v27;
  unsigned long long temp_v28;
  float temp_v29;
  unsigned long long temp_v30;
  float temp_v31;
  float temp_v32;
  float temp_v33;
  float temp_v34;
  float temp_v35;
  float temp_v36;
  int temp_v37;
  float temp_v38;
  float temp_v39;
  float temp_v40;
  float temp_v41;
  float temp_v42;
  float temp_v43;
  float temp_v44;
  float temp_v45;
  float temp_v46;
  int temp_v47;
  float temp_v48;
  int *temp_v49;
  float temp_v50;
  int temp_v51;
  float temp_v52;
  float temp_v53;
  float temp_v54;
  float temp_v55;
  float fStack_78;
  float temp_v56;
  float temp_v57;
  float temp_v58;
  float temp_v59;
  
  temp_v5 = *(int *)(param_1 + 0x34);
  temp_v49 = (int *)**(unsigned int **)(param_1 + 0x30);
  if ((*(int *)(param_1 + 0x28) <= *(int *)(temp_v5 + 0x34)) || (*(int *)(temp_v5 + 0x34) == 0)) {
    temp_v51 = *(int *)(temp_v5 + 0x40);
    temp_v37 = *(int *)(temp_v5 + 0x38);
    FUN_00221ee0(&temp_v32);
    DAT_006472fc = DAT_005c1100;
    DAT_00647300 = DAT_005c1104;
    DAT_00647304 = DAT_005c1108;
    DAT_00647308 = DAT_005c110c;
    temp_v8 = *(float *)(temp_v5 + 0x7c);
    temp_v30 = CONCAT44(DAT_005c1100 * temp_v8,DAT_005c1104 * temp_v8);
    temp_v28 = CONCAT44(DAT_005c1108 * temp_v8,DAT_005c110c * temp_v8);
    temp_v8 = *(float *)(temp_v5 + 0x7c) + *(float *)(temp_v5 + 0x80);
    temp_v19 = DAT_005c1100 * temp_v8;
    temp_v9 = DAT_005c110c * temp_v8;
    temp_v48 = -temp_v19;
    temp_v26 = CONCAT44(DAT_005c1104 * temp_v8,DAT_005c1108 * temp_v8);
    temp_v56 = -(DAT_005c1104 * temp_v8);
    temp_v59 = -(DAT_005c1108 * temp_v8);
    DAT_006472dc = *(float *)(param_1 + 0x10);
    DAT_006472e0 = *(float *)(param_1 + 0x14);
    DAT_006472e4 = *(float *)(param_1 + 0x18);
    DAT_006472e8 = *(float *)(param_1 + 0x1c);
    temp_v58 = temp_v9;
    FUN_001bc460();
    DAT_006472e8 = DAT_005c111c;
    DAT_006472dc = DAT_005c1110;
    DAT_006472e0 = DAT_005c1114;
    DAT_006472e4 = DAT_005c1118;
    FUN_0037ee54();
    temp_v8 = *(float *)(temp_v5 + 0x84);
    DAT_006472dc = DAT_006472dc * temp_v8;
    DAT_006472e0 = DAT_006472e0 * temp_v8;
    DAT_006472e4 = DAT_006472e4 * temp_v8;
    DAT_006472e8 = DAT_006472e8 * temp_v8;
    DAT_006472ec = 0.0f;
    DAT_006472f0 = 0.0f;
    DAT_006472f4 = 0.0f;
    DAT_006472f8 = 1.0f;
    temp_v8 = romwright_sqrt_4(DAT_006472dc * DAT_006472dc + DAT_006472e0 * DAT_006472e0 +
                  DAT_006472e4 * DAT_006472e4);
    FUN_002f8b30();
    temp_v45 = *(float *)(temp_v5 + 0x44);
    temp_v47 = 0;
    temp_v44 = DAT_006472dc;
    temp_v40 = DAT_006472e0;
    temp_v50 = DAT_006472e4;
    temp_v53 = (float)VectorUnsignedToFloat
                                (*(unsigned int *)(temp_v5 + 0x3c),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v41 = DAT_006472e8;
    if (0 < temp_v37) {
      unaff_r8 = (float *)&DAT_005c1120;
    }
    temp_v53 = (temp_v8 * 2.0f) / temp_v53;
    temp_v46 = temp_v45;
    if (0 < temp_v37) {
      do {
        temp_v8 = temp_v35;
        if (temp_v49[1] != -1) {
          if ((temp_v49[2] & 0xff000000U) >= 0x40000001) {
            temp_v49[2] = temp_v49[2] + 0xc0000000;
            pfVar7 = *(float **)(*(int *)(*temp_v49 + 8) + 0x30);
            DAT_006472e8 = temp_v35;
            DAT_006472ec = temp_v44;
            DAT_006472f0 = temp_v40;
            DAT_006472f4 = temp_v50;
            temp_v5 = (int)*(short *)(*temp_v49 + 2) / 5 >> 1;
            DAT_006472f8 = temp_v41;
            DAT_006472dc = temp_v33 * temp_v50 - temp_v34 * temp_v40;
            DAT_006472e0 = temp_v34 * temp_v44 - temp_v32 * temp_v50;
            DAT_006472e4 = temp_v32 * temp_v40 - temp_v33 * temp_v44;
            temp_v10 = romwright_sqrt_4(DAT_006472dc * DAT_006472dc + DAT_006472e0 * DAT_006472e0 +
                          DAT_006472e4 * DAT_006472e4);
            temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v10 < 0.0f) << 0x1f) |
                    ((unsigned int)(temp_v10 == 0.0f) << 0x1e);
            temp_v7 = temp_v0 | ((unsigned int)NAN(temp_v10) << 0x1c);
            temp_v1 = (unsigned char)(temp_v0 >> 0x18);
            if (!(unsigned char)((temp_v1 >> 6) & 1) && temp_v1 >> 7 == ((unsigned char)(temp_v7 >> 0x1c) & 1)) {
              DAT_006472dc = DAT_006472dc / temp_v10;
              DAT_006472e0 = DAT_006472e0 / temp_v10;
              DAT_006472e4 = DAT_006472e4 / temp_v10;
            }
            temp_v3 = DAT_006472e4;
            temp_v42 = DAT_006472dc;
            temp_v43 = DAT_006472e0;
            FUN_00514540(0);
            temp_v10 = temp_v10 * 6.2831855f;
            temp_v24 = temp_v10 * 40.743664f;
            temp_v23 = temp_v10 - 6.2831855f;
            temp_v25 = temp_v24;
            FUN_001a1ee0();
            temp_v24 = temp_v24 * temp_v46;
            temp_v11 = temp_v42 * temp_v24;
            temp_v12 = temp_v43 * temp_v24;
            temp_v13 = temp_v3 * temp_v24;
            DAT_006472e8 = temp_v8 * temp_v24;
            DAT_006472dc = temp_v11;
            DAT_006472e0 = temp_v12;
            DAT_006472e4 = temp_v13;
            FUN_001a1ee0();
            temp_v25 = temp_v25 * temp_v46;
            temp_v24 = temp_v25 - temp_v24;
            DAT_006472fc = temp_v42 * temp_v24 + temp_v44 * temp_v53;
            DAT_00647300 = temp_v43 * temp_v24 + temp_v40 * temp_v53;
            DAT_00647304 = temp_v3 * temp_v24 + temp_v50 * temp_v53;
            temp_v14 = temp_v8 * temp_v24 + temp_v41 * temp_v53;
            temp_v15 = temp_v11 + DAT_006472fc;
            temp_v16 = temp_v12 + DAT_00647300;
            temp_v17 = temp_v13 + DAT_00647304;
            temp_v18 = DAT_006472e8 + temp_v14;
            temp_v24 = romwright_sqrt_4(DAT_006472fc * DAT_006472fc + DAT_00647300 * DAT_00647300 +
                          DAT_00647304 * DAT_00647304);
            temp_v0 = (temp_v7 & 0xfffffff) | ((unsigned int)(temp_v24 < 0.0f) << 0x1f) |
                    ((unsigned int)(temp_v24 == 0.0f) << 0x1e);
            in_fpscr = temp_v0 | ((unsigned int)NAN(temp_v24) << 0x1c);
            temp_v1 = (unsigned char)(temp_v0 >> 0x18);
            DAT_006472dc = DAT_006472fc;
            DAT_006472e0 = DAT_00647300;
            DAT_006472e4 = DAT_00647304;
            if (!(unsigned char)((temp_v1 >> 6) & 1) && temp_v1 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
              DAT_006472dc = DAT_006472fc / temp_v24;
              DAT_006472e0 = DAT_00647300 / temp_v24;
              DAT_006472e4 = DAT_00647304 / temp_v24;
            }
            temp_v24 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v6 = 0;
            temp_v27 = (3.1415927f / temp_v24) * 4.0f;
            temp_v22 = DAT_006472e4;
            temp_v21 = DAT_006472e0;
            temp_v20 = DAT_006472dc;
            temp_v24 = temp_v14;
            DAT_006472ec = temp_v15;
            DAT_006472f0 = temp_v16;
            DAT_006472f4 = temp_v17;
            DAT_006472f8 = temp_v18;
            DAT_00647308 = temp_v14;
            if (0 < temp_v5) {
              do {
                DAT_006472dc = temp_v21 * temp_v34 - temp_v22 * temp_v33;
                DAT_006472e0 = temp_v22 * temp_v32 - temp_v20 * temp_v34;
                DAT_006472e4 = temp_v20 * temp_v33 - temp_v21 * temp_v32;
                temp_v24 = romwright_sqrt_4(DAT_006472dc * DAT_006472dc + DAT_006472e0 * DAT_006472e0 +
                              DAT_006472e4 * DAT_006472e4);
                temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v24 < 0.0f) << 0x1f) |
                        ((unsigned int)(temp_v24 == 0.0f) << 0x1e);
                temp_v7 = temp_v0 | ((unsigned int)NAN(temp_v24) << 0x1c);
                temp_v1 = (unsigned char)(temp_v0 >> 0x18);
                if (!(unsigned char)((temp_v1 >> 6) & 1) && temp_v1 >> 7 == ((unsigned char)(temp_v7 >> 0x1c) & 1)) {
                  DAT_006472dc = DAT_006472dc / temp_v24;
                  DAT_006472e0 = DAT_006472e0 / temp_v24;
                  DAT_006472e4 = DAT_006472e4 / temp_v24;
                }
                temp_v57 = DAT_006472dc;
                temp_v55 = DAT_006472e0;
                fStack_78 = DAT_006472e4;
                DAT_006472ec = DAT_006472dc;
                DAT_006472f0 = DAT_006472e0;
                DAT_006472f4 = DAT_006472e4;
                DAT_006472f8 = temp_v14;
                *unaff_r8 = temp_v11;
                unaff_r8[1] = temp_v12;
                unaff_r8[2] = temp_v13;
                unaff_r8[3] = DAT_006472e8;
                pfVar7[6] = temp_v11;
                temp_v29 = (float)((unsigned long long)temp_v28 >> 0x20);
                pfVar7[7] = unaff_r8[1];
                pfVar7[8] = unaff_r8[2];
                temp_v31 = (float)((unsigned long long)temp_v30 >> 0x20);
                DAT_006472fc = DAT_006472ec * temp_v31;
                DAT_00647300 = DAT_006472f0 * (float)temp_v30;
                DAT_00647304 = DAT_006472f4 * temp_v29;
                DAT_00647308 = DAT_006472f8 * (float)temp_v28;
                temp_v24 = temp_v11 + DAT_006472fc;
                temp_v20 = temp_v12 + DAT_00647300;
                temp_v21 = temp_v13 + DAT_00647304;
                temp_v22 = DAT_006472e8 + DAT_00647308;
                DAT_006472ec = temp_v11;
                DAT_006472f0 = temp_v12;
                DAT_006472f4 = temp_v13;
                DAT_006472f8 = DAT_006472e8;
                *unaff_r8 = temp_v24;
                unaff_r8[1] = temp_v20;
                unaff_r8[2] = temp_v21;
                unaff_r8[3] = temp_v22;
                pfVar7[3] = temp_v24;
                pfVar7[4] = unaff_r8[1];
                pfVar7[5] = unaff_r8[2];
                unaff_r8[3] = DAT_006472f8 - DAT_00647308;
                *unaff_r8 = DAT_006472ec - DAT_006472fc;
                unaff_r8[1] = DAT_006472f0 - DAT_00647300;
                unaff_r8[2] = DAT_006472f4 - DAT_00647304;
                pfVar7[9] = DAT_006472ec - DAT_006472fc;
                pfVar7[10] = unaff_r8[1];
                pfVar7[0xb] = unaff_r8[2];
                temp_v22 = (float)((unsigned long long)temp_v26 >> 0x20);
                DAT_006472fc = DAT_006472dc * temp_v19;
                DAT_00647300 = DAT_006472e0 * temp_v22;
                DAT_00647304 = DAT_006472e4 * (float)temp_v26;
                temp_v24 = temp_v11 + DAT_006472fc;
                temp_v20 = temp_v12 + DAT_00647300;
                temp_v21 = temp_v13 + DAT_00647304;
                DAT_006472ec = temp_v11;
                DAT_006472f0 = temp_v12;
                DAT_006472f4 = temp_v13;
                *unaff_r8 = temp_v24;
                unaff_r8[1] = temp_v20;
                unaff_r8[2] = temp_v21;
                unaff_r8[3] = DAT_006472e8 + temp_v14 * temp_v9;
                *pfVar7 = temp_v24;
                pfVar7[1] = unaff_r8[1];
                pfVar7[2] = unaff_r8[2];
                *unaff_r8 = DAT_006472ec - DAT_006472fc;
                unaff_r8[1] = DAT_006472f0 - DAT_00647300;
                unaff_r8[2] = DAT_006472f4 - DAT_00647304;
                pfVar7[0xc] = DAT_006472ec - DAT_006472fc;
                pfVar7[0xd] = unaff_r8[1];
                pfVar7[0xe] = unaff_r8[2];
                *unaff_r8 = temp_v15;
                unaff_r8[1] = temp_v16;
                unaff_r8[2] = temp_v17;
                unaff_r8[3] = temp_v18;
                pfVar7[0x15] = temp_v15;
                pfVar7[0x16] = unaff_r8[1];
                pfVar7[0x17] = unaff_r8[2];
                DAT_006472fc = DAT_006472dc * temp_v31;
                DAT_00647300 = DAT_006472e0 * (float)temp_v30;
                DAT_00647304 = DAT_006472e4 * temp_v29;
                DAT_00647308 = temp_v14 * (float)temp_v28;
                temp_v24 = temp_v15 + DAT_006472fc;
                temp_v11 = temp_v16 + DAT_00647300;
                temp_v12 = temp_v17 + DAT_00647304;
                DAT_006472ec = temp_v15;
                DAT_006472f0 = temp_v16;
                DAT_006472f4 = temp_v17;
                DAT_006472f8 = temp_v18;
                unaff_r8[3] = temp_v18 + DAT_00647308;
                *unaff_r8 = temp_v24;
                unaff_r8[1] = temp_v11;
                unaff_r8[2] = temp_v12;
                pfVar7[0x12] = temp_v24;
                pfVar7[0x13] = unaff_r8[1];
                pfVar7[0x14] = unaff_r8[2];
                unaff_r8[3] = DAT_006472f8 - DAT_00647308;
                *unaff_r8 = DAT_006472ec - DAT_006472fc;
                unaff_r8[1] = DAT_006472f0 - DAT_00647300;
                unaff_r8[2] = DAT_006472f4 - DAT_00647304;
                pfVar7[0x18] = DAT_006472ec - DAT_006472fc;
                pfVar7[0x19] = unaff_r8[1];
                pfVar7[0x1a] = unaff_r8[2];
                DAT_006472fc = DAT_006472dc * temp_v19;
                DAT_00647300 = DAT_006472e0 * temp_v22;
                DAT_00647304 = DAT_006472e4 * (float)temp_v26;
                DAT_00647308 = temp_v14 * temp_v9;
                temp_v24 = temp_v15 + DAT_006472fc;
                temp_v11 = temp_v16 + DAT_00647300;
                temp_v12 = temp_v17 + DAT_00647304;
                temp_v13 = temp_v18 + DAT_00647308;
                DAT_006472ec = temp_v15;
                DAT_006472f0 = temp_v16;
                DAT_006472f4 = temp_v17;
                DAT_006472f8 = temp_v18;
                *unaff_r8 = temp_v24;
                unaff_r8[1] = temp_v11;
                unaff_r8[2] = temp_v12;
                unaff_r8[3] = temp_v13;
                pfVar7[0xf] = temp_v24;
                pfVar7[0x10] = unaff_r8[1];
                temp_v23 = temp_v23 + temp_v27;
                pfVar7[0x11] = unaff_r8[2];
                temp_v10 = temp_v10 + temp_v27;
                DAT_006472dc = DAT_006472fc;
                DAT_006472e0 = DAT_00647300;
                DAT_006472e4 = DAT_00647304;
                DAT_006472e8 = DAT_00647308;
                temp_v24 = DAT_006472ec - DAT_006472fc;
                temp_v11 = DAT_006472f0 - DAT_00647300;
                temp_v12 = DAT_006472f4 - DAT_00647304;
                temp_v13 = DAT_006472f8 - DAT_00647308;
                DAT_006472ec = temp_v24;
                DAT_006472f0 = temp_v11;
                DAT_006472f4 = temp_v12;
                DAT_006472f8 = temp_v13;
                *unaff_r8 = temp_v24;
                unaff_r8[1] = temp_v11;
                unaff_r8[2] = temp_v12;
                unaff_r8[3] = temp_v13;
                pfVar7[0x1b] = temp_v24;
                pfVar7[0x1c] = unaff_r8[1];
                pfVar7[0x1d] = unaff_r8[2];
                temp_v24 = temp_v15;
                temp_v11 = temp_v16;
                temp_v12 = temp_v17;
                temp_v39 = temp_v14;
                if ((int)temp_v23 >= 0x40490fdc) {
                  temp_v14 = 3.1415927f;
                  temp_v23 = temp_v23 - 3.1415927f;
                  FUN_00514540(0);
                  temp_v46 = temp_v45 * (1.0f - temp_v14 * 0.95f);
                }
                temp_v14 = temp_v10 * 40.743664f;
                temp_v38 = temp_v25;
                FUN_001a1ee0();
                temp_v25 = temp_v14 * temp_v46;
                DAT_006472fc = temp_v44 * temp_v53;
                temp_v14 = temp_v25 - temp_v38;
                DAT_00647300 = temp_v40 * temp_v53;
                DAT_00647304 = temp_v50 * temp_v53;
                DAT_00647308 = temp_v41 * temp_v53;
                temp_v54 = temp_v42 * temp_v14 + DAT_006472fc;
                temp_v52 = temp_v43 * temp_v14 + DAT_00647300;
                temp_v36 = temp_v3 * temp_v14 + DAT_00647304;
                temp_v14 = temp_v8 * temp_v14 + DAT_00647308;
                DAT_006472dc = temp_v54;
                DAT_006472e0 = temp_v52;
                DAT_006472e4 = temp_v36;
                DAT_006472e8 = temp_v14;
                FUN_00514540(0);
                FUN_005147a0(&temp_v32);
                DAT_006472dc = temp_v54;
                DAT_006472e0 = temp_v52;
                DAT_006472e4 = temp_v36;
                DAT_006472e8 = temp_v14;
                FUN_0037ee54();
                temp_v14 = DAT_006472e8;
                temp_v15 = temp_v24 + DAT_006472dc;
                temp_v16 = temp_v11 + DAT_006472e0;
                temp_v17 = temp_v12 + DAT_006472e4;
                temp_v18 = temp_v18 + DAT_006472e8;
                temp_v13 = romwright_sqrt_4(DAT_006472dc * DAT_006472dc + DAT_006472e0 * DAT_006472e0 +
                              DAT_006472e4 * DAT_006472e4);
                if (0.0f < temp_v13) {
                  DAT_006472dc = DAT_006472dc / temp_v13;
                  DAT_006472e0 = DAT_006472e0 / temp_v13;
                  DAT_006472e4 = DAT_006472e4 / temp_v13;
                }
                temp_v22 = DAT_006472e4;
                temp_v21 = DAT_006472e0;
                temp_v20 = DAT_006472dc;
                DAT_006472dc = temp_v15 - temp_v24;
                DAT_006472e0 = temp_v16 - temp_v11;
                DAT_006472e4 = temp_v17 - temp_v12;
                temp_v24 = romwright_sqrt_4(DAT_006472dc * DAT_006472dc + DAT_006472e0 * DAT_006472e0 +
                              DAT_006472e4 * DAT_006472e4);
                if (0.0f < temp_v24) {
                  DAT_006472dc = DAT_006472dc / temp_v24;
                  DAT_006472e0 = DAT_006472e0 / temp_v24;
                  DAT_006472e4 = DAT_006472e4 / temp_v24;
                }
                if (0.0f > DAT_006472dc * temp_v57 + DAT_006472e0 * temp_v55 +
                          DAT_006472e4 * fStack_78) {
                  DAT_00647300 = (float)((unsigned long long)temp_v26 >> 0x20);
                  DAT_00647304 = (float)temp_v26;
                  temp_v2 = -0xc;
                  DAT_006472fc = temp_v19;
                  DAT_00647308 = temp_v9;
                }
                else {
                  temp_v2 = -0x3c;
                  DAT_006472fc = temp_v48;
                  DAT_00647300 = temp_v56;
                  DAT_00647304 = temp_v59;
                  DAT_00647308 = temp_v58;
                }
                pfVar5 = (float *)((int)(pfVar7 + 0x1e) + temp_v2);
                DAT_006472dc = temp_v21 * temp_v34 - temp_v22 * temp_v33;
                DAT_006472e0 = temp_v22 * temp_v32 - temp_v20 * temp_v34;
                DAT_006472e4 = temp_v20 * temp_v33 - temp_v21 * temp_v32;
                temp_v24 = romwright_sqrt_4(DAT_006472dc * DAT_006472dc + DAT_006472e0 * DAT_006472e0 +
                              DAT_006472e4 * DAT_006472e4);
                temp_v0 = (temp_v7 & 0xfffffff) | ((unsigned int)(temp_v24 < 0.0f) << 0x1f) |
                        ((unsigned int)(temp_v24 == 0.0f) << 0x1e);
                in_fpscr = temp_v0 | ((unsigned int)NAN(temp_v24) << 0x1c);
                temp_v1 = (unsigned char)(temp_v0 >> 0x18);
                if (!(unsigned char)((temp_v1 >> 6) & 1) && temp_v1 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                  DAT_006472dc = DAT_006472dc / temp_v24;
                  DAT_006472e0 = DAT_006472e0 / temp_v24;
                  DAT_006472e4 = DAT_006472e4 / temp_v24;
                }
                temp_v6 = temp_v6 + 1;
                DAT_006472dc = DAT_006472dc * DAT_006472fc;
                DAT_006472e0 = DAT_006472e0 * DAT_00647300;
                DAT_006472e4 = DAT_006472e4 * DAT_00647304;
                DAT_006472e8 = DAT_006472e8 * DAT_00647308;
                *unaff_r8 = *pfVar5;
                unaff_r8[1] = pfVar5[1];
                DAT_006472f4 = pfVar5[2];
                unaff_r8[2] = DAT_006472f4;
                DAT_006472f8 = unaff_r8[3];
                DAT_006472ec = *unaff_r8;
                DAT_006472f0 = unaff_r8[1];
                temp_v11 = DAT_006472dc + DAT_006472ec;
                temp_v12 = DAT_006472e0 + DAT_006472f0;
                temp_v13 = DAT_006472e4 + DAT_006472f4;
                DAT_006472e8 = DAT_006472e8 + DAT_006472f8;
                pfVar7 = pfVar7 + 0x1e;
                DAT_006472dc = temp_v11;
                DAT_006472e0 = temp_v12;
                DAT_006472e4 = temp_v13;
                temp_v24 = DAT_006472e8;
              } while (temp_v6 < temp_v5);
            }
            DAT_006472e8 = temp_v24;
            temp_v5 = FUN_001acf08();
            temp_v49[1] = temp_v49[1] + temp_v5;
          }
          else {
            temp_v49[1] = -1;
            if (0 < temp_v51) {
              FUN_00514500(0);
              aeabi_uidivmod();
              temp_v49[1] = temp_v49[1] - temp_v4;
            }
          }
        }
        else {
          temp_v49[2] = -1;
          temp_v24 = DAT_006472e8;
          DAT_006472e8 = temp_v24;
          temp_v5 = FUN_001acf08();
          temp_v49[1] = temp_v49[1] + temp_v5;
        }
        temp_v47 = temp_v47 + 1;
        temp_v49 = temp_v49 + 3;
      } while (temp_v47 < temp_v37);
    }
  }
  return;
}
