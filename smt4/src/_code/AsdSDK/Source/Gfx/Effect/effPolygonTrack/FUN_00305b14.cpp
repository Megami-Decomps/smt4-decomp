/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00305b14` (_code @ 0x305b14, 0xa28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(...);
int FUN_002482d4(void);
int FUN_00248480(void);
int FUN_002484e0(void);
int FUN_0024b77c(void);
int FUN_0024b830(...);
int FUN_002b7064(void);
int FUN_002b70cc(void);
int memClear(float *, int);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);
int __aeabi_uidivmod(void);

typedef struct fn_00305b14_arg0 fn_00305b14_arg0;
struct fn_00305b14_arg0 {
    unsigned char pad_0x0[0x34];
    int field_0x34; /* +0x34 */
    unsigned char pad_0x38[0x4];
    void *field_0x3c; /* +0x3c */
    void *field_0x40; /* +0x40 */
};

/* stack frame of param_1: 13 slot(s), 52 byte(s) */
typedef struct {
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
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
extern float DAT_004ea95c; /* 0x4ea95c */
extern float DAT_004ea960; /* 0x4ea960 */
extern float DAT_004ea964; /* 0x4ea964 */
extern float DAT_004ea968; /* 0x4ea968 */
extern float DAT_004ea96c; /* 0x4ea96c */
extern float DAT_004ea970; /* 0x4ea970 */
extern float DAT_004ea974; /* 0x4ea974 */
extern float DAT_004ea978; /* 0x4ea978 */
extern float DAT_004ea97c; /* 0x4ea97c */
extern float DAT_004ea980; /* 0x4ea980 */
extern float DAT_004ea984; /* 0x4ea984 */
extern float DAT_004ea988; /* 0x4ea988 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
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
/* Supplied declaration required: FUN_002482d4. */
/* Supplied declaration required: FUN_00248480. */
/* Supplied declaration required: FUN_002484e0. */
/* Supplied declaration required: FUN_0024b77c. */
/* Supplied declaration required: FUN_0024b830. */
/* Supplied declaration required: FUN_002b7064. */
/* Supplied declaration required: FUN_002b70cc. */
/* Supplied declaration required: memClear. */
/* Supplied declaration required: __aeabi_uidivmod. */


void FUN_00305b14(fn_00305b14_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr; 15 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  int *piVar4;
  float temp_v3;
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
  unsigned int in_fpscr;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  unsigned long long temp_v19;
  float temp_v20;
  float temp_v21;
  unsigned int temp_v22;
  long long temp_v23;
  unsigned long long temp_v24;
  float temp_v25;
  float temp_v26;
  float temp_v27;
  float temp_v28;
  int *temp_v29;
  unsigned int temp_v30;
  unsigned int temp_v31;
  
  pvVar8 = param_1->field_0x40;
  if ((param_1->field_0x34 <= *(int *)((int)pvVar8 + 0x34)) || (*(int *)((int)pvVar8 + 0x34) == 0))
  {
    temp_v6 = *(int *)((int)pvVar8 + 0x80);
    temp_v7 = *(unsigned int *)((int)pvVar8 + 0x38);
    if (temp_v6 != 0) {
      if ((*(char *)((int)pvVar8 + 0xb8) == '\0') || (param_1->field_0x34 != 0)) {
        temp_v2 = 0;
        temp_v31 = *(unsigned int *)((int)pvVar8 + 0x84);
      }
      else {
        temp_v2 = 1;
        temp_v31 = temp_v7;
      }
      temp_v0 = *(char *)((int)pvVar8 + 0x88);
      temp_v11 = *(float *)((int)pvVar8 + 0xd4);
      piVar4 = *(int **)((int)param_1->field_0x3c + 4);
      temp_v29 = *(int **)param_1->field_0x3c;
      pfVar12 = *(float **)(*piVar4 + 0x30);
      temp_v9 = *(int *)(*piVar4 + 0x3c);
      piVar4[0x16] = piVar4[0x16] | 5;
      temp_v30 = 0;
      temp_v3 = (float)(*(int *)((int)pvVar8 + 0x8c) + 1);
      temp_v4 = (int)*(short *)((int)piVar4 + 10);
      temp_v12 = *(float *)((int)pvVar8 + 0xa4);
      temp_v25 = *(float *)((int)pvVar8 + 0x98);
      temp_v22 = VectorUnsignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v23 = (unsigned long long)temp_v22 << 0x20;
      if (temp_v7 != 0) {
        temp_v27 = 0.0f;
        temp_v13 = temp_v3;
        do {
          temp_v5 = *temp_v29;
          if (temp_v5 != -2) {
            if (temp_v5 != -1) {
              if (temp_v6 <= temp_v5) {
                if (temp_v0 != '\0') {
                  *temp_v29 = -1;
                }
                else {
                  memClear(pfVar12,temp_v4 * 0xc);
                  *temp_v29 = -2;
                }
                temp_v13 = (float)VectorUnsignedToFloat
                                          ((unsigned int)DAT_00472560,(unsigned char)(in_fpscr >> 0x16) & 3);
                pfVar11 = (float *)(piVar4[1] + (temp_v30 & 0xffff) * 0x10);
                *pfVar11 = temp_v13 * 0.003921569f * 0.003921569f;
                temp_v13 = (float)VectorUnsignedToFloat
                                          ((unsigned int)DAT_00472561,(unsigned char)(in_fpscr >> 0x16) & 3);
                pfVar11[1] = temp_v13 * 0.003921569f * 0.003921569f;
                temp_v13 = (float)VectorUnsignedToFloat
                                          ((unsigned int)DAT_00472562,(unsigned char)(in_fpscr >> 0x16) & 3);
                pfVar11[2] = temp_v13 * 0.003921569f * 0.003921569f;
                temp_v13 = (float)VectorUnsignedToFloat
                                          ((unsigned int)DAT_00472563,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v13 = temp_v13 * 0.003921569f * 0.003921569f;
                pfVar11[3] = temp_v13;
                pfVar12 = pfVar12 + temp_v4 * 3;
                temp_v9 = temp_v9 + temp_v4 * 8;
              }
              else {
                temp_v14 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v13 = (float)temp_v29[6];
                temp_v10 = (float)((unsigned long long)temp_v23 >> 0x20);
                temp_v23 = CONCAT44(temp_v10,temp_v27);
                in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v27 == temp_v13) << 0x1e) |
                           ((unsigned int)(temp_v13 <= temp_v27) << 0x1d);
                temp_v19 = CONCAT44((float)temp_v29[8] * 0.25f,(float)temp_v29[4] + (float)temp_v29[5])
                ;
                temp_v29[4] = (int)((float)temp_v29[4] + (float)temp_v29[5]);
                temp_v1 = (unsigned char)(in_fpscr >> 0x18);
                temp_v14 = (float)temp_v29[7] + (temp_v13 + temp_v11 * temp_v14 * 0.5f) * temp_v14;
                temp_v13 = (float)temp_v29[9];
                if ((unsigned char)((temp_v1 >> 5) & 1) && !(unsigned char)(temp_v1 >> 6)) {
                  temp_v13 = -temp_v13;
                }
                temp_v24 = CONCAT44(temp_v29[10],temp_v13 / temp_v10);
                FUN_002484e0();
                FUN_00248480();
                FUN_002482d4();
                temp_v26 = 40.743664f;
                temp_v28 = temp_v14 * 40.743664f;
                temp_v13 = temp_v28;
                FUN_002b7064();
                FUN_002b70cc();
                temp_v20 = (float)temp_v23;
                temp_v10 = 0.0f;
                if (temp_v3 != 0.0f) {
                  do {
                    temp_v14 = temp_v14 + (float)temp_v24;
                    DAT_004ea928 = (float)temp_v19;
                    DAT_004ea91c = (temp_v28 * DAT_004ea95c + temp_v20 * DAT_004ea96c +
                                   temp_v13 * DAT_004ea97c) * DAT_004ea928;
                    DAT_004ea920 = (temp_v28 * DAT_004ea960 + temp_v20 * DAT_004ea970 +
                                   temp_v13 * DAT_004ea980) * DAT_004ea928;
                    DAT_004ea924 = (temp_v28 * DAT_004ea964 + temp_v20 * DAT_004ea974 +
                                   temp_v13 * DAT_004ea984) * DAT_004ea928;
                    DAT_004ea928 = (temp_v28 * DAT_004ea968 + temp_v20 * DAT_004ea978 +
                                   temp_v13 * DAT_004ea988) * DAT_004ea928;
                    temp_v28 = temp_v14 * temp_v26;
                    temp_v13 = temp_v28;
                    DAT_004ea93c = DAT_004ea91c;
                    DAT_004ea940 = DAT_004ea920;
                    DAT_004ea944 = DAT_004ea924;
                    DAT_004ea948 = DAT_004ea928;
                    FUN_002b7064();
                    temp_v20 = (float)temp_v23;
                    FUN_002b70cc();
                    temp_v18 = (float)temp_v19;
                    temp_v21 = (float)temp_v23;
                    temp_v15 = (temp_v28 * DAT_004ea95c + temp_v20 * DAT_004ea96c + temp_v13 * DAT_004ea97c)
                             * temp_v18 - DAT_004ea93c;
                    temp_v16 = (temp_v28 * DAT_004ea960 + temp_v20 * DAT_004ea970 + temp_v13 * DAT_004ea980)
                             * temp_v18 - DAT_004ea940;
                    temp_v17 = (temp_v28 * DAT_004ea964 + temp_v20 * DAT_004ea974 + temp_v13 * DAT_004ea984)
                             * temp_v18 - DAT_004ea944;
                    DAT_004ea91c = temp_v16 * DAT_004ea944 - temp_v17 * DAT_004ea940;
                    DAT_004ea920 = temp_v17 * DAT_004ea93c - temp_v15 * DAT_004ea944;
                    DAT_004ea924 = temp_v15 * DAT_004ea940 - temp_v16 * DAT_004ea93c;
                    temp_v15 = romwright_sqrt_4(DAT_004ea91c * DAT_004ea91c + DAT_004ea920 * DAT_004ea920 +
                                  DAT_004ea924 * DAT_004ea924);
                    temp_v22 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v15 < temp_v21) << 0x1f) |
                             ((unsigned int)(temp_v15 == temp_v21) << 0x1e);
                    in_fpscr = temp_v22 | ((unsigned int)((temp_v15 != temp_v15) || (temp_v21 != temp_v21)) << 0x1c);
                    temp_v1 = (unsigned char)(temp_v22 >> 0x18);
                    if (!(unsigned char)((temp_v1 >> 6) & 1) && temp_v1 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                      DAT_004ea91c = DAT_004ea91c / temp_v15;
                      DAT_004ea920 = DAT_004ea920 / temp_v15;
                      DAT_004ea924 = DAT_004ea924 / temp_v15;
                    }
                    temp_v15 = (float)VectorUnsignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
                    DAT_004ea938 = (float)((unsigned long long)temp_v19 >> 0x20);
                    DAT_004ea92c = DAT_004ea91c * DAT_004ea938;
                    DAT_004ea930 = DAT_004ea920 * DAT_004ea938;
                    DAT_004ea934 = DAT_004ea924 * DAT_004ea938;
                    DAT_004ea938 = ((temp_v28 * DAT_004ea968 + temp_v20 * DAT_004ea978 +
                                    temp_v13 * DAT_004ea988) * temp_v18 - DAT_004ea948) * DAT_004ea938;
                    DAT_004ea91c = DAT_004ea93c + DAT_004ea92c;
                    DAT_00472554 = DAT_004ea940 + DAT_004ea930;
                    DAT_00472558 = DAT_004ea944 + DAT_004ea934;
                    DAT_004ea920 = DAT_00472554;
                    DAT_004ea924 = DAT_00472558;
                    pfVar12[3] = DAT_004ea91c;
                    pfVar12[4] = DAT_00472554;
                    pfVar12[5] = DAT_00472558;
                    DAT_00472554 = DAT_004ea920 + DAT_004ea930;
                    DAT_00472558 = DAT_004ea924 + DAT_004ea934;
                    *pfVar12 = DAT_004ea91c + DAT_004ea92c;
                    pfVar12[1] = DAT_00472554;
                    pfVar12[2] = DAT_00472558;
                    DAT_004ea91c = DAT_004ea93c - DAT_004ea92c;
                    DAT_00472554 = DAT_004ea940 - DAT_004ea930;
                    DAT_00472558 = DAT_004ea944 - DAT_004ea934;
                    DAT_004ea928 = DAT_004ea948 - DAT_004ea938;
                    temp_v15 = (float)((unsigned long long)temp_v24 >> 0x20) +
                             temp_v25 * (temp_v15 / (float)((unsigned long long)temp_v23 >> 0x20));
                    DAT_004ea920 = DAT_00472554;
                    DAT_004ea924 = DAT_00472558;
                    pfVar12[6] = DAT_004ea91c;
                    pfVar12[7] = DAT_00472554;
                    pfVar12[8] = DAT_00472558;
                    temp_v10 = (float)((int)temp_v10 + 1);
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
                    *(float *)(temp_v9 + 4) = temp_v15;
                    *(float *)(temp_v9 + 0xc) = temp_v15;
                    *(float *)(temp_v9 + 0x14) = temp_v15;
                    *(float *)(temp_v9 + 0x1c) = temp_v15;
                    pfVar12 = pfVar12 + 0xc;
                    temp_v9 = temp_v9 + 0x20;
                  } while ((unsigned int)temp_v10 < (unsigned int)temp_v3);
                }
                temp_v13 = (float)temp_v29[10] + temp_v12;
                temp_v29[10] = (int)temp_v13;
                *temp_v29 = *temp_v29 + 1;
              }
            }
            else {
              memClear(pfVar12,temp_v4 * 0xc);
              if (temp_v31 != 0) {
                FUN_0024b830(0);
                temp_v28 = 1.0f;
                temp_v10 = ((1.0f - *(float *)((int)pvVar8 + 0xc0)) +
                         temp_v13 * *(float *)((int)pvVar8 + 0xc0)) * *(float *)((int)pvVar8 + 0xbc);
                FUN_0024b830(0);
                temp_v14 = (float)VectorUnsignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v13 = ((temp_v28 - *(float *)((int)pvVar8 + 200)) +
                         temp_v13 * *(float *)((int)pvVar8 + 200)) * *(float *)((int)pvVar8 + 0xc4) -
                         temp_v10;
                temp_v29[5] = (int)(temp_v13 / temp_v14);
                temp_v29[4] = (int)temp_v10;
                FUN_0024b830(0);
                temp_v10 = 0.5f;
                temp_v20 = 2.0f;
                temp_v14 = 3.1415927f;
                temp_v13 = (temp_v13 - 0.5f) * 2.0f * 3.1415927f;
                temp_v29[2] = (int)temp_v13;
                FUN_0024b830(0);
                temp_v14 = (temp_v13 - temp_v10) * temp_v20 * temp_v14;
                temp_v29[3] = (int)temp_v14;
                FUN_0024b830(0);
                temp_v14 = temp_v14 * 6.2831855f;
                temp_v29[7] = (int)temp_v14;
                FUN_0024b830(0);
                temp_v13 = ((temp_v28 - *(float *)((int)pvVar8 + 0xd0)) +
                         temp_v14 * *(float *)((int)pvVar8 + 0xd0)) * *(float *)((int)pvVar8 + 0xcc);
                temp_v29[6] = (int)temp_v13;
                FUN_0024b830(0);
                temp_v13 = ((temp_v28 - *(float *)((int)pvVar8 + 0xb4)) +
                         temp_v13 * *(float *)((int)pvVar8 + 0xb4)) * *(float *)((int)pvVar8 + 0xb0);
                temp_v29[8] = (int)temp_v13;
                FUN_0024b830(0);
                temp_v13 = ((temp_v28 - *(float *)((int)pvVar8 + 0xac)) +
                         temp_v13 * *(float *)((int)pvVar8 + 0xac)) * *(float *)((int)pvVar8 + 0xa8);
                temp_v29[9] = (int)temp_v13;
                FUN_0024b830(0);
                temp_v13 = ((temp_v28 - *(float *)((int)pvVar8 + 0x9c)) +
                         temp_v13 * *(float *)((int)pvVar8 + 0x9c)) * *(float *)((int)pvVar8 + 0x98);
                temp_v29[10] = (int)temp_v13;
                if (!temp_v2) {
                  *temp_v29 = 0;
                }
                else {
                  FUN_0024b77c();
                  __aeabi_uidivmod();
                  temp_v13 = (float)VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
                  *temp_v29 = temp_v8;
                  temp_v29[4] = (int)((float)temp_v29[4] + (float)temp_v29[5] * temp_v13);
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
          temp_v30 = temp_v30 + 1;
          temp_v29 = temp_v29 + 0xb;
        } while (temp_v30 < temp_v7);
      }
    }
  }
  return;
}

} /* extern "C" */
