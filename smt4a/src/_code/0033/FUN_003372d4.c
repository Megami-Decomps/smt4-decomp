/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003372d4` (_code @ 0x3372d4, 0x9fc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 10 slot(s), 37 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned char sp80; /* 0x80: local_80 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
} param_1_stack;

extern float fRam006471c0; /* 0x6471c0 */
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


void FUN_003372d4(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 13 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  float *pfVar3;
  float temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  float temp_v5;
  float *pfVar7;
  float *pfVar8;
  unsigned int temp_v6;
  float *pfVar10;
  unsigned int temp_v7;
  float temp_v8;
  unsigned char temp_v9;
  unsigned char temp_v10;
  unsigned char temp_v11;
  unsigned int in_fpscr;
  unsigned int temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  long long temp_v20;
  unsigned long long temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  long long temp_v27;
  unsigned long long temp_v28;
  unsigned long long temp_v29;
  int temp_v30;
  unsigned int temp_v31;
  float temp_v32;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  char temp_v33 [4];
  unsigned int temp_v34;
  float temp_v35;
  float temp_v36;
  unsigned int *temp_v37;
  unsigned int *temp_v38;
  int temp_v39;
  
  temp_v39 = param_1;
  temp_v1 = FUN_001acf08();
  temp_v31 = *(unsigned int *)(temp_v39 + 0xc);
  temp_v25 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  pfVar10 = *(float **)(temp_v39 + 0x20);
  temp_v7 = *(unsigned int *)(temp_v39 + 4);
  pfVar7 = *(float **)(temp_v39 + 0x18);
  pfVar8 = *(float **)(temp_v39 + 0x1c);
  temp_v8 = pfVar10[0x2e];
  if (temp_v8 != 0.0f) {
    temp_v22 = 0.0f;
    if ((temp_v31 & 1) == 0) {
      pfVar3 = pfVar10 + 1;
      temp_v24 = *pfVar10;
    }
    else {
      pfVar3 = (float *)0x6471c4;
      temp_v24 = fRam006471c0;
    }
    temp_v20 = (unsigned long long)(unsigned int)*pfVar3 << 0x20;
    temp_v21 = *(unsigned long long *)(pfVar3 + 1);
    temp_v36 = pfVar10[8];
    temp_v35 = pfVar10[0x36];
    temp_v34 = (unsigned int)*(unsigned char *)(pfVar10 + 0x27);
    temp_v26 = pfVar10[0x39];
    FUN_00375c74(temp_v39,pfVar10,temp_v33,&temp_v30);
    temp_v6 = 0;
    if (temp_v7 != 0) {
      temp_v29 = 0x3f8000003f000000;
      temp_v28 = CONCAT44(0x40000000,temp_v22);
      temp_v13 = temp_v26 * 0.5f * temp_v25;
      temp_v27 = (unsigned long long)(unsigned int)temp_v13 << 0x20;
      do {
        if ((int)temp_v8 <= (int)pfVar7[4]) {
          if (temp_v36 == 0.0f) {
            temp_v2 = -NAN;
          }
          else {
            temp_v2 = -NAN;
          }
          pfVar7[4] = temp_v2;
          FUN_002fe2e8(temp_v39,pfVar7);
        }
        temp_v23 = (float)((unsigned long long)temp_v20 >> 0x20);
        temp_v1 = (unsigned int)((unsigned long long)temp_v27 >> 0x20);
        temp_v2 = pfVar7[4];
        if (temp_v2 != -NAN) {
          if (temp_v2 != -NAN) {
            temp_v32 = *pfVar7;
            fStack_8c = pfVar7[1];
            fStack_88 = pfVar7[2];
            fStack_84 = pfVar7[3];
            temp_v13 = pfVar8[3];
            if ((int)pfVar7[4] < (int)temp_v35) {
              pfVar8[3] = temp_v13 + pfVar8[4] * temp_v25;
            }
            temp_v3 = FUN_0037a844();
            temp_v18 = (float)((unsigned long long)temp_v27 >> 0x20);
            if (temp_v3 != 0) {
              temp_v14 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v14 = temp_v18 * ((temp_v14 * (float)((unsigned long long)temp_v28 >> 0x20) - temp_v25) +
                                (float)((unsigned long long)temp_v29 >> 0x20)) + pfVar8[5] * temp_v25;
            }
            else {
              temp_v14 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v14 = pfVar8[5] + temp_v26 * temp_v14;
            }
            temp_v19 = (float)temp_v28;
            temp_v4 = in_fpscr & 0xfffffff;
            DAT_006472ec = *pfVar8;
            DAT_006472f0 = pfVar8[1];
            DAT_006472f4 = pfVar8[2];
            if (temp_v14 < temp_v19) {
              temp_v14 = temp_v19;
            }
            temp_v20 = CONCAT44(temp_v23,temp_v14);
            temp_v15 = *pfVar7 + DAT_006472ec * temp_v14;
            temp_v16 = pfVar7[1] + DAT_006472f0 * temp_v14;
            temp_v17 = pfVar7[2] + DAT_006472f4 * temp_v14;
            DAT_006472f8 = pfVar7[3] + temp_v22 * temp_v14;
            DAT_006472dc = temp_v24 - temp_v15;
            DAT_006472e0 = temp_v23 - temp_v16;
            DAT_006472e4 = (float)temp_v21 - temp_v17;
            DAT_006472e8 = (float)((unsigned long long)temp_v21 >> 0x20) - DAT_006472f8;
            temp_v23 = romwright_sqrt_4(DAT_006472dc * DAT_006472dc + DAT_006472e0 * DAT_006472e0 +
                          DAT_006472e4 * DAT_006472e4);
            temp_v12 = temp_v4 | ((unsigned int)(temp_v23 < temp_v13) << 0x1f) | ((unsigned int)(temp_v23 == temp_v13) << 0x1e);
            in_fpscr = temp_v12 | ((unsigned int)(NAN(temp_v23) || NAN(temp_v13)) << 0x1c);
            temp_v11 = (unsigned char)(temp_v12 >> 0x18);
            DAT_006472fc = DAT_006472ec;
            DAT_00647300 = DAT_006472f0;
            DAT_00647304 = DAT_006472f4;
            DAT_00647308 = temp_v22;
            if (!((unsigned char)((temp_v11 >> 6) & 1) || temp_v11 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1))) {
              temp_v14 = romwright_sqrt_4(DAT_006472dc * DAT_006472dc + DAT_006472e0 * DAT_006472e0 +
                            DAT_006472e4 * DAT_006472e4);
              temp_v4 = temp_v4 | ((unsigned int)(temp_v14 < temp_v19) << 0x1f) | ((unsigned int)(temp_v14 == temp_v19) << 0x1e)
              ;
              in_fpscr = temp_v4 | ((unsigned int)(NAN(temp_v14) || NAN(temp_v19)) << 0x1c);
              temp_v11 = (unsigned char)(temp_v4 >> 0x18);
              if (!(unsigned char)((temp_v11 >> 6) & 1) && temp_v11 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                DAT_006472dc = DAT_006472dc / temp_v14;
                DAT_006472e0 = DAT_006472e0 / temp_v14;
                DAT_006472e4 = DAT_006472e4 / temp_v14;
              }
              temp_v14 = DAT_006472dc * DAT_006472ec + DAT_006472e0 * DAT_006472f0;
              temp_v27 = CONCAT44(temp_v18,temp_v14 + DAT_006472e4 * DAT_006472f4);
              DAT_006472f8 = temp_v22;
              FUN_00514540(0);
              temp_v23 = temp_v23 - temp_v13;
              temp_v37 = (unsigned int *)&DAT_006472fc;
              temp_v13 = (float)temp_v20 - temp_v23;
              temp_v18 = (temp_v14 * 0.075f + 0.925f) * (float)temp_v27 * (float)((unsigned long long)temp_v28 >> 0x20)
              ;
              DAT_006472ec = DAT_006472ec - DAT_006472dc * temp_v18;
              temp_v14 = DAT_006472f0 - DAT_006472e0 * temp_v18;
              temp_v19 = DAT_006472f4 - DAT_006472e4 * temp_v18;
              DAT_006472f8 = DAT_006472f8 - DAT_006472e8 * temp_v18;
              temp_v38 = (unsigned int *)&DAT_006472dc;
              DAT_006472f0 = temp_v14;
              DAT_006472f4 = temp_v19;
              *pfVar8 = DAT_006472ec;
              pfVar8[1] = temp_v14;
              pfVar8[2] = temp_v19;
              DAT_006472fc = DAT_006472fc * temp_v13;
              DAT_00647300 = DAT_00647300 * temp_v13;
              DAT_00647304 = DAT_00647304 * temp_v13;
              DAT_00647308 = DAT_00647308 * temp_v13;
              DAT_006472ec = DAT_006472ec * temp_v23;
              DAT_006472f0 = DAT_006472f0 * temp_v23;
              DAT_006472f4 = DAT_006472f4 * temp_v23;
              DAT_006472f8 = DAT_006472f8 * temp_v23;
              temp_v13 = *pfVar7 + DAT_006472fc + DAT_006472ec;
              temp_v23 = pfVar7[1] + DAT_00647300 + DAT_006472f0;
              temp_v18 = pfVar7[2] + DAT_00647304 + DAT_006472f4;
              DAT_006472e8 = pfVar7[3] + DAT_00647308 + DAT_006472f8;
              DAT_006472dc = temp_v13;
              DAT_006472e0 = temp_v23;
              DAT_006472e4 = temp_v18;
              pfVar7[3] = DAT_006472e8;
              *pfVar7 = temp_v13;
              pfVar7[1] = temp_v23;
              pfVar7[2] = temp_v18;
            }
            else {
              DAT_006472ec = temp_v15;
              DAT_006472f0 = temp_v16;
              DAT_006472f4 = temp_v17;
              pfVar7[3] = DAT_006472f8;
              *pfVar7 = temp_v15;
              pfVar7[1] = temp_v16;
              pfVar7[2] = temp_v17;
            }
            FUN_00321d7c(pfVar7,pfVar10,temp_v2,&temp_v32);
            pfVar7[6] = pfVar7[6] * pfVar8[6];
            temp_v13 = pfVar7[7];
            temp_v23 = pfVar8[8];
            pfVar7[7] = temp_v13 * temp_v23;
            temp_v13 = temp_v13 * temp_v23 + pfVar8[7];
            pfVar7[7] = temp_v13;
            FUN_0027134c(temp_v39,pfVar7);
            temp_v3 = FUN_001acf08();
            pfVar7[4] = (float)(temp_v3 + (int)temp_v2);
          }
          else if (temp_v30 != 0) {
            FUN_00514540(0);
            temp_v27 = CONCAT44(temp_v1,(float)temp_v29);
            temp_v14 = (float)((unsigned long long)temp_v28 >> 0x20);
            temp_v13 = temp_v13 - (float)temp_v29;
            temp_v18 = temp_v13 * temp_v14;
            FUN_00514540(0);
            temp_v13 = temp_v13 - (float)temp_v27;
            temp_v2 = temp_v13 * temp_v14;
            FUN_00514540(0);
            DAT_006472e4 = (temp_v13 - (float)temp_v27) * temp_v14;
            temp_v14 = (float)temp_v28;
            temp_v13 = romwright_sqrt_4(temp_v18 * temp_v18 + temp_v2 * temp_v2 + DAT_006472e4 * DAT_006472e4);
            temp_v4 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v13 < temp_v14) << 0x1f) |
                    ((unsigned int)(temp_v13 == temp_v14) << 0x1e);
            temp_v12 = temp_v4 | ((unsigned int)(NAN(temp_v13) || NAN(temp_v14)) << 0x1c);
            temp_v11 = (unsigned char)(temp_v4 >> 0x18);
            DAT_006472dc = temp_v18;
            DAT_006472e0 = temp_v2;
            if (!(unsigned char)((temp_v11 >> 6) & 1) && temp_v11 >> 7 == ((unsigned char)(temp_v12 >> 0x1c) & 1)) {
              DAT_006472dc = temp_v18 / temp_v13;
              DAT_006472e0 = temp_v2 / temp_v13;
              DAT_006472e4 = DAT_006472e4 / temp_v13;
            }
            temp_v18 = DAT_006472e4;
            temp_v2 = DAT_006472e0;
            temp_v13 = DAT_006472dc;
            DAT_006472e8 = temp_v22;
            *pfVar8 = DAT_006472dc;
            pfVar8[1] = temp_v2;
            pfVar8[2] = temp_v18;
            FUN_00514540(0);
            temp_v15 = (float)((unsigned long long)temp_v29 >> 0x20);
            temp_v13 = romwright_fabs_4(((temp_v15 - pfVar10[0x38]) + temp_v13 * pfVar10[0x38]) * pfVar10[0x37]);
            pfVar8[5] = temp_v13;
            FUN_00514540(0);
            temp_v2 = pfVar10[0x33];
            temp_v19 = ((temp_v15 - temp_v2) + temp_v13 * temp_v2) * pfVar10[0x32];
            FUN_00514540(0);
            temp_v13 = pfVar10[0x35];
            temp_v14 = pfVar10[0x34];
            pfVar8[3] = temp_v19;
            temp_v18 = (float)VectorSignedToFloat(temp_v35,(unsigned char)(temp_v12 >> 0x16) & 3);
            temp_v14 = ((temp_v15 - temp_v13) + temp_v2 * temp_v13) * temp_v14;
            temp_v13 = temp_v14 - temp_v19;
            pfVar8[4] = temp_v13 / temp_v18;
            if (temp_v33[0] == '\0') {
              pfVar7[4] = 0.0f;
            }
            else {
              FUN_00514500();
              aeabi_uidivmod();
              pfVar7[4] = temp_v5;
              temp_v18 = (float)temp_v28;
              temp_v2 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(temp_v12 >> 0x16) & 3);
              temp_v13 = pfVar8[4];
              temp_v4 = temp_v12 & 0xfffffff;
              temp_v0 = temp_v4 | ((unsigned int)(temp_v13 < temp_v18) << 0x1f) | ((unsigned int)(temp_v13 == temp_v18) << 0x1e)
              ;
              temp_v12 = temp_v0 | ((unsigned int)(NAN(temp_v13) || NAN(temp_v18)) << 0x1c);
              temp_v2 = pfVar8[3] + temp_v13 * temp_v2;
              temp_v11 = (unsigned char)(temp_v0 >> 0x18);
              temp_v9 = temp_v11 >> 7;
              temp_v10 = (unsigned char)((temp_v11 >> 6) & 1);
              temp_v11 = (unsigned char)(temp_v12 >> 0x1c) & 1;
              pfVar8[3] = temp_v2;
              if (!temp_v10 && temp_v9 == temp_v11) {
                temp_v12 = temp_v4 | ((unsigned int)(temp_v2 < temp_v14) << 0x1f) |
                         ((unsigned int)(temp_v2 == temp_v14) << 0x1e) |
                         ((unsigned int)(NAN(temp_v2) || NAN(temp_v14)) << 0x1c);
                temp_v11 = (unsigned char)(temp_v12 >> 0x18);
                temp_v9 = temp_v11 >> 7;
                temp_v10 = (unsigned char)((temp_v11 >> 6) & 1);
                temp_v11 = (temp_v11 >> 4) & 1;
              }
              if (temp_v10 || temp_v9 != temp_v11) {
                temp_v4 = temp_v12 & 0xfffffff;
                temp_v12 = temp_v4 | ((unsigned int)(temp_v18 <= temp_v13) << 0x1d);
                temp_v10 = romwright_subpiece_4_1_0(temp_v12 >> 0x1d,0);
                if (!temp_v10) {
                  temp_v12 = temp_v4 | ((unsigned int)(temp_v14 <= temp_v2) << 0x1d);
                  temp_v10 = romwright_subpiece_4_1_0(temp_v12 >> 0x1d,0);
                }
                if (!temp_v10) {
                  pfVar8[3] = temp_v14;
                }
              }
              else {
                pfVar8[3] = temp_v14;
              }
              temp_v19 = pfVar8[3];
            }
            FUN_00514540(0);
            temp_v2 = (float)((unsigned long long)temp_v28 >> 0x20);
            temp_v15 = (temp_v13 - (float)temp_v27) * temp_v2;
            FUN_00514540(0);
            temp_v2 = temp_v2 - (float)temp_v27;
            temp_v18 = temp_v2 * (float)((unsigned long long)temp_v28 >> 0x20);
            FUN_00514540(0);
            temp_v14 = (float)temp_v28;
            DAT_006472e4 = (temp_v2 - (float)temp_v27) * (float)((unsigned long long)temp_v28 >> 0x20);
            temp_v13 = romwright_sqrt_4(temp_v15 * temp_v15 + temp_v18 * temp_v18 + DAT_006472e4 * DAT_006472e4);
            temp_v4 = (temp_v12 & 0xfffffff) | ((unsigned int)(temp_v13 < temp_v14) << 0x1f) |
                    ((unsigned int)(temp_v13 == temp_v14) << 0x1e);
            in_fpscr = temp_v4 | ((unsigned int)(NAN(temp_v13) || NAN(temp_v14)) << 0x1c);
            temp_v11 = (unsigned char)(temp_v4 >> 0x18);
            DAT_006472dc = temp_v15;
            DAT_006472e0 = temp_v18;
            if (!(unsigned char)((temp_v11 >> 6) & 1) && temp_v11 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
              DAT_006472dc = temp_v15 / temp_v13;
              DAT_006472e0 = temp_v18 / temp_v13;
              DAT_006472e4 = DAT_006472e4 / temp_v13;
            }
            DAT_006472e4 = DAT_006472e4 * temp_v19;
            temp_v13 = temp_v22 * temp_v19;
            DAT_006472dc = DAT_006472dc * temp_v19;
            DAT_006472e0 = DAT_006472e0 * temp_v19;
            if ((temp_v31 & 1) == 0) {
              DAT_006472f4 = (float)temp_v21;
              DAT_006472f8 = (float)((unsigned long long)temp_v21 >> 0x20);
              DAT_006472dc = DAT_006472dc + temp_v24;
              DAT_006472e0 = DAT_006472e0 + temp_v23;
              DAT_006472e4 = DAT_006472e4 + DAT_006472f4;
              temp_v13 = temp_v13 + DAT_006472f8;
              DAT_006472ec = temp_v24;
              DAT_006472f0 = temp_v23;
            }
            temp_v19 = DAT_006472e4;
            temp_v18 = DAT_006472e0;
            temp_v2 = DAT_006472dc;
            DAT_006472e8 = temp_v13;
            pfVar7[3] = temp_v13;
            *pfVar7 = temp_v2;
            pfVar7[1] = temp_v18;
            pfVar7[2] = temp_v19;
            FUN_00514540(0);
            temp_v18 = (float)((unsigned long long)temp_v29 >> 0x20);
            temp_v20 = CONCAT44(temp_v23,temp_v18);
            temp_v2 = pfVar10[0x1b];
            pfVar8[6] = (temp_v18 - temp_v2) + temp_v13 * temp_v2;
            if (temp_v34 == 2) {
              pfVar8[7] = temp_v14;
              pfVar8[8] = temp_v18;
            }
            else {
              FUN_00514540(0);
              pfVar8[8] = ((float)temp_v20 - pfVar10[0x26]) + temp_v2 * pfVar10[0x26];
              if (temp_v34 != 1) {
                pfVar8[7] = temp_v14;
              }
              else {
                FUN_00514540(0);
                temp_v4 = 0;
                pfVar8[7] = temp_v2 * 6.2831855f;
                FUN_00514500();
                if ((temp_v4 & 1) != 0) {
                  pfVar8[8] = -pfVar8[8];
                }
              }
            }
            FUN_00321d7c(pfVar7,pfVar10,pfVar7[4]);
            pfVar7[6] = pfVar7[6] * pfVar8[6];
            temp_v13 = pfVar7[7];
            temp_v2 = pfVar8[8];
            pfVar7[7] = temp_v13 * temp_v2;
            temp_v13 = temp_v13 * temp_v2 + pfVar8[7];
            pfVar7[7] = temp_v13;
            if (temp_v33[0] != '\0') {
              FUN_00321e98(temp_v39,pfVar7);
              temp_v3 = FUN_001acf08();
              pfVar7[4] = (float)(temp_v3 + (int)pfVar7[4]);
            }
            temp_v30 = temp_v30 - 1;
          }
        }
        temp_v6 = temp_v6 + 1;
        pfVar8 = pfVar8 + 9;
        pfVar7 = pfVar7 + 10;
      } while (temp_v6 < temp_v7);
    }
  }
  return;
}
