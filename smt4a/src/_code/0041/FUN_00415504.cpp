/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00415504` (_code @ 0x415504, 0x414 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016c4b8(int, unsigned int);
int FUN_00186940(void);
int FUN_002371b0(void);
int FUN_00317c3c(int *);
int FUN_00409e78(int, float *, int);

typedef int romwright_code(...);
/* stack frame of param_1: 21 slot(s), 84 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
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

extern int DAT_0059dbb4; /* 0x59dbb4 */

extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c4b8. */
/* Supplied declaration required: FUN_00186940. */
/* Supplied declaration required: FUN_002371b0. */
/* Supplied declaration required: FUN_00317c3c. */
/* Supplied declaration required: FUN_00409e78. */


void FUN_00415504(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  float *pfVar2;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar5;
  float *pfVar6;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int *piVar10;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  float temp_v14;
  int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float fStack_70;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  float fStack_60;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  float fStack_50;
  float temp_v27;
  float temp_v28;
  float temp_v29;
  float temp_v30;
  float temp_v31;
  
  temp_v9 = 1.0f;
  temp_v10 = -11.0f;
  temp_v15 = 0x3f800000;
  temp_v16 = 0x3f800000;
  temp_v18 = *(float *)(*(int *)(param_1 + 0x60) + 8) * *(float *)(*(int *)(param_1 + 0x14) + 8);
  temp_v17 = 0x3f800000;
  temp_v11 = 0x3f800000;
  temp_v12 = 0x3f800000;
  temp_v14 = *(float *)(*(int *)(param_1 + 0x60) + 0xc) * *(float *)(*(int *)(param_1 + 0x14) + 8);
  temp_v13 = 0x3f800000;
  FUN_0016c4b8(DAT_0059dbb4,*(unsigned int *)(*(int *)(param_1 + 8) + 8));
  FUN_00409e78(param_1,&temp_v19,param_1 + 0x18);
  temp_v0 = 0;
  if (temp_v0 < **(int **)(param_1 + 0x60) + 1) {
    do {
      temp_v2 = *(int *)(param_1 + 4);
      temp_v6 = *(float *)(temp_v0 * 0x14 + 8 + temp_v2);
      temp_v1 = temp_v0 * 0x14;
      temp_v4 = *(unsigned int *)(temp_v2 + temp_v0 * 0x14 + 4);
      puVar5 = (unsigned int *)(*(int *)(param_1 + 100) + temp_v0 * 0xc);
      temp_v0 = temp_v0 + 1;
      *puVar5 = *(unsigned int *)(temp_v2 + temp_v1);
      puVar5[1] = temp_v4;
      puVar5[2] = temp_v6 + temp_v10;
    } while (temp_v0 < **(int **)(param_1 + 0x60) + 1);
  }
  pfVar2 = *(float **)(param_1 + 100);
  temp_v5 = 0;
  temp_v0 = **(int **)(param_1 + 0x60);
  pfVar6 = pfVar2;
  if (temp_v0 != -1) {
    do {
      temp_v10 = pfVar2[1];
      temp_v7 = pfVar2[2];
      temp_v8 = *pfVar2;
      temp_v5 = temp_v5 + 1;
      pfVar2 = pfVar2 + 3;
      temp_v6 = temp_v9 / (temp_v29 * temp_v10 + temp_v30 * temp_v7 + temp_v31 + temp_v28 * temp_v8);
      pfVar6[2] = (temp_v26 * temp_v10 + fStack_50 * temp_v7 + temp_v27 + temp_v25 * temp_v8) * temp_v6;
      *pfVar6 = (temp_v20 * temp_v10 + fStack_70 * temp_v7 + temp_v21 + temp_v19 * temp_v8) * temp_v6;
      pfVar6[1] = (temp_v23 * temp_v10 + fStack_60 * temp_v7 + temp_v24 + temp_v22 * temp_v8) * temp_v6;
      pfVar6 = pfVar6 + 3;
    } while (temp_v5 < temp_v0 + 1U);
  }
  temp_v0 = DAT_0059dbb4;
  piVar10 = (int *)(DAT_0059dbb4 + 0x12b8);
  temp_v1 = *(int *)(*(int *)(param_1 + 0x60) + 0x28);
  temp_v2 = *piVar10;
  temp_v3 = piVar10[temp_v2 + 2];
  *piVar10 = temp_v2 + 1;
  piVar10[temp_v2 + 3] = temp_v1;
  if (*(char *)(temp_v0 + 0x12d0) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x12d4))();
    *(unsigned char *)(temp_v0 + 0x12d0) = 0;
  }
  temp_v0 = DAT_0059dbb4;
  temp_v1 = FUN_001692ac(1,0);
  piVar10 = (int *)(temp_v0 + 0x1258);
  temp_v2 = *piVar10;
  temp_v3 = piVar10[temp_v2 + 2];
  *piVar10 = temp_v2 + 1;
  piVar10[temp_v2 + 3] = temp_v1;
  if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x1274))();
    *(unsigned char *)(temp_v0 + 0x1270) = 0;
  }
  FUN_00186940();
  FUN_00317c3c(&temp_v15);
  temp_v0 = 1;
  if (temp_v0 < **(int **)(param_1 + 0x60) + 1) {
    do {
      FUN_00317c3c(&temp_v11);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < **(int **)(param_1 + 0x60) + 1);
  }
  FUN_00317c3c(&temp_v11);
  FUN_002371b0();
  temp_v0 = DAT_0059dbb4;
  piVar10 = (int *)(DAT_0059dbb4 + 0x1258);
  temp_v1 = *piVar10;
  temp_v2 = piVar10[temp_v1 + 2];
  *piVar10 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v2 != piVar10[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1274))();
    *(unsigned char *)(temp_v0 + 0x1270) = 0;
  }
  temp_v0 = DAT_0059dbb4;
  piVar10 = (int *)(DAT_0059dbb4 + 0x12b8);
  temp_v1 = *piVar10;
  temp_v2 = piVar10[temp_v1 + 2];
  *piVar10 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x12d0) != '\0' || temp_v2 != piVar10[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x12d4))();
    *(unsigned char *)(temp_v0 + 0x12d0) = 0;
  }
  return;
}

} /* extern "C" */
