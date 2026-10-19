/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00325280` (_code @ 0x325280, 0x13d0 bytes) from smt4_v1.2.0.cxi.
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

extern float DAT_00472520; /* 0x472520 */
extern float DAT_00472524; /* 0x472524 */
extern float DAT_00472528; /* 0x472528 */
extern float DAT_0047252c; /* 0x47252c */
extern float DAT_00472530; /* 0x472530 */
extern float DAT_00472534; /* 0x472534 */
extern float DAT_00472538; /* 0x472538 */
extern float DAT_0047253c; /* 0x47253c */
extern unsigned int DAT_00472550; /* 0x472550 */
extern float DAT_004ea91c; /* 0x4ea91c */
extern float DAT_004ea920; /* 0x4ea920 */
extern float DAT_004ea924; /* 0x4ea924 */
extern float DAT_004ea928; /* 0x4ea928 */
extern float DAT_004ea92c; /* 0x4ea92c */
extern float DAT_004ea930; /* 0x4ea930 */
extern float DAT_004ea934; /* 0x4ea934 */
extern float DAT_004ea938; /* 0x4ea938 */
extern float DAT_004ea93c; /* 0x4ea93c */
extern float DAT_004ea940; /* 0x4ea940 */
extern float DAT_004ea944; /* 0x4ea944 */
extern float DAT_004ea948; /* 0x4ea948 */

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
/* Supplied declaration required: FUN_0019dad8. */
/* Supplied declaration required: FUN_00217634. */
/* Supplied declaration required: FUN_00245ed0. */
/* Supplied declaration required: FUN_0024857c. */
/* Supplied declaration required: FUN_0024b77c. */
/* Supplied declaration required: FUN_0024b830. */
extern int FUN_00269a58(void);
/* Supplied declaration required: FUN_002a2c7c. */
/* Supplied declaration required: FUN_002b70cc. */
/* Supplied declaration required: aeabi_uidivmod. */


void FUN_00325280(int param_1)

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
    FUN_0019dad8(&temp_v32);
    DAT_004ea93c = DAT_00472520;
    DAT_004ea940 = DAT_00472524;
    DAT_004ea944 = DAT_00472528;
    DAT_004ea948 = DAT_0047252c;
    temp_v8 = *(float *)(temp_v5 + 0x7c);
    temp_v30 = CONCAT44(DAT_00472520 * temp_v8,DAT_00472524 * temp_v8);
    temp_v28 = CONCAT44(DAT_00472528 * temp_v8,DAT_0047252c * temp_v8);
    temp_v8 = *(float *)(temp_v5 + 0x7c) + *(float *)(temp_v5 + 0x80);
    temp_v19 = DAT_00472520 * temp_v8;
    temp_v9 = DAT_0047252c * temp_v8;
    temp_v48 = -temp_v19;
    temp_v26 = CONCAT44(DAT_00472524 * temp_v8,DAT_00472528 * temp_v8);
    temp_v56 = -(DAT_00472524 * temp_v8);
    temp_v59 = -(DAT_00472528 * temp_v8);
    DAT_004ea91c = *(float *)(param_1 + 0x10);
    DAT_004ea920 = *(float *)(param_1 + 0x14);
    DAT_004ea924 = *(float *)(param_1 + 0x18);
    DAT_004ea928 = *(float *)(param_1 + 0x1c);
    temp_v58 = temp_v9;
    FUN_002a2c7c();
    DAT_004ea928 = DAT_0047253c;
    DAT_004ea91c = DAT_00472530;
    DAT_004ea920 = DAT_00472534;
    DAT_004ea924 = DAT_00472538;
    FUN_00245ed0();
    temp_v8 = *(float *)(temp_v5 + 0x84);
    DAT_004ea91c = DAT_004ea91c * temp_v8;
    DAT_004ea920 = DAT_004ea920 * temp_v8;
    DAT_004ea924 = DAT_004ea924 * temp_v8;
    DAT_004ea928 = DAT_004ea928 * temp_v8;
    DAT_004ea92c = 0.0f;
    DAT_004ea930 = 0.0f;
    DAT_004ea934 = 0.0f;
    DAT_004ea938 = 1.0f;
    temp_v8 = romwright_sqrt_4(DAT_004ea91c * DAT_004ea91c + DAT_004ea920 * DAT_004ea920 +
                  DAT_004ea924 * DAT_004ea924);
    FUN_00217634();
    temp_v45 = *(float *)(temp_v5 + 0x44);
    temp_v47 = 0;
    temp_v44 = DAT_004ea91c;
    temp_v40 = DAT_004ea920;
    temp_v50 = DAT_004ea924;
    temp_v53 = (float)VectorUnsignedToFloat
                                (*(unsigned int *)(temp_v5 + 0x3c),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v41 = DAT_004ea928;
    if (0 < temp_v37) {
      unaff_r8 = (float *)&DAT_00472550;
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
            DAT_004ea928 = temp_v35;
            DAT_004ea92c = temp_v44;
            DAT_004ea930 = temp_v40;
            DAT_004ea934 = temp_v50;
            temp_v5 = (int)*(short *)(*temp_v49 + 2) / 5 >> 1;
            DAT_004ea938 = temp_v41;
            DAT_004ea91c = temp_v33 * temp_v50 - temp_v34 * temp_v40;
            DAT_004ea920 = temp_v34 * temp_v44 - temp_v32 * temp_v50;
            DAT_004ea924 = temp_v32 * temp_v40 - temp_v33 * temp_v44;
            temp_v10 = romwright_sqrt_4(DAT_004ea91c * DAT_004ea91c + DAT_004ea920 * DAT_004ea920 +
                          DAT_004ea924 * DAT_004ea924);
            temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v10 < 0.0f) << 0x1f) |
                    ((unsigned int)(temp_v10 == 0.0f) << 0x1e);
            temp_v7 = temp_v0 | ((unsigned int)(temp_v10 != temp_v10) << 0x1c);
            temp_v1 = (unsigned char)(temp_v0 >> 0x18);
            if (!(unsigned char)((temp_v1 >> 6) & 1) && temp_v1 >> 7 == ((unsigned char)(temp_v7 >> 0x1c) & 1)) {
              DAT_004ea91c = DAT_004ea91c / temp_v10;
              DAT_004ea920 = DAT_004ea920 / temp_v10;
              DAT_004ea924 = DAT_004ea924 / temp_v10;
            }
            temp_v3 = DAT_004ea924;
            temp_v42 = DAT_004ea91c;
            temp_v43 = DAT_004ea920;
            FUN_0024b830(0);
            temp_v10 = temp_v10 * 6.2831855f;
            temp_v24 = temp_v10 * 40.743664f;
            temp_v23 = temp_v10 - 6.2831855f;
            temp_v25 = temp_v24;
            FUN_002b70cc();
            temp_v24 = temp_v24 * temp_v46;
            temp_v11 = temp_v42 * temp_v24;
            temp_v12 = temp_v43 * temp_v24;
            temp_v13 = temp_v3 * temp_v24;
            DAT_004ea928 = temp_v8 * temp_v24;
            DAT_004ea91c = temp_v11;
            DAT_004ea920 = temp_v12;
            DAT_004ea924 = temp_v13;
            FUN_002b70cc();
            temp_v25 = temp_v25 * temp_v46;
            temp_v24 = temp_v25 - temp_v24;
            DAT_004ea93c = temp_v42 * temp_v24 + temp_v44 * temp_v53;
            DAT_004ea940 = temp_v43 * temp_v24 + temp_v40 * temp_v53;
            DAT_004ea944 = temp_v3 * temp_v24 + temp_v50 * temp_v53;
            temp_v14 = temp_v8 * temp_v24 + temp_v41 * temp_v53;
            temp_v15 = temp_v11 + DAT_004ea93c;
            temp_v16 = temp_v12 + DAT_004ea940;
            temp_v17 = temp_v13 + DAT_004ea944;
            temp_v18 = DAT_004ea928 + temp_v14;
            temp_v24 = romwright_sqrt_4(DAT_004ea93c * DAT_004ea93c + DAT_004ea940 * DAT_004ea940 +
                          DAT_004ea944 * DAT_004ea944);
            temp_v0 = (temp_v7 & 0xfffffff) | ((unsigned int)(temp_v24 < 0.0f) << 0x1f) |
                    ((unsigned int)(temp_v24 == 0.0f) << 0x1e);
            in_fpscr = temp_v0 | ((unsigned int)(temp_v24 != temp_v24) << 0x1c);
            temp_v1 = (unsigned char)(temp_v0 >> 0x18);
            DAT_004ea91c = DAT_004ea93c;
            DAT_004ea920 = DAT_004ea940;
            DAT_004ea924 = DAT_004ea944;
            if (!(unsigned char)((temp_v1 >> 6) & 1) && temp_v1 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
              DAT_004ea91c = DAT_004ea93c / temp_v24;
              DAT_004ea920 = DAT_004ea940 / temp_v24;
              DAT_004ea924 = DAT_004ea944 / temp_v24;
            }
            temp_v24 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v6 = 0;
            temp_v27 = (3.1415927f / temp_v24) * 4.0f;
            temp_v22 = DAT_004ea924;
            temp_v21 = DAT_004ea920;
            temp_v20 = DAT_004ea91c;
            temp_v24 = temp_v14;
            DAT_004ea92c = temp_v15;
            DAT_004ea930 = temp_v16;
            DAT_004ea934 = temp_v17;
            DAT_004ea938 = temp_v18;
            DAT_004ea948 = temp_v14;
            if (0 < temp_v5) {
              do {
                DAT_004ea91c = temp_v21 * temp_v34 - temp_v22 * temp_v33;
                DAT_004ea920 = temp_v22 * temp_v32 - temp_v20 * temp_v34;
                DAT_004ea924 = temp_v20 * temp_v33 - temp_v21 * temp_v32;
                temp_v24 = romwright_sqrt_4(DAT_004ea91c * DAT_004ea91c + DAT_004ea920 * DAT_004ea920 +
                              DAT_004ea924 * DAT_004ea924);
                temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v24 < 0.0f) << 0x1f) |
                        ((unsigned int)(temp_v24 == 0.0f) << 0x1e);
                temp_v7 = temp_v0 | ((unsigned int)(temp_v24 != temp_v24) << 0x1c);
                temp_v1 = (unsigned char)(temp_v0 >> 0x18);
                if (!(unsigned char)((temp_v1 >> 6) & 1) && temp_v1 >> 7 == ((unsigned char)(temp_v7 >> 0x1c) & 1)) {
                  DAT_004ea91c = DAT_004ea91c / temp_v24;
                  DAT_004ea920 = DAT_004ea920 / temp_v24;
                  DAT_004ea924 = DAT_004ea924 / temp_v24;
                }
                temp_v57 = DAT_004ea91c;
                temp_v55 = DAT_004ea920;
                fStack_78 = DAT_004ea924;
                DAT_004ea92c = DAT_004ea91c;
                DAT_004ea930 = DAT_004ea920;
                DAT_004ea934 = DAT_004ea924;
                DAT_004ea938 = temp_v14;
                *unaff_r8 = temp_v11;
                unaff_r8[1] = temp_v12;
                unaff_r8[2] = temp_v13;
                unaff_r8[3] = DAT_004ea928;
                pfVar7[6] = temp_v11;
                temp_v29 = (float)((unsigned long long)temp_v28 >> 0x20);
                pfVar7[7] = unaff_r8[1];
                pfVar7[8] = unaff_r8[2];
                temp_v31 = (float)((unsigned long long)temp_v30 >> 0x20);
                DAT_004ea93c = DAT_004ea92c * temp_v31;
                DAT_004ea940 = DAT_004ea930 * (float)temp_v30;
                DAT_004ea944 = DAT_004ea934 * temp_v29;
                DAT_004ea948 = DAT_004ea938 * (float)temp_v28;
                temp_v24 = temp_v11 + DAT_004ea93c;
                temp_v20 = temp_v12 + DAT_004ea940;
                temp_v21 = temp_v13 + DAT_004ea944;
                temp_v22 = DAT_004ea928 + DAT_004ea948;
                DAT_004ea92c = temp_v11;
                DAT_004ea930 = temp_v12;
                DAT_004ea934 = temp_v13;
                DAT_004ea938 = DAT_004ea928;
                *unaff_r8 = temp_v24;
                unaff_r8[1] = temp_v20;
                unaff_r8[2] = temp_v21;
                unaff_r8[3] = temp_v22;
                pfVar7[3] = temp_v24;
                pfVar7[4] = unaff_r8[1];
                pfVar7[5] = unaff_r8[2];
                unaff_r8[3] = DAT_004ea938 - DAT_004ea948;
                *unaff_r8 = DAT_004ea92c - DAT_004ea93c;
                unaff_r8[1] = DAT_004ea930 - DAT_004ea940;
                unaff_r8[2] = DAT_004ea934 - DAT_004ea944;
                pfVar7[9] = DAT_004ea92c - DAT_004ea93c;
                pfVar7[10] = unaff_r8[1];
                pfVar7[0xb] = unaff_r8[2];
                temp_v22 = (float)((unsigned long long)temp_v26 >> 0x20);
                DAT_004ea93c = DAT_004ea91c * temp_v19;
                DAT_004ea940 = DAT_004ea920 * temp_v22;
                DAT_004ea944 = DAT_004ea924 * (float)temp_v26;
                temp_v24 = temp_v11 + DAT_004ea93c;
                temp_v20 = temp_v12 + DAT_004ea940;
                temp_v21 = temp_v13 + DAT_004ea944;
                DAT_004ea92c = temp_v11;
                DAT_004ea930 = temp_v12;
                DAT_004ea934 = temp_v13;
                *unaff_r8 = temp_v24;
                unaff_r8[1] = temp_v20;
                unaff_r8[2] = temp_v21;
                unaff_r8[3] = DAT_004ea928 + temp_v14 * temp_v9;
                *pfVar7 = temp_v24;
                pfVar7[1] = unaff_r8[1];
                pfVar7[2] = unaff_r8[2];
                *unaff_r8 = DAT_004ea92c - DAT_004ea93c;
                unaff_r8[1] = DAT_004ea930 - DAT_004ea940;
                unaff_r8[2] = DAT_004ea934 - DAT_004ea944;
                pfVar7[0xc] = DAT_004ea92c - DAT_004ea93c;
                pfVar7[0xd] = unaff_r8[1];
                pfVar7[0xe] = unaff_r8[2];
                *unaff_r8 = temp_v15;
                unaff_r8[1] = temp_v16;
                unaff_r8[2] = temp_v17;
                unaff_r8[3] = temp_v18;
                pfVar7[0x15] = temp_v15;
                pfVar7[0x16] = unaff_r8[1];
                pfVar7[0x17] = unaff_r8[2];
                DAT_004ea93c = DAT_004ea91c * temp_v31;
                DAT_004ea940 = DAT_004ea920 * (float)temp_v30;
                DAT_004ea944 = DAT_004ea924 * temp_v29;
                DAT_004ea948 = temp_v14 * (float)temp_v28;
                temp_v24 = temp_v15 + DAT_004ea93c;
                temp_v11 = temp_v16 + DAT_004ea940;
                temp_v12 = temp_v17 + DAT_004ea944;
                DAT_004ea92c = temp_v15;
                DAT_004ea930 = temp_v16;
                DAT_004ea934 = temp_v17;
                DAT_004ea938 = temp_v18;
                unaff_r8[3] = temp_v18 + DAT_004ea948;
                *unaff_r8 = temp_v24;
                unaff_r8[1] = temp_v11;
                unaff_r8[2] = temp_v12;
                pfVar7[0x12] = temp_v24;
                pfVar7[0x13] = unaff_r8[1];
                pfVar7[0x14] = unaff_r8[2];
                unaff_r8[3] = DAT_004ea938 - DAT_004ea948;
                *unaff_r8 = DAT_004ea92c - DAT_004ea93c;
                unaff_r8[1] = DAT_004ea930 - DAT_004ea940;
                unaff_r8[2] = DAT_004ea934 - DAT_004ea944;
                pfVar7[0x18] = DAT_004ea92c - DAT_004ea93c;
                pfVar7[0x19] = unaff_r8[1];
                pfVar7[0x1a] = unaff_r8[2];
                DAT_004ea93c = DAT_004ea91c * temp_v19;
                DAT_004ea940 = DAT_004ea920 * temp_v22;
                DAT_004ea944 = DAT_004ea924 * (float)temp_v26;
                DAT_004ea948 = temp_v14 * temp_v9;
                temp_v24 = temp_v15 + DAT_004ea93c;
                temp_v11 = temp_v16 + DAT_004ea940;
                temp_v12 = temp_v17 + DAT_004ea944;
                temp_v13 = temp_v18 + DAT_004ea948;
                DAT_004ea92c = temp_v15;
                DAT_004ea930 = temp_v16;
                DAT_004ea934 = temp_v17;
                DAT_004ea938 = temp_v18;
                *unaff_r8 = temp_v24;
                unaff_r8[1] = temp_v11;
                unaff_r8[2] = temp_v12;
                unaff_r8[3] = temp_v13;
                pfVar7[0xf] = temp_v24;
                pfVar7[0x10] = unaff_r8[1];
                temp_v23 = temp_v23 + temp_v27;
                pfVar7[0x11] = unaff_r8[2];
                temp_v10 = temp_v10 + temp_v27;
                DAT_004ea91c = DAT_004ea93c;
                DAT_004ea920 = DAT_004ea940;
                DAT_004ea924 = DAT_004ea944;
                DAT_004ea928 = DAT_004ea948;
                temp_v24 = DAT_004ea92c - DAT_004ea93c;
                temp_v11 = DAT_004ea930 - DAT_004ea940;
                temp_v12 = DAT_004ea934 - DAT_004ea944;
                temp_v13 = DAT_004ea938 - DAT_004ea948;
                DAT_004ea92c = temp_v24;
                DAT_004ea930 = temp_v11;
                DAT_004ea934 = temp_v12;
                DAT_004ea938 = temp_v13;
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
                  FUN_0024b830(0);
                  temp_v46 = temp_v45 * (1.0f - temp_v14 * 0.95f);
                }
                temp_v14 = temp_v10 * 40.743664f;
                temp_v38 = temp_v25;
                FUN_002b70cc();
                temp_v25 = temp_v14 * temp_v46;
                DAT_004ea93c = temp_v44 * temp_v53;
                temp_v14 = temp_v25 - temp_v38;
                DAT_004ea940 = temp_v40 * temp_v53;
                DAT_004ea944 = temp_v50 * temp_v53;
                DAT_004ea948 = temp_v41 * temp_v53;
                temp_v54 = temp_v42 * temp_v14 + DAT_004ea93c;
                temp_v52 = temp_v43 * temp_v14 + DAT_004ea940;
                temp_v36 = temp_v3 * temp_v14 + DAT_004ea944;
                temp_v14 = temp_v8 * temp_v14 + DAT_004ea948;
                DAT_004ea91c = temp_v54;
                DAT_004ea920 = temp_v52;
                DAT_004ea924 = temp_v36;
                DAT_004ea928 = temp_v14;
                FUN_0024b830(0);
                FUN_0024857c(&temp_v32);
                DAT_004ea91c = temp_v54;
                DAT_004ea920 = temp_v52;
                DAT_004ea924 = temp_v36;
                DAT_004ea928 = temp_v14;
                FUN_00245ed0();
                temp_v14 = DAT_004ea928;
                temp_v15 = temp_v24 + DAT_004ea91c;
                temp_v16 = temp_v11 + DAT_004ea920;
                temp_v17 = temp_v12 + DAT_004ea924;
                temp_v18 = temp_v18 + DAT_004ea928;
                temp_v13 = romwright_sqrt_4(DAT_004ea91c * DAT_004ea91c + DAT_004ea920 * DAT_004ea920 +
                              DAT_004ea924 * DAT_004ea924);
                if (0.0f < temp_v13) {
                  DAT_004ea91c = DAT_004ea91c / temp_v13;
                  DAT_004ea920 = DAT_004ea920 / temp_v13;
                  DAT_004ea924 = DAT_004ea924 / temp_v13;
                }
                temp_v22 = DAT_004ea924;
                temp_v21 = DAT_004ea920;
                temp_v20 = DAT_004ea91c;
                DAT_004ea91c = temp_v15 - temp_v24;
                DAT_004ea920 = temp_v16 - temp_v11;
                DAT_004ea924 = temp_v17 - temp_v12;
                temp_v24 = romwright_sqrt_4(DAT_004ea91c * DAT_004ea91c + DAT_004ea920 * DAT_004ea920 +
                              DAT_004ea924 * DAT_004ea924);
                if (0.0f < temp_v24) {
                  DAT_004ea91c = DAT_004ea91c / temp_v24;
                  DAT_004ea920 = DAT_004ea920 / temp_v24;
                  DAT_004ea924 = DAT_004ea924 / temp_v24;
                }
                if (0.0f > DAT_004ea91c * temp_v57 + DAT_004ea920 * temp_v55 +
                          DAT_004ea924 * fStack_78) {
                  DAT_004ea940 = (float)((unsigned long long)temp_v26 >> 0x20);
                  DAT_004ea944 = (float)temp_v26;
                  temp_v2 = -0xc;
                  DAT_004ea93c = temp_v19;
                  DAT_004ea948 = temp_v9;
                }
                else {
                  temp_v2 = -0x3c;
                  DAT_004ea93c = temp_v48;
                  DAT_004ea940 = temp_v56;
                  DAT_004ea944 = temp_v59;
                  DAT_004ea948 = temp_v58;
                }
                pfVar5 = (float *)((int)(pfVar7 + 0x1e) + temp_v2);
                DAT_004ea91c = temp_v21 * temp_v34 - temp_v22 * temp_v33;
                DAT_004ea920 = temp_v22 * temp_v32 - temp_v20 * temp_v34;
                DAT_004ea924 = temp_v20 * temp_v33 - temp_v21 * temp_v32;
                temp_v24 = romwright_sqrt_4(DAT_004ea91c * DAT_004ea91c + DAT_004ea920 * DAT_004ea920 +
                              DAT_004ea924 * DAT_004ea924);
                temp_v0 = (temp_v7 & 0xfffffff) | ((unsigned int)(temp_v24 < 0.0f) << 0x1f) |
                        ((unsigned int)(temp_v24 == 0.0f) << 0x1e);
                in_fpscr = temp_v0 | ((unsigned int)(temp_v24 != temp_v24) << 0x1c);
                temp_v1 = (unsigned char)(temp_v0 >> 0x18);
                if (!(unsigned char)((temp_v1 >> 6) & 1) && temp_v1 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                  DAT_004ea91c = DAT_004ea91c / temp_v24;
                  DAT_004ea920 = DAT_004ea920 / temp_v24;
                  DAT_004ea924 = DAT_004ea924 / temp_v24;
                }
                temp_v6 = temp_v6 + 1;
                DAT_004ea91c = DAT_004ea91c * DAT_004ea93c;
                DAT_004ea920 = DAT_004ea920 * DAT_004ea940;
                DAT_004ea924 = DAT_004ea924 * DAT_004ea944;
                DAT_004ea928 = DAT_004ea928 * DAT_004ea948;
                *unaff_r8 = *pfVar5;
                unaff_r8[1] = pfVar5[1];
                DAT_004ea934 = pfVar5[2];
                unaff_r8[2] = DAT_004ea934;
                DAT_004ea938 = unaff_r8[3];
                DAT_004ea92c = *unaff_r8;
                DAT_004ea930 = unaff_r8[1];
                temp_v11 = DAT_004ea91c + DAT_004ea92c;
                temp_v12 = DAT_004ea920 + DAT_004ea930;
                temp_v13 = DAT_004ea924 + DAT_004ea934;
                DAT_004ea928 = DAT_004ea928 + DAT_004ea938;
                pfVar7 = pfVar7 + 0x1e;
                DAT_004ea91c = temp_v11;
                DAT_004ea920 = temp_v12;
                DAT_004ea924 = temp_v13;
                temp_v24 = DAT_004ea928;
              } while (temp_v6 < temp_v5);
            }
            DAT_004ea928 = temp_v24;
            temp_v5 = FUN_00269a58();
            temp_v49[1] = temp_v49[1] + temp_v5;
          }
          else {
            temp_v49[1] = -1;
            if (0 < temp_v51) {
              FUN_0024b77c(0);
              aeabi_uidivmod();
              temp_v49[1] = temp_v49[1] - temp_v4;
            }
          }
        }
        else {
          temp_v49[2] = -1;
          temp_v24 = DAT_004ea928;
          DAT_004ea928 = temp_v24;
          temp_v5 = FUN_00269a58();
          temp_v49[1] = temp_v49[1] + temp_v5;
        }
        temp_v47 = temp_v47 + 1;
        temp_v49 = temp_v49 + 3;
      } while (temp_v47 < temp_v37);
    }
  }
  return;
}
