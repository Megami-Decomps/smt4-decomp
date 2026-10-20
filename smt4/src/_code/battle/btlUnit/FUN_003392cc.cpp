/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003392cc` (_code @ 0x3392cc, 0x488 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023f410(int, int, int);
int FUN_00240520(int, unsigned int);
int FUN_002881bc(void);
int FUN_002adde8(unsigned int, unsigned char *, float *);
int FUN_002b06c4(void);

/* stack frame of param_1: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} param_1_stack;

extern unsigned char LAB_003396bc; /* 0x3396bc */
extern unsigned int DAT_00439cf8; /* 0x439cf8 */

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Supplied declaration required: FUN_0023f410. */
/* Supplied declaration required: FUN_00240520. */
/* Supplied declaration required: FUN_002881bc. */
/* Supplied declaration required: FUN_002adde8. */
/* Supplied declaration required: FUN_002b06c4. */


void FUN_003392cc(int param_1)

{
/* irregular: 5 native warning(s); review required */
  float *pfVar1;
  unsigned short temp_v0;
  int *piVar3;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  float *pfVar7;
  int temp_v4;
  int temp_v5;
  unsigned int *puVar10;
  int temp_v6;
  float temp_v7;
  float temp_v8;
  unsigned int temp_v9;
  float temp_v10;
  unsigned int temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15 [4];
  float temp_v16 [4];
  int temp_v17;
  int temp_v18;
  
  pfVar7 = (float *)(param_1 + 0x439c);
  temp_v13 = 0.0f;
  *(unsigned int *)(param_1 + 0x43a4) = 0;
  *(unsigned int *)(param_1 + 0x43a0) = 0;
  *pfVar7 = 0.0f;
  if (*(int *)(param_1 + 0x4398) != 0) {
    FUN_002adde8(*(unsigned int *)(*(int *)(param_1 + 0x4398) + 8),&LAB_003396bc,pfVar7);
  }
  temp_v3 = *(unsigned int *)(param_1 + 0x4390);
  temp_v15[1] = 5.0f;
  temp_v15[2] = -13.0f;
  temp_v16[1] = 0.0f;
  temp_v15[0] = -5.0f;
  temp_v15[3] = 13.0f;
  temp_v16[0] = 0.0f;
  temp_v16[3] = -15.0f;
  if ((temp_v3 & 0x80000001) == 1) {
    temp_v16[1] = -15.0f;
    temp_v15[1] = -13.0f;
    temp_v15[2] = 13.0f;
    temp_v15[0] = temp_v13;
    temp_v15[3] = temp_v13;
    temp_v16[0] = temp_v13;
    temp_v16[3] = temp_v13;
  }
  temp_v16[2] = -15.0f;
  temp_v2 = 0;
  if (0 < (int)temp_v3) {
    temp_v11 = 0x3f800000;
    do {
      temp_v0 = *(unsigned int *)(param_1 + temp_v2 * 4 + 0x43a8);
      FUN_002b06c4();
      temp_v1 = param_1 + temp_v2 * 0x20;
      *(int *)(temp_v1 + 0x2f3c) = (int)*(short *)(temp_v0 + 0x88);
      *(short *)(temp_v1 + 0x2f40) = (short)temp_v2;
      *(unsigned int *)(temp_v1 + 0x2f44) = DAT_00439cf8;
      *(unsigned int *)(temp_v1 + 0x2f48) = temp_v11;
      *(float *)(temp_v1 + 0x2f4c) = temp_v15[temp_v2];
      *(float *)(temp_v1 + 0x2f50) = temp_v13;
      pfVar1 = temp_v16 + temp_v2;
      temp_v2 = temp_v2 + 1;
      *(float *)(temp_v1 + 0x2f54) = *pfVar1;
      *(unsigned short *)(temp_v1 + 0x2f58) = 0;
      *(unsigned short *)(temp_v1 + 0x2f5a) = 0;
    } while (temp_v2 < *(int *)(param_1 + 0x4390));
  }
  temp_v12 = 44.5f;
  temp_v14 = 44.5f - *(float *)(param_1 + 0x43a4);
  temp_v7 = 0.30543265f;
  FUN_002881bc();
  temp_v2 = 0;
  temp_v10 = temp_v13;
  if (0 < (int)temp_v3) {
    do {
      temp_v1 = param_1 + temp_v2 * 0x20;
      temp_v2 = temp_v2 + 1;
      *(float *)(temp_v1 + 0x2f54) = *(float *)(temp_v1 + 0x2f54) + temp_v13;
      *(float *)(temp_v1 + 0x2f4c) = *(float *)(temp_v1 + 0x2f4c) + *pfVar7;
      *(float *)(temp_v1 + 0x2f50) = *(float *)(temp_v1 + 0x2f50) + *(float *)(param_1 + 0x43a0);
      *(float *)(temp_v1 + 0x2f54) = *(float *)(temp_v1 + 0x2f54) + *(float *)(param_1 + 0x43a4);
      temp_v8 = *(float *)(temp_v1 + 0x2f48);
      *(float *)(temp_v1 + 0x2f48) = temp_v14 / (120.0f / temp_v7);
      if (temp_v10 < temp_v8) {
        temp_v10 = temp_v8;
      }
    } while (temp_v2 < (int)temp_v3);
  }
  FUN_00240520(param_1 + 0x2f3c,temp_v3);
  temp_v4 = 0;
  *(unsigned int *)(param_1 + 0x438c) = temp_v3;
  temp_v2 = 0;
  temp_v1 = 0x43;
  piVar3 = (int *)(param_1 + 0x1e98);
  do {
    temp_v5 = temp_v1 * 0x114 + 0x50;
    temp_v3 = *(unsigned int *)(*piVar3 + temp_v5);
    if ((temp_v3 & 1) == 0 && (temp_v3 & 0x8000) == 0) {
      *(unsigned int *)(*piVar3 + temp_v5) = 0x8081;
      *(short *)(*piVar3 + temp_v1 * 0x114 + 0x60) = (short)temp_v1;
      temp_v6 = param_1 + temp_v4 * 0x20;
      puVar10 = (unsigned int *)(*piVar3 + temp_v1 * 0x114 + 0xc);
      temp_v17 = temp_v6 + 0x2c00;
      temp_v18 = temp_v6 + 0x2f00;
      temp_v11 = *(unsigned int *)(temp_v6 + 0x2f50);
      temp_v9 = *(unsigned int *)(temp_v6 + 0x2f54);
      *puVar10 = *(unsigned int *)(temp_v6 + 0x2f4c);
      puVar10[1] = temp_v11;
      puVar10[2] = temp_v9;
      *(unsigned short *)(*piVar3 + temp_v1 * 0x114 + 0x5a) = *(unsigned short *)(temp_v6 + 0x2f40);
      *(unsigned int *)(*piVar3 + temp_v1 * 0x114 + 100) = *(unsigned int *)(temp_v6 + 0x2f44);
      *(unsigned int *)(*piVar3 + temp_v1 * 0x114 + 0x68) = *(unsigned int *)(temp_v6 + 0x2f44);
      *(unsigned int *)(*piVar3 + temp_v1 * 0x114 + 0x40) = *(unsigned int *)(temp_v6 + 0x2f48);
      *(unsigned char *)(*piVar3 + temp_v1 * 0x114 + 0x3c) = 0;
      temp_v5 = temp_v1 * 0x114 + 0xfc;
      *(unsigned int *)(*piVar3 + temp_v5) = (unsigned int)*(unsigned short *)(temp_v6 + 0x2f58);
      *(unsigned int *)(*(int *)(param_1 + 0x1fc0) + temp_v1 * 0x288 + 0xd8) =
           *(unsigned int *)(temp_v6 + 0x2f3c);
      *(unsigned short *)(*(int *)(param_1 + 0x1fc0) + temp_v1 * 0x288 + 8) =
           *(unsigned short *)(*piVar3 + temp_v1 * 0x114 + 0x62);
      temp_v5 = *(int *)(*piVar3 + temp_v5) + 1;
      if (temp_v2 < temp_v5) {
        temp_v2 = temp_v5;
      }
      temp_v4 = temp_v4 + 1;
      if (*(int *)(param_1 + 0x438c) - 1 < temp_v4) break;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x6d);
  temp_v1 = 0;
  if (temp_v1 < temp_v2) {
    do {
      temp_v4 = 0x43;
      do {
        temp_v5 = *piVar3;
        temp_v3 = *(unsigned int *)(temp_v5 + temp_v4 * 0x114 + 0x50);
        if (((temp_v3 & 1) != 0 && (temp_v3 & 0x8000) != 0) &&
           (*(int *)(temp_v5 + temp_v4 * 0x114 + 0xfc) == temp_v1)) {
          pfVar7 = (float *)(temp_v4 * 0x114 + 0xc + temp_v5);
          temp_v10 = temp_v13 - *pfVar7;
          *pfVar7 = *pfVar7 * (romwright_sqrt_4(temp_v10 * temp_v10 + (temp_v12 - pfVar7[2]) * (temp_v12 - pfVar7[2])) /
                              romwright_sqrt_4((temp_v13 - temp_v13) * (temp_v13 - temp_v13) +
                                   (temp_v12 - temp_v13) * (temp_v12 - temp_v13)));
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 0x6d);
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < temp_v2);
  }
  FUN_0023f410(param_1,3,1);
  return;
}

} /* extern "C" */
