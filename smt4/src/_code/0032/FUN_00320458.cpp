/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00320458` (_code @ 0x320458, 0xd30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(...);
int FUN_00246c8c(unsigned int);
int FUN_0024b77c(...);
int FUN_0024b830(...);
int FUN_002b7064(void);
int FUN_002b70cc(void);
int SUB41(...);
int VectorFloatToUnsigned(...);
int VectorSignedToFloat(...);
int __aeabi_uidivmod(void);

typedef struct fn_00320458_arg0 fn_00320458_arg0;
struct fn_00320458_arg0 {
    unsigned char pad_0x0[0x34];
    int field_0x34; /* +0x34 */
    unsigned char pad_0x38[0x4];
    void *field_0x3c; /* +0x3c */
    void *field_0x40; /* +0x40 */
};

/* stack frame of param_1: 30 slot(s), 120 byte(s) */
typedef struct {
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spF8; /* 0xf8: local_f8 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp100; /* 0x100: local_100 */
    unsigned int sp10C; /* 0x10c: local_10c */
    unsigned int sp114; /* 0x114: local_114 */
    unsigned int sp124; /* 0x124: local_124 */
    unsigned int sp128; /* 0x128: local_128 */
    unsigned int sp130; /* 0x130: local_130 */
    unsigned int sp134; /* 0x134: local_134 */
    unsigned int sp138; /* 0x138: local_138 */
    unsigned int sp13C; /* 0x13c: local_13c */
    unsigned int sp150; /* 0x150: local_150 */
    unsigned int sp154; /* 0x154: local_154 */
    unsigned int sp158; /* 0x158: local_158 */
    unsigned int sp15C; /* 0x15c: local_15c */
    unsigned int sp160; /* 0x160: local_160 */
} param_1_stack;

extern float g_polyDefaultColor; /* 0x472520 */
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
/* Supplied declaration required: FUN_00246c8c. */
/* Supplied declaration required: FUN_0024b77c. */
/* Supplied declaration required: FUN_0024b830. */
/* Supplied declaration required: FUN_002b7064. */
/* Supplied declaration required: FUN_002b70cc. */
/* Supplied declaration required: __aeabi_uidivmod. */


void FUN_00320458(fn_00320458_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr; 13 native warning(s); review required */
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
  float temp_v10;
  void *pvVar12;
  int temp_v11;
  int temp_v12;
  unsigned char *puVar15;
  int temp_v13;
  float *pfVar16;
  int temp_v14;
  unsigned int in_fpscr;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  unsigned int temp_v24;
  unsigned int temp_v25;
  unsigned int temp_v26;
  unsigned int temp_v27;
  float temp_v28;
  float temp_v29;
  float temp_v30;
  float temp_v31;
  float temp_v32;
  float temp_v33;
  float temp_v34;
  unsigned long long temp_v35;
  float temp_v36;
  long long temp_v37;
  float temp_v38;
  float temp_v39;
  float temp_v40;
  float temp_v41;
  float temp_v42;
  unsigned long long temp_v43;
  int *temp_v44;
  int temp_v45;
  int temp_v46;
  int temp_v47;
  int temp_v48;
  int temp_v49;
  unsigned char *temp_v50;
  int temp_v51;
  float *temp_v52;
  int temp_v53;
  
  pvVar12 = param_1->field_0x40;
  if ((param_1->field_0x34 <= *(int *)((int)pvVar12 + 0x34)) || (*(int *)((int)pvVar12 + 0x34) == 0)
     ) {
    temp_v14 = *(int *)((int)pvVar12 + 0x4c);
    temp_v11 = *(int *)((int)pvVar12 + 0x38);
    temp_v44 = *(int **)param_1->field_0x3c;
    temp_v12 = *(int *)((int)param_1->field_0x3c + 4);
    if (temp_v14 != 0) {
      temp_v31 = 1.0f;
      if (*(char *)((int)pvVar12 + 0x94) != '\0') {
        temp_v51 = 0;
        temp_v23 = (float)VectorSignedToFloat(temp_v14,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v15 = (float)VectorSignedToFloat(temp_v14,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v49 = -1;
        temp_v23 = (1.0f - *(float *)((int)pvVar12 + 0x48)) * temp_v23;
        temp_v15 = (1.0f - *(float *)((int)pvVar12 + 0x44)) * temp_v15;
        temp_v46 = temp_v14;
      }
      else {
        temp_v23 = (float)VectorSignedToFloat(temp_v14,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v15 = (float)VectorSignedToFloat(temp_v14,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v46 = 0;
        temp_v49 = 1;
        temp_v23 = *(float *)((int)pvVar12 + 0x44) * temp_v23;
        temp_v15 = *(float *)((int)pvVar12 + 0x48) * temp_v15;
        temp_v51 = temp_v14;
      }
      temp_v47 = (int)temp_v23;
      temp_v45 = (int)temp_v15;
      if ((*(char *)((int)pvVar12 + 0x55) == '\0') || (param_1->field_0x34 != 0)) {
        temp_v4 = 0;
        temp_v53 = *(int *)((int)pvVar12 + 0x50);
      }
      else {
        temp_v4 = 1;
        temp_v53 = temp_v11;
      }
      temp_v35 = 0;
      temp_v52 = *(float **)(*(int *)(temp_v12 + 8) + 0x30);
      temp_v50 = *(unsigned char **)(*(int *)(temp_v12 + 8) + 0x38);
      *(unsigned int *)(temp_v12 + 0x54) = *(unsigned int *)(temp_v12 + 0x54) | 0x21;
      FUN_00246c8c(*(unsigned int *)((int)pvVar12 + 0x58));
      temp_v9 = DAT_004ea928;
      temp_v7 = DAT_004ea924;
      temp_v5 = DAT_004ea920;
      temp_v15 = DAT_004ea91c;
      FUN_00246c8c(*(unsigned int *)((int)pvVar12 + 0x5c));
      temp_v10 = DAT_004ea928;
      temp_v8 = DAT_004ea924;
      temp_v6 = DAT_004ea920;
      temp_v23 = DAT_004ea91c;
      temp_v48 = 0;
      temp_v37 = (unsigned long long)(unsigned int)*(float *)((int)pvVar12 + 0x90) << 0x20;
      temp_v2 = *(char *)((int)pvVar12 + 0x54);
      if (0 < temp_v11) {
        temp_v38 = 0.5f;
        temp_v34 = (float)temp_v35;
        temp_v42 = 6.2831855f;
        temp_v43 = 0xbf000000;
        temp_v41 = 40.743664f;
        temp_v40 = 255.0f;
        temp_v16 = *(float *)((int)pvVar12 + 0x90) * 0.5f;
        temp_v39 = temp_v16;
        do {
          temp_v19 = (float)temp_v35;
          temp_v12 = *temp_v44;
          if (temp_v12 != -2) {
            if (temp_v12 != -1) {
              if (temp_v12 == temp_v51) {
                temp_v12 = 0;
                do {
                  pfVar16 = temp_v52 + temp_v12 * 3;
                  puVar15 = temp_v50 + temp_v12 * 4;
                  *pfVar16 = temp_v34;
                  pfVar16[1] = temp_v34;
                  pfVar16[2] = temp_v34;
                  *puVar15 = 0;
                  puVar15[1] = 0;
                  temp_v12 = temp_v12 + 1;
                  puVar15[2] = 0;
                  puVar15[3] = 0;
                } while (temp_v12 < 4);
                if (temp_v2 == '\0') {
                  temp_v12 = -2;
                }
                else {
                  temp_v12 = -1;
                }
                *temp_v44 = temp_v12;
                temp_v16 = temp_v34;
              }
              else {
                temp_v16 = (float)VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v32 = (float)((unsigned long long)temp_v37 >> 0x20);
                temp_v0 = in_fpscr & 0xfffffff;
                temp_v1 = temp_v0 | ((unsigned int)(temp_v34 < temp_v32) << 0x1f) |
                        ((unsigned int)(temp_v34 == temp_v32) << 0x1e);
                in_fpscr = temp_v1 | ((unsigned int)((temp_v34 != temp_v34) || (temp_v32 != temp_v32)) << 0x1c);
                temp_v3 = (unsigned char)(temp_v1 >> 0x18);
                if (!(unsigned char)((temp_v3 >> 6) & 1) && temp_v3 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                  temp_v17 = ((float)temp_v44[1] / temp_v39) * (float)temp_v43;
                  temp_v0 = temp_v0 | ((unsigned int)(temp_v16 < temp_v17) << 0x1f) |
                          ((unsigned int)(temp_v16 == temp_v17) << 0x1e);
                  in_fpscr = temp_v0 | ((unsigned int)((temp_v16 != temp_v16) || (temp_v17 != temp_v17)) << 0x1c);
                  temp_v3 = (unsigned char)(temp_v0 >> 0x18);
                  if (!(unsigned char)((temp_v3 >> 6) & 1) && temp_v3 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                    temp_v16 = temp_v17;
                  }
                }
                temp_v37 = CONCAT44(temp_v32,temp_v44[6]);
                temp_v33 = (float)temp_v44[4] + (float)temp_v44[5] * temp_v16;
                temp_v16 = ((float)temp_v44[1] + temp_v32 * temp_v16 * temp_v38) * temp_v16;
                temp_v17 = (float)temp_v44[2] * temp_v41;
                temp_v32 = temp_v17;
                FUN_002b7064();
                FUN_002b70cc();
                temp_v36 = (float)temp_v37;
                temp_v18 = (float)temp_v44[3];
                temp_v20 = temp_v17 * temp_v36 * temp_v18;
                temp_v21 = (temp_v31 - temp_v36) * temp_v18;
                temp_v22 = temp_v32 * temp_v36 * temp_v18;
                DAT_004ea940 = (temp_v31 - temp_v36) * temp_v16;
                DAT_004ea948 = temp_v19 * temp_v16;
                temp_v35 = CONCAT44(temp_v17,DAT_004ea948);
                DAT_004ea938 = (float)temp_v44[7];
                temp_v30 = temp_v32 * DAT_004ea938;
                temp_v28 = temp_v34 * DAT_004ea938;
                temp_v29 = -temp_v17 * DAT_004ea938;
                DAT_004ea938 = DAT_004ea948 * DAT_004ea938;
                DAT_004ea93c = temp_v17 * temp_v36 * temp_v16 + temp_v17 * temp_v33;
                DAT_004ea944 = temp_v32 * temp_v36 * temp_v16 + temp_v32 * temp_v33;
                DAT_004ea91c = temp_v20 + DAT_004ea93c + temp_v30;
                DAT_00472554 = temp_v21 + DAT_004ea940 + temp_v28;
                DAT_00472558 = temp_v22 + DAT_004ea944 + temp_v29;
                DAT_004ea920 = DAT_00472554;
                DAT_004ea924 = DAT_00472558;
                DAT_004ea92c = temp_v30;
                DAT_004ea930 = temp_v28;
                DAT_004ea934 = temp_v29;
                *temp_v52 = DAT_004ea91c;
                temp_v52[1] = DAT_00472554;
                temp_v52[2] = DAT_00472558;
                DAT_00472554 = (DAT_004ea920 - DAT_004ea930) - DAT_004ea930;
                DAT_00472558 = (DAT_004ea924 - DAT_004ea934) - DAT_004ea934;
                temp_v52[3] = (DAT_004ea91c - DAT_004ea92c) - DAT_004ea92c;
                temp_v52[4] = DAT_00472554;
                temp_v52[5] = DAT_00472558;
                DAT_004ea91c = -temp_v20 + DAT_004ea93c + temp_v30;
                DAT_00472554 = -temp_v21 + DAT_004ea940 + temp_v28;
                DAT_00472558 = -temp_v22 + DAT_004ea944 + temp_v29;
                DAT_004ea928 = temp_v19 * temp_v18 + DAT_004ea948 + DAT_004ea938;
                DAT_004ea920 = DAT_00472554;
                DAT_004ea924 = DAT_00472558;
                DAT_004ea92c = temp_v30;
                DAT_004ea930 = temp_v28;
                DAT_004ea934 = temp_v29;
                temp_v52[6] = DAT_004ea91c;
                temp_v52[7] = DAT_00472554;
                temp_v52[8] = DAT_00472558;
                DAT_00472550 = (DAT_004ea91c - DAT_004ea92c) - DAT_004ea92c;
                DAT_00472554 = (DAT_004ea920 - DAT_004ea930) - DAT_004ea930;
                DAT_00472558 = (DAT_004ea924 - DAT_004ea934) - DAT_004ea934;
                DAT_0047255c = (DAT_004ea928 - DAT_004ea938) - DAT_004ea938;
                temp_v52[9] = DAT_00472550;
                temp_v52[10] = DAT_00472554;
                temp_v52[0xb] = DAT_00472558;
                if (temp_v12 < temp_v47) {
                  temp_v19 = (float)VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v16 = (float)VectorSignedToFloat(temp_v47,(unsigned char)(in_fpscr >> 0x16) & 3);
                  DAT_004ea938 = temp_v19 / temp_v16;
                }
                else {
                  DAT_004ea938 = temp_v31;
                  if (temp_v45 < temp_v12) {
                    temp_v19 = (float)VectorSignedToFloat(temp_v14 - temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3
                                                       );
                    temp_v16 = (float)VectorSignedToFloat(temp_v14 - temp_v45,
                                                        (unsigned char)(in_fpscr >> 0x16) & 3);
                    DAT_004ea938 = temp_v19 / temp_v16;
                  }
                }
                DAT_004ea92c = g_polyDefaultColor * DAT_004ea938;
                DAT_004ea930 = DAT_00472524 * DAT_004ea938;
                DAT_004ea934 = DAT_00472528 * DAT_004ea938;
                DAT_004ea938 = DAT_0047252c * DAT_004ea938;
                temp_v24 = VectorFloatToUnsigned(temp_v23 * DAT_004ea92c * temp_v40,3);
                temp_v25 = VectorFloatToUnsigned(temp_v6 * DAT_004ea930 * temp_v40,3);
                temp_v26 = VectorFloatToUnsigned(temp_v8 * DAT_004ea934 * temp_v40,3);
                temp_v27 = VectorFloatToUnsigned(temp_v10 * DAT_004ea938 * temp_v40,3);
                *temp_v50 = (char)temp_v27;
                temp_v50[1] = (char)temp_v26;
                temp_v50[2] = (char)temp_v25;
                temp_v50[3] = (char)temp_v24;
                temp_v50[4] = (char)temp_v27;
                temp_v50[5] = (char)temp_v26;
                temp_v50[6] = (char)temp_v25;
                temp_v50[7] = (char)temp_v24;
                DAT_004ea91c = temp_v15 * DAT_004ea92c;
                DAT_004ea920 = temp_v5 * DAT_004ea930;
                DAT_004ea924 = temp_v7 * DAT_004ea934;
                DAT_004ea928 = temp_v9 * DAT_004ea938;
                temp_v24 = VectorFloatToUnsigned(DAT_004ea920 * temp_v40,3);
                temp_v26 = VectorFloatToUnsigned(DAT_004ea91c * temp_v40,3);
                temp_v25 = VectorFloatToUnsigned(DAT_004ea924 * temp_v40,3);
                temp_v16 = (float)VectorFloatToUnsigned(DAT_004ea928 * temp_v40,3);
                temp_v50[8] = SUB41(temp_v16,0);
                temp_v50[9] = (char)temp_v25;
                temp_v50[10] = (char)temp_v24;
                temp_v50[0xb] = (char)temp_v26;
                temp_v50[0xc] = SUB41(temp_v16,0);
                temp_v50[0xd] = (char)temp_v25;
                temp_v50[0xe] = (char)temp_v24;
                temp_v50[0xf] = (char)temp_v26;
                *temp_v44 = temp_v12 + temp_v49;
              }
            }
            else if (temp_v53 != 0) {
              temp_v19 = temp_v31;
              FUN_0024b830(0);
              temp_v16 = temp_v16 * temp_v42;
              temp_v44[2] = (int)temp_v16;
              temp_v31 = *(float *)((int)pvVar12 + 0x6c);
              FUN_0024b830(0);
              temp_v16 = ((temp_v19 - temp_v31) + temp_v16 * temp_v31) * *(float *)((int)pvVar12 + 0x68);
              temp_v44[3] = (int)temp_v16;
              temp_v31 = temp_v19;
              FUN_0024b830(0);
              temp_v32 = ((temp_v19 - *(float *)((int)pvVar12 + 0x74)) +
                       temp_v16 * *(float *)((int)pvVar12 + 0x74)) * *(float *)((int)pvVar12 + 0x70);
              FUN_0024b830(0);
              temp_v17 = *(float *)((int)pvVar12 + 0x7c);
              temp_v20 = *(float *)((int)pvVar12 + 0x78);
              temp_v18 = (float)VectorSignedToFloat(temp_v14,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v44[4] = (int)temp_v32;
              temp_v32 = ((temp_v19 - temp_v17) + temp_v16 * temp_v17) * temp_v20 - temp_v32;
              temp_v44[5] = (int)(temp_v32 / temp_v18);
              FUN_0024b830(0);
              temp_v16 = ((temp_v19 - *(float *)((int)pvVar12 + 0x8c)) +
                       temp_v32 * *(float *)((int)pvVar12 + 0x8c)) * *(float *)((int)pvVar12 + 0x88);
              temp_v44[1] = (int)temp_v16;
              FUN_0024b830(0);
              temp_v16 = *(float *)((int)pvVar12 + 0x60) *
                       ((temp_v19 - *(float *)((int)pvVar12 + 100)) +
                       temp_v16 * *(float *)((int)pvVar12 + 100));
              temp_v44[7] = (int)temp_v16;
              FUN_0024b830(0);
              temp_v16 = ((temp_v19 - *(float *)((int)pvVar12 + 0x84)) +
                       temp_v16 * *(float *)((int)pvVar12 + 0x84)) * *(float *)((int)pvVar12 + 0x80);
              temp_v44[6] = (int)temp_v16;
              if (temp_v4) {
                FUN_0024b77c(0);
                __aeabi_uidivmod();
                *temp_v44 = temp_v13;
              }
              else {
                *temp_v44 = temp_v46;
              }
              temp_v53 = temp_v53 - 1;
            }
          }
          temp_v48 = temp_v48 + 1;
          temp_v44 = temp_v44 + 8;
          temp_v52 = temp_v52 + 0xc;
          temp_v50 = temp_v50 + 0x10;
        } while (temp_v48 < temp_v11);
      }
    }
  }
  return;
}

} /* extern "C" */
