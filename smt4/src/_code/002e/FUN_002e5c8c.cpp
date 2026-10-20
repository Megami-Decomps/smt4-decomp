/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e5c8c` (_code @ 0x2e5c8c, 0x924 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(int, double);
int FUN_002482d4(void);
int FUN_00248480(void);
int FUN_002484e0(void);
int FUN_0024add8(int, float *);
int FUN_0024b5f0(int, float *);
int FUN_0024b660(float *, unsigned long long *, double, float *);
int FUN_0024b77c(...);
int FUN_0024b7bc(int, float *);
int FUN_0024b830(...);
int FUN_002b7064(void);
int FUN_002b70cc(void);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(unsigned int, int);
int __aeabi_uidivmod(void);

/* stack frame of param_1: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spD8; /* 0xd8: local_d8 */
} param_1_stack;

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
/* Supplied declaration required: FUN_002482d4. */
/* Supplied declaration required: FUN_00248480. */
/* Supplied declaration required: FUN_002484e0. */
/* Supplied declaration required: FUN_0024add8. */
/* Supplied declaration required: FUN_0024b5f0. */
/* Supplied declaration required: FUN_0024b660. */
/* Supplied declaration required: FUN_0024b77c. */
/* Supplied declaration required: FUN_0024b7bc. */
/* Supplied declaration required: FUN_0024b830. */
extern int FUN_00269a58(void);
/* Supplied declaration required: FUN_002b7064. */
/* Supplied declaration required: FUN_002b70cc. */
/* Supplied declaration required: __aeabi_uidivmod. */


void FUN_002e5c8c(int param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 18 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  unsigned int temp_v2;
  float temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  float *pfVar7;
  float *pfVar8;
  float temp_v7;
  unsigned long long *puVar10;
  int temp_v8;
  float temp_v9;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  unsigned long long temp_v16;
  unsigned long long temp_v17;
  float temp_v18;
  float temp_v19;
  unsigned long long temp_v20;
  unsigned long long temp_v21;
  unsigned long long temp_v22;
  float temp_v23;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float temp_v24;
  int temp_v25;
  int temp_v26;
  
  puVar10 = *(unsigned long long **)(param_1 + 0x20);
  temp_v9 = *(float *)(param_1 + 4);
  temp_v2 = *(unsigned int *)(param_1 + 0xc);
  temp_v8 = *(int *)(puVar10 + 0x17);
  pfVar7 = *(float **)(param_1 + 0x1c);
  pfVar8 = *(float **)(param_1 + 0x18);
  if (temp_v8 != 0) {
    temp_v26 = *(int *)(puVar10 + 4);
    temp_v14 = 0.0f;
    temp_v0 = *(char *)((int)puVar10 + 0x9c);
    temp_v3 = *(float *)((int)puVar10 + 0xc);
    temp_v16 = romwright_piece_4_4(*(unsigned int *)(puVar10 + 0x1c),*(unsigned int *)((int)puVar10 + 0xe4));
    temp_v17 = *puVar10;
    temp_v18 = *(float *)(puVar10 + 1);
    if ((temp_v26 != 0) && (*(int *)(param_1 + 0x10) >= temp_v26)) {
      temp_v25 = 0;
      temp_v24 = 0.0f;
    }
    else {
      temp_v7 = 1.1f;
      if ((*(int *)(param_1 + 0x10) == 0) && (*(char *)((int)puVar10 + 0xbd) != '\0')) {
        temp_v10 = *(float *)(puVar10 + 5);
        temp_v25 = 1;
        temp_v4 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v10 < 0.0f) << 0x1f) |
                ((unsigned int)(temp_v10 == 0.0f) << 0x1e);
        in_fpscr = temp_v4 | ((unsigned int)(temp_v10 != temp_v10) << 0x1c);
        temp_v1 = (unsigned char)(temp_v4 >> 0x18);
        in_s0 = temp_v14;
        temp_v24 = temp_v9;
        if (!(unsigned char)((temp_v1 >> 6) & 1) && temp_v1 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
          temp_v10 = temp_v14;
          FUN_0024b830(0);
          temp_v15 = (float)VectorUnsignedToFloat
                                    (*(unsigned int *)(param_1 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
          in_s0 = (float)(int)(temp_v14 * (temp_v7 - *(float *)(puVar10 + 5)) * temp_v15);
          temp_v14 = temp_v10;
          temp_v24 = in_s0;
        }
      }
      else {
        temp_v10 = *(float *)(puVar10 + 5);
        temp_v25 = 0;
        temp_v4 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v10 < 0.0f) << 0x1f) |
                ((unsigned int)(temp_v10 == 0.0f) << 0x1e);
        in_fpscr = temp_v4 | ((unsigned int)(temp_v10 != temp_v10) << 0x1c);
        temp_v1 = (unsigned char)(temp_v4 >> 0x18);
        if (!((unsigned char)((temp_v1 >> 6) & 1) || temp_v1 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1))) {
          temp_v10 = temp_v14;
          FUN_0024b830();
          temp_v15 = (float)VectorUnsignedToFloat
                                    (*(unsigned int *)((int)puVar10 + 0x24),
                                     (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v7 = *(float *)(param_1 + 0x14) + temp_v15 * temp_v14 * (temp_v7 - *(float *)(puVar10 + 5));
          *(float *)(param_1 + 0x14) = temp_v7;
          temp_v14 = temp_v10;
        }
        else {
          temp_v7 = (float)VectorUnsignedToFloat
                                   (*(unsigned int *)((int)puVar10 + 0x24),
                                    (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v7 = *(float *)(param_1 + 0x14) + temp_v7;
          *(float *)(param_1 + 0x14) = temp_v7;
        }
        temp_v10 = (float)VectorSignedToFloat((int)romwright_fabs_4(temp_v7),(unsigned char)(in_fpscr >> 0x16) & 3);
        *(float *)(param_1 + 0x14) = temp_v7 - temp_v10;
        in_s0 = temp_v7 - temp_v10;
        temp_v24 = (float)(int)romwright_fabs_4(temp_v7);
      }
    }
    temp_v7 = 0.0f;
    if (temp_v9 != 0.0f) {
      temp_v20 = CONCAT44(0x40490fdb,temp_v14);
      temp_v22 = 0x400000003f800000;
      temp_v21 = 0x3f0000004222f983;
      do {
        if (temp_v8 <= (int)pfVar8[4]) {
          if (temp_v26 == 0) {
            temp_v14 = -NAN;
          }
          else {
            temp_v14 = -NAN;
          }
          pfVar8[4] = temp_v14;
          FUN_0024b7bc(param_1,pfVar8);
        }
        temp_v14 = pfVar8[4];
        if (temp_v14 != -NAN) {
          if (temp_v14 != -NAN) {
            temp_v23 = *pfVar8;
            fStack_7c = pfVar8[1];
            fStack_78 = pfVar8[2];
            fStack_74 = pfVar8[3];
            temp_v10 = (float)VectorSignedToFloat(temp_v14,(unsigned char)(in_fpscr >> 0x16) & 3);
            pfVar7[9] = pfVar7[9] - (float)temp_v16 * temp_v10;
            pfVar7[5] = pfVar7[5] + pfVar7[6];
            temp_v15 = pfVar7[8] +
                     (pfVar7[7] +
                     (float)((unsigned long long)temp_v16 >> 0x20) * temp_v10 *
                     (float)((unsigned long long)temp_v21 >> 0x20)) * temp_v10;
            FUN_002484e0();
            FUN_00248480();
            FUN_002482d4();
            temp_v12 = pfVar7[5];
            temp_v15 = temp_v15 * (float)temp_v21;
            temp_v10 = temp_v15;
            FUN_002b7064();
            temp_v15 = temp_v15 * temp_v12;
            temp_v19 = (float)temp_v20;
            FUN_002b70cc();
            temp_v10 = temp_v10 * temp_v12;
            DAT_004ea91c = temp_v15 * DAT_004ea95c + temp_v19 * DAT_004ea96c + temp_v10 * DAT_004ea97c;
            DAT_004ea920 = temp_v15 * DAT_004ea960 + temp_v19 * DAT_004ea970 + temp_v10 * DAT_004ea980;
            DAT_004ea924 = temp_v15 * DAT_004ea964 + temp_v19 * DAT_004ea974 + temp_v10 * DAT_004ea984;
            DAT_004ea928 = temp_v15 * DAT_004ea968 + temp_v19 * DAT_004ea978 + temp_v10 * DAT_004ea988;
            temp_v10 = DAT_004ea924;
            temp_v15 = DAT_004ea91c;
            temp_v12 = DAT_004ea920;
            if ((temp_v2 & 1) == 0) {
              temp_v10 = DAT_004ea924 + pfVar7[2];
              temp_v15 = DAT_004ea91c + *pfVar7;
              temp_v12 = DAT_004ea920 + pfVar7[1];
            }
            *pfVar8 = temp_v15;
            pfVar8[1] = temp_v12 + pfVar7[9];
            pfVar8[2] = temp_v10;
            FUN_0024b660(pfVar8,puVar10,temp_v14,&temp_v23);
            pfVar8[6] = pfVar8[6] * pfVar7[10];
            temp_v15 = pfVar8[7];
            temp_v10 = pfVar7[0xc];
            pfVar8[7] = temp_v15 * temp_v10;
            in_s0 = temp_v15 * temp_v10 + pfVar7[0xb];
            pfVar8[7] = in_s0;
            FUN_0024add8(param_1,pfVar8);
            temp_v5 = FUN_00269a58();
            pfVar8[4] = (float)(temp_v5 + (int)temp_v14);
          }
          else if (temp_v24 != 0.0f) {
            FUN_0024b830(0);
            temp_v19 = (float)temp_v22;
            temp_v12 = ((temp_v19 - *(float *)((int)puVar10 + 0xcc)) +
                     in_s0 * *(float *)((int)puVar10 + 0xcc)) * *(float *)(puVar10 + 0x19);
            FUN_0024b830(0);
            temp_v14 = *(float *)((int)puVar10 + 0xd4);
            temp_v15 = *(float *)(puVar10 + 0x1a);
            pfVar7[5] = temp_v12;
            temp_v10 = (float)VectorSignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v14 = ((temp_v19 - temp_v14) + in_s0 * temp_v14) * temp_v15 - temp_v12;
            pfVar7[6] = temp_v14 / temp_v10;
            FUN_0024b830(0);
            temp_v14 = ((temp_v19 - *(float *)((int)puVar10 + 0xdc)) +
                     temp_v14 * *(float *)((int)puVar10 + 0xdc)) * *(float *)(puVar10 + 0x1b);
            pfVar7[7] = temp_v14;
            FUN_0024b830(0);
            temp_v19 = (float)temp_v20;
            temp_v14 = temp_v14 * 1.5707964f;
            pfVar7[8] = temp_v14;
            pfVar7[9] = temp_v19;
            FUN_0024b830(0);
            temp_v10 = (float)((unsigned long long)temp_v21 >> 0x20);
            temp_v15 = (float)((unsigned long long)temp_v22 >> 0x20);
            temp_v14 = (temp_v14 - temp_v10) * temp_v15 * (float)((unsigned long long)temp_v20 >> 0x20);
            pfVar7[3] = temp_v14;
            FUN_0024b830(0);
            pfVar7[4] = (temp_v14 - temp_v10) * temp_v15 * (float)((unsigned long long)temp_v20 >> 0x20);
            FUN_002484e0();
            FUN_00248480();
            FUN_002482d4();
            temp_v15 = (float)temp_v21;
            temp_v14 = pfVar7[8] * temp_v15;
            FUN_002b7064();
            temp_v14 = temp_v14 * temp_v12;
            temp_v10 = pfVar7[8] * temp_v15;
            FUN_002b70cc();
            temp_v10 = temp_v10 * temp_v12;
            DAT_004ea91c = temp_v14 * DAT_004ea95c + temp_v19 * DAT_004ea96c + temp_v10 * DAT_004ea97c;
            DAT_004ea920 = temp_v14 * DAT_004ea960 + temp_v19 * DAT_004ea970 + temp_v10 * DAT_004ea980;
            DAT_004ea924 = temp_v14 * DAT_004ea964 + temp_v19 * DAT_004ea974 + temp_v10 * DAT_004ea984;
            temp_v14 = temp_v14 * DAT_004ea968 + temp_v19 * DAT_004ea978 + temp_v10 * DAT_004ea988;
            if ((temp_v2 & 1) == 0) {
              DAT_004ea92c = (float)temp_v17;
              DAT_004ea930 = (float)((unsigned long long)temp_v17 >> 0x20);
              DAT_004ea928 = temp_v14;
              *pfVar7 = DAT_004ea92c;
              pfVar7[1] = DAT_004ea930;
              pfVar7[2] = temp_v18;
              DAT_004ea91c = DAT_004ea91c + DAT_004ea92c;
              DAT_004ea920 = DAT_004ea920 + DAT_004ea930;
              DAT_004ea924 = DAT_004ea924 + temp_v18;
              temp_v14 = DAT_004ea928 + temp_v3;
              DAT_004ea934 = temp_v18;
              DAT_004ea938 = temp_v3;
            }
            temp_v11 = DAT_004ea924;
            temp_v12 = DAT_004ea920;
            temp_v10 = DAT_004ea91c;
            DAT_004ea928 = temp_v14;
            pfVar8[3] = temp_v14;
            *pfVar8 = temp_v10;
            pfVar8[1] = temp_v12;
            pfVar8[2] = temp_v11;
            FUN_0024b830(0);
            temp_v10 = (float)temp_v22;
            pfVar7[10] = (temp_v10 - *(float *)((int)puVar10 + 0x6c)) +
                         temp_v14 * *(float *)((int)puVar10 + 0x6c);
            if (temp_v0 != '\x02') {
              FUN_0024b830(0);
              temp_v12 = temp_v14;
              if (temp_v0 != '\x01') {
                temp_v12 = temp_v19;
              }
              pfVar7[0xc] = (temp_v10 - *(float *)(puVar10 + 0x13)) +
                            temp_v14 * *(float *)(puVar10 + 0x13);
              if (temp_v0 != '\x01') {
                pfVar7[0xb] = temp_v12;
              }
              else {
                FUN_0024b830(0);
                temp_v4 = 0;
                pfVar7[0xb] = temp_v12 * 6.2831855f;
                FUN_0024b77c();
                if ((temp_v4 & 1) != 0) {
                  pfVar7[0xc] = -pfVar7[0xc];
                }
              }
            }
            else {
              pfVar7[0xb] = temp_v19;
              pfVar7[0xc] = temp_v10;
            }
            temp_v23 = *pfVar8;
            fStack_7c = pfVar8[1];
            fStack_78 = pfVar8[2];
            fStack_74 = pfVar8[3];
            pfVar8[4] = 0.0f;
            if (temp_v25 != 0) {
              FUN_0024b77c(0);
              __aeabi_uidivmod();
              temp_v13 = (float)VectorUnsignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
              pfVar7[9] = pfVar7[9] -
                          (float)temp_v16 * temp_v13 * temp_v13 * (float)((unsigned long long)temp_v21 >> 0x20);
              temp_v10 = pfVar7[5] + pfVar7[6] * temp_v13;
              pfVar7[5] = temp_v10;
              temp_v14 = pfVar7[8] * temp_v15;
              FUN_002b7064();
              temp_v14 = temp_v14 * temp_v10;
              temp_v15 = pfVar7[8] * temp_v15;
              FUN_002b70cc();
              temp_v15 = temp_v15 * temp_v10;
              temp_v10 = temp_v14 * DAT_004ea95c + temp_v19 * DAT_004ea96c + temp_v15 * DAT_004ea97c;
              temp_v12 = temp_v14 * DAT_004ea960 + temp_v19 * DAT_004ea970 + temp_v15 * DAT_004ea980;
              temp_v11 = temp_v14 * DAT_004ea964 + temp_v19 * DAT_004ea974 + temp_v15 * DAT_004ea984;
              temp_v14 = temp_v14 * DAT_004ea968 + temp_v19 * DAT_004ea978 + temp_v15 * DAT_004ea988;
              DAT_004ea91c = temp_v10;
              DAT_004ea920 = temp_v12;
              DAT_004ea924 = temp_v11;
              DAT_004ea928 = temp_v14;
              if ((temp_v2 & 1) == 0) {
                DAT_004ea91c = (float)temp_v17 + temp_v10;
                DAT_004ea920 = (float)((unsigned long long)temp_v17 >> 0x20) + temp_v12;
                DAT_004ea924 = temp_v18 + temp_v11;
                DAT_004ea928 = temp_v3 + temp_v14;
                DAT_004ea92c = temp_v10;
                DAT_004ea930 = temp_v12;
                DAT_004ea934 = temp_v11;
                DAT_004ea938 = temp_v14;
              }
              temp_v15 = DAT_004ea924;
              temp_v10 = DAT_004ea920;
              temp_v14 = DAT_004ea91c;
              pfVar8[3] = DAT_004ea928;
              *pfVar8 = temp_v14;
              pfVar8[1] = temp_v10;
              pfVar8[2] = temp_v15;
              pfVar8[1] = temp_v10 + pfVar7[9];
              pfVar8[4] = (float)(int)temp_v13;
            }
            FUN_0024b660(pfVar8,puVar10,pfVar8[4],&temp_v23);
            pfVar8[6] = pfVar8[6] * pfVar7[10];
            temp_v14 = pfVar8[7];
            temp_v10 = pfVar7[0xc];
            pfVar8[7] = temp_v14 * temp_v10;
            in_s0 = temp_v14 * temp_v10 + pfVar7[0xb];
            pfVar8[7] = in_s0;
            if (temp_v25 != 0) {
              FUN_0024b5f0(param_1,pfVar8);
              temp_v5 = FUN_00269a58();
              pfVar8[4] = (float)(temp_v5 + (int)pfVar8[4]);
            }
            temp_v24 = (float)((int)temp_v24 - 1);
          }
        }
        temp_v7 = (float)((int)temp_v7 + 1);
        pfVar7 = pfVar7 + 0xd;
        pfVar8 = pfVar8 + 10;
      } while ((unsigned int)temp_v7 < (unsigned int)temp_v9);
    }
  }
  return;
}

} /* extern "C" */
