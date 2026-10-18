/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d0708` (_code @ 0x2d0708, 0xaac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
} param_1_stack;

extern unsigned int uRam004ea800; /* 0x4ea800 */
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
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_0024add8. */
/* Supplied declaration required: FUN_0024b5f0. */
/* Supplied declaration required: FUN_0024b660. */
/* Supplied declaration required: FUN_0024b77c. */
/* Supplied declaration required: FUN_0024b7bc. */
/* Supplied declaration required: FUN_0024b830. */
extern int FUN_00269a58(void);
/* Supplied declaration required: FUN_002c6a20. */


void FUN_002d0708(int param_1)

{
/* irregular: irregular input(s): in_d8, in_fpscr; 13 native warning(s); review required */
  unsigned int temp_v0;
  float *pfVar2;
  int temp_v1;
  float temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  float temp_v5;
  float *pfVar7;
  float *pfVar8;
  float temp_v6;
  unsigned int *puVar10;
  float temp_v7;
  unsigned char temp_v8;
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
  long long in_d8;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  unsigned long long temp_v23;
  unsigned long long temp_v24;
  unsigned int temp_v25;
  unsigned long long temp_v26;
  unsigned long long temp_v27;
  unsigned long long temp_v28;
  float temp_v29;
  float temp_v30;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  unsigned int temp_v31;
  unsigned int temp_v32;
  int temp_v33;
  unsigned int *temp_v34;
  unsigned int *temp_v35;
  unsigned int *temp_v36;
  
  puVar10 = *(unsigned int **)(param_1 + 0x20);
  temp_v7 = *(float *)(param_1 + 4);
  temp_v31 = *(unsigned int *)(param_1 + 0xc);
  pfVar7 = *(float **)(param_1 + 0x18);
  pfVar8 = *(float **)(param_1 + 0x1c);
  temp_v33 = puVar10[0x2e];
  if (temp_v33 != 0) {
    temp_v11 = (temp_v31 & 1) != 0;
    if (temp_v11) {
      pfVar2 = (float *)0x4ea800;
      temp_v25 = uRam004ea800;
    }
    else {
      pfVar2 = (float *)(puVar10 + 2);
      in_d8 = (unsigned long long)(unsigned int)puVar10[1] << 0x20;
      temp_v25 = *puVar10;
    }
    if (temp_v11) {
      in_d8 = (unsigned long long)(unsigned int)pfVar2[1] << 0x20;
      pfVar2 = pfVar2 + 2;
    }
    temp_v18 = 0.0f;
    temp_v22 = *pfVar2;
    temp_v24 = romwright_piece_4_4(temp_v25,pfVar2[1]);
    temp_v1 = puVar10[8];
    temp_v13 = (float)puVar10[0x36];
    temp_v32 = (unsigned int)*(unsigned char *)(puVar10 + 0x27);
    temp_v25 = puVar10[0x39];
    if ((temp_v1 != 0) && (*(int *)(param_1 + 0x10) >= temp_v1)) {
      temp_v11 = 0;
      temp_v29 = 0.0f;
      temp_v21 = temp_v13;
    }
    else {
      in_d8 = romwright_piece_4_4((int)((unsigned long long)in_d8 >> 0x20),0x3f8ccccd);
      if ((*(int *)(param_1 + 0x10) == 0) && (*(char *)((int)puVar10 + 0xbd) != '\0')) {
        temp_v6 = (float)puVar10[10];
        temp_v11 = 1;
        temp_v3 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v6 < 0.0f) << 0x1f) |
                ((unsigned int)(temp_v6 == 0.0f) << 0x1e);
        in_fpscr = temp_v3 | ((unsigned int)NAN(temp_v6) << 0x1c);
        temp_v10 = (unsigned char)(temp_v3 >> 0x18);
        temp_v21 = temp_v18;
        temp_v29 = temp_v7;
        if (!(unsigned char)((temp_v10 >> 6) & 1) && temp_v10 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
          temp_v6 = temp_v18;
          FUN_0024b830(0);
          temp_v21 = (float)VectorUnsignedToFloat
                                    (*(unsigned int *)(param_1 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v21 = (float)(int)(temp_v18 * ((float)in_d8 - (float)puVar10[10]) * temp_v21);
          temp_v18 = temp_v6;
          temp_v29 = temp_v21;
        }
      }
      else {
        temp_v6 = (float)puVar10[10];
        temp_v11 = 0;
        temp_v3 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v6 < 0.0f) << 0x1f) |
                ((unsigned int)(temp_v6 == 0.0f) << 0x1e);
        in_fpscr = temp_v3 | ((unsigned int)NAN(temp_v6) << 0x1c);
        temp_v10 = (unsigned char)(temp_v3 >> 0x18);
        if (!((unsigned char)((temp_v10 >> 6) & 1) || temp_v10 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1))) {
          temp_v21 = temp_v18;
          FUN_0024b830();
          temp_v6 = (float)VectorUnsignedToFloat(puVar10[9],(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v6 = *(float *)(param_1 + 0x14) + temp_v6 * temp_v18 * ((float)in_d8 - (float)puVar10[10]);
          *(float *)(param_1 + 0x14) = temp_v6;
          temp_v18 = temp_v21;
        }
        else {
          temp_v6 = (float)VectorUnsignedToFloat(puVar10[9],(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v6 = *(float *)(param_1 + 0x14) + temp_v6;
          *(float *)(param_1 + 0x14) = temp_v6;
        }
        temp_v21 = (float)VectorSignedToFloat((int)romwright_fabs_4(temp_v6),(unsigned char)(in_fpscr >> 0x16) & 3);
        *(float *)(param_1 + 0x14) = temp_v6 - temp_v21;
        temp_v21 = temp_v6 - temp_v21;
        temp_v29 = (float)(int)romwright_fabs_4(temp_v6);
      }
    }
    temp_v6 = 0.0f;
    if (temp_v7 != 0.0f) {
      temp_v27 = 0x3f0000003f800000;
      temp_v26 = romwright_piece_4_4(temp_v25,0x40000000);
      temp_v28 = 0x3f6ccccd3d99999a;
      temp_v20 = temp_v18;
      do {
        if (temp_v33 <= (int)pfVar7[4]) {
          if (temp_v1 == 0) {
            temp_v2 = -NAN;
          }
          else {
            temp_v2 = -NAN;
          }
          pfVar7[4] = temp_v2;
          FUN_0024b7bc(param_1,pfVar7);
        }
        temp_v19 = (float)((unsigned long long)in_d8 >> 0x20);
        temp_v2 = pfVar7[4];
        if (temp_v2 != -NAN) {
          if (temp_v2 != -NAN) {
            temp_v30 = *pfVar7;
            fStack_8c = pfVar7[1];
            fStack_88 = pfVar7[2];
            fStack_84 = pfVar7[3];
            temp_v21 = pfVar8[3];
            if ((int)pfVar7[4] < (int)temp_v13) {
              pfVar8[3] = temp_v21 + pfVar8[4];
            }
            temp_v14 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v14 = pfVar8[5] + (float)((unsigned long long)temp_v26 >> 0x20) * temp_v14;
            temp_v3 = in_fpscr & 0xfffffff;
            DAT_004ea92c = *pfVar8;
            DAT_004ea930 = pfVar8[1];
            DAT_004ea934 = pfVar8[2];
            if (temp_v14 < temp_v20) {
              temp_v14 = temp_v20;
            }
            in_d8 = CONCAT44(temp_v19,temp_v14);
            temp_v15 = *pfVar7 + DAT_004ea92c * temp_v14;
            temp_v16 = pfVar7[1] + DAT_004ea930 * temp_v14;
            temp_v17 = pfVar7[2] + DAT_004ea934 * temp_v14;
            DAT_004ea938 = pfVar7[3] + temp_v18 * temp_v14;
            DAT_004ea91c = (float)((unsigned long long)temp_v24 >> 0x20) - temp_v15;
            DAT_004ea920 = temp_v19 - temp_v16;
            DAT_004ea924 = temp_v22 - temp_v17;
            DAT_004ea928 = (float)temp_v24 - DAT_004ea938;
            temp_v19 = romwright_sqrt_4(DAT_004ea91c * DAT_004ea91c + DAT_004ea920 * DAT_004ea920 +
                          DAT_004ea924 * DAT_004ea924);
            temp_v12 = temp_v3 | ((unsigned int)(temp_v19 < temp_v21) << 0x1f) | ((unsigned int)(temp_v19 == temp_v21) << 0x1e);
            in_fpscr = temp_v12 | ((unsigned int)(NAN(temp_v19) || NAN(temp_v21)) << 0x1c);
            temp_v10 = (unsigned char)(temp_v12 >> 0x18);
            DAT_004ea93c = DAT_004ea92c;
            DAT_004ea940 = DAT_004ea930;
            DAT_004ea944 = DAT_004ea934;
            DAT_004ea948 = temp_v18;
            if (!((unsigned char)((temp_v10 >> 6) & 1) || temp_v10 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1))) {
              temp_v14 = romwright_sqrt_4(DAT_004ea91c * DAT_004ea91c + DAT_004ea920 * DAT_004ea920 +
                            DAT_004ea924 * DAT_004ea924);
              temp_v3 = temp_v3 | ((unsigned int)(temp_v14 < temp_v20) << 0x1f) | ((unsigned int)(temp_v14 == temp_v20) << 0x1e)
              ;
              in_fpscr = temp_v3 | ((unsigned int)(NAN(temp_v14) || NAN(temp_v20)) << 0x1c);
              temp_v10 = (unsigned char)(temp_v3 >> 0x18);
              if (!(unsigned char)((temp_v10 >> 6) & 1) && temp_v10 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                DAT_004ea91c = DAT_004ea91c / temp_v14;
                DAT_004ea920 = DAT_004ea920 / temp_v14;
                DAT_004ea924 = DAT_004ea924 / temp_v14;
              }
              temp_v14 = DAT_004ea91c * DAT_004ea92c + DAT_004ea920 * DAT_004ea930;
              temp_v15 = temp_v14 + DAT_004ea924 * DAT_004ea934;
              DAT_004ea938 = temp_v18;
              FUN_0024b830(0);
              temp_v36 = (unsigned int *)&DAT_004ea92c;
              temp_v35 = (unsigned int *)&DAT_004ea93c;
              temp_v34 = (unsigned int *)&DAT_004ea91c;
              temp_v19 = temp_v19 - temp_v21;
              temp_v14 = ((float)((unsigned long long)temp_v28 >> 0x20) + temp_v14 * (float)temp_v28) * temp_v15 *
                       (float)temp_v26;
              temp_v21 = (float)in_d8 - temp_v19;
              DAT_004ea92c = DAT_004ea92c - DAT_004ea91c * temp_v14;
              temp_v15 = DAT_004ea930 - DAT_004ea920 * temp_v14;
              temp_v16 = DAT_004ea934 - DAT_004ea924 * temp_v14;
              DAT_004ea938 = DAT_004ea938 - DAT_004ea928 * temp_v14;
              DAT_004ea930 = temp_v15;
              DAT_004ea934 = temp_v16;
              *pfVar8 = DAT_004ea92c;
              pfVar8[1] = temp_v15;
              pfVar8[2] = temp_v16;
              DAT_004ea93c = DAT_004ea93c * temp_v21;
              DAT_004ea940 = DAT_004ea940 * temp_v21;
              DAT_004ea944 = DAT_004ea944 * temp_v21;
              DAT_004ea948 = DAT_004ea948 * temp_v21;
              DAT_004ea92c = DAT_004ea92c * temp_v19;
              DAT_004ea930 = DAT_004ea930 * temp_v19;
              DAT_004ea934 = DAT_004ea934 * temp_v19;
              DAT_004ea938 = DAT_004ea938 * temp_v19;
              temp_v21 = *pfVar7 + DAT_004ea93c + DAT_004ea92c;
              temp_v19 = pfVar7[1] + DAT_004ea940 + DAT_004ea930;
              temp_v14 = pfVar7[2] + DAT_004ea944 + DAT_004ea934;
              DAT_004ea928 = pfVar7[3] + DAT_004ea948 + DAT_004ea938;
              DAT_004ea91c = temp_v21;
              DAT_004ea920 = temp_v19;
              DAT_004ea924 = temp_v14;
              pfVar7[3] = DAT_004ea928;
              *pfVar7 = temp_v21;
              pfVar7[1] = temp_v19;
              pfVar7[2] = temp_v14;
            }
            else {
              DAT_004ea92c = temp_v15;
              DAT_004ea930 = temp_v16;
              DAT_004ea934 = temp_v17;
              pfVar7[3] = DAT_004ea938;
              *pfVar7 = temp_v15;
              pfVar7[1] = temp_v16;
              pfVar7[2] = temp_v17;
            }
            FUN_0024b660(pfVar7,puVar10,temp_v2,&temp_v30);
            pfVar7[6] = pfVar7[6] * pfVar8[6];
            temp_v21 = pfVar7[7];
            temp_v19 = pfVar8[8];
            pfVar7[7] = temp_v21 * temp_v19;
            temp_v21 = temp_v21 * temp_v19 + pfVar8[7];
            pfVar7[7] = temp_v21;
            FUN_0024add8(param_1,pfVar7);
            temp_v4 = FUN_00269a58();
            pfVar7[4] = (float)(temp_v4 + (int)temp_v2);
          }
          else if (temp_v29 != 0.0f) {
            FUN_0024b830(0);
            temp_v2 = (float)((unsigned long long)temp_v27 >> 0x20);
            temp_v23 = CONCAT44(temp_v22,temp_v2);
            temp_v21 = temp_v21 - temp_v2;
            temp_v14 = temp_v21 * (float)temp_v26;
            FUN_0024b830(0);
            temp_v21 = temp_v21 - (float)temp_v23;
            temp_v2 = temp_v21 * (float)temp_v26;
            FUN_0024b830(0);
            DAT_004ea924 = (temp_v21 - (float)temp_v23) * (float)temp_v26;
            temp_v22 = romwright_sqrt_4(temp_v14 * temp_v14 + temp_v2 * temp_v2 + DAT_004ea924 * DAT_004ea924);
            temp_v3 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v22 < temp_v20) << 0x1f) |
                    ((unsigned int)(temp_v22 == temp_v20) << 0x1e);
            temp_v12 = temp_v3 | ((unsigned int)(NAN(temp_v22) || NAN(temp_v20)) << 0x1c);
            temp_v10 = (unsigned char)(temp_v3 >> 0x18);
            DAT_004ea91c = temp_v14;
            DAT_004ea920 = temp_v2;
            if (!(unsigned char)((temp_v10 >> 6) & 1) && temp_v10 >> 7 == ((unsigned char)(temp_v12 >> 0x1c) & 1)) {
              DAT_004ea91c = temp_v14 / temp_v22;
              DAT_004ea920 = temp_v2 / temp_v22;
              DAT_004ea924 = DAT_004ea924 / temp_v22;
            }
            temp_v2 = DAT_004ea924;
            temp_v21 = DAT_004ea920;
            temp_v22 = DAT_004ea91c;
            DAT_004ea928 = temp_v18;
            pfVar8[2] = DAT_004ea924;
            *pfVar8 = temp_v22;
            pfVar8[1] = temp_v21;
            FUN_0024b830(0);
            temp_v16 = (float)temp_v27;
            temp_v22 = romwright_fabs_4(((temp_v16 - (float)puVar10[0x38]) + temp_v2 * (float)puVar10[0x38]) *
                         (float)puVar10[0x37]);
            pfVar8[5] = temp_v22;
            FUN_0024b830(0);
            temp_v15 = ((temp_v16 - (float)puVar10[0x33]) + temp_v22 * (float)puVar10[0x33]) *
                     (float)puVar10[0x32];
            FUN_0024b830(0);
            temp_v21 = (float)puVar10[0x35];
            temp_v14 = (float)puVar10[0x34];
            temp_v2 = (float)VectorSignedToFloat(temp_v13,(unsigned char)(temp_v12 >> 0x16) & 3);
            pfVar8[3] = temp_v15;
            temp_v14 = ((temp_v16 - temp_v21) + temp_v22 * temp_v21) * temp_v14;
            temp_v21 = temp_v14 - temp_v15;
            pfVar8[4] = temp_v21 / temp_v2;
            if (!temp_v11) {
              pfVar7[4] = 0.0f;
            }
            else {
              FUN_0024b77c();
              FUN_002c6a20();
              pfVar7[4] = temp_v5;
              temp_v22 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(temp_v12 >> 0x16) & 3);
              temp_v21 = pfVar8[4];
              temp_v3 = temp_v12 & 0xfffffff;
              temp_v0 = temp_v3 | ((unsigned int)(temp_v21 < temp_v20) << 0x1f) | ((unsigned int)(temp_v21 == temp_v20) << 0x1e)
              ;
              temp_v12 = temp_v0 | ((unsigned int)(NAN(temp_v21) || NAN(temp_v20)) << 0x1c);
              temp_v22 = pfVar8[3] + temp_v21 * temp_v22;
              temp_v10 = (unsigned char)(temp_v0 >> 0x18);
              temp_v8 = temp_v10 >> 7;
              temp_v9 = (unsigned char)((temp_v10 >> 6) & 1);
              temp_v10 = (unsigned char)(temp_v12 >> 0x1c) & 1;
              pfVar8[3] = temp_v22;
              if (!temp_v9 && temp_v8 == temp_v10) {
                temp_v12 = temp_v3 | ((unsigned int)(temp_v22 < temp_v14) << 0x1f) |
                         ((unsigned int)(temp_v22 == temp_v14) << 0x1e) |
                         ((unsigned int)(NAN(temp_v22) || NAN(temp_v14)) << 0x1c);
                temp_v10 = (unsigned char)(temp_v12 >> 0x18);
                temp_v8 = temp_v10 >> 7;
                temp_v9 = (unsigned char)((temp_v10 >> 6) & 1);
                temp_v10 = (temp_v10 >> 4) & 1;
              }
              if (temp_v9 || temp_v8 != temp_v10) {
                temp_v3 = temp_v12 & 0xfffffff;
                temp_v12 = temp_v3 | ((unsigned int)(temp_v20 <= temp_v21) << 0x1d);
                temp_v9 = romwright_subpiece_4_1_0(temp_v12 >> 0x1d,0);
                if (!temp_v9) {
                  temp_v12 = temp_v3 | ((unsigned int)(temp_v14 <= temp_v22) << 0x1d);
                  temp_v9 = romwright_subpiece_4_1_0(temp_v12 >> 0x1d,0);
                }
                if (!temp_v9) {
                  pfVar8[3] = temp_v14;
                }
              }
              else {
                pfVar8[3] = temp_v14;
              }
              temp_v15 = pfVar8[3];
            }
            FUN_0024b830(0);
            temp_v14 = (float)temp_v23;
            temp_v21 = temp_v21 - temp_v14;
            temp_v22 = (float)((unsigned long long)temp_v23 >> 0x20);
            temp_v16 = temp_v21 * (float)temp_v26;
            temp_v2 = temp_v20;
            FUN_0024b830(0);
            temp_v21 = temp_v21 - temp_v14;
            temp_v20 = temp_v21 * (float)temp_v26;
            FUN_0024b830(0);
            DAT_004ea924 = (temp_v21 - temp_v14) * (float)temp_v26;
            temp_v21 = romwright_sqrt_4(temp_v16 * temp_v16 + temp_v20 * temp_v20 + DAT_004ea924 * DAT_004ea924);
            temp_v3 = (temp_v12 & 0xfffffff) | ((unsigned int)(temp_v21 < temp_v2) << 0x1f) |
                    ((unsigned int)(temp_v21 == temp_v2) << 0x1e);
            in_fpscr = temp_v3 | ((unsigned int)(NAN(temp_v21) || NAN(temp_v2)) << 0x1c);
            temp_v10 = (unsigned char)(temp_v3 >> 0x18);
            DAT_004ea91c = temp_v16;
            DAT_004ea920 = temp_v20;
            if (!(unsigned char)((temp_v10 >> 6) & 1) && temp_v10 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
              DAT_004ea91c = temp_v16 / temp_v21;
              DAT_004ea920 = temp_v20 / temp_v21;
              DAT_004ea924 = DAT_004ea924 / temp_v21;
            }
            temp_v21 = DAT_004ea924 * temp_v15;
            DAT_004ea91c = DAT_004ea91c * temp_v15;
            DAT_004ea920 = DAT_004ea920 * temp_v15;
            DAT_004ea924 = temp_v21;
            DAT_004ea928 = temp_v18 * temp_v15;
            if ((temp_v31 & 1) == 0) {
              DAT_004ea92c = (float)((unsigned long long)temp_v24 >> 0x20);
              DAT_004ea938 = (float)temp_v24;
              DAT_004ea91c = DAT_004ea91c + DAT_004ea92c;
              DAT_004ea920 = DAT_004ea920 + temp_v19;
              DAT_004ea924 = temp_v21 + temp_v22;
              temp_v21 = temp_v18 * temp_v15 + DAT_004ea938;
              DAT_004ea928 = temp_v21;
              DAT_004ea930 = temp_v19;
              DAT_004ea934 = temp_v22;
            }
            temp_v15 = DAT_004ea924;
            temp_v14 = DAT_004ea920;
            temp_v20 = DAT_004ea91c;
            pfVar7[3] = DAT_004ea928;
            *pfVar7 = temp_v20;
            pfVar7[1] = temp_v14;
            pfVar7[2] = temp_v15;
            temp_v20 = temp_v2;
            FUN_0024b830(0);
            temp_v14 = (float)temp_v27;
            in_d8 = CONCAT44(temp_v19,temp_v14);
            pfVar8[6] = (temp_v14 - (float)puVar10[0x1b]) + temp_v21 * (float)puVar10[0x1b];
            if (temp_v32 == 2) {
              pfVar8[7] = temp_v2;
              pfVar8[8] = temp_v14;
            }
            else {
              FUN_0024b830(0);
              pfVar8[8] = ((float)in_d8 - (float)puVar10[0x26]) + temp_v21 * (float)puVar10[0x26];
              if (temp_v32 != 1) {
                pfVar8[7] = temp_v2;
              }
              else {
                FUN_0024b830(0);
                temp_v3 = 0;
                pfVar8[7] = temp_v21 * 6.2831855f;
                FUN_0024b77c();
                if ((temp_v3 & 1) != 0) {
                  pfVar8[8] = -pfVar8[8];
                }
              }
            }
            FUN_0024b660(pfVar7,puVar10,pfVar7[4]);
            pfVar7[6] = pfVar7[6] * pfVar8[6];
            temp_v21 = pfVar7[7];
            temp_v2 = pfVar8[8];
            pfVar7[7] = temp_v21 * temp_v2;
            temp_v21 = temp_v21 * temp_v2 + pfVar8[7];
            pfVar7[7] = temp_v21;
            if (temp_v11) {
              FUN_0024b5f0(param_1,pfVar7);
              temp_v4 = FUN_00269a58();
              pfVar7[4] = (float)(temp_v4 + (int)pfVar7[4]);
            }
            temp_v29 = (float)((int)temp_v29 - 1);
          }
        }
        temp_v6 = (float)((int)temp_v6 + 1);
        pfVar8 = pfVar8 + 9;
        pfVar7 = pfVar7 + 10;
      } while ((unsigned int)temp_v6 < (unsigned int)temp_v7);
    }
  }
  return;
}
