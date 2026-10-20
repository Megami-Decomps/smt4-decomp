/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00271064` (_code @ 0x271064, 0x254 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00266c5c(float *, float *, unsigned char [56]);
int FUN_00282318(void);
int FUN_00282390(void);
int FUN_0028250c(void);
int FUN_00287aec(void);
int FUN_00287b0c(void);
int FUN_00287be4(void);

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
} param_3_stack;

extern float DAT_0049f9fc; /* 0x49f9fc */
extern float DAT_0049fa00; /* 0x49fa00 */
extern unsigned int DAT_0049fa04; /* 0x49fa04 */
extern float DAT_0049fa08; /* 0x49fa08 */
extern float DAT_0049fa0c; /* 0x49fa0c */
extern float DAT_0049fa10; /* 0x49fa10 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_00266c5c. */
/* Supplied declaration required: FUN_00282318. */
/* Supplied declaration required: FUN_00282390. */
/* Supplied declaration required: FUN_0028250c. */
/* Supplied declaration required: FUN_00287aec. */
/* Supplied declaration required: FUN_00287b0c. */
/* Supplied declaration required: FUN_00287be4. */


void FUN_00271064(unsigned char param_1,int *param_2,int param_3)

{
/* irregular: 7 native warning(s); review required */
  float *pfVar1;
  int temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  unsigned int temp_v8;
  unsigned long long temp_v9;
  unsigned long long temp_v10;
  float temp_v11;
  float fStack_5c;
  float temp_v12;
  float temp_v13;
  float fStack_50;
  unsigned int uStack_4c;
  unsigned char temp_v14 [56];
  
  temp_v10 = 0x42c80000;
  temp_v8 = 0x3c8efa35;
  temp_v3 = 0.0f;
  param_3 = param_3 + *(int *)(param_3 + 0xe10) * 0x38;
  *(unsigned char *)(param_3 + 0xe) = param_1;
  temp_v4 = *(float *)(param_3 + 0x28);
  *(unsigned char *)(*param_2 + 0xe3c) = 1;
  DAT_0049f9fc = *(float *)(param_3 + 0x1c);
  temp_v5 = temp_v4 * 0.017453292f;
  DAT_0049fa00 = *(float *)(param_3 + 0x20) + 100.0f;
  DAT_0049fa04 = *(unsigned int *)(param_3 + 0x24);
  temp_v1 = temp_v5;
  temp_v2 = temp_v3;
  FUN_0028250c();
  temp_v9 = romwright_piece_4_4(temp_v8,0x43c80000);
  DAT_0049fa08 = *(float *)(param_3 + 0x1c) + temp_v5 * 400.0f;
  DAT_0049fa0c = *(float *)(param_3 + 0x20) + (float)temp_v10;
  FUN_00282390();
  temp_v12 = *(float *)(param_3 + 0x24) + temp_v1 * (float)temp_v9;
  DAT_0049fa10 = temp_v12;
  if (*(int *)(param_3 + 0x38) != 0) {
    temp_v13 = DAT_0049f9fc;
    fStack_50 = DAT_0049fa00;
    uStack_4c = DAT_0049fa04;
    temp_v11 = DAT_0049fa08;
    fStack_5c = DAT_0049fa0c;
    pfVar1 = &temp_v11;
    FUN_00266c5c(pfVar1,&temp_v13,temp_v14);
    if (pfVar1 != (float *)0xffffffff) {
      temp_v1 = temp_v13;
      FUN_00287aec();
      temp_v6 = 90.0f;
      FUN_00287be4();
      temp_v5 = temp_v4;
      FUN_00287b0c();
      temp_v0 = 0;
      if (temp_v4 < temp_v2) {
        temp_v6 = -90.0f;
      }
      do {
        temp_v4 = *(float *)(param_3 + 0x28) + temp_v3;
        FUN_00282318();
        temp_v7 = temp_v4 * (float)((unsigned long long)temp_v9 >> 0x20);
        temp_v2 = temp_v7;
        FUN_0028250c();
        DAT_0049fa08 = *(float *)(param_3 + 0x1c) + temp_v7 * (float)temp_v9;
        FUN_00282390();
        temp_v12 = *(float *)(param_3 + 0x24) + temp_v2 * (float)temp_v9;
        temp_v13 = DAT_0049f9fc;
        fStack_50 = DAT_0049fa00;
        uStack_4c = DAT_0049fa04;
        temp_v11 = DAT_0049fa08;
        fStack_5c = DAT_0049fa0c;
        pfVar1 = &temp_v11;
        DAT_0049fa10 = temp_v12;
        FUN_00266c5c(pfVar1,&temp_v13,temp_v14);
        if (pfVar1 == (float *)0xffffffff) {
          *(float *)(param_3 + 0x28) = temp_v4;
          return;
        }
        temp_v2 = temp_v13;
        FUN_00287aec();
        if (temp_v2 < temp_v1) {
          temp_v1 = temp_v13;
          temp_v5 = temp_v4;
          FUN_00287aec();
        }
        temp_v2 = (float)temp_v10;
        temp_v3 = temp_v3 + temp_v6;
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 4);
      temp_v5 = temp_v5 * (float)((unsigned long long)temp_v9 >> 0x20);
      temp_v1 = temp_v5;
      FUN_0028250c();
      temp_v4 = (float)temp_v9;
      DAT_0049fa08 = *(float *)(param_3 + 0x1c) + temp_v5 * temp_v4;
      DAT_0049fa0c = *(float *)(param_3 + 0x20) + temp_v2;
      FUN_00282390();
      DAT_0049fa10 = *(float *)(param_3 + 0x24) + temp_v1 * temp_v4;
    }
  }
  return;
}

} /* extern "C" */
