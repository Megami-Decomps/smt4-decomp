/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030d344` (_code @ 0x30d344, 0x95c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(...);
int FUN_0024add8(int, float *);
int FUN_0024b5f0(...);
int FUN_0024b660(...);
int FUN_0024b77c(...);
int FUN_0024b7bc(int, float *);
int FUN_0024b830(...);
int FUN_00269508(...);
int FUN_002a2c7c(void);
int FUN_002b70cc(void);
int VectorSignedToFloat(double, int);
int VectorUnsignedToFloat(...);
int aeabi_uidivmod(void);

/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
} param_1_stack;

extern float DAT_004736d0; /* 0x4736d0 */
extern float DAT_004736d4; /* 0x4736d4 */
extern float DAT_004736d8; /* 0x4736d8 */
extern float DAT_004ea91c; /* 0x4ea91c */
extern float DAT_004ea920; /* 0x4ea920 */
extern float DAT_004ea924; /* 0x4ea924 */
extern float DAT_004ea928; /* 0x4ea928 */
extern float DAT_004ea92c; /* 0x4ea92c */
extern float DAT_004ea930; /* 0x4ea930 */
extern float DAT_004ea934; /* 0x4ea934 */
extern float DAT_004ea938; /* 0x4ea938 */
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

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
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
/* Supplied declaration required: FUN_0024add8. */
/* Supplied declaration required: FUN_0024b5f0. */
/* Supplied declaration required: FUN_0024b660. */
/* Supplied declaration required: FUN_0024b77c. */
/* Supplied declaration required: FUN_0024b7bc. */
/* Supplied declaration required: FUN_0024b830. */
/* Supplied declaration required: FUN_00269508. */
extern int FUN_00269a58(void);
/* Supplied declaration required: FUN_002a2c7c. */
/* Supplied declaration required: FUN_002b70cc. */
/* Supplied declaration required: aeabi_uidivmod. */


void FUN_0030d344(int param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 15 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  float temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  unsigned int temp_v6;
  float temp_v7;
  unsigned int temp_v8;
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
  long long temp_v17;
  unsigned int temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  unsigned long long temp_v22;
  unsigned long long temp_v23;
  float temp_v24;
  float temp_v25;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  unsigned int temp_v26;
  float temp_v27;
  unsigned int temp_v28;
  
  pfVar8 = *(float **)(param_1 + 0x20);
  temp_v8 = *(unsigned int *)(param_1 + 4);
  temp_v26 = *(unsigned int *)(param_1 + 0xc);
  pfVar6 = *(float **)(param_1 + 0x18);
  pfVar7 = *(float **)(param_1 + 0x1c);
  temp_v7 = pfVar8[0x2e];
  if (temp_v7 != 0.0f) {
    temp_v27 = pfVar8[8];
    DAT_004ea91c = pfVar8[4];
    DAT_004ea920 = pfVar8[5];
    DAT_004ea924 = pfVar8[6];
    DAT_004ea928 = pfVar8[7];
    temp_v28 = (unsigned int)*(unsigned char *)(pfVar8 + 0x27);
    temp_v21 = 0.0f;
    temp_v17 = (unsigned long long)(unsigned int)pfVar8[0x35] << 0x20;
    FUN_002a2c7c();
    if ((temp_v27 != 0.0f) && (*(int *)(param_1 + 0x10) >= (int)temp_v27)) {
      temp_v24 = 0.0f;
      temp_v1 = 0;
    }
    else {
      temp_v17 = romwright_piece_4_4((int)((unsigned long long)temp_v17 >> 0x20),0x3f8ccccd);
      if ((*(int *)(param_1 + 0x10) == 0) && (*(char *)((int)pfVar8 + 0xbd) != '\0')) {
        in_s0 = pfVar8[10];
        temp_v1 = 1;
        temp_v6 = (in_fpscr & 0xfffffff) | ((unsigned int)(in_s0 < temp_v21) << 0x1f) |
                ((unsigned int)(in_s0 == temp_v21) << 0x1e);
        in_fpscr = temp_v6 | ((unsigned int)((in_s0 != in_s0) || (temp_v21 != temp_v21)) << 0x1c);
        temp_v0 = (unsigned char)(temp_v6 >> 0x18);
        if ((unsigned char)((temp_v0 >> 6) & 1) || temp_v0 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
          temp_v24 = *(float *)(param_1 + 4);
        }
        else {
          FUN_0024b830(0);
          temp_v19 = (float)VectorUnsignedToFloat
                                    (*(unsigned int *)(param_1 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
          in_s0 = (float)(int)(in_s0 * ((float)temp_v17 - pfVar8[10]) * temp_v19);
          temp_v24 = in_s0;
        }
      }
      else {
        temp_v19 = pfVar8[10];
        temp_v1 = 0;
        temp_v6 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v19 < temp_v21) << 0x1f) |
                ((unsigned int)(temp_v19 == temp_v21) << 0x1e);
        in_fpscr = temp_v6 | ((unsigned int)((temp_v19 != temp_v19) || (temp_v21 != temp_v21)) << 0x1c);
        temp_v0 = (unsigned char)(temp_v6 >> 0x18);
        if (!((unsigned char)((temp_v0 >> 6) & 1) || temp_v0 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1))) {
          FUN_0024b830();
          temp_v20 = (float)VectorUnsignedToFloat(pfVar8[9],(unsigned char)(in_fpscr >> 0x16) & 3);
          in_s0 = *(float *)(param_1 + 0x14) + temp_v20 * temp_v19 * ((float)temp_v17 - pfVar8[10]);
          *(float *)(param_1 + 0x14) = in_s0;
        }
        else {
          in_s0 = (float)VectorUnsignedToFloat(pfVar8[9],(unsigned char)(in_fpscr >> 0x16) & 3);
          in_s0 = *(float *)(param_1 + 0x14) + in_s0;
          *(float *)(param_1 + 0x14) = in_s0;
        }
        temp_v24 = (float)(int)romwright_fabs_4(in_s0);
        temp_v19 = (float)VectorSignedToFloat(temp_v24,(unsigned char)(in_fpscr >> 0x16) & 3);
        in_s0 = in_s0 - temp_v19;
        *(float *)(param_1 + 0x14) = in_s0;
      }
    }
    temp_v6 = 0;
    if (temp_v8 != 0) {
      temp_v22 = CONCAT44(temp_v21,0x40000000);
      temp_v23 = 0x40c90fdb;
      temp_v21 = 1.0f;
      temp_v20 = 0.5f;
      temp_v19 = 40.743664f;
      do {
        if ((int)temp_v7 <= (int)pfVar6[4]) {
          if (temp_v27 == 0.0f) {
            temp_v2 = -NAN;
          }
          else {
            temp_v2 = -NAN;
          }
          pfVar6[4] = temp_v2;
          FUN_0024b7bc(param_1,pfVar6);
        }
        temp_v18 = (unsigned int)((unsigned long long)temp_v17 >> 0x20);
        temp_v2 = pfVar6[4];
        if (temp_v2 != -NAN) {
          if (temp_v2 != -NAN) {
            temp_v25 = *pfVar6;
            fStack_74 = pfVar6[1];
            fStack_70 = pfVar6[2];
            fStack_6c = pfVar6[3];
            temp_v9 = pfVar7[6] * temp_v19;
            FUN_002b70cc();
            temp_v15 = pfVar7[8] * (temp_v9 - pfVar7[7]);
            temp_v10 = *pfVar6 + pfVar7[3] * temp_v15;
            *pfVar6 = temp_v10;
            temp_v12 = pfVar6[1] + pfVar7[4] * temp_v15;
            pfVar6[1] = temp_v12;
            temp_v15 = pfVar6[2] + pfVar7[5] * temp_v15;
            temp_v16 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
            pfVar6[2] = temp_v15;
            temp_v16 = pfVar7[0xb] - (float)((unsigned long long)temp_v17 >> 0x20) * temp_v16;
            *pfVar6 = temp_v10 + *pfVar7 * temp_v16;
            pfVar6[1] = temp_v12 + pfVar7[1] * temp_v16;
            pfVar6[2] = temp_v15 + pfVar7[2] * temp_v16;
            pfVar7[6] = pfVar7[6] + pfVar7[10];
            pfVar7[7] = temp_v9;
            pfVar7[8] = pfVar7[8] + pfVar7[9];
            FUN_0024b660(pfVar6,pfVar8,temp_v2,&temp_v25);
            pfVar6[6] = pfVar6[6] * pfVar7[0xc];
            temp_v9 = pfVar6[7];
            temp_v10 = pfVar7[0xe];
            pfVar6[7] = temp_v9 * temp_v10;
            in_s0 = temp_v9 * temp_v10 + pfVar7[0xd];
            pfVar6[7] = in_s0;
            FUN_00269508(pfVar8 + 0x3e,temp_v2,pfVar8[0x2e]);
            pfVar6[8] = in_s0;
            FUN_00269508(pfVar8 + 0x49,temp_v2,pfVar8[0x2e]);
            pfVar6[9] = in_s0;
            FUN_0024add8(param_1,pfVar6);
            temp_v3 = FUN_00269a58();
            pfVar6[4] = (float)(temp_v3 + (int)temp_v2);
          }
          else if (temp_v24 != 0.0f) {
            if ((temp_v26 & 1) != 0) {
              pfVar7[1] = temp_v21;
              temp_v2 = (float)((unsigned long long)temp_v22 >> 0x20);
              *pfVar7 = temp_v2;
              pfVar7[2] = temp_v2;
            }
            else {
              temp_v2 = DAT_004736d0 * DAT_004ea95c + DAT_004736d4 * DAT_004ea96c +
                      DAT_004736d8 * DAT_004ea97c;
              DAT_004ea928 = DAT_004736d0 * DAT_004ea968 + DAT_004736d4 * DAT_004ea978 +
                             DAT_004736d8 * DAT_004ea988;
              temp_v9 = DAT_004736d0 * DAT_004ea960 + DAT_004736d4 * DAT_004ea970 +
                       DAT_004736d8 * DAT_004ea980;
              in_s0 = DAT_004736d0 * DAT_004ea964 + DAT_004736d4 * DAT_004ea974 +
                      DAT_004736d8 * DAT_004ea984;
              DAT_004ea91c = temp_v2;
              DAT_004ea920 = temp_v9;
              DAT_004ea924 = in_s0;
              pfVar7[2] = in_s0;
              *pfVar7 = temp_v2;
              pfVar7[1] = temp_v9;
            }
            FUN_0024b830(0);
            in_s0 = in_s0 - temp_v20;
            temp_v12 = (float)((unsigned long long)temp_v22 >> 0x20);
            temp_v10 = in_s0 * (float)temp_v22;
            temp_v9 = temp_v12;
            FUN_0024b830(0);
            DAT_004ea924 = (in_s0 - temp_v20) * (float)temp_v22;
            temp_v2 = romwright_sqrt_4(temp_v10 * temp_v10 + temp_v9 * temp_v9 + DAT_004ea924 * DAT_004ea924);
            temp_v4 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v2 < temp_v9) << 0x1f) |
                    ((unsigned int)(temp_v2 == temp_v9) << 0x1e);
            in_fpscr = temp_v4 | ((unsigned int)((temp_v2 != temp_v2) || (temp_v9 != temp_v9)) << 0x1c);
            temp_v0 = (unsigned char)(temp_v4 >> 0x18);
            DAT_004ea91c = temp_v10;
            DAT_004ea920 = temp_v9;
            if (!(unsigned char)((temp_v0 >> 6) & 1) && temp_v0 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
              DAT_004ea91c = temp_v10 / temp_v2;
              DAT_004ea920 = temp_v9 / temp_v2;
              DAT_004ea924 = DAT_004ea924 / temp_v2;
            }
            DAT_004ea928 = temp_v9;
            if ((temp_v26 & 1) == 0) {
              temp_v10 = DAT_004ea91c * DAT_004ea960;
              temp_v15 = DAT_004ea91c * DAT_004ea964;
              temp_v2 = DAT_004ea91c * DAT_004ea968;
              temp_v9 = DAT_004ea920 * DAT_004ea974;
              DAT_004ea91c = DAT_004ea91c * DAT_004ea95c + DAT_004ea920 * DAT_004ea96c +
                             DAT_004ea924 * DAT_004ea97c;
              DAT_004ea928 = temp_v2 + DAT_004ea920 * DAT_004ea978 + DAT_004ea924 * DAT_004ea988;
              temp_v2 = DAT_004ea920;
              DAT_004ea920 = temp_v10 + DAT_004ea920 * DAT_004ea970 + DAT_004ea924 * DAT_004ea980;
              DAT_004ea924 = temp_v15 + temp_v9 + DAT_004ea924 * DAT_004ea984;
            }
            temp_v16 = DAT_004ea928;
            temp_v15 = DAT_004ea924;
            temp_v10 = DAT_004ea920;
            temp_v9 = DAT_004ea91c;
            temp_v17 = CONCAT44(temp_v18,DAT_004ea920);
            pfVar7[3] = DAT_004ea91c;
            pfVar7[4] = temp_v10;
            pfVar7[5] = temp_v15;
            FUN_0024b830(0);
            temp_v2 = ((temp_v21 - pfVar8[0x34]) + temp_v2 * pfVar8[0x34]) * pfVar8[0x33];
            pfVar7[0xb] = temp_v2;
            FUN_0024b830(0);
            temp_v10 = ((temp_v21 - pfVar8[0x37]) + temp_v2 * pfVar8[0x37]) * pfVar8[0x36];
            FUN_0024b830(0);
            temp_v11 = pfVar8[0x39];
            temp_v14 = pfVar8[0x38];
            pfVar7[8] = temp_v10;
            temp_v13 = (float)VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v10 = ((temp_v21 - temp_v11) + temp_v2 * temp_v11) * temp_v14 - temp_v10;
            pfVar7[9] = temp_v10 / temp_v13;
            FUN_0024b830(0);
            temp_v2 = ((temp_v21 - pfVar8[0x3b]) + temp_v10 * pfVar8[0x3b]) * pfVar8[0x3a];
            pfVar7[10] = temp_v2;
            FUN_0024b830(0);
            temp_v10 = (float)temp_v23;
            pfVar7[6] = temp_v2 * temp_v10;
            temp_v2 = temp_v2 * temp_v10 * temp_v19;
            FUN_002b70cc();
            pfVar7[7] = temp_v2;
            FUN_0024b830(0);
            DAT_004ea92c = (temp_v2 - temp_v20) * (float)temp_v22 * pfVar8[0x32];
            if ((temp_v26 & 1) != 0) {
              DAT_004ea91c = temp_v9 * DAT_004ea92c;
              DAT_004ea920 = (float)temp_v17 * DAT_004ea92c;
              DAT_004ea924 = temp_v15 * DAT_004ea92c;
              temp_v16 = temp_v16 * temp_v12;
              DAT_004ea930 = DAT_004ea92c;
              DAT_004ea934 = DAT_004ea92c;
              DAT_004ea938 = temp_v12;
            }
            else {
              temp_v9 = temp_v9 * DAT_004ea92c;
              DAT_004ea920 = (float)temp_v17 * DAT_004ea92c;
              temp_v15 = temp_v15 * DAT_004ea92c;
              DAT_004ea92c = *pfVar8;
              DAT_004ea930 = pfVar8[1];
              DAT_004ea934 = pfVar8[2];
              DAT_004ea938 = pfVar8[3];
              DAT_004ea91c = temp_v9 + DAT_004ea92c;
              DAT_004ea920 = DAT_004ea920 + DAT_004ea930;
              DAT_004ea924 = temp_v15 + DAT_004ea934;
              temp_v16 = temp_v16 * temp_v12 + DAT_004ea938;
            }
            temp_v15 = DAT_004ea924;
            temp_v9 = DAT_004ea920;
            temp_v2 = DAT_004ea91c;
            DAT_004ea928 = temp_v16;
            pfVar6[3] = temp_v16;
            *pfVar6 = temp_v2;
            pfVar6[1] = temp_v9;
            pfVar6[2] = temp_v15;
            FUN_0024b830(0);
            pfVar7[0xc] = (temp_v21 - pfVar8[0x1b]) + temp_v16 * pfVar8[0x1b];
            if (temp_v28 == 2) {
              pfVar7[0xd] = temp_v12;
              pfVar7[0xe] = temp_v21;
            }
            else {
              FUN_0024b830(0);
              pfVar7[0xe] = (temp_v21 - pfVar8[0x26]) + temp_v16 * pfVar8[0x26];
              if (temp_v28 != 1) {
                pfVar7[0xd] = temp_v12;
              }
              else {
                FUN_0024b830(0);
                temp_v4 = 0;
                pfVar7[0xd] = temp_v16 * temp_v10;
                FUN_0024b77c();
                if ((temp_v4 & 1) != 0) {
                  pfVar7[0xe] = -pfVar7[0xe];
                }
              }
            }
            temp_v2 = (float)((unsigned long long)temp_v17 >> 0x20);
            temp_v25 = *pfVar6;
            fStack_74 = pfVar6[1];
            fStack_70 = pfVar6[2];
            fStack_6c = pfVar6[3];
            pfVar6[4] = 0.0f;
            if (temp_v1) {
              FUN_0024b77c(0);
              aeabi_uidivmod();
              temp_v9 = (float)VectorUnsignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v17 = CONCAT44(temp_v2,temp_v9);
              temp_v2 = pfVar7[0xb] * temp_v9 - temp_v2 * temp_v9 * temp_v9 * temp_v20;
              *pfVar6 = *pfVar6 + *pfVar7 * temp_v2;
              pfVar6[1] = pfVar6[1] + pfVar7[1] * temp_v2;
              pfVar6[2] = pfVar6[2] + pfVar7[2] * temp_v2;
              temp_v2 = pfVar7[6] + pfVar7[10] * temp_v9;
              pfVar7[6] = temp_v2;
              temp_v2 = temp_v2 * temp_v19;
              pfVar7[8] = pfVar7[8] + pfVar7[9] * temp_v9;
              FUN_002b70cc();
              temp_v9 = pfVar7[8] * temp_v2;
              *pfVar6 = *pfVar6 + pfVar7[3] * temp_v9;
              pfVar6[1] = pfVar6[1] + pfVar7[4] * temp_v9;
              pfVar6[2] = pfVar6[2] + pfVar7[5] * temp_v9;
              pfVar7[6] = pfVar7[6] + pfVar7[10];
              pfVar7[8] = pfVar7[8] + pfVar7[9];
              pfVar7[7] = temp_v2;
              pfVar6[4] = (float)(int)(float)temp_v17;
            }
            FUN_0024b660(pfVar6,pfVar8,pfVar6[4],&temp_v25);
            pfVar6[6] = pfVar6[6] * pfVar7[0xc];
            temp_v2 = pfVar6[7];
            temp_v9 = pfVar7[0xe];
            pfVar6[7] = temp_v2 * temp_v9;
            in_s0 = temp_v2 * temp_v9 + pfVar7[0xd];
            pfVar6[7] = in_s0;
            FUN_00269508(pfVar8 + 0x3e,0xffffffff,pfVar8[0x2e]);
            pfVar6[8] = in_s0;
            FUN_00269508(pfVar8 + 0x49,0xffffffff,pfVar8[0x2e]);
            pfVar6[9] = in_s0;
            if (temp_v1) {
              FUN_0024b5f0(param_1,pfVar6);
              temp_v3 = FUN_00269a58();
              pfVar6[4] = (float)(temp_v3 + (int)pfVar6[4]);
            }
            temp_v24 = (float)((int)temp_v24 - 1);
          }
        }
        temp_v6 = temp_v6 + 1;
        pfVar7 = pfVar7 + 0xf;
        pfVar6 = pfVar6 + 10;
      } while (temp_v6 < temp_v8);
    }
  }
  return;
}

} /* extern "C" */
