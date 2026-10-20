/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00350338` (_code @ 0x350338, 0x754 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(unsigned int, double);
int FUN_001acf08(void);
int FUN_0027134c(int, float *);
int FUN_002fe2e8(int, float *);
int FUN_00321d7c(...);
int FUN_00321e98(...);
int FUN_00375c74(int, float *, char [4], int *);
int FUN_00514500(...);
int FUN_00514540(...);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);
int aeabi_uidivmod(void);

/* stack frame of param_1: 6 slot(s), 21 byte(s) */
typedef struct {
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned char sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
} param_1_stack;

extern float DAT_006472dc; /* 0x6472dc */
extern float DAT_006472e0; /* 0x6472e0 */
extern float DAT_006472e4; /* 0x6472e4 */
extern float DAT_006472e8; /* 0x6472e8 */
extern float DAT_006472ec; /* 0x6472ec */
extern float DAT_006472f0; /* 0x6472f0 */
extern float DAT_006472f4; /* 0x6472f4 */
extern float DAT_006472f8; /* 0x6472f8 */

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
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001acf08. */
/* Supplied declaration required: FUN_0027134c. */
/* Supplied declaration required: FUN_002fe2e8. */
/* Supplied declaration required: FUN_00321d7c. */
/* Supplied declaration required: FUN_00321e98. */
/* Supplied declaration required: FUN_00375c74. */
extern int FUN_0037a844(void);
/* Supplied declaration required: FUN_00514500. */
/* Supplied declaration required: FUN_00514540. */
/* Supplied declaration required: aeabi_uidivmod. */


void FUN_00350338(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 14 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  float temp_v4;
  unsigned int temp_v5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  unsigned int temp_v6;
  float temp_v7;
  unsigned int in_fpscr;
  unsigned int temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  unsigned int temp_v13;
  float temp_v14;
  unsigned long long temp_v15;
  float temp_v16;
  float temp_v17;
  long long temp_v18;
  unsigned long long temp_v19;
  unsigned long long temp_v20;
  float temp_v21;
  float temp_v22;
  unsigned long long temp_v23;
  int temp_v24;
  char temp_v25 [4];
  float temp_v26;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  unsigned int temp_v27;
  unsigned int temp_v28;
  float temp_v29;
  
  temp_v1 = FUN_001acf08();
  temp_v28 = *(unsigned int *)(param_1 + 0xc);
  pfVar8 = *(float **)(param_1 + 0x20);
  temp_v6 = *(unsigned int *)(param_1 + 4);
  pfVar6 = *(float **)(param_1 + 0x18);
  pfVar7 = *(float **)(param_1 + 0x1c);
  temp_v13 = VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v7 = pfVar8[0x2e];
  if (temp_v7 != 0.0f) {
    temp_v29 = pfVar8[8];
    temp_v1 = 0;
    temp_v27 = (unsigned int)*(unsigned char *)(pfVar8 + 0x27);
    temp_v15 = (unsigned long long)temp_v13;
    temp_v16 = pfVar8[0x37];
    temp_v17 = pfVar8[0x36];
    FUN_00375c74(param_1,pfVar8,temp_v25,&temp_v24);
    temp_v13 = 0;
    if (temp_v6 != 0) {
      temp_v23 = 0x40c90fdb;
      temp_v20 = 0x400000003f000000;
      temp_v9 = temp_v16 * 0.5f;
      temp_v22 = 1.0f;
      temp_v19 = CONCAT44(temp_v1,temp_v9 * (float)temp_v15);
      temp_v18 = (unsigned long long)(unsigned int)(temp_v17 * 0.5f * (float)temp_v15) << 0x20;
      do {
        if ((int)temp_v7 <= (int)pfVar6[4]) {
          if (temp_v29 == 0.0f) {
            temp_v4 = -NAN;
          }
          else {
            temp_v4 = -NAN;
          }
          pfVar6[4] = temp_v4;
          FUN_002fe2e8(param_1,pfVar6);
        }
        temp_v1 = (unsigned int)((unsigned long long)temp_v18 >> 0x20);
        temp_v4 = pfVar6[4];
        if (temp_v4 != -NAN) {
          if (temp_v4 != -NAN) {
            temp_v26 = *pfVar6;
            fStack_7c = pfVar6[1];
            fStack_78 = pfVar6[2];
            fStack_74 = pfVar6[3];
            DAT_006472ec = *pfVar6;
            DAT_006472f0 = pfVar6[1];
            DAT_006472f4 = pfVar6[2];
            DAT_006472f8 = pfVar6[3];
            temp_v2 = FUN_0037a844();
            temp_v9 = (float)((unsigned long long)temp_v19 >> 0x20);
            if (temp_v2 != 0) {
              temp_v14 = (float)temp_v15;
              temp_v10 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v21 = (float)((unsigned long long)temp_v20 >> 0x20);
              temp_v10 = (float)((unsigned long long)temp_v18 >> 0x20) * ((temp_v10 * temp_v21 - temp_v14) + temp_v22) +
                       pfVar7[3] * temp_v14;
              temp_v3 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v9 < temp_v10) << 0x1f) |
                      ((unsigned int)(temp_v9 == temp_v10) << 0x1e);
              in_fpscr = temp_v3 | ((unsigned int)((temp_v9 != temp_v9) || (temp_v10 != temp_v10)) << 0x1c);
              temp_v0 = (unsigned char)(temp_v3 >> 0x18);
              if (!(unsigned char)((temp_v0 >> 6) & 1) && temp_v0 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                temp_v10 = temp_v9;
              }
              temp_v11 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v12 = pfVar7[2] * temp_v10;
              DAT_006472dc = *pfVar7 * temp_v10;
              temp_v9 = temp_v10 * pfVar7[1] -
                       ((float)temp_v19 * ((temp_v11 * temp_v21 - temp_v14) + temp_v22) + temp_v9 * temp_v14);
            }
            else {
              temp_v10 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v10 = pfVar7[3] + temp_v17 * temp_v10;
              in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v9 <= temp_v10) << 0x1d);
              if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
                temp_v10 = temp_v9;
              }
              temp_v9 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
              DAT_006472dc = *pfVar7 * temp_v10;
              temp_v12 = pfVar7[2] * temp_v10;
              temp_v9 = pfVar7[1] * temp_v10 - temp_v16 * temp_v9;
            }
            DAT_006472dc = DAT_006472dc + DAT_006472ec;
            temp_v9 = temp_v9 + DAT_006472f0;
            temp_v12 = temp_v12 + DAT_006472f4;
            temp_v10 = (float)(temp_v15 >> 0x20) + DAT_006472f8;
            DAT_006472e0 = temp_v9;
            DAT_006472e4 = temp_v12;
            DAT_006472e8 = temp_v10;
            *pfVar6 = DAT_006472dc;
            pfVar6[1] = temp_v9;
            pfVar6[2] = temp_v12;
            pfVar6[3] = temp_v10;
            FUN_00321d7c(pfVar6,pfVar8,temp_v4,&temp_v26);
            pfVar6[6] = pfVar6[6] * pfVar7[4];
            temp_v9 = pfVar6[7];
            temp_v10 = pfVar7[6];
            pfVar6[7] = temp_v9 * temp_v10;
            temp_v9 = temp_v9 * temp_v10 + pfVar7[5];
            pfVar6[7] = temp_v9;
            FUN_0027134c(param_1,pfVar6);
            temp_v2 = FUN_001acf08();
            pfVar6[4] = (float)(temp_v2 + (int)temp_v4);
          }
          else if (temp_v24 != 0) {
            FUN_00514540(0);
            temp_v9 = temp_v9 - (float)temp_v20;
            temp_v4 = temp_v9 * (float)((unsigned long long)temp_v20 >> 0x20);
            FUN_00514540(0);
            temp_v9 = temp_v9 - (float)temp_v20;
            temp_v10 = temp_v9 * (float)((unsigned long long)temp_v20 >> 0x20);
            FUN_00514540(0);
            DAT_006472e4 = (temp_v9 - (float)temp_v20) * (float)((unsigned long long)temp_v20 >> 0x20);
            DAT_006472e8 = (float)(temp_v15 >> 0x20);
            temp_v9 = romwright_sqrt_4(temp_v4 * temp_v4 + temp_v10 * temp_v10 + DAT_006472e4 * DAT_006472e4);
            temp_v12 = (float)((unsigned long long)temp_v19 >> 0x20);
            temp_v3 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v9 < temp_v12) << 0x1f) |
                    ((unsigned int)(temp_v9 == temp_v12) << 0x1e);
            temp_v8 = temp_v3 | ((unsigned int)((temp_v9 != temp_v9) || (temp_v12 != temp_v12)) << 0x1c);
            temp_v0 = (unsigned char)(temp_v3 >> 0x18);
            DAT_006472dc = temp_v4;
            DAT_006472e0 = temp_v10;
            if (!(unsigned char)((temp_v0 >> 6) & 1) && temp_v0 >> 7 == ((unsigned char)(temp_v8 >> 0x1c) & 1)) {
              DAT_006472dc = temp_v4 / temp_v9;
              DAT_006472e0 = temp_v10 / temp_v9;
              DAT_006472e4 = DAT_006472e4 / temp_v9;
            }
            temp_v12 = DAT_006472e4;
            temp_v10 = DAT_006472e0;
            temp_v4 = DAT_006472dc;
            temp_v18 = CONCAT44(temp_v1,DAT_006472e0);
            *pfVar7 = DAT_006472dc;
            pfVar7[1] = temp_v10;
            pfVar7[2] = temp_v12;
            FUN_00514540(0);
            temp_v9 = romwright_fabs_4(((temp_v22 - pfVar8[0x35]) + temp_v9 * pfVar8[0x35]) * pfVar8[0x34]);
            pfVar7[3] = temp_v9;
            FUN_00514540(0);
            temp_v14 = (float)((unsigned long long)temp_v19 >> 0x20);
            DAT_006472e0 = (float)temp_v18;
            temp_v10 = (float)(temp_v15 >> 0x20);
            in_fpscr = (temp_v8 & 0xfffffff) | ((unsigned int)(temp_v14 <= pfVar8[0x34]) << 0x1d);
            DAT_006472ec = ((temp_v22 - pfVar8[0x33]) + temp_v9 * pfVar8[0x33]) * pfVar8[0x32];
            DAT_006472dc = temp_v4;
            DAT_006472e4 = temp_v12;
            if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
              DAT_006472dc = -temp_v4;
              DAT_006472e0 = -DAT_006472e0;
              DAT_006472e4 = -temp_v12;
            }
            if ((temp_v28 & 1) != 0) {
              DAT_006472dc = DAT_006472dc * DAT_006472ec;
              DAT_006472e0 = DAT_006472e0 * DAT_006472ec;
              DAT_006472e4 = DAT_006472e4 * DAT_006472ec;
              temp_v10 = temp_v10 * temp_v14;
              DAT_006472f0 = DAT_006472ec;
              DAT_006472f4 = DAT_006472ec;
              DAT_006472f8 = temp_v14;
            }
            else {
              DAT_006472dc = DAT_006472dc * DAT_006472ec;
              DAT_006472e0 = DAT_006472e0 * DAT_006472ec;
              DAT_006472e4 = DAT_006472e4 * DAT_006472ec;
              DAT_006472ec = *pfVar8;
              DAT_006472f0 = pfVar8[1];
              DAT_006472f4 = pfVar8[2];
              DAT_006472f8 = pfVar8[3];
              DAT_006472dc = DAT_006472dc + DAT_006472ec;
              DAT_006472e0 = DAT_006472e0 + DAT_006472f0;
              DAT_006472e4 = DAT_006472e4 + DAT_006472f4;
              temp_v10 = temp_v10 * temp_v14 + DAT_006472f8;
            }
            temp_v12 = DAT_006472e4;
            temp_v4 = DAT_006472e0;
            temp_v9 = DAT_006472dc;
            DAT_006472e8 = temp_v10;
            pfVar6[3] = temp_v10;
            *pfVar6 = temp_v9;
            pfVar6[1] = temp_v4;
            pfVar6[2] = temp_v12;
            FUN_00514540(0);
            temp_v9 = pfVar8[0x1b];
            pfVar7[4] = (temp_v22 - temp_v9) + temp_v10 * temp_v9;
            if (temp_v27 == 2) {
              pfVar7[5] = temp_v14;
              pfVar7[6] = temp_v22;
            }
            else {
              temp_v4 = temp_v22;
              FUN_00514540(0);
              temp_v10 = pfVar8[0x26];
              pfVar7[6] = (temp_v4 - temp_v10) + temp_v9 * temp_v10;
              if (temp_v27 != 1) {
                pfVar7[5] = temp_v14;
              }
              else {
                FUN_00514540(0);
                temp_v3 = 0;
                pfVar7[5] = temp_v10 * (float)temp_v23;
                FUN_00514500();
                if ((temp_v3 & 1) != 0) {
                  pfVar7[6] = -pfVar7[6];
                }
              }
            }
            temp_v26 = *pfVar6;
            fStack_7c = pfVar6[1];
            fStack_78 = pfVar6[2];
            fStack_74 = pfVar6[3];
            pfVar6[4] = 0.0f;
            if (temp_v25[0] != '\0') {
              FUN_00514500(0);
              aeabi_uidivmod();
              DAT_006472ec = *pfVar6;
              DAT_006472f0 = pfVar6[1];
              DAT_006472f4 = pfVar6[2];
              DAT_006472f8 = pfVar6[3];
              temp_v4 = (float)VectorUnsignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v9 = pfVar7[3] * temp_v4 + temp_v17 * temp_v4 * temp_v4 * (float)temp_v20;
              in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v14 <= temp_v9) << 0x1d);
              if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
                temp_v9 = temp_v14;
              }
              DAT_006472dc = *pfVar7 * temp_v9 + DAT_006472ec;
              temp_v10 = (pfVar7[1] * temp_v9 - temp_v16 * temp_v4 * temp_v4 * (float)temp_v20) + DAT_006472f0;
              temp_v9 = pfVar7[2] * temp_v9 + DAT_006472f4;
              temp_v12 = (float)(temp_v15 >> 0x20) + DAT_006472f8;
              DAT_006472e0 = temp_v10;
              DAT_006472e4 = temp_v9;
              DAT_006472e8 = temp_v12;
              *pfVar6 = DAT_006472dc;
              pfVar6[1] = temp_v10;
              pfVar6[2] = temp_v9;
              pfVar6[3] = temp_v12;
              pfVar6[4] = (float)(int)temp_v4;
            }
            FUN_00321d7c(pfVar6,pfVar8,pfVar6[4],&temp_v26);
            pfVar6[6] = pfVar6[6] * pfVar7[4];
            temp_v9 = pfVar6[7];
            temp_v4 = pfVar7[6];
            pfVar6[7] = temp_v9 * temp_v4;
            temp_v9 = temp_v9 * temp_v4 + pfVar7[5];
            pfVar6[7] = temp_v9;
            if (temp_v25[0] != '\0') {
              FUN_00321e98(param_1,pfVar6);
              temp_v2 = FUN_001acf08();
              pfVar6[4] = (float)((int)pfVar6[4] + temp_v2);
            }
            temp_v24 = temp_v24 - 1;
          }
        }
        temp_v13 = temp_v13 + 1;
        pfVar7 = pfVar7 + 7;
        pfVar6 = pfVar6 + 10;
      } while (temp_v13 < temp_v6);
    }
  }
  return;
}

} /* extern "C" */
