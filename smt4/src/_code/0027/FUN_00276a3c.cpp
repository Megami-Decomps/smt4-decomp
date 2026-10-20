/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00276a3c` (_code @ 0x276a3c, 0x111c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001f8350(void);
int FUN_0025c238(void);
int FUN_0025c298(void);
int FUN_00266c5c(int *, int *, float *);
int FUN_0027d9a8(void);
int FUN_00281e34(void);
int FUN_00282390(void);
int FUN_0028250c(void);
int FUN_00287aec(void);
int FUN_00298d50(...);
int FUN_002adf00(float [3], int);
int FUN_002c159c(unsigned char *);
int FUN_002c1e30(...);
int FUN_002c1edc(...);
int FUN_002c2950(void);
int VectorUnsignedToFloat(unsigned int, int);

/* stack frame of void: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
} void_stack;

extern int *DAT_004474f4; /* 0x4474f4 */
extern int DAT_00447e88; /* 0x447e88 */
extern unsigned char DAT_0049f3f0; /* 0x49f3f0 */
extern int DAT_0049fc8c; /* 0x49fc8c */
extern signed char DAT_0049fce8; /* 0x49fce8 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Supplied declaration required: FUN_001f8350. */
/* Supplied declaration required: FUN_0025c238. */
/* Supplied declaration required: FUN_0025c298. */
/* Supplied declaration required: FUN_00266c5c. */
/* Supplied declaration required: FUN_0027d9a8. */
/* Supplied declaration required: FUN_00281e34. */
/* Supplied declaration required: FUN_00282390. */
/* Supplied declaration required: FUN_0028250c. */
/* Supplied declaration required: FUN_00287aec. */
/* Supplied declaration required: FUN_00298d50. */
/* Supplied declaration required: FUN_002adf00. */
/* Supplied declaration required: FUN_002c159c. */
/* Supplied declaration required: FUN_002c1e30. */
/* Supplied declaration required: FUN_002c1edc. */
/* Supplied declaration required: FUN_002c2950. */
extern short aeabi_idivmod(short, int);


void FUN_00276a3c(void)

{
/* irregular: irregular input(s): in_fpscr; 17 native warning(s); review required */
  int *piVar1;
  short temp_v0;
  short temp_v1;
  int *piVar4;
  int *piVar5;
  int temp_v2;
  float *pfVar7;
  float *pfVar8;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8;
  unsigned int in_fpscr;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  unsigned long long temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24 [3];
  float temp_v25;
  int iStack_8c;
  int temp_v26;
  unsigned long long temp_v27;
  unsigned long long temp_v28;
  
  FUN_002c2950();
  piVar4 = DAT_004474f4;
  if ((char)DAT_004474f4[0xac] != '\0') {
    FUN_002adf00(temp_v24,DAT_004474f4[0xad]);
    piVar4 = DAT_004474f4;
    DAT_004474f4[0x10] = (int)temp_v25;
    piVar4[0x11] = iStack_8c;
    piVar4[0x12] = temp_v26;
    piVar4[0xd] = (int)temp_v24[0];
    piVar4[0xe] = (int)temp_v24[1];
    piVar4[0xf] = (int)temp_v24[2];
    piVar4[0x16] = (int)temp_v25;
    piVar4[0x17] = iStack_8c;
    piVar4[0x18] = temp_v26;
    piVar4[0x13] = (int)temp_v24[0];
    piVar4[0x14] = (int)temp_v24[1];
    piVar4[0x15] = (int)temp_v24[2];
    FUN_00281e34();
    FUN_0025c298();
    return;
  }
  temp_v11 = 0.01f;
  temp_v17 = 0.5f;
  temp_v28 = 0x3f000000;
  temp_v16 = 0.0f;
  temp_v27 = 0;
  temp_v25 = 0.6f;
  iStack_8c = 0x3f19999a;
  temp_v26 = 0x3f19999a;
  if (DAT_004474f4[0xa8] != 0) {
    if ((short)DAT_004474f4[0xaa] == 0) {
      DAT_004474f4[0xa8] = 0;
    }
    else {
      temp_v15 = 0x40000000;
      temp_v3 = 0;
      temp_v16 = (float)VectorUnsignedToFloat
                                ((unsigned int)*(unsigned short *)((int)DAT_004474f4 + 0x2aa),
                                 (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v24[0] = temp_v16 * 0.01f;
      temp_v16 = (float)VectorUnsignedToFloat
                                ((unsigned int)*(unsigned short *)(DAT_004474f4 + 0xab),(unsigned char)(in_fpscr >> 0x16) & 3
                                );
      temp_v24[1] = temp_v16 * 0.01f;
      temp_v16 = (float)VectorUnsignedToFloat
                                ((unsigned int)*(unsigned short *)((int)DAT_004474f4 + 0x2ae),
                                 (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v24[2] = temp_v16 * 0.01f;
      do {
        pfVar7 = temp_v24 + temp_v3;
        temp_v16 = *pfVar7;
        if (temp_v16 != (float)temp_v27) {
          FUN_0027d9a8();
          temp_v10 = *pfVar7;
          piVar4 = DAT_004474f4 + temp_v3;
          temp_v17 = (float)piVar4[0xa5];
          temp_v16 = temp_v16 * (float)temp_v28 * temp_v10 + temp_v10 * (float)temp_v28;
          if (romwright_fabs_4(temp_v17) >= temp_v10 * temp_v24[temp_v3 + 3]) {
            if ((float)temp_v27 >= temp_v17) {
              piVar4[0xa5] = (int)(temp_v17 + temp_v16);
            }
            else {
              temp_v17 = temp_v17 - temp_v16;
              piVar4[0xa5] = (int)temp_v17;
            }
          }
          else {
            FUN_0027d9a8();
            piVar4 = DAT_004474f4 + temp_v3;
            temp_v17 = (float)piVar4[0xa5] + (temp_v17 - (float)temp_v28) * temp_v16 * (float)temp_v15;
            piVar4[0xa5] = (int)temp_v17;
          }
          piVar4 = DAT_004474f4;
          temp_v16 = (float)DAT_004474f4[temp_v3 + 0xa5];
          if ((float)DAT_004474f4[temp_v3 + 0xa5] <= -*pfVar7) {
            temp_v16 = -*pfVar7;
          }
          DAT_004474f4[temp_v3 + 0xa5] = (int)temp_v16;
          if (*pfVar7 < temp_v16) {
            temp_v16 = *pfVar7;
          }
          piVar4[temp_v3 + 0xa5] = (int)temp_v16;
        }
        piVar4 = DAT_004474f4;
        temp_v16 = (float)temp_v27;
        temp_v17 = (float)temp_v28;
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 3);
      temp_v3 = DAT_004474f4[0xaa];
      temp_v4 = (int)(short)temp_v3;
      if (0 < temp_v4) {
        temp_v1 = *(short *)((int)DAT_004474f4 + 0x2aa);
        temp_v0 = aeabi_idivmod(temp_v1,temp_v4 + 5);
        *(short *)((int)piVar4 + 0x2aa) = temp_v1 - temp_v0;
        temp_v2 = piVar4[0xab];
        temp_v1 = aeabi_idivmod((short)temp_v2,temp_v4 + 5);
        *(short *)(piVar4 + 0xab) = (short)temp_v2 - temp_v1;
        temp_v1 = *(short *)((int)piVar4 + 0x2ae);
        temp_v0 = aeabi_idivmod(temp_v1,temp_v4 + 5);
        *(short *)((int)piVar4 + 0x2ae) = temp_v1 - temp_v0;
        *(short *)(piVar4 + 0xaa) = (short)temp_v3 - 1;
      }
    }
  }
  else {
    DAT_004474f4[0xa5] = 0;
    piVar4[0xa6] = 0;
    piVar4[0xa7] = 0;
  }
  piVar4 = DAT_004474f4;
  temp_v3 = *DAT_004474f4;
  temp_v10 = 20.0f;
  temp_v19 = 1.0f;
  if (temp_v3 == 3) {
    FUN_002c159c(&DAT_0049f3f0);
    FUN_002c1e30(&DAT_0049f3f0,1);
    FUN_0025c238();
    FUN_00298d50(&DAT_0049f3f0);
    FUN_00281e34();
    FUN_0025c298();
    return;
  }
  temp_v20 = 45.0f;
  if (temp_v3 == 4) {
    FUN_002c159c(&DAT_0049f3f0);
    FUN_002c1e30(&DAT_0049f3f0,1);
    FUN_002c1edc(&DAT_0049f3f0,DAT_004474f4 + 0x20,DAT_004474f4 + 0x23,DAT_004474f4 + 7);
    FUN_0025c238();
    FUN_00298d50(&DAT_0049f3f0);
    FUN_00281e34();
    FUN_0025c298();
    return;
  }
  temp_v18 = 40.0f;
  if ((char)DAT_004474f4[0x87] != '\0') {
    temp_v3 = *(int *)(DAT_00447e88 + 0x1c);
    FUN_00287aec();
    if (temp_v3 < 0x43340000) {
      FUN_002c159c(&DAT_0049f3f0);
    }
    else {
      FUN_002c159c(&DAT_0049f3f0);
    }
    FUN_0025c238();
    FUN_00298d50(&DAT_0049f3f0);
    FUN_00281e34();
    FUN_0025c298();
    piVar1 = DAT_004474f4;
    temp_v3 = piVar4[0x98];
    temp_v4 = piVar4[0x99];
    piVar5 = DAT_004474f4 + 0x16;
    DAT_004474f4[0x13] = piVar4[0x97];
    piVar1[0x14] = temp_v3;
    piVar1[0x15] = temp_v4;
    temp_v3 = piVar4[0x95];
    temp_v4 = piVar4[0x96];
    *piVar5 = piVar4[0x94];
    piVar1[0x17] = temp_v3;
    piVar1[0x18] = temp_v4;
    return;
  }
  if (!(temp_v3 == 6 || temp_v3 == 0xf)) {
    temp_v2 = FUN_002c2950();
    temp_v3 = DAT_00447e88;
    piVar4 = DAT_004474f4;
    temp_v4 = DAT_004474f4[0x82];
    if (DAT_004474f4[0x82] == -1) {
      temp_v4 = DAT_004474f4[0x31];
      switch(DAT_004474f4[0x2b]) {
      case 0:
        temp_v4 = DAT_004474f4[0x31] + (unsigned int)*(unsigned char *)(temp_v2 + 0x1d);
        break;
      case 1:
        temp_v4 = 6;
        break;
      case 2:
        temp_v4 = 10;
        break;
      case -3:
        temp_v4 = 5;
        break;
      case -2:
        temp_v4 = 9;
        break;
      case -1:
        temp_v4 = 8;
      }
    }
    temp_v12 = 0.017453292f;
    DAT_004474f4[0x10] = *(int *)(DAT_00447e88 + 0x1c);
    piVar4[0x12] = *(int *)(temp_v3 + 0x24);
    temp_v9 = (float)piVar4[6] * 0.017453292f;
    FUN_0028250c();
    piVar4 = DAT_004474f4;
    DAT_004474f4[0xd] =
         (int)(*(float *)(DAT_00447e88 + 0x1c) - temp_v9 * (float)DAT_004474f4[temp_v4 + 0x62]);
    temp_v9 = (float)piVar4[6] * temp_v12;
    FUN_00282390();
    temp_v3 = DAT_00447e88;
    piVar4 = DAT_004474f4;
    temp_v14 = 90.0f;
    DAT_004474f4[0xf] =
         (int)(*(float *)(DAT_00447e88 + 0x24) - temp_v9 * (float)DAT_004474f4[temp_v4 + 0x62]);
    piVar4[0x11] = (int)(*(float *)(temp_v3 + 0x20) + (float)piVar4[temp_v4 + 0x32]);
    piVar4[0xe] = (int)(*(float *)(temp_v3 + 0x20) + (float)piVar4[temp_v4 + 0x42]);
    temp_v9 = ((float)piVar4[6] - 90.0f) * temp_v12;
    FUN_0028250c();
    piVar4 = DAT_004474f4;
    DAT_004474f4[0x10] =
         (int)((float)DAT_004474f4[0x10] + temp_v9 * (float)DAT_004474f4[temp_v4 + 0x52]);
    temp_v9 = ((float)piVar4[6] - temp_v14) * temp_v12;
    FUN_00282390();
    piVar4 = DAT_004474f4;
    DAT_004474f4[0x12] =
         (int)((float)DAT_004474f4[0x12] + temp_v9 * (float)DAT_004474f4[temp_v4 + 0x52]);
    temp_v9 = ((float)piVar4[6] - temp_v14) * temp_v12;
    FUN_0028250c();
    piVar4 = DAT_004474f4;
    DAT_004474f4[0xd] =
         (int)((float)DAT_004474f4[0xd] + temp_v9 * (float)DAT_004474f4[temp_v4 + 0x52]);
    temp_v12 = ((float)piVar4[6] - temp_v14) * temp_v12;
    FUN_00282390();
    piVar4 = DAT_004474f4;
    pfVar7 = (float *)(DAT_004474f4 + 0xe);
    pfVar8 = (float *)(DAT_004474f4 + 0x11);
    DAT_004474f4[0xf] =
         (int)((float)DAT_004474f4[0xf] + temp_v12 * (float)DAT_004474f4[temp_v4 + 0x52]);
    temp_v12 = (float)piVar4[0x86];
    temp_v9 = romwright_sqrt_4(((float)piVar4[0xd] - (float)piVar4[0x10]) *
                  ((float)piVar4[0xd] - (float)piVar4[0x10]) +
                  (*pfVar7 - *pfVar8) * (*pfVar7 - *pfVar8) +
                  ((float)piVar4[0xf] - (float)piVar4[0x12]) *
                  ((float)piVar4[0xf] - (float)piVar4[0x12]));
    if ((int)temp_v9 < 0x3c23d70a) {
      temp_v9 = temp_v11;
    }
    if ((char)piVar4[0x29] != '\0') {
      temp_v10 = (float)piVar4[0x85] - temp_v12;
    }
    else {
      temp_v11 = (float)piVar4[0x85] - temp_v12;
      if (((int)temp_v11 < 0x41a00001) && (temp_v10 = temp_v11, 0xc1a00000 < (unsigned int)temp_v11)) {
        temp_v10 = -20.0f;
      }
    }
    temp_v11 = (float)piVar4[0xe] + temp_v12 + temp_v10;
    piVar4[0xe] = (int)temp_v11;
    piVar4[0x86] = (int)(temp_v12 + temp_v10);
    temp_v3 = DAT_00447e88;
    if ((char)piVar4[0xae] == '\0') {
      temp_v10 = *(float *)(DAT_00447e88 + 0x20) + 5.0f;
      if (temp_v10 < temp_v11) {
        temp_v10 = temp_v11;
      }
      piVar4[0xe] = (int)temp_v10;
      temp_v11 = *(float *)(temp_v3 + 0x20) + 350.0f;
      if (temp_v11 < temp_v10) {
        temp_v10 = temp_v11;
      }
      piVar4[0xe] = (int)temp_v10;
    }
    temp_v12 = (float)piVar4[0xd] - (float)piVar4[0x10];
    temp_v11 = (float)piVar4[0xe] - (float)piVar4[0x11];
    temp_v10 = (float)piVar4[0xf] - (float)piVar4[0x12];
    temp_v14 = temp_v19 / romwright_sqrt_4(temp_v12 * temp_v12 + temp_v11 * temp_v11 + temp_v10 * temp_v10);
    piVar4[0xd] = (int)((float)piVar4[0x10] + temp_v12 * temp_v14 * temp_v9);
    piVar4[0xe] = (int)((float)piVar4[0x11] + temp_v11 * temp_v14 * temp_v9);
    piVar4[0xf] = (int)((float)piVar4[0x12] + temp_v10 * temp_v14 * temp_v9);
    if (((char)piVar4[0xae] != '\0') && (piVar4[0x2b] == 0)) {
      FUN_001f8350();
    }
    if ((((*DAT_004474f4 != 0) || (DAT_0049fce8 != '\0')) || (DAT_0049fc8c == 1)) ||
       ((char)DAT_004474f4[0xae] != '\0')) {
      temp_v23 = (float)DAT_004474f4[0xf];
      temp_v21 = (float)DAT_004474f4[0xd];
      temp_v22 = (float)DAT_004474f4[0xe];
    }
    else {
      FUN_00266c5c(DAT_004474f4 + 0xd,DAT_004474f4 + 0x10,&temp_v21);
    }
    temp_v11 = romwright_sqrt_4((temp_v21 - (float)DAT_004474f4[0x10]) * (temp_v21 - (float)DAT_004474f4[0x10]) +
                  (temp_v22 - (float)DAT_004474f4[0x11]) * (temp_v22 - (float)DAT_004474f4[0x11]) +
                  (temp_v23 - (float)DAT_004474f4[0x12]) * (temp_v23 - (float)DAT_004474f4[0x12]));
    if ((int)temp_v11 >= 0x38d1b718) {
      temp_v10 = (float)DAT_004474f4[0x12] - temp_v23;
      temp_v9 = temp_v19 / temp_v11;
      temp_v13 = ((float)DAT_004474f4[0x10] - temp_v21) * temp_v9;
      temp_v12 = ((float)DAT_004474f4[0x11] - temp_v22) * temp_v9;
      temp_v9 = temp_v10 * temp_v9;
    }
    else {
      temp_v13 = (float)DAT_004474f4[0x10] - (float)DAT_004474f4[0xd];
      temp_v9 = (float)DAT_004474f4[0x12] - (float)DAT_004474f4[0xf];
      temp_v10 = (float)DAT_004474f4[0x11] - (float)DAT_004474f4[0xe];
      temp_v14 = temp_v19 / romwright_sqrt_4(temp_v13 * temp_v13 + temp_v10 * temp_v10 + temp_v9 * temp_v9);
      temp_v13 = temp_v13 * temp_v14;
      temp_v12 = temp_v10 * temp_v14;
      temp_v9 = temp_v9 * temp_v14;
    }
    temp_v14 = temp_v16;
    if ((char)DAT_004474f4[0xae] == '\0') {
      temp_v10 = (float)DAT_004474f4[temp_v4 + 0x32];
      FUN_00287aec();
      if (temp_v16 < temp_v11) {
        temp_v10 = (float)DAT_004474f4[0x10] - (float)DAT_004474f4[0xd];
        temp_v12 = (float)DAT_004474f4[0x11] - (float)DAT_004474f4[0xe];
        temp_v9 = (float)DAT_004474f4[0x12] - (float)DAT_004474f4[0xf];
        temp_v11 = temp_v19 / romwright_sqrt_4(temp_v10 * temp_v10 + temp_v12 * temp_v12 + temp_v9 * temp_v9);
        temp_v13 = temp_v10 * temp_v11;
        temp_v12 = temp_v12 * temp_v11;
        temp_v9 = temp_v9 * temp_v11;
        temp_v11 = temp_v16;
      }
      if ((int)temp_v11 < 0x42340000) {
        temp_v13 = (float)DAT_004474f4[0x10] - (float)DAT_004474f4[0xd];
        temp_v12 = (float)DAT_004474f4[0x11] - (float)DAT_004474f4[0xe];
        temp_v10 = (float)DAT_004474f4[0x12] - (float)DAT_004474f4[0xf];
        temp_v19 = temp_v19 / romwright_sqrt_4(temp_v13 * temp_v13 + temp_v12 * temp_v12 + temp_v10 * temp_v10);
        temp_v13 = temp_v13 * temp_v19;
        temp_v12 = temp_v12 * temp_v19;
        temp_v9 = temp_v10 * temp_v19;
        temp_v11 = temp_v20;
      }
    }
    piVar4 = DAT_004474f4;
    if (((char)DAT_004474f4[0x29] == '\0') && ((char)DAT_004474f4[0xae] == '\0')) {
      temp_v3 = DAT_004474f4[0x2a];
      temp_v7 = temp_v3 < 0;
      temp_v8 = temp_v3 == 0;
      temp_v5 = 1;
      temp_v6 = 0;
      if (temp_v3 < 1) {
        temp_v10 = (float)DAT_004474f4[0x27];
        temp_v7 = temp_v10 < temp_v11;
        temp_v8 = temp_v10 == temp_v11;
        temp_v5 = temp_v11 <= temp_v10;
        temp_v6 = (temp_v10 != temp_v10) || (temp_v11 != temp_v11);
      }
      if ((!(!temp_v8 && temp_v7 == temp_v6)) && (!temp_v5)) {
        temp_v16 = (float)DAT_004474f4[0x28] + 8.0f;
        DAT_004474f4[0x28] = (int)temp_v16;
        if ((int)temp_v16 >= 0x42200001) {
          temp_v16 = temp_v18;
        }
        piVar4[0x28] = (int)temp_v16;
        temp_v10 = temp_v10 + temp_v16;
        piVar4[0x27] = (int)temp_v10;
        if (temp_v11 < temp_v10) {
          temp_v10 = temp_v11;
        }
        piVar4[0x27] = (int)temp_v10;
      }
      else {
        DAT_004474f4[0x27] = (int)temp_v11;
        piVar4[0x28] = (int)temp_v14;
      }
    }
    else {
      DAT_004474f4[0x27] = (int)temp_v11;
      piVar4[0x28] = (int)temp_v14;
    }
    temp_v21 = (float)piVar4[0x10] - temp_v13 * (float)piVar4[0x27];
    temp_v22 = (float)piVar4[0x11] - temp_v12 * (float)piVar4[0x27];
    temp_v23 = (float)piVar4[0x12] - temp_v9 * (float)piVar4[0x27];
    if ((char)piVar4[0x29] != '\0') {
      piVar4[0x16] = piVar4[0x10];
      piVar4[0x17] = piVar4[0x11];
      piVar4[0x18] = piVar4[0x12];
      piVar4[0x2a] = 0;
      *(unsigned char *)(piVar4 + 0x29) = 0;
      piVar4[0x13] = (int)temp_v21;
      piVar4[0x14] = (int)temp_v22;
      piVar4[0x15] = (int)temp_v23;
    }
    else if (piVar4[0x82] != -1) {
      temp_v16 = (float)piVar4[0x17];
      piVar4[0x16] = (int)((float)piVar4[0x16] + ((float)piVar4[0x10] - (float)piVar4[0x16]) * 0.125f
                          );
      piVar4[0x13] = (int)((float)piVar4[0x13] + (temp_v21 - (float)piVar4[0x13]) * 0.125f);
      piVar4[0x17] = (int)(temp_v16 + ((float)piVar4[0x11] - temp_v16) * 0.125f);
      piVar4[0x18] = (int)((float)piVar4[0x18] + ((float)piVar4[0x12] - (float)piVar4[0x18]) * 0.125f
                          );
      piVar4[0x14] = (int)((float)piVar4[0x14] + (temp_v22 - (float)piVar4[0x14]) * 0.125f);
      piVar4[0x15] = (int)((float)piVar4[0x15] + (temp_v23 - (float)piVar4[0x15]) * 0.125f);
    }
    else {
      switch(piVar4[0x2b]) {
      case 0:
        if (piVar4[0x2a] >= 1) {
          piVar4[0x2a] = piVar4[0x2a] - 1;
          if ((char)piVar4[0xae] != '\0') {
            temp_v16 = (float)piVar4[0x17];
            piVar4[0x16] = (int)(((float)piVar4[0x10] - (float)piVar4[0x16]) + (float)piVar4[0x16]);
            piVar4[0x13] = (int)((temp_v21 - (float)piVar4[0x13]) + (float)piVar4[0x13]);
            piVar4[0x17] = (int)(((float)piVar4[0x11] - temp_v16) + temp_v16);
            piVar4[0x18] = (int)(((float)piVar4[0x12] - (float)piVar4[0x18]) + (float)piVar4[0x18]);
            piVar4[0x14] = (int)((temp_v22 - (float)piVar4[0x14]) + (float)piVar4[0x14]);
            piVar4[0x2a] = 0;
            temp_v16 = (temp_v23 - (float)piVar4[0x15]) + (float)piVar4[0x15];
            piVar4[0x15] = (int)temp_v16;
            break;
          }
          piVar4[0x18] = (int)((float)piVar4[0x18] +
                              ((float)piVar4[0x12] - (float)piVar4[0x18]) * temp_v17);
          piVar4[0x13] = (int)((float)piVar4[0x13] + (temp_v21 - (float)piVar4[0x13]) * temp_v17);
          piVar4[0x16] = (int)((float)piVar4[0x16] +
                              ((float)piVar4[0x10] - (float)piVar4[0x16]) * temp_v17);
          piVar4[0x17] = (int)((float)piVar4[0x17] +
                              ((float)piVar4[0x11] - (float)piVar4[0x17]) * temp_v17);
          piVar4[0x14] = (int)((float)piVar4[0x14] + (temp_v22 - (float)piVar4[0x14]) * temp_v17);
          temp_v16 = (float)piVar4[0x15] + (temp_v23 - (float)piVar4[0x15]) * temp_v17;
        }
        else {
          piVar4[0x16] = (int)(((float)piVar4[0x10] - (float)piVar4[0x16]) + (float)piVar4[0x16]);
          piVar4[0x17] = (int)(((float)piVar4[0x11] - (float)piVar4[0x17]) + (float)piVar4[0x17]);
          piVar4[0x18] = (int)(((float)piVar4[0x12] - (float)piVar4[0x18]) + (float)piVar4[0x18]);
          if ((char)piVar4[0xae] != '\0') {
            piVar4[0x13] = (int)((float)piVar4[0x13] + (temp_v21 - (float)piVar4[0x13]) * 0.6666667f)
            ;
            piVar4[0x14] = (int)((float)piVar4[0x14] + (temp_v22 - (float)piVar4[0x14]) * 0.6666667f)
            ;
            piVar4[0x15] = (int)((float)piVar4[0x15] + (temp_v23 - (float)piVar4[0x15]) * 0.6666667f)
            ;
            break;
          }
          piVar4[0x13] = (int)((float)piVar4[0x13] + (temp_v21 - (float)piVar4[0x13]) * 0.6666667f);
          piVar4[0x14] = (int)((float)piVar4[0x14] + (temp_v22 - (float)piVar4[0x14]) * 0.33333334f);
          temp_v16 = (float)piVar4[0x15] + (temp_v23 - (float)piVar4[0x15]) * 0.6666667f;
        }
        piVar4[0x15] = (int)temp_v16;
        break;
      case 2:
        if ((char)piVar4[0xae] != '\0') {
          piVar4[0x18] = (int)(((float)piVar4[0x12] - (float)piVar4[0x18]) + (float)piVar4[0x18]);
          piVar4[0x13] = (int)((temp_v21 - (float)piVar4[0x13]) + (float)piVar4[0x13]);
          piVar4[0x16] = (int)(((float)piVar4[0x10] - (float)piVar4[0x16]) + (float)piVar4[0x16]);
          piVar4[0x17] = (int)(((float)piVar4[0x11] - (float)piVar4[0x17]) + (float)piVar4[0x17]);
          piVar4[0x14] = (int)((temp_v22 - (float)piVar4[0x14]) + (float)piVar4[0x14]);
          piVar4[0x15] = (int)((temp_v23 - (float)piVar4[0x15]) + (float)piVar4[0x15]);
        }
        else {
          piVar4[0x16] = (int)((float)piVar4[0x16] +
                              ((float)piVar4[0x10] - (float)piVar4[0x16]) * temp_v17);
          piVar4[0x17] = (int)((float)piVar4[0x17] +
                              ((float)piVar4[0x11] - (float)piVar4[0x17]) * temp_v17);
          piVar4[0x18] = (int)((float)piVar4[0x18] +
                              ((float)piVar4[0x12] - (float)piVar4[0x18]) * temp_v17);
          piVar4[0x13] = (int)((float)piVar4[0x13] + (temp_v21 - (float)piVar4[0x13]) * temp_v17);
          piVar4[0x14] = (int)((float)piVar4[0x14] + (temp_v22 - (float)piVar4[0x14]) * temp_v17);
          piVar4[0x15] = (int)((float)piVar4[0x15] + (temp_v23 - (float)piVar4[0x15]) * temp_v17);
        }
        break;
      case -3:
      case -2:
      case -1:
      case 1:
        if ((char)piVar4[0xae] != '\0') {
          piVar4[0x16] = (int)(((float)piVar4[0x10] - (float)piVar4[0x16]) + (float)piVar4[0x16]);
          piVar4[0x17] = (int)(((float)piVar4[0x11] - (float)piVar4[0x17]) + (float)piVar4[0x17]);
          piVar4[0x18] = (int)(((float)piVar4[0x12] - (float)piVar4[0x18]) + (float)piVar4[0x18]);
          piVar4[0x13] = (int)((temp_v21 - (float)piVar4[0x13]) + (float)piVar4[0x13]);
          piVar4[0x14] = (int)((temp_v22 - (float)piVar4[0x14]) + (float)piVar4[0x14]);
          temp_v16 = (temp_v23 - (float)piVar4[0x15]) + (float)piVar4[0x15];
          piVar4[0x15] = (int)temp_v16;
        }
        else {
          piVar4[0x16] = (int)((float)piVar4[0x16] +
                              ((float)piVar4[0x10] - (float)piVar4[0x16]) * temp_v17);
          piVar4[0x17] = (int)((float)piVar4[0x17] +
                              ((float)piVar4[0x11] - (float)piVar4[0x17]) * temp_v17);
          piVar4[0x18] = (int)((float)piVar4[0x18] +
                              ((float)piVar4[0x12] - (float)piVar4[0x18]) * temp_v17);
          piVar4[0x13] = (int)((float)piVar4[0x13] + (temp_v21 - (float)piVar4[0x13]) * 0.33333334f);
          piVar4[0x14] = (int)((float)piVar4[0x14] + (temp_v22 - (float)piVar4[0x14]) * 0.33333334f);
          piVar4[0x15] = (int)((float)piVar4[0x15] + (temp_v23 - (float)piVar4[0x15]) * 0.33333334f);
        }
      }
    }
    FUN_00298d50(&DAT_0049f3f0);
    temp_v3 = *(int *)(DAT_00447e88 + 0x1c);
    FUN_00287aec();
    if (temp_v3 < 0x43340000) {
      FUN_002c159c(&DAT_0049f3f0);
    }
    else {
      FUN_002c159c(&DAT_0049f3f0);
    }
    FUN_002c1e30(&DAT_0049f3f0,1);
    temp_v3 = *DAT_004474f4;
    if (!((temp_v3 == 7 || temp_v3 == 8) || temp_v3 == 9)) {
      FUN_0025c238();
    }
    else {
      FUN_002c1edc(&DAT_0049f3f0,DAT_004474f4 + 0x13,DAT_004474f4 + 0x16,DAT_004474f4 + 10);
    }
  }
  else {
    FUN_002c1edc(&DAT_0049f3f0,DAT_004474f4 + 0x13,DAT_004474f4 + 0x16,DAT_004474f4 + 7);
    FUN_0025c238();
    FUN_00298d50(&DAT_0049f3f0);
  }
  FUN_00281e34();
  FUN_0025c298();
  return;
}

} /* extern "C" */
