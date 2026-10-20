/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00306b68` (_code @ 0x306b68, 0x814 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0024b77c(void);
int FUN_0024b830(...);
int FUN_002b7064(void);
int FUN_002b70cc(void);
int FUN_002c4938(float *, int);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);
int aeabi_uidivmod(void);

typedef struct fn_00306b68_arg0 fn_00306b68_arg0;
struct fn_00306b68_arg0 {
    unsigned char pad_0x0[0x34];
    int field_0x34; /* +0x34 */
    unsigned char pad_0x38[0x4];
    void *field_0x3c; /* +0x3c */
    void *field_0x40; /* +0x40 */
};

/* stack frame of param_1: 13 slot(s), 52 byte(s) */
typedef struct {
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spF0; /* 0xf0: local_f0 */
} param_1_stack;

extern float DAT_00472550; /* 0x472550 */
extern float DAT_00472554; /* 0x472554 */
extern float DAT_00472558; /* 0x472558 */
extern float DAT_0047255c; /* 0x47255c */
extern unsigned char DAT_00472560; /* 0x472560 */
extern unsigned char DAT_00472561; /* 0x472561 */
extern unsigned char DAT_00472562; /* 0x472562 */
extern unsigned char DAT_00472563; /* 0x472563 */
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

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Supplied declaration required: FUN_0024b77c. */
/* Supplied declaration required: FUN_0024b830. */
extern int FUN_00269a58(void);
/* Supplied declaration required: FUN_002b7064. */
/* Supplied declaration required: FUN_002b70cc. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: aeabi_uidivmod. */


void FUN_00306b68(fn_00306b68_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr; 11 native warning(s); review required */
  unsigned int temp_v0;
  char temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  int *piVar5;
  int temp_v4;
  int temp_v5;
  void *pvVar8;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  float *pfVar11;
  float *pfVar12;
  int temp_v9;
  float temp_v10;
  int *piVar15;
  unsigned int in_fpscr;
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
  float temp_v26;
  float temp_v27;
  float temp_v28;
  float temp_v29;
  unsigned int temp_v30;
  unsigned int temp_v31;
  
  pvVar8 = param_1->field_0x40;
  if ((param_1->field_0x34 <= *(int *)((int)pvVar8 + 0x34)) || (*(int *)((int)pvVar8 + 0x34) == 0))
  {
    temp_v6 = *(int *)((int)pvVar8 + 0x80);
    temp_v7 = *(unsigned int *)((int)pvVar8 + 0x38);
    if (temp_v6 != 0) {
      if ((*(char *)((int)pvVar8 + 0xb8) == '\0') || (param_1->field_0x34 != 0)) {
        temp_v3 = 0;
        temp_v31 = *(unsigned int *)((int)pvVar8 + 0x84);
      }
      else {
        temp_v3 = 1;
        temp_v31 = temp_v7;
      }
      temp_v1 = *(char *)((int)pvVar8 + 0x88);
      temp_v11 = *(float *)((int)pvVar8 + 0xf4);
      piVar5 = *(int **)((int)param_1->field_0x3c + 4);
      piVar15 = *(int **)param_1->field_0x3c;
      pfVar12 = *(float **)(*piVar5 + 0x30);
      temp_v9 = *(int *)(*piVar5 + 0x3c);
      piVar5[0x16] = piVar5[0x16] | 5;
      temp_v30 = 0;
      temp_v10 = (float)(*(int *)((int)pvVar8 + 0x8c) + 1);
      temp_v4 = (int)*(short *)((int)piVar5 + 10);
      temp_v12 = *(float *)((int)pvVar8 + 0xa4);
      temp_v27 = *(float *)((int)pvVar8 + 0x98);
      temp_v28 = *(float *)((int)pvVar8 + 0xe4);
      temp_v21 = (float)VectorUnsignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
      if (temp_v7 != 0) {
        temp_v14 = temp_v10;
        do {
          temp_v5 = *piVar15;
          if (temp_v5 != -2) {
            if (temp_v5 != -1) {
              if (temp_v6 <= temp_v5) {
                if (temp_v1 != '\0') {
                  temp_v5 = -1;
                }
                else {
                  FUN_002c4938(pfVar12,temp_v4 * 0xc);
                  temp_v5 = -2;
                }
                *piVar15 = temp_v5;
                temp_v14 = (float)VectorUnsignedToFloat
                                          ((unsigned int)DAT_00472560,(unsigned char)(in_fpscr >> 0x16) & 3);
                pfVar11 = (float *)(piVar5[1] + (temp_v30 & 0xffff) * 0x10);
                *pfVar11 = temp_v14 * 0.003921569f * 0.003921569f;
                temp_v14 = (float)VectorUnsignedToFloat
                                          ((unsigned int)DAT_00472561,(unsigned char)(in_fpscr >> 0x16) & 3);
                pfVar11[1] = temp_v14 * 0.003921569f * 0.003921569f;
                temp_v14 = (float)VectorUnsignedToFloat
                                          ((unsigned int)DAT_00472562,(unsigned char)(in_fpscr >> 0x16) & 3);
                pfVar11[2] = temp_v14 * 0.003921569f * 0.003921569f;
                temp_v14 = (float)VectorUnsignedToFloat
                                          ((unsigned int)DAT_00472563,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v14 = temp_v14 * 0.003921569f * 0.003921569f;
                pfVar11[3] = temp_v14;
                pfVar12 = pfVar12 + temp_v4 * 3;
                temp_v9 = temp_v9 + temp_v4 * 8;
              }
              else {
                temp_v13 = (float)piVar15[6];
                temp_v15 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v17 = (float)piVar15[4];
                temp_v14 = 0.0f;
                temp_v18 = 0.0f;
                temp_v25 = (float)piVar15[2] + (float)piVar15[3];
                temp_v20 = (float)piVar15[8] * 0.25f;
                in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v13 == 0.0f) << 0x1e) |
                           ((unsigned int)(temp_v13 <= 0.0f) << 0x1d);
                temp_v2 = (unsigned char)(in_fpscr >> 0x18);
                piVar15[4] = (int)(temp_v17 + (float)piVar15[5]);
                piVar15[2] = (int)temp_v25;
                temp_v17 = (temp_v17 + (float)piVar15[5]) / temp_v21;
                temp_v26 = (float)piVar15[10];
                temp_v24 = (float)piVar15[0xb];
                temp_v15 = (float)piVar15[7] + (temp_v13 + temp_v11 * temp_v15 * 0.5f) * temp_v15;
                temp_v13 = (float)piVar15[9];
                if ((unsigned char)((temp_v2 >> 5) & 1) && !(unsigned char)(temp_v2 >> 6)) {
                  temp_v13 = -temp_v13;
                }
                temp_v13 = temp_v13 / temp_v21;
                temp_v19 = temp_v18;
                if (temp_v10 != 0.0f) {
                  do {
                    temp_v16 = (float)VectorUnsignedToFloat(temp_v14,(unsigned char)(in_fpscr >> 0x16) & 3);
                    temp_v16 = temp_v16 / temp_v21 - temp_v28;
                    temp_v23 = temp_v16 * temp_v16 * temp_v26;
                    temp_v29 = temp_v15 * 40.743664f;
                    temp_v22 = temp_v25 + temp_v23;
                    temp_v16 = temp_v29;
                    FUN_002b7064();
                    FUN_002b70cc();
                    DAT_004ea91c = temp_v29 * temp_v23;
                    DAT_004ea924 = temp_v16 * temp_v23;
                    DAT_004ea944 = temp_v16 * temp_v22;
                    DAT_004ea93c = temp_v29 * temp_v22;
                    temp_v16 = romwright_sqrt_4(DAT_004ea91c * DAT_004ea91c + temp_v17 * temp_v17 +
                                  DAT_004ea924 * DAT_004ea924);
                    temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v16 < 0.0f) << 0x1f) |
                            ((unsigned int)(temp_v16 == 0.0f) << 0x1e);
                    in_fpscr = temp_v0 | ((unsigned int)(temp_v16 != temp_v16) << 0x1c);
                    temp_v2 = (unsigned char)(temp_v0 >> 0x18);
                    DAT_004ea920 = temp_v17;
                    if (!(unsigned char)((temp_v2 >> 6) & 1) && temp_v2 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                      DAT_004ea91c = DAT_004ea91c / temp_v16;
                      DAT_004ea920 = temp_v17 / temp_v16;
                      DAT_004ea924 = DAT_004ea924 / temp_v16;
                    }
                    temp_v16 = (float)VectorUnsignedToFloat(temp_v14,(unsigned char)(in_fpscr >> 0x16) & 3);
                    temp_v15 = temp_v15 + temp_v13;
                    temp_v16 = temp_v24 + temp_v27 * (temp_v16 / temp_v21);
                    DAT_004ea92c = DAT_004ea91c * temp_v20;
                    DAT_004ea930 = DAT_004ea920 * temp_v20;
                    DAT_004ea934 = DAT_004ea924 * temp_v20;
                    DAT_004ea938 = temp_v18 * temp_v20;
                    DAT_004ea948 = 0.0f;
                    DAT_004ea91c = DAT_004ea93c + DAT_004ea92c;
                    DAT_00472554 = temp_v19 + DAT_004ea930;
                    DAT_00472558 = DAT_004ea944 + DAT_004ea934;
                    DAT_004ea920 = DAT_00472554;
                    DAT_004ea924 = DAT_00472558;
                    DAT_004ea940 = temp_v19;
                    pfVar12[3] = DAT_004ea91c;
                    pfVar12[4] = DAT_00472554;
                    pfVar12[5] = DAT_00472558;
                    DAT_00472554 = DAT_004ea920 + DAT_004ea930;
                    DAT_00472558 = DAT_004ea924 + DAT_004ea934;
                    temp_v14 = (float)((int)temp_v14 + 1);
                    *pfVar12 = DAT_004ea91c + DAT_004ea92c;
                    pfVar12[1] = DAT_00472554;
                    pfVar12[2] = DAT_00472558;
                    DAT_004ea91c = DAT_004ea93c - DAT_004ea92c;
                    DAT_00472554 = DAT_004ea940 - DAT_004ea930;
                    DAT_00472558 = DAT_004ea944 - DAT_004ea934;
                    DAT_004ea928 = DAT_004ea948 - DAT_004ea938;
                    DAT_004ea920 = DAT_00472554;
                    DAT_004ea924 = DAT_00472558;
                    pfVar12[6] = DAT_004ea91c;
                    pfVar12[7] = DAT_00472554;
                    pfVar12[8] = DAT_00472558;
                    DAT_00472550 = DAT_004ea91c - DAT_004ea92c;
                    DAT_00472554 = DAT_004ea920 - DAT_004ea930;
                    DAT_00472558 = DAT_004ea924 - DAT_004ea934;
                    DAT_0047255c = DAT_004ea928 - DAT_004ea938;
                    DAT_004ea91c = DAT_00472550;
                    DAT_004ea920 = DAT_00472554;
                    DAT_004ea924 = DAT_00472558;
                    DAT_004ea928 = DAT_0047255c;
                    pfVar12[9] = DAT_00472550;
                    pfVar12[10] = DAT_00472554;
                    pfVar12[0xb] = DAT_00472558;
                    *(float *)(temp_v9 + 4) = temp_v16;
                    *(float *)(temp_v9 + 0xc) = temp_v16;
                    *(float *)(temp_v9 + 0x14) = temp_v16;
                    *(float *)(temp_v9 + 0x1c) = temp_v16;
                    pfVar12 = pfVar12 + 0xc;
                    temp_v9 = temp_v9 + 0x20;
                    temp_v19 = temp_v19 + temp_v17;
                  } while ((unsigned int)temp_v14 < (unsigned int)temp_v10);
                }
                temp_v14 = (float)piVar15[0xb] + temp_v12;
                piVar15[0xb] = (int)temp_v14;
                temp_v5 = FUN_00269a58();
                *piVar15 = temp_v5 + *piVar15;
              }
            }
            else {
              FUN_002c4938(pfVar12,temp_v4 * 0xc);
              if (temp_v31 != 0) {
                FUN_0024b830(0);
                temp_v17 = 1.0f;
                temp_v15 = ((1.0f - *(float *)((int)pvVar8 + 0xc0)) +
                         temp_v14 * *(float *)((int)pvVar8 + 0xc0)) * *(float *)((int)pvVar8 + 0xbc);
                FUN_0024b830(0);
                temp_v13 = (float)VectorUnsignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v14 = ((temp_v17 - *(float *)((int)pvVar8 + 200)) +
                         temp_v14 * *(float *)((int)pvVar8 + 200)) * *(float *)((int)pvVar8 + 0xc4) -
                         temp_v15;
                piVar15[3] = (int)(temp_v14 / temp_v13);
                piVar15[2] = (int)temp_v15;
                FUN_0024b830(0);
                temp_v15 = ((temp_v17 - *(float *)((int)pvVar8 + 0xd0)) +
                         temp_v14 * *(float *)((int)pvVar8 + 0xd0)) * *(float *)((int)pvVar8 + 0xcc);
                FUN_0024b830(0);
                temp_v13 = (float)VectorUnsignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v14 = ((temp_v17 - *(float *)((int)pvVar8 + 0xd8)) +
                         temp_v14 * *(float *)((int)pvVar8 + 0xd8)) * *(float *)((int)pvVar8 + 0xd4) -
                         temp_v15;
                piVar15[5] = (int)(temp_v14 / temp_v13);
                piVar15[4] = (int)temp_v15;
                FUN_0024b830(0);
                temp_v14 = ((temp_v17 - *(float *)((int)pvVar8 + 0xe0)) +
                         temp_v14 * *(float *)((int)pvVar8 + 0xe0)) * *(float *)((int)pvVar8 + 0xe8);
                piVar15[10] = (int)temp_v14;
                FUN_0024b830(0);
                temp_v14 = temp_v14 * 6.2831855f;
                piVar15[7] = (int)temp_v14;
                FUN_0024b830(0);
                temp_v14 = ((temp_v17 - *(float *)((int)pvVar8 + 0xf0)) +
                         temp_v14 * *(float *)((int)pvVar8 + 0xf0)) * *(float *)((int)pvVar8 + 0xec);
                piVar15[6] = (int)temp_v14;
                FUN_0024b830(0);
                temp_v14 = ((temp_v17 - *(float *)((int)pvVar8 + 0xb4)) +
                         temp_v14 * *(float *)((int)pvVar8 + 0xb4)) * *(float *)((int)pvVar8 + 0xb0);
                piVar15[8] = (int)temp_v14;
                FUN_0024b830(0);
                temp_v14 = ((temp_v17 - *(float *)((int)pvVar8 + 0xac)) +
                         temp_v14 * *(float *)((int)pvVar8 + 0xac)) * *(float *)((int)pvVar8 + 0xa8);
                piVar15[9] = (int)temp_v14;
                FUN_0024b830(0);
                temp_v14 = ((temp_v17 - *(float *)((int)pvVar8 + 0x9c)) +
                         temp_v14 * *(float *)((int)pvVar8 + 0x9c)) * *(float *)((int)pvVar8 + 0x98);
                piVar15[0xb] = (int)temp_v14;
                if (!temp_v3) {
                  *piVar15 = 0;
                }
                else {
                  FUN_0024b77c();
                  aeabi_uidivmod();
                  *piVar15 = temp_v8;
                  temp_v14 = (float)VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
                  piVar15[4] = (int)((float)piVar15[4] + (float)piVar15[5] * temp_v14);
                  piVar15[2] = (int)((float)piVar15[2] + (float)piVar15[3] * temp_v14);
                }
                temp_v31 = temp_v31 - 1;
              }
              pfVar12 = pfVar12 + temp_v4 * 3;
              temp_v9 = temp_v9 + temp_v4 * 8;
            }
          }
          else {
            pfVar12 = pfVar12 + temp_v4 * 3;
            temp_v9 = temp_v9 + temp_v4 * 8;
          }
          piVar15 = piVar15 + 0xc;
          temp_v30 = temp_v30 + 1;
        } while (temp_v30 < temp_v7);
      }
    }
  }
  return;
}

} /* extern "C" */
