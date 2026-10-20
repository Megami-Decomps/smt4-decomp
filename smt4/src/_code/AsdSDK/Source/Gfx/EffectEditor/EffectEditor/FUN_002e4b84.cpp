/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e4b84` (_code @ 0x2e4b84, 0x1008 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(...);
int FUN_0024857c(...);
int FUN_0024add8(int, float *);
int FUN_0024b5f0(...);
int FUN_0024b660(...);
int FUN_0024b77c(...);
int FUN_0024b7bc(int, float *);
int FUN_0024b830(...);
int FUN_002a2c7c(void);
int FUN_002b7064(void);
int FUN_002b70cc(void);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);
int aeabi_uidivmod(void);

/* stack frame of param_1: 14 slot(s), 56 byte(s) */
typedef struct {
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spFC; /* 0xfc: local_fc */
} param_1_stack;

extern float DAT_00472530; /* 0x472530 */
extern float DAT_00472534; /* 0x472534 */
extern float DAT_00472538; /* 0x472538 */
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

/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
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
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_0024857c. */
/* Supplied declaration required: FUN_0024add8. */
/* Supplied declaration required: FUN_0024b5f0. */
/* Supplied declaration required: FUN_0024b660. */
/* Supplied declaration required: FUN_0024b77c. */
/* Supplied declaration required: FUN_0024b7bc. */
/* Supplied declaration required: FUN_0024b830. */
extern int FUN_00269a58(void);
/* Supplied declaration required: FUN_002a2c7c. */
/* Supplied declaration required: FUN_002b7064. */
/* Supplied declaration required: FUN_002b70cc. */
/* Supplied declaration required: aeabi_uidivmod. */


void FUN_002e4b84(int param_1)

{
/* irregular: irregular input(s): in_d10, in_d15, in_fpscr, in_s0; 18 native warning(s); review required */
  unsigned char temp_v0;
  float temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  float *pfVar5;
  float *pfVar6;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  float temp_v8;
  unsigned int in_fpscr;
  float in_s0;
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
  unsigned long long temp_v22;
  long long in_d10;
  long long temp_v23;
  float temp_v24;
  unsigned int temp_v25;
  unsigned long long in_d15;
  float temp_v26;
  float fStack_f8;
  float temp_v27;
  float fStack_c4;
  float fStack_c0;
  float temp_v28;
  float temp_v29;
  int temp_v30;
  int temp_v31;
  float temp_v32;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float temp_v33;
  float temp_v34;
  int temp_v35;
  unsigned int temp_v36;
  float temp_v37;
  
  pfVar5 = *(float **)(param_1 + 0x1c);
  temp_v5 = *(int *)(param_1 + 0x20);
  pfVar6 = *(float **)(param_1 + 0x18);
  temp_v7 = *(unsigned int *)(param_1 + 4);
  temp_v31 = *(int *)(temp_v5 + 0xb8);
  if (temp_v31 != 0) {
    temp_v36 = (unsigned int)*(unsigned char *)(temp_v5 + 0x9c);
    DAT_004ea91c = *(float *)(temp_v5 + 0x10);
    DAT_004ea920 = *(float *)(temp_v5 + 0x14);
    DAT_004ea924 = *(float *)(temp_v5 + 0x18);
    DAT_004ea928 = *(float *)(temp_v5 + 0x1c);
    temp_v24 = *(float *)(temp_v5 + 0xec);
    temp_v23 = (unsigned long long)*(unsigned int *)(temp_v5 + 0xf8) << 0x20;
    temp_v21 = *(float *)(temp_v5 + 0xfc);
    temp_v22 = *(unsigned long long *)(temp_v5 + 0x100);
    temp_v35 = *(int *)(temp_v5 + 0x20);
    FUN_002a2c7c();
    if ((temp_v35 != 0) && (*(int *)(param_1 + 0x10) >= temp_v35)) {
      temp_v8 = 0.0f;
      temp_v30 = 0;
    }
    else {
      in_d10 = 0x3f8ccccd;
      if ((*(int *)(param_1 + 0x10) == 0) && (*(char *)(temp_v5 + 0xbd) != '\0')) {
        in_s0 = *(float *)(temp_v5 + 0x28);
        temp_v30 = 1;
        temp_v6 = (in_fpscr & 0xfffffff) | ((unsigned int)(in_s0 < 0.0f) << 0x1f) |
                ((unsigned int)(in_s0 == 0.0f) << 0x1e);
        in_fpscr = temp_v6 | ((unsigned int)(in_s0 != in_s0) << 0x1c);
        temp_v0 = (unsigned char)(temp_v6 >> 0x18);
        if ((unsigned char)((temp_v0 >> 6) & 1) || temp_v0 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
          temp_v8 = *(float *)(param_1 + 4);
        }
        else {
          FUN_0024b830(0);
          temp_v8 = (float)VectorUnsignedToFloat
                                    (*(unsigned int *)(param_1 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v8 = (float)(int)(in_s0 * ((float)in_d10 - *(float *)(temp_v5 + 0x28)) * temp_v8);
          in_s0 = temp_v8;
        }
      }
      else {
        temp_v8 = *(float *)(temp_v5 + 0x28);
        temp_v30 = 0;
        temp_v6 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v8 < 0.0f) << 0x1f) |
                ((unsigned int)(temp_v8 == 0.0f) << 0x1e);
        in_fpscr = temp_v6 | ((unsigned int)(temp_v8 != temp_v8) << 0x1c);
        temp_v0 = (unsigned char)(temp_v6 >> 0x18);
        if (!((unsigned char)((temp_v0 >> 6) & 1) || temp_v0 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1))) {
          FUN_0024b830();
          temp_v1 = (float)VectorUnsignedToFloat
                                   (*(unsigned int *)(temp_v5 + 0x24),(unsigned char)(in_fpscr >> 0x16) & 3);
          in_s0 = *(float *)(param_1 + 0x14) +
                  temp_v1 * temp_v8 * ((float)in_d10 - *(float *)(temp_v5 + 0x28));
          *(float *)(param_1 + 0x14) = in_s0;
        }
        else {
          in_s0 = (float)VectorUnsignedToFloat
                                   (*(unsigned int *)(temp_v5 + 0x24),(unsigned char)(in_fpscr >> 0x16) & 3);
          in_s0 = *(float *)(param_1 + 0x14) + in_s0;
          *(float *)(param_1 + 0x14) = in_s0;
        }
        temp_v8 = (float)(int)romwright_fabs_4(in_s0);
        temp_v1 = (float)VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
        in_s0 = in_s0 - temp_v1;
        *(float *)(param_1 + 0x14) = in_s0;
      }
    }
    if (temp_v7 != 0) {
      in_d15 = 0x3f800000;
    }
    temp_v6 = 0;
    if (temp_v6 < temp_v7) {
      do {
        if (temp_v31 <= (int)pfVar6[4]) {
          if (temp_v35 == 0) {
            temp_v1 = -NAN;
          }
          else {
            temp_v1 = -NAN;
          }
          pfVar6[4] = temp_v1;
          FUN_0024b7bc(param_1,pfVar6);
        }
        temp_v14 = (float)in_d15;
        temp_v12 = (float)((unsigned long long)temp_v23 >> 0x20);
        temp_v1 = pfVar6[4];
        if (temp_v1 != -NAN) {
          if (temp_v1 != -NAN) {
            temp_v32 = *pfVar6;
            fStack_8c = pfVar6[1];
            fStack_88 = pfVar6[2];
            fStack_84 = pfVar6[3];
            temp_v23 = (unsigned long long)(unsigned int)temp_v12 << 0x20;
            temp_v9 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v12 = pfVar5[0xd] * temp_v9 + temp_v12 * temp_v9 * temp_v9 * 0.5f;
            temp_v3 = in_fpscr & 0xfffffff;
            if (temp_v12 < 0.0f) {
              temp_v12 = 0.0f;
            }
            temp_v9 = pfVar5[0xc] * temp_v9 + temp_v24 * temp_v9 * temp_v9 * 0.5f;
            if (temp_v9 < 0.0f) {
              temp_v9 = 0.0f;
            }
            temp_v13 = pfVar5[0xf];
            temp_v15 = temp_v12 * 0.001f;
            if ((int)(temp_v12 * 0.001f) >= 0x3f800001) {
              temp_v15 = temp_v14;
            }
            if (temp_v13 <= temp_v15) {
              pfVar5[0xf] = temp_v15;
              temp_v13 = temp_v15;
            }
            temp_v14 = temp_v14 - temp_v13;
            temp_v15 = temp_v14 * temp_v14 * temp_v14;
            temp_v20 = temp_v13 * temp_v13 * temp_v13;
            DAT_004ea928 = (float)in_d10;
            temp_v18 = temp_v14 * temp_v14 * temp_v13 * 3.0f;
            temp_v12 = temp_v13 * temp_v13 * temp_v14 * 3.0f;
            DAT_004ea91c = *(float *)(temp_v5 + 0xfc) * temp_v15 + *pfVar5 * temp_v18 + pfVar5[3] * temp_v12
                           + (*(float *)(temp_v5 + 0x108) + pfVar5[9]) * temp_v20;
            in_d10 = CONCAT44(DAT_004ea91c,DAT_004ea928);
            temp_v14 = *(float *)(temp_v5 + 0x100) * temp_v15 + pfVar5[1] * temp_v18 + pfVar5[4] * temp_v12 +
                     (*(float *)(temp_v5 + 0x10c) + pfVar5[10]) * temp_v20;
            temp_v12 = *(float *)(temp_v5 + 0x104) * temp_v15 + pfVar5[2] * temp_v18 + pfVar5[5] * temp_v12 +
                     (*(float *)(temp_v5 + 0x110) + pfVar5[0xb]) * temp_v20;
            in_fpscr = temp_v3 | ((unsigned int)(temp_v9 == 0.0f) << 0x1e);
            DAT_004ea920 = temp_v14;
            DAT_004ea924 = temp_v12;
            if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
              DAT_004ea92c = *(float *)(temp_v5 + 0xfc);
              DAT_004ea930 = *(float *)(temp_v5 + 0x100);
              DAT_004ea934 = *(float *)(temp_v5 + 0x104);
              DAT_004ea938 = fStack_f8;
              DAT_004ea91c = temp_v21 - DAT_004ea92c;
              DAT_004ea920 = (float)temp_v22 - DAT_004ea930;
              DAT_004ea924 = (float)((unsigned long long)temp_v22 >> 0x20) - DAT_004ea934;
              temp_v28 = temp_v26 - fStack_f8;
              temp_v9 = romwright_sqrt_4(DAT_004ea91c * DAT_004ea91c + DAT_004ea920 * DAT_004ea920 +
                            DAT_004ea924 * DAT_004ea924);
              temp_v3 = temp_v3 | ((unsigned int)(temp_v9 < 0.0f) << 0x1f) | ((unsigned int)(temp_v9 == 0.0f) << 0x1e);
              in_fpscr = temp_v3 | ((unsigned int)(temp_v9 != temp_v9) << 0x1c);
              temp_v0 = (unsigned char)(temp_v3 >> 0x18);
              if (!(unsigned char)((temp_v0 >> 6) & 1) && temp_v0 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                DAT_004ea91c = DAT_004ea91c / temp_v9;
                DAT_004ea920 = DAT_004ea920 / temp_v9;
                DAT_004ea924 = DAT_004ea924 / temp_v9;
              }
              temp_v27 = DAT_004ea91c;
              fStack_c4 = DAT_004ea920;
              fStack_c0 = DAT_004ea924;
              DAT_004ea928 = temp_v28;
              FUN_0024857c(&temp_v27);
              temp_v13 = pfVar5[0xe] * temp_v13;
              DAT_004ea92c = temp_v27 * temp_v13;
              DAT_004ea930 = fStack_c4 * temp_v13;
              DAT_004ea934 = fStack_c0 * temp_v13;
              DAT_004ea938 = temp_v28 * temp_v13;
              temp_v9 = (float)((unsigned long long)in_d10 >> 0x20) - DAT_004ea92c;
              temp_v14 = temp_v14 - DAT_004ea930;
              temp_v12 = temp_v12 - DAT_004ea934;
              DAT_004ea91c = temp_v9 * DAT_004ea95c + temp_v14 * DAT_004ea96c + temp_v12 * DAT_004ea97c +
                             DAT_004ea92c;
              DAT_004ea920 = temp_v9 * DAT_004ea960 + temp_v14 * DAT_004ea970 + temp_v12 * DAT_004ea980 +
                             DAT_004ea930;
              DAT_004ea924 = temp_v9 * DAT_004ea964 + temp_v14 * DAT_004ea974 + temp_v12 * DAT_004ea984 +
                             DAT_004ea934;
              DAT_004ea928 = temp_v9 * DAT_004ea968 + temp_v14 * DAT_004ea978 + temp_v12 * DAT_004ea988 +
                             DAT_004ea938;
            }
            temp_v9 = DAT_004ea924;
            temp_v12 = DAT_004ea920;
            temp_v14 = DAT_004ea91c;
            pfVar6[3] = DAT_004ea928;
            *pfVar6 = temp_v14;
            pfVar6[1] = temp_v12;
            pfVar6[2] = temp_v9;
            FUN_0024b660(pfVar6,temp_v5,temp_v1,&temp_v32);
            pfVar6[6] = pfVar6[6] * pfVar5[0x10];
            temp_v14 = pfVar6[7];
            temp_v12 = pfVar5[0x12];
            pfVar6[7] = temp_v14 * temp_v12;
            in_s0 = temp_v14 * temp_v12 + pfVar5[0x11];
            pfVar6[7] = in_s0;
            FUN_0024add8(param_1,pfVar6);
            temp_v2 = FUN_00269a58();
            pfVar6[4] = (float)(temp_v2 + (int)temp_v1);
          }
          else if (temp_v8 != 0.0f) {
            FUN_0024b830(0);
            temp_v9 = (in_s0 - 0.5f) * 2.0f * 3.1415927f * 40.743664f;
            temp_v1 = temp_v9;
            FUN_002b7064();
            pfVar5[9] = temp_v9 * *(float *)(temp_v5 + 0x11c);
            pfVar5[10] = -*(float *)(temp_v5 + 0x120);
            FUN_002b70cc();
            temp_v1 = temp_v1 * *(float *)(temp_v5 + 0x11c);
            temp_v23 = CONCAT44(temp_v12,temp_v14);
            pfVar5[0xb] = temp_v1;
            temp_v34 = *(float *)(temp_v5 + 0x108) + pfVar5[9];
            temp_v16 = *(float *)(temp_v5 + 0x10c) + pfVar5[10];
            temp_v37 = *(float *)(temp_v5 + 0x110) + temp_v1;
            DAT_004ea920 = (float)temp_v22;
            DAT_004ea924 = (float)((unsigned long long)temp_v22 >> 0x20);
            temp_v1 = (float)VectorSignedToFloat((int)*(short *)(temp_v5 + 200),
                                               (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v1 = temp_v1 * 0.01f;
            temp_v12 = temp_v14 - temp_v1;
            temp_v33 = temp_v21 * temp_v12 + temp_v34 * temp_v1;
            temp_v17 = DAT_004ea920 * temp_v12 + temp_v16 * temp_v1;
            temp_v9 = DAT_004ea924 * temp_v12 + temp_v37 * temp_v1;
            temp_v15 = temp_v26 * temp_v12 + fStack_f8 * temp_v1;
            temp_v12 = (float)VectorSignedToFloat((int)*(short *)(temp_v5 + 0xd4),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v12 = temp_v12 * 0.01f;
            temp_v13 = temp_v14 - temp_v12;
            temp_v20 = temp_v21 * temp_v13;
            temp_v1 = temp_v34 * temp_v12;
            temp_v29 = DAT_004ea924 * temp_v13 + temp_v37 * temp_v12;
            temp_v18 = temp_v26 * temp_v13 + fStack_f8 * temp_v12;
            in_d15 = CONCAT44(DAT_004ea920 * temp_v13 + temp_v16 * temp_v12,temp_v14);
            DAT_004ea91c = temp_v21 - temp_v34;
            DAT_004ea920 = DAT_004ea920 - temp_v16;
            DAT_004ea924 = DAT_004ea924 - temp_v37;
            DAT_004ea928 = temp_v26 - fStack_f8;
            pfVar5[0xe] = romwright_sqrt_4(DAT_004ea91c * DAT_004ea91c + DAT_004ea920 * DAT_004ea920 +
                               DAT_004ea924 * DAT_004ea924);
            temp_v14 = romwright_sqrt_4(DAT_004ea91c * DAT_004ea91c + DAT_004ea920 * DAT_004ea920 +
                          DAT_004ea924 * DAT_004ea924);
            temp_v3 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v14 < 0.0f) << 0x1f) |
                    ((unsigned int)(temp_v14 == 0.0f) << 0x1e);
            in_fpscr = temp_v3 | ((unsigned int)(temp_v14 != temp_v14) << 0x1c);
            temp_v0 = (unsigned char)(temp_v3 >> 0x18);
            if (!(unsigned char)((temp_v0 >> 6) & 1) && temp_v0 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
              DAT_004ea91c = DAT_004ea91c / temp_v14;
              DAT_004ea920 = DAT_004ea920 / temp_v14;
              DAT_004ea924 = DAT_004ea924 / temp_v14;
            }
            temp_v27 = DAT_004ea91c;
            fStack_c4 = DAT_004ea920;
            fStack_c0 = DAT_004ea924;
            temp_v28 = DAT_004ea928;
            DAT_004ea93c = DAT_004ea91c;
            DAT_004ea940 = DAT_004ea920;
            DAT_004ea944 = DAT_004ea924;
            DAT_004ea948 = DAT_004ea928;
            temp_v14 = DAT_004ea920 * DAT_00472538 - DAT_004ea924 * DAT_00472534;
            temp_v10 = DAT_004ea924 * DAT_00472530 - DAT_004ea91c * DAT_00472538;
            temp_v12 = DAT_004ea91c * DAT_00472534 - DAT_004ea920 * DAT_00472530;
            DAT_004ea92c = DAT_004ea91c;
            DAT_004ea930 = DAT_004ea920;
            DAT_004ea934 = DAT_004ea924;
            DAT_004ea938 = DAT_004ea928;
            temp_v19 = temp_v10 * DAT_004ea924 - temp_v12 * DAT_004ea920;
            temp_v13 = temp_v14 * DAT_004ea920;
            DAT_004ea920 = temp_v12 * DAT_004ea91c - temp_v14 * DAT_004ea924;
            DAT_004ea924 = temp_v13 - temp_v10 * DAT_004ea91c;
            temp_v14 = DAT_004ea928;
            DAT_004ea91c = temp_v19;
            temp_v12 = DAT_004ea920;
            temp_v13 = DAT_004ea924;
            FUN_0024b830(0);
            temp_v11 = (float)VectorSignedToFloat((int)*(short *)(temp_v5 + 0xe0),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v10 = (temp_v10 - 0.5f) * 2.0f * temp_v11 * 0.5f * 0.017453292f;
            FUN_0024857c(&temp_v27);
            FUN_0024b830(0);
            DAT_004ea944 = temp_v13;
            DAT_004ea940 = temp_v12;
            temp_v12 = (((float)temp_v23 - *(float *)(temp_v5 + 0xd0)) + temp_v10 * *(float *)(temp_v5 + 0xd0)
                     ) * *(float *)(temp_v5 + 0xcc);
            temp_v13 = temp_v19 * temp_v12;
            temp_v10 = DAT_004ea940 * temp_v12;
            temp_v12 = DAT_004ea944 * temp_v12;
            DAT_004ea92c = temp_v13 * DAT_004ea95c + temp_v10 * DAT_004ea96c + temp_v12 * DAT_004ea97c;
            DAT_004ea930 = temp_v13 * DAT_004ea960 + temp_v10 * DAT_004ea970 + temp_v12 * DAT_004ea980;
            DAT_004ea934 = temp_v13 * DAT_004ea964 + temp_v10 * DAT_004ea974 + temp_v12 * DAT_004ea984;
            DAT_004ea938 = temp_v13 * DAT_004ea968 + temp_v10 * DAT_004ea978 + temp_v12 * DAT_004ea988;
            temp_v13 = temp_v33 + DAT_004ea92c;
            temp_v12 = temp_v17 + DAT_004ea930;
            temp_v9 = temp_v9 + DAT_004ea934;
            DAT_004ea928 = temp_v15 + DAT_004ea938;
            DAT_004ea91c = temp_v13;
            DAT_004ea920 = temp_v12;
            DAT_004ea924 = temp_v9;
            DAT_004ea93c = temp_v19;
            DAT_004ea948 = temp_v14;
            *pfVar5 = temp_v13;
            pfVar5[1] = temp_v12;
            pfVar5[2] = temp_v9;
            FUN_0024b830(0);
            temp_v14 = (((float)temp_v23 - *(float *)(temp_v5 + 0xdc)) + temp_v13 * *(float *)(temp_v5 + 0xdc)
                     ) * *(float *)(temp_v5 + 0xd8);
            temp_v12 = DAT_004ea93c * temp_v14;
            temp_v9 = DAT_004ea940 * temp_v14;
            temp_v14 = DAT_004ea944 * temp_v14;
            DAT_004ea92c = temp_v12 * DAT_004ea95c + temp_v9 * DAT_004ea96c + temp_v14 * DAT_004ea97c;
            DAT_004ea930 = temp_v12 * DAT_004ea960 + temp_v9 * DAT_004ea970 + temp_v14 * DAT_004ea980;
            DAT_004ea934 = temp_v12 * DAT_004ea964 + temp_v9 * DAT_004ea974 + temp_v14 * DAT_004ea984;
            DAT_004ea938 = temp_v12 * DAT_004ea968 + temp_v9 * DAT_004ea978 + temp_v14 * DAT_004ea988;
            temp_v12 = temp_v20 + temp_v1 + DAT_004ea92c;
            temp_v1 = (float)((unsigned long long)in_d15 >> 0x20) + DAT_004ea930;
            temp_v14 = temp_v29 + DAT_004ea934;
            DAT_004ea928 = temp_v18 + DAT_004ea938;
            DAT_004ea91c = temp_v12;
            DAT_004ea920 = temp_v1;
            DAT_004ea924 = temp_v14;
            pfVar5[3] = temp_v12;
            pfVar5[4] = temp_v1;
            pfVar5[5] = temp_v14;
            FUN_0024b830(0);
            temp_v1 = (((float)temp_v23 - *(float *)(temp_v5 + 0xf4)) + temp_v12 * *(float *)(temp_v5 + 0xf4))
                    * *(float *)(temp_v5 + 0xf0);
            pfVar5[0xd] = temp_v1;
            FUN_0024b830(0);
            in_d10 = (unsigned long long)(unsigned int)temp_v17 << 0x20;
            temp_v1 = (((float)temp_v23 - *(float *)(temp_v5 + 0xe8)) + temp_v1 * *(float *)(temp_v5 + 0xe8))
                    * *(float *)(temp_v5 + 0xe4);
            pfVar5[0xc] = temp_v1;
            pfVar5[0xf] = 0.0f;
            *pfVar6 = temp_v21;
            pfVar6[1] = (float)temp_v22;
            pfVar6[2] = (float)((unsigned long long)temp_v22 >> 0x20);
            pfVar6[3] = temp_v26;
            FUN_0024b830(0);
            pfVar5[0x10] = ((float)temp_v23 - *(float *)(temp_v5 + 0x6c)) +
                           temp_v1 * *(float *)(temp_v5 + 0x6c);
            if (temp_v36 == 2) {
              pfVar5[0x11] = (float)in_d10;
              pfVar5[0x12] = (float)temp_v23;
            }
            else {
              FUN_0024b830(0);
              pfVar5[0x12] = ((float)temp_v23 - *(float *)(temp_v5 + 0x98)) +
                             temp_v1 * *(float *)(temp_v5 + 0x98);
              if (temp_v36 != 1) {
                pfVar5[0x11] = (float)in_d10;
              }
              else {
                FUN_0024b830(0);
                temp_v3 = 0;
                pfVar5[0x11] = temp_v1 * 6.2831855f;
                FUN_0024b77c();
                if ((temp_v3 & 1) != 0) {
                  pfVar5[0x12] = -pfVar5[0x12];
                }
              }
            }
            temp_v25 = (unsigned int)in_d15;
            temp_v32 = *pfVar6;
            fStack_8c = pfVar6[1];
            fStack_88 = pfVar6[2];
            fStack_84 = pfVar6[3];
            pfVar6[4] = 0.0f;
            if (temp_v30 != 0) {
              FUN_0024b77c(0);
              aeabi_uidivmod();
              temp_v14 = (float)VectorUnsignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v1 = pfVar5[0xd] * temp_v14 +
                      (float)((unsigned long long)temp_v23 >> 0x20) * temp_v14 * temp_v14 * 0.5f;
              temp_v12 = (float)in_d10;
              in_d15 = CONCAT44(temp_v12,temp_v25);
              if (temp_v1 < temp_v12) {
                temp_v1 = temp_v12;
              }
              temp_v9 = pfVar5[0xc] * temp_v14 + temp_v24 * temp_v14 * temp_v14 * 0.5f;
              if (temp_v9 < temp_v12) {
                temp_v9 = temp_v12;
              }
              DAT_004ea928 = (float)((unsigned long long)in_d10 >> 0x20);
              temp_v13 = pfVar5[0xf];
              temp_v15 = temp_v1 * 0.001f;
              if ((int)(temp_v1 * 0.001f) >= 0x3f800001) {
                temp_v15 = (float)temp_v23;
              }
              temp_v1 = temp_v15;
              if (temp_v15 < temp_v13) {
                temp_v1 = temp_v13;
              }
              in_d10 = CONCAT44(DAT_004ea928,temp_v1);
              if (temp_v13 <= temp_v15) {
                pfVar5[0xf] = temp_v1;
              }
              temp_v15 = (float)temp_v23 - temp_v1;
              temp_v20 = temp_v15 * temp_v15 * temp_v15;
              temp_v13 = temp_v1 * temp_v1 * temp_v1;
              temp_v18 = temp_v15 * temp_v15 * temp_v1 * 3.0f;
              temp_v1 = temp_v1 * temp_v1 * temp_v15 * 3.0f;
              in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v9 == temp_v12) << 0x1e);
              DAT_004ea91c = *(float *)(temp_v5 + 0xfc) * temp_v20 + *pfVar5 * temp_v18 +
                             pfVar5[3] * temp_v1 + temp_v34 * temp_v13;
              DAT_004ea920 = *(float *)(temp_v5 + 0x100) * temp_v20 + pfVar5[1] * temp_v18 +
                             pfVar5[4] * temp_v1 + temp_v16 * temp_v13;
              DAT_004ea924 = *(float *)(temp_v5 + 0x104) * temp_v20 + pfVar5[2] * temp_v18 +
                             pfVar5[5] * temp_v1 + temp_v37 * temp_v13;
              if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
                FUN_0024857c(&temp_v27);
                DAT_004ea938 = pfVar5[0xe] * (float)in_d10;
                DAT_004ea92c = temp_v27 * DAT_004ea938;
                DAT_004ea930 = fStack_c4 * DAT_004ea938;
                DAT_004ea934 = fStack_c0 * DAT_004ea938;
                DAT_004ea938 = temp_v28 * DAT_004ea938;
                temp_v1 = DAT_004ea91c - DAT_004ea92c;
                temp_v12 = DAT_004ea920 - DAT_004ea930;
                temp_v9 = DAT_004ea924 - DAT_004ea934;
                DAT_004ea91c = temp_v1 * DAT_004ea95c + temp_v12 * DAT_004ea96c + temp_v9 * DAT_004ea97c
                               + DAT_004ea92c;
                DAT_004ea920 = temp_v1 * DAT_004ea960 + temp_v12 * DAT_004ea970 + temp_v9 * DAT_004ea980
                               + DAT_004ea930;
                DAT_004ea924 = temp_v1 * DAT_004ea964 + temp_v12 * DAT_004ea974 + temp_v9 * DAT_004ea984
                               + DAT_004ea934;
                DAT_004ea928 = temp_v1 * DAT_004ea968 + temp_v12 * DAT_004ea978 + temp_v9 * DAT_004ea988
                               + DAT_004ea938;
              }
              temp_v9 = DAT_004ea924;
              temp_v12 = DAT_004ea920;
              temp_v1 = DAT_004ea91c;
              pfVar6[3] = DAT_004ea928;
              *pfVar6 = temp_v1;
              pfVar6[1] = temp_v12;
              pfVar6[2] = temp_v9;
              pfVar6[4] = (float)(int)temp_v14;
            }
            FUN_0024b660(pfVar6,temp_v5,pfVar6[4],&temp_v32);
            pfVar6[6] = pfVar6[6] * pfVar5[0x10];
            temp_v1 = pfVar6[7];
            temp_v14 = pfVar5[0x12];
            pfVar6[7] = temp_v1 * temp_v14;
            in_s0 = temp_v1 * temp_v14 + pfVar5[0x11];
            pfVar6[7] = in_s0;
            if (temp_v30 != 0) {
              FUN_0024b5f0(param_1,pfVar6);
              temp_v2 = FUN_00269a58();
              pfVar6[4] = (float)(temp_v2 + (int)pfVar6[4]);
            }
            temp_v8 = (float)((int)temp_v8 - 1);
          }
        }
        temp_v6 = temp_v6 + 1;
        pfVar5 = pfVar5 + 0x13;
        pfVar6 = pfVar6 + 10;
      } while (temp_v6 < temp_v7);
    }
  }
  return;
}

} /* extern "C" */
