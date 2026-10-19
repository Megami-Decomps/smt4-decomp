/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00313a48` (_code @ 0x313a48, 0xa78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00313a48_arg0 fn_00313a48_arg0;
typedef struct fn_00313a48_arg0_p40 fn_00313a48_arg0_p40;
struct fn_00313a48_arg0 {
    unsigned char pad_0x0[0x34];
    int field_0x34; /* +0x34 */
    unsigned char field_0x38; /* +0x38 */
    unsigned char pad_0x39[0x3];
    void *field_0x3c; /* +0x3c */
    fn_00313a48_arg0_p40 *field_0x40; /* +0x40 */
};
struct fn_00313a48_arg0_p40 {
    unsigned char pad_0x0[0x34];
    undefined4 field_0x34; /* +0x34 */
    undefined4 field_0x38; /* +0x38 */
    unsigned char field_0x3c; /* +0x3c */
    unsigned char pad_0x3d[0x3];
    unsigned char field_0x40; /* +0x40 */
    unsigned char pad_0x41[0x3];
    float field_0x44; /* +0x44 */
    float field_0x48; /* +0x48 */
    undefined4 field_0x4c; /* +0x4c */
    undefined4 field_0x50; /* +0x50 */
    byte field_0x54; /* +0x54 */
    byte field_0x55; /* +0x55 */
    unsigned char pad_0x56[0x2];
    undefined4 field_0x58; /* +0x58 */
    undefined4 field_0x5c; /* +0x5c */
    float field_0x60; /* +0x60 */
    float field_0x64; /* +0x64 */
    float field_0x68; /* +0x68 */
    float field_0x6c; /* +0x6c */
    float field_0x70; /* +0x70 */
    float field_0x74; /* +0x74 */
    float field_0x78; /* +0x78 */
    float field_0x7c; /* +0x7c */
};

/* stack frame of param_1: 16 slot(s), 64 byte(s) */
typedef struct {
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int sp104; /* 0x104: local_104 */
} param_1_stack;

extern float DAT_00472520; /* 0x472520 */
extern float DAT_00472524; /* 0x472524 */
extern float DAT_00472528; /* 0x472528 */
extern float DAT_0047252c; /* 0x47252c */
extern float DAT_00472550; /* 0x472550 */
extern float DAT_00472554; /* 0x472554 */
extern float DAT_00472558; /* 0x472558 */
extern float DAT_0047255c; /* 0x47255c */
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

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SUB41 (SUBPIECE). */
extern unsigned int FUN_00246c28(void);
/* Supplied declaration required: FUN_00246c8c. */
/* Supplied declaration required: FUN_0024b77c. */
/* Supplied declaration required: FUN_0024b830. */
extern int FUN_00269a58(void);
/* Supplied declaration required: FUN_002b7064. */
/* Supplied declaration required: FUN_002b70cc. */
/* Supplied declaration required: aeabi_uidivmod. */


void FUN_00313a48(fn_00313a48_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr; 12 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  int temp_v16;
  int temp_v17;
  int temp_v18;
  unsigned int *puVar19;
  float *pfVar20;
  float *pfVar21;
  unsigned int *puVar22;
  int *piVar23;
  int temp_v19;
  unsigned int temp_v20;
  fn_00313a48_arg0_p40 *pfVar26;
  int temp_v21;
  unsigned int in_fpscr;
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
  float temp_v32;
  float temp_v33;
  float temp_v34;
  float temp_v35;
  float temp_v36;
  long long temp_v37;
  int temp_v38;
  
  pfVar26 = param_1->field_0x40;
  if ((param_1->field_0x34 <= (int)pfVar26->field_0x34) || (pfVar26->field_0x34 == 0)) {
    temp_v18 = pfVar26->field_0x4c;
    temp_v21 = pfVar26->field_0x38;
    piVar23 = *(int **)param_1->field_0x3c;
    temp_v13 = *(int *)((int)param_1->field_0x3c + 4);
    if (temp_v18 != 0) {
      if ((pfVar26->field_0x55 == 0) || (param_1->field_0x34 != 0)) {
        temp_v4 = 0;
        temp_v38 = pfVar26->field_0x50;
      }
      else {
        temp_v4 = 1;
        temp_v38 = temp_v21;
      }
      temp_v35 = 0.0f;
      pfVar21 = *(float **)(*(int *)(temp_v13 + 8) + 0x30);
      puVar22 = *(unsigned int **)(*(int *)(temp_v13 + 8) + 0x38);
      *(unsigned int *)(temp_v13 + 0x54) = *(unsigned int *)(temp_v13 + 0x54) | 0x21;
      FUN_00246c8c(pfVar26->field_0x58 & 0xffffff);
      temp_v11 = DAT_004ea928;
      temp_v9 = DAT_004ea924;
      temp_v7 = DAT_004ea920;
      temp_v5 = DAT_004ea91c;
      FUN_00246c8c(pfVar26->field_0x5c & 0xffffff);
      temp_v12 = DAT_004ea928;
      temp_v10 = DAT_004ea924;
      temp_v8 = DAT_004ea920;
      temp_v6 = DAT_004ea91c;
      temp_v33 = (float)VectorSignedToFloat(temp_v18,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v34 = (float)VectorSignedToFloat(temp_v18,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v20 = 0;
      temp_v33 = (float)(int)(pfVar26->field_0x44 * temp_v33);
      temp_v13 = (int)(pfVar26->field_0x48 * temp_v34);
      temp_v0 = pfVar26->field_0x54;
      temp_v34 = pfVar26->field_0x7c;
      if (0 < temp_v21) {
        temp_v37 = (unsigned long long)(unsigned int)temp_v35 << 0x20;
        temp_v28 = temp_v33;
        do {
          temp_v19 = *piVar23;
          if (temp_v19 != -2) {
            if (temp_v19 != -1) {
              temp_v28 = (float)((unsigned long long)temp_v37 >> 0x20);
              if (temp_v19 >= temp_v18) {
                temp_v19 = 0;
                do {
                  pfVar20 = pfVar21 + temp_v19 * 3;
                  puVar19 = puVar22 + temp_v19;
                  *pfVar20 = temp_v28;
                  pfVar20[1] = temp_v28;
                  pfVar20[2] = temp_v28;
                  *(unsigned char *)puVar19 = 0;
                  *(unsigned char *)((int)puVar19 + 1) = 0;
                  temp_v19 = temp_v19 + 1;
                  *(unsigned char *)((int)puVar19 + 2) = 0;
                  *(unsigned char *)((int)puVar19 + 3) = 0;
                } while (temp_v19 < 5);
                if (temp_v0 == 0) {
                  temp_v19 = -2;
                }
                else {
                  temp_v19 = -1;
                }
                *piVar23 = temp_v19;
              }
              else {
                temp_v24 = (float)piVar23[1];
                temp_v14 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v24 < temp_v28) << 0x1f) |
                         ((unsigned int)(temp_v24 == temp_v28) << 0x1e);
                in_fpscr = temp_v14 | ((unsigned int)((temp_v24 != temp_v24) || (temp_v28 != temp_v28)) << 0x1c);
                temp_v1 = (unsigned char)(temp_v14 >> 0x18);
                temp_v22 = (float)VectorSignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
                if (!((unsigned char)((temp_v1 >> 6) & 1) || temp_v1 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1))) {
                  temp_v24 = temp_v24 + temp_v34 * temp_v22 * 0.5f;
                }
                else {
                  temp_v24 = temp_v24 - temp_v34 * temp_v22 * 0.5f;
                }
                temp_v25 = (float)piVar23[3];
                temp_v29 = DAT_00472524 * temp_v25;
                temp_v30 = DAT_00472528 * temp_v25;
                temp_v26 = DAT_0047252c * temp_v25;
                temp_v37 = CONCAT44(temp_v28,DAT_00472520 * temp_v25);
                DAT_004ea928 = (float)piVar23[4];
                temp_v31 = DAT_00472520 * DAT_004ea928;
                DAT_004ea920 = DAT_00472524 * DAT_004ea928;
                DAT_004ea924 = DAT_00472528 * DAT_004ea928;
                DAT_004ea928 = DAT_0047252c * DAT_004ea928;
                temp_v27 = (float)piVar23[5];
                DAT_004ea92c = DAT_00472520 * temp_v27;
                DAT_004ea930 = DAT_00472524 * temp_v27;
                temp_v32 = DAT_00472528 * temp_v27;
                temp_v27 = DAT_0047252c * temp_v27;
                temp_v23 = ((float)piVar23[2] + temp_v24 * temp_v22) * 40.743664f;
                temp_v28 = temp_v23;
                DAT_004ea91c = temp_v31;
                DAT_004ea934 = temp_v32;
                DAT_004ea938 = temp_v27;
                temp_v22 = DAT_004ea920;
                temp_v24 = DAT_004ea924;
                temp_v25 = DAT_004ea92c;
                temp_v36 = DAT_004ea930;
                FUN_002b7064();
                FUN_002b70cc();
                DAT_004ea92c = temp_v31 * temp_v23;
                DAT_00472554 = temp_v22 * temp_v35;
                DAT_00472558 = temp_v24 * -temp_v28;
                temp_v32 = temp_v32 * -temp_v28;
                DAT_004ea938 = temp_v27 * temp_v35;
                DAT_004ea93c = temp_v28 * (float)temp_v37;
                DAT_004ea940 = temp_v35 * temp_v29;
                DAT_004ea944 = temp_v23 * temp_v30;
                DAT_004ea948 = temp_v35 * temp_v26;
                DAT_004ea930 = DAT_00472554;
                DAT_004ea934 = DAT_00472558;
                pfVar21[6] = DAT_004ea92c;
                pfVar21[7] = DAT_00472554;
                pfVar21[8] = DAT_00472558;
                DAT_00472554 = -DAT_004ea930;
                DAT_00472558 = -DAT_004ea934;
                pfVar21[0xc] = -DAT_004ea92c;
                pfVar21[0xd] = DAT_00472554;
                pfVar21[0xe] = DAT_00472558;
                DAT_00472554 = temp_v36 * temp_v35 + DAT_004ea940;
                DAT_00472558 = temp_v32 + DAT_004ea944;
                DAT_004ea92c = -(temp_v25 * temp_v23);
                DAT_004ea930 = -(temp_v36 * temp_v35);
                DAT_004ea934 = -temp_v32;
                *pfVar21 = temp_v25 * temp_v23 + DAT_004ea93c;
                pfVar21[1] = DAT_00472554;
                pfVar21[2] = DAT_00472558;
                DAT_00472550 = DAT_004ea92c + DAT_004ea93c;
                DAT_00472554 = DAT_004ea930 + DAT_004ea940;
                DAT_00472558 = DAT_004ea934 + DAT_004ea944;
                DAT_0047255c = DAT_004ea938 + DAT_004ea948;
                pfVar21[3] = DAT_00472550;
                pfVar21[4] = DAT_00472554;
                pfVar21[5] = DAT_00472558;
                if (temp_v19 < (int)temp_v33) {
                  temp_v22 = (float)VectorSignedToFloat(temp_v33,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v28 = (float)VectorSignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v28 = temp_v28 / temp_v22;
                }
                else if (temp_v13 >= temp_v19) {
                  temp_v28 = 1.0f;
                }
                else {
                  temp_v22 = (float)VectorSignedToFloat(temp_v18 - temp_v13,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v28 = (float)VectorSignedToFloat(temp_v18 - temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v28 = temp_v28 / temp_v22;
                }
                DAT_004ea92c = DAT_00472520 * temp_v28;
                DAT_004ea930 = DAT_00472524 * temp_v28;
                DAT_004ea934 = DAT_00472528 * temp_v28;
                DAT_004ea938 = DAT_0047252c * temp_v28;
                DAT_004ea91c = temp_v6 * DAT_004ea92c;
                DAT_004ea920 = temp_v8 * DAT_004ea930;
                DAT_004ea924 = temp_v10 * DAT_004ea934;
                DAT_004ea928 = temp_v12 * DAT_004ea938;
                temp_v15 = FUN_00246c28();
                *(char *)puVar22 = (char)temp_v15;
                *(char *)((int)puVar22 + 1) = (char)((unsigned int)temp_v15 >> 8);
                *(char *)((int)puVar22 + 2) = (char)((unsigned int)temp_v15 >> 0x10);
                *(char *)((int)puVar22 + 3) = (char)((unsigned int)temp_v15 >> 0x18);
                puVar22[1] = *puVar22;
                DAT_004ea91c = temp_v5 * DAT_004ea92c;
                DAT_004ea920 = temp_v7 * DAT_004ea930;
                DAT_004ea924 = temp_v9 * DAT_004ea934;
                DAT_004ea928 = temp_v11 * DAT_004ea938;
                temp_v15 = FUN_00246c28();
                temp_v2 = (unsigned char)((unsigned int)temp_v15 >> 8);
                temp_v3 = (unsigned char)((unsigned int)temp_v15 >> 0x10);
                if ((temp_v20 & 1) != 0) {
                  *(char *)(puVar22 + 3) = (char)temp_v15;
                  *(unsigned char *)((int)puVar22 + 0xd) = temp_v2;
                  *(unsigned char *)((int)puVar22 + 0xe) = temp_v3;
                  temp_v28 = (float)VectorFloatToUnsigned(temp_v28 * 128.0f,3);
                  *(unsigned char *)((int)puVar22 + 0xf) = 0xff;
                  *(unsigned char *)(puVar22 + 2) = 0;
                  *(unsigned char *)((int)puVar22 + 9) = 0;
                  *(unsigned char *)((int)puVar22 + 10) = 0;
                  *(char *)((int)puVar22 + 0xb) = SUB41(temp_v28,0);
                  *(unsigned char *)(puVar22 + 4) = 0;
                  *(unsigned char *)((int)puVar22 + 0x11) = 0;
                  *(unsigned char *)((int)puVar22 + 0x12) = 0;
                  *(char *)((int)puVar22 + 0x13) = SUB41(temp_v28,0);
                }
                else {
                  *(char *)(puVar22 + 3) = (char)temp_v15;
                  *(unsigned char *)((int)puVar22 + 0xd) = temp_v2;
                  *(unsigned char *)((int)puVar22 + 0xe) = temp_v3;
                  temp_v28 = (float)VectorFloatToUnsigned(temp_v28 * 255.0f,3);
                  *(unsigned char *)((int)puVar22 + 0xf) = (unsigned char)((unsigned int)temp_v15 >> 0x18) | 0x40;
                  *(unsigned char *)(puVar22 + 2) = 0;
                  *(unsigned char *)((int)puVar22 + 9) = 0;
                  *(unsigned char *)((int)puVar22 + 10) = 0;
                  *(char *)((int)puVar22 + 0xb) = SUB41(temp_v28,0);
                  *(unsigned char *)(puVar22 + 4) = 0;
                  *(unsigned char *)((int)puVar22 + 0x11) = 0;
                  *(unsigned char *)((int)puVar22 + 0x12) = 0;
                  *(char *)((int)puVar22 + 0x13) = SUB41(temp_v28,0);
                }
                temp_v16 = FUN_00269a58();
                *piVar23 = temp_v16 + temp_v19;
              }
            }
            else if (temp_v38 != 0) {
              FUN_0024b830(0);
              temp_v28 = temp_v28 * 6.2831855f;
              piVar23[2] = (int)temp_v28;
              FUN_0024b830(0);
              temp_v22 = 1.0f;
              temp_v14 = 0;
              temp_v28 = ((1.0f - pfVar26->field_0x78) + temp_v28 * pfVar26->field_0x78) *
                       pfVar26->field_0x74;
              piVar23[1] = (int)temp_v28;
              FUN_0024b77c();
              if ((temp_v14 & 1) != 0) {
                temp_v28 = -(float)piVar23[1];
                piVar23[1] = (int)temp_v28;
              }
              FUN_0024b830(0);
              temp_v28 = ((temp_v22 - pfVar26->field_0x70) + temp_v28 * pfVar26->field_0x70) *
                       pfVar26->field_0x6c;
              piVar23[3] = (int)temp_v28;
              FUN_0024b830(0);
              temp_v28 = (temp_v22 - pfVar26->field_0x68) + temp_v28 * pfVar26->field_0x68;
              piVar23[4] = (int)(pfVar26->field_0x60 * temp_v28);
              temp_v28 = pfVar26->field_0x64 * temp_v28;
              piVar23[5] = (int)temp_v28;
              if (!temp_v4) {
                *piVar23 = 0;
              }
              else {
                FUN_0024b77c();
                aeabi_uidivmod();
                *piVar23 = temp_v17;
              }
              temp_v38 = temp_v38 - 1;
            }
          }
          temp_v20 = temp_v20 + 1;
          piVar23 = piVar23 + 6;
          pfVar21 = pfVar21 + 0xf;
          puVar22 = puVar22 + 5;
        } while ((int)temp_v20 < temp_v21);
      }
    }
  }
  return;
}
