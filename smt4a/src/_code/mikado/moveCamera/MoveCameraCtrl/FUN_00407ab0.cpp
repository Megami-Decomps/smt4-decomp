/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00407ab0` (_code @ 0x407ab0, 0x3a4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int FUN_00178b04(...);
int lookupNameEntry(int, int, int *);
int controllerSetPosition(...);
int FUN_003fd7b4(...);
int FUN_003fe86c(...);
int FUN_00407110(unsigned int *, unsigned char [128]);
int FUN_0040aa6c(void);
int FUN_0040aad4(...);
int FUN_0040ab7c(...);
int FUN_0040ace8(...);
int FUN_0040ae70(unsigned int, int);
int FUN_0040b0f8(unsigned int, unsigned char [128]);
int FUN_0045b538(int);

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

extern unsigned char LAB_00407e54; /* 0x407e54 */
extern unsigned char LAB_00407e6c; /* 0x407e6c */
extern unsigned char LAB_00407e78; /* 0x407e78 */
extern unsigned char LAB_00407e80; /* 0x407e80 */
extern unsigned char LAB_00407e88; /* 0x407e88 */
extern unsigned char LAB_00407e9c; /* 0x407e9c */
extern unsigned int g_handleRegistry; /* 0x56fcc0 */

/* Supplied declaration required: textFormatBuffer. */
extern int FUN_00102c30(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: lookupNameEntry. */
/* Supplied declaration required: controllerSetPosition. */
/* Supplied declaration required: FUN_003fd7b4. */
/* Supplied declaration required: FUN_003fe86c. */
/* Supplied declaration required: FUN_00407110. */
/* Supplied declaration required: FUN_0040aa6c. */
/* Supplied declaration required: FUN_0040aad4. */
/* Supplied declaration required: FUN_0040ab7c. */
extern unsigned int FUN_0040ac08(void);
/* Supplied declaration required: FUN_0040ace8. */
/* Supplied declaration required: FUN_0040ae70. */
extern int FUN_0040af60(unsigned int);
/* Supplied declaration required: FUN_0040b0f8. */
/* Supplied declaration required: FUN_0045b538. */


void FUN_00407ab0(unsigned int *param_1,int param_2,int param_3)

{
/* irregular: 14 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int *puVar7;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  unsigned char temp_v11 [128];
  int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  
  param_1[6] = 0;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  if (param_3 == 0) {
    param_3 = param_2;
  }
  *(unsigned char *)((int)param_1 + 0x15) = 0;
  textFormatBuffer(temp_v11,&LAB_00407e54,param_3);
  temp_v0 = 0x20;
  FUN_00178b04(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\mikado\\moveCamera\\MoveCameraCtrl.cpp",0xf5)
  ;
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_0040ac08();
  }
  param_1[6] = temp_v1;
  FUN_0040aa6c();
  FUN_0040aad4(param_1[6],0);
  FUN_0045b538(*(int *)(param_1[6] + 0xc) + 0xc);
  temp_v9 = *(int *)(param_1[6] + 4);
  FUN_0040ace8(g_handleRegistry,temp_v9);
  FUN_003fe86c(temp_v9,0,1);
  controllerSetPosition(temp_v9);
  FUN_003fd7b4(temp_v9);
  textFormatBuffer(temp_v11,&LAB_00407e6c,param_2);
  FUN_00407110(param_1,temp_v11);
  textFormatBuffer(temp_v11,&LAB_00407e78,param_2);
  temp_v1 = g_handleRegistry;
  FUN_0040b0f8(g_handleRegistry,temp_v11);
  temp_v0 = FUN_0040af60(temp_v1);
  if (temp_v0 != 0) {
    FUN_0040ae70(temp_v1,1);
  }
  temp_v0 = **(int **)(*(int *)(param_1[0x165] + 0x34) + 0x48);
  puVar7 = *(unsigned int **)(temp_v0 + 0x30);
  temp_v3 = *(unsigned int *)(temp_v0 + 0x1c);
  temp_v4 = *(unsigned int *)(temp_v0 + 0x20);
  temp_v5 = *(unsigned int *)(temp_v0 + 0x24);
  param_1[0x179] = temp_v3;
  param_1[0x17a] = temp_v4;
  param_1[0x17b] = temp_v5;
  temp_v1 = *puVar7;
  temp_v10 = puVar7[1];
  temp_v6 = puVar7[2];
  param_1[0x17e] = temp_v6;
  param_1[0x17c] = temp_v1;
  param_1[0x17d] = temp_v10;
  param_1[0x172] = temp_v6;
  param_1[0x170] = temp_v1;
  param_1[0x171] = temp_v10;
  temp_v0 = 0;
  param_1[0x16d] = temp_v3;
  param_1[0x16e] = temp_v4;
  param_1[0x16f] = temp_v5;
  temp_v7 = *(int *)(*(int *)(temp_v9 + 0x108) + 8);
  temp_v8 = *(int *)(*(int *)(temp_v9 + 0x210) + 0x78);
  if (0 < temp_v7) {
    do {
      temp_v2 = FUN_00102c30(*(unsigned int *)(temp_v8 + temp_v0 * 0xc + 0x14),&LAB_00407e80);
      if (temp_v2 != 0) {
        lookupNameEntry(temp_v9,temp_v2,&temp_v12);
        param_1[param_1[3] * 3 + 0x188] = temp_v12;
        param_1[param_1[3] * 3 + 0x189] = temp_v13;
        param_1[param_1[3] * 3 + 0x18a] = temp_v14;
        param_1[3] = param_1[3] + 1;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < temp_v7);
  }
  if (0 < (int)param_1[3]) {
    *(unsigned char *)((int)param_1 + 0x15) = 1;
    textFormatBuffer(temp_v11,&LAB_00407e88);
    temp_v0 = 0x20;
    FUN_00178b04(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\mikado\\moveCamera\\MoveCameraCtrl.cpp",
                 0x15e);
    temp_v1 = 0;
    if (temp_v0 != 0) {
      temp_v1 = FUN_0040ac08();
    }
    param_1[8] = temp_v1;
    FUN_0040aa6c();
    FUN_0040ab7c(param_1[8],0);
    FUN_0040aad4(param_1[8],0);
    temp_v1 = *(unsigned int *)(param_1[8] + 4);
    FUN_0040ace8(g_handleRegistry,temp_v1);
    FUN_003fe86c(temp_v1,0,1);
    controllerSetPosition(temp_v1);
    FUN_003fd7b4(temp_v1);
    textFormatBuffer(temp_v11,&LAB_00407e9c);
    temp_v0 = 0x20;
    FUN_00178b04(0x20,"c:\\SMT4F\\SMT4F\\sdds4\\program\\mikado\\moveCamera\\MoveCameraCtrl.cpp",
                 0x16c);
    temp_v1 = 0;
    if (temp_v0 != 0) {
      temp_v1 = FUN_0040ac08();
    }
    param_1[7] = temp_v1;
    FUN_0040aa6c();
    FUN_0040ab7c(param_1[7],0);
    FUN_0040aad4(param_1[7],0);
    temp_v1 = *(unsigned int *)(param_1[7] + 4);
    FUN_0040ace8(g_handleRegistry,temp_v1);
    FUN_003fe86c(temp_v1,0,1);
    controllerSetPosition(temp_v1);
    param_1[0x182] = param_1[0x188];
    param_1[0x183] = param_1[0x189];
    param_1[0x184] = param_1[0x18a];
    FUN_003fd7b4(temp_v1);
  }
  return;
}

} /* extern "C" */
