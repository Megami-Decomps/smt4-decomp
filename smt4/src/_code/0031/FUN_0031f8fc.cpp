/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031f8fc` (_code @ 0x31f8fc, 0x8ec bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(double, double);
int FUN_00246c8c(unsigned int);
int FUN_0024b77c(void);
int FUN_0024b830(int);
int FUN_002b7064(void);
int FUN_002b70cc(void);
int VectorSignedToFloat(...);
int aeabi_idivmod(int, int);
int aeabi_uidivmod(void);

typedef struct fn_0031f8fc_arg0 fn_0031f8fc_arg0;
typedef struct fn_0031f8fc_arg0_p40 fn_0031f8fc_arg0_p40;
struct fn_0031f8fc_arg0 {
    unsigned char pad_0x0[0x34];
    int field_0x34; /* +0x34 */
    unsigned char field_0x38; /* +0x38 */
    unsigned char pad_0x39[0x3];
    void *field_0x3c; /* +0x3c */
    fn_0031f8fc_arg0_p40 *field_0x40; /* +0x40 */
};
struct fn_0031f8fc_arg0_p40 {
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
    unsigned char field_0x58; /* +0x58 */
    unsigned char pad_0x59[0x3];
    unsigned char field_0x5c; /* +0x5c */
    unsigned char pad_0x5d[0x3];
    float field_0x60; /* +0x60 */
    float field_0x64; /* +0x64 */
    float field_0x68; /* +0x68 */
    float field_0x6c; /* +0x6c */
    undefined4 field_0x70; /* +0x70 */
    float field_0x74; /* +0x74 */
    float field_0x78; /* +0x78 */
    float field_0x7c; /* +0x7c */
};

/* stack frame of param_1: 17 slot(s), 68 byte(s) */
typedef struct {
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int sp104; /* 0x104: local_104 */
    unsigned int sp10C; /* 0x10c: local_10c */
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
extern unsigned int FUN_00246c28(void);
/* Supplied declaration required: FUN_00246c8c. */
/* Supplied declaration required: FUN_0024b77c. */
/* Supplied declaration required: FUN_0024b830. */
/* Supplied declaration required: FUN_002b7064. */
/* Supplied declaration required: FUN_002b70cc. */
/* Supplied declaration required: aeabi_idivmod. */
/* Supplied declaration required: aeabi_uidivmod. */


void FUN_0031f8fc(fn_0031f8fc_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr; 12 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned char *puVar18;
  int temp_v17;
  unsigned int temp_v18;
  int temp_v19;
  float *pfVar20;
  float *pfVar21;
  unsigned char *puVar22;
  int *piVar23;
  int temp_v20;
  fn_0031f8fc_arg0_p40 *pfVar25;
  int temp_v21;
  unsigned int in_fpscr;
  float temp_v22;
  int temp_v23;
  float temp_v24;
  int temp_v25;
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
  long long temp_v36;
  float temp_v37;
  float temp_v38;
  float temp_v39;
  float temp_v40;
  int temp_v41;
  
  pfVar25 = param_1->field_0x40;
  if ((param_1->field_0x34 <= (int)pfVar25->field_0x34) || (pfVar25->field_0x34 == 0)) {
    temp_v19 = pfVar25->field_0x4c;
    temp_v21 = pfVar25->field_0x38;
    piVar23 = *(int **)param_1->field_0x3c;
    temp_v14 = *(int *)((int)param_1->field_0x3c + 4);
    if (temp_v19 != 0) {
      if ((pfVar25->field_0x55 == 0) || (param_1->field_0x34 != 0)) {
        temp_v5 = 0;
        temp_v41 = pfVar25->field_0x50;
      }
      else {
        temp_v5 = 1;
        temp_v41 = temp_v21;
      }
      temp_v34 = 0.0f;
      pfVar21 = *(float **)(*(int *)(temp_v14 + 8) + 0x30);
      puVar22 = *(unsigned char **)(*(int *)(temp_v14 + 8) + 0x38);
      *(unsigned int *)(temp_v14 + 0x54) = *(unsigned int *)(temp_v14 + 0x54) | 0x21;
      FUN_00246c8c(*(unsigned int *)&pfVar25->field_0x58);
      temp_v12 = DAT_004ea928;
      temp_v10 = DAT_004ea924;
      temp_v8 = DAT_004ea920;
      temp_v6 = DAT_004ea91c;
      FUN_00246c8c(*(unsigned int *)&pfVar25->field_0x5c);
      temp_v13 = DAT_004ea928;
      temp_v11 = DAT_004ea924;
      temp_v9 = DAT_004ea920;
      temp_v7 = DAT_004ea91c;
      temp_v33 = (float)VectorSignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v22 = (float)VectorSignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v14 = 0;
      temp_v23 = pfVar25->field_0x70;
      temp_v35 = pfVar25->field_0x7c;
      temp_v25 = (int)(pfVar25->field_0x44 * temp_v33);
      temp_v22 = (float)(int)(pfVar25->field_0x48 * temp_v22);
      temp_v0 = pfVar25->field_0x54;
      if (0 < temp_v21) {
        temp_v36 = (unsigned long long)(unsigned int)temp_v34 << 0x20;
        temp_v40 = 6.2831855f;
        temp_v38 = 0.5f;
        temp_v39 = 40.743664f;
        temp_v37 = 1.0f;
        temp_v33 = temp_v22;
        do {
          temp_v20 = *piVar23;
          if (temp_v20 != -2) {
            if (temp_v20 != -1) {
              temp_v33 = (float)((unsigned long long)temp_v36 >> 0x20);
              if (temp_v20 >= temp_v19) {
                temp_v20 = 0;
                do {
                  pfVar20 = pfVar21 + temp_v20 * 3;
                  puVar18 = puVar22 + temp_v20 * 4;
                  *pfVar20 = temp_v33;
                  pfVar20[1] = temp_v33;
                  pfVar20[2] = temp_v33;
                  *puVar18 = 0;
                  puVar18[1] = 0;
                  temp_v20 = temp_v20 + 1;
                  puVar18[2] = 0;
                  puVar18[3] = 0;
                } while (temp_v20 < 4);
                if (temp_v0 == 0) {
                  temp_v20 = -2;
                }
                else {
                  temp_v20 = -1;
                }
                *piVar23 = temp_v20;
              }
              else {
                temp_v26 = (float)piVar23[1];
                temp_v15 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v26 < temp_v33) << 0x1f) |
                         ((unsigned int)(temp_v26 == temp_v33) << 0x1e);
                in_fpscr = temp_v15 | ((unsigned int)((temp_v26 != temp_v26) || (temp_v33 != temp_v33)) << 0x1c);
                temp_v2 = (unsigned char)(temp_v15 >> 0x18);
                temp_v24 = (float)VectorSignedToFloat(temp_v20,(unsigned char)(in_fpscr >> 0x16) & 3);
                if (!((unsigned char)((temp_v2 >> 6) & 1) || temp_v2 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1))) {
                  temp_v26 = temp_v26 + temp_v35 * temp_v24 * temp_v38;
                }
                else {
                  temp_v26 = temp_v26 - temp_v35 * temp_v24 * temp_v38;
                }
                if (temp_v20 < temp_v23) {
                  piVar23[3] = (int)((float)piVar23[3] + (float)piVar23[4]);
                }
                DAT_004ea92c = DAT_00472520;
                DAT_004ea930 = DAT_00472524;
                DAT_004ea934 = DAT_00472528;
                DAT_004ea938 = DAT_0047252c;
                temp_v27 = (float)piVar23[3];
                temp_v30 = DAT_00472524 * temp_v27;
                temp_v31 = DAT_00472528 * temp_v27;
                temp_v28 = DAT_0047252c * temp_v27;
                temp_v36 = CONCAT44(temp_v33,DAT_00472520 * temp_v27);
                temp_v29 = (float)piVar23[5];
                DAT_004ea91c = DAT_00472520 * temp_v29;
                DAT_004ea920 = DAT_00472524 * temp_v29;
                temp_v32 = DAT_00472528 * temp_v29;
                temp_v29 = DAT_0047252c * temp_v29;
                temp_v27 = ((float)piVar23[2] + temp_v26 * temp_v24) * temp_v39;
                temp_v33 = temp_v27;
                DAT_004ea924 = temp_v32;
                DAT_004ea928 = temp_v29;
                temp_v24 = DAT_004ea91c;
                temp_v26 = DAT_004ea920;
                FUN_002b7064();
                FUN_002b70cc();
                temp_v24 = temp_v24 * temp_v27;
                temp_v26 = temp_v26 * temp_v34;
                temp_v32 = temp_v32 * -temp_v33;
                DAT_004ea938 = temp_v29 * temp_v34;
                DAT_004ea93c = temp_v33 * (float)temp_v36;
                DAT_004ea940 = temp_v34 * temp_v30;
                DAT_004ea944 = temp_v27 * temp_v31;
                DAT_004ea948 = temp_v34 * temp_v28;
                DAT_00472554 = temp_v26;
                DAT_00472558 = temp_v32;
                DAT_004ea92c = temp_v24;
                DAT_004ea930 = temp_v26;
                DAT_004ea934 = temp_v32;
                pfVar21[6] = temp_v24;
                pfVar21[7] = DAT_00472554;
                pfVar21[8] = DAT_00472558;
                DAT_00472554 = -DAT_004ea930;
                DAT_00472558 = -DAT_004ea934;
                pfVar21[9] = -DAT_004ea92c;
                pfVar21[10] = DAT_00472554;
                pfVar21[0xb] = DAT_00472558;
                DAT_00472554 = temp_v26 + DAT_004ea940;
                DAT_00472558 = temp_v32 + DAT_004ea944;
                DAT_004ea92c = -temp_v24;
                DAT_004ea930 = -temp_v26;
                DAT_004ea934 = -temp_v32;
                *pfVar21 = temp_v24 + DAT_004ea93c;
                pfVar21[1] = DAT_00472554;
                pfVar21[2] = DAT_00472558;
                DAT_00472550 = DAT_004ea92c + DAT_004ea93c;
                DAT_00472554 = DAT_004ea930 + DAT_004ea940;
                DAT_00472558 = DAT_004ea934 + DAT_004ea944;
                DAT_0047255c = DAT_004ea938 + DAT_004ea948;
                pfVar21[3] = DAT_00472550;
                pfVar21[4] = DAT_00472554;
                pfVar21[5] = DAT_00472558;
                if (temp_v20 < temp_v25) {
                  temp_v24 = (float)VectorSignedToFloat(temp_v25,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v33 = (float)VectorSignedToFloat(temp_v20,(unsigned char)(in_fpscr >> 0x16) & 3);
                  DAT_004ea938 = temp_v33 / temp_v24;
                }
                else {
                  DAT_004ea938 = temp_v37;
                  if ((int)temp_v22 < temp_v20) {
                    temp_v24 = (float)VectorSignedToFloat(temp_v19 - (int)temp_v22,
                                                        (unsigned char)(in_fpscr >> 0x16) & 3);
                    temp_v33 = (float)VectorSignedToFloat(temp_v19 - temp_v20,(unsigned char)(in_fpscr >> 0x16) & 3
                                                       );
                    DAT_004ea938 = temp_v33 / temp_v24;
                  }
                }
                DAT_004ea92c = DAT_00472520 * DAT_004ea938;
                DAT_004ea930 = DAT_00472524 * DAT_004ea938;
                DAT_004ea934 = DAT_00472528 * DAT_004ea938;
                DAT_004ea938 = DAT_0047252c * DAT_004ea938;
                DAT_004ea91c = temp_v7 * DAT_004ea92c;
                DAT_004ea920 = temp_v9 * DAT_004ea930;
                DAT_004ea924 = temp_v11 * DAT_004ea934;
                DAT_004ea928 = temp_v13 * DAT_004ea938;
                temp_v16 = FUN_00246c28();
                temp_v3 = (unsigned char)((unsigned int)temp_v16 >> 8);
                temp_v4 = (unsigned char)((unsigned int)temp_v16 >> 0x10);
                *puVar22 = (char)temp_v16;
                puVar22[1] = temp_v3;
                puVar22[2] = temp_v4;
                temp_v1 = (unsigned char)((unsigned int)temp_v16 >> 0x18);
                puVar22[3] = temp_v1;
                puVar22[4] = (char)temp_v16;
                puVar22[5] = temp_v3;
                puVar22[6] = temp_v4;
                puVar22[7] = temp_v1;
                DAT_004ea91c = temp_v6 * DAT_004ea92c;
                DAT_004ea920 = temp_v8 * DAT_004ea930;
                DAT_004ea924 = temp_v10 * DAT_004ea934;
                temp_v33 = temp_v12 * DAT_004ea938;
                DAT_004ea928 = temp_v33;
                temp_v16 = FUN_00246c28();
                temp_v3 = (unsigned char)((unsigned int)temp_v16 >> 8);
                temp_v4 = (unsigned char)((unsigned int)temp_v16 >> 0x10);
                puVar22[8] = (char)temp_v16;
                puVar22[9] = temp_v3;
                puVar22[10] = temp_v4;
                temp_v1 = (unsigned char)((unsigned int)temp_v16 >> 0x18);
                puVar22[0xb] = temp_v1;
                puVar22[0xc] = (char)temp_v16;
                puVar22[0xd] = temp_v3;
                puVar22[0xe] = temp_v4;
                puVar22[0xf] = temp_v1;
                *piVar23 = temp_v20 + 1;
              }
            }
            else if (temp_v41 != 0) {
              FUN_0024b830(0);
              temp_v33 = temp_v33 * temp_v40;
              piVar23[2] = (int)temp_v33;
              FUN_0024b830(0);
              temp_v15 = 0;
              piVar23[1] = (int)(((temp_v37 - pfVar25->field_0x78) + temp_v33 * pfVar25->field_0x78) *
                                pfVar25->field_0x74);
              temp_v24 = temp_v37;
              FUN_0024b77c();
              if ((temp_v15 & 1) != 0) {
                piVar23[1] = (int)-(float)piVar23[1];
              }
              temp_v33 = (float)((unsigned long long)temp_v36 >> 0x20);
              piVar23[3] = (int)temp_v33;
              FUN_0024b830(0);
              temp_v26 = (float)VectorSignedToFloat(temp_v23,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v33 = ((temp_v37 - pfVar25->field_0x6c) + temp_v33 * pfVar25->field_0x6c) *
                       pfVar25->field_0x68;
              piVar23[4] = (int)(temp_v33 / temp_v26);
              FUN_0024b830(0);
              temp_v33 = pfVar25->field_0x60 *
                       ((temp_v37 - pfVar25->field_0x64) + temp_v33 * pfVar25->field_0x64);
              piVar23[5] = (int)temp_v33;
              if (!temp_v5) {
                *piVar23 = 0;
              }
              else {
                FUN_0024b77c();
                aeabi_uidivmod();
                *piVar23 = temp_v17;
                aeabi_idivmod(temp_v17,temp_v23);
                temp_v33 = (float)VectorSignedToFloat(temp_v18,(unsigned char)(in_fpscr >> 0x16) & 3);
                piVar23[3] = (int)((float)piVar23[3] + (float)piVar23[4] * temp_v33);
              }
              temp_v41 = temp_v41 - 1;
              temp_v37 = temp_v24;
            }
          }
          temp_v14 = temp_v14 + 1;
          piVar23 = piVar23 + 6;
          pfVar21 = pfVar21 + 0xc;
          puVar22 = puVar22 + 0x10;
        } while (temp_v14 < temp_v21);
      }
    }
  }
  return;
}

} /* extern "C" */
