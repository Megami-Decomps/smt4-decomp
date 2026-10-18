/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00408c3c` (_code @ 0x408c3c, 0x658 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} param_1_stack;

extern unsigned char LAB_00409014; /* 0x409014 */
extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_001677c0. */
/* Supplied declaration required: FUN_00168770. */
/* Supplied declaration required: FUN_00168e00. */
/* Supplied declaration required: FUN_001692d4. */
/* Supplied declaration required: FUN_00180310. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_001879d0. */
/* Supplied declaration required: FUN_003d3020. */
/* Supplied declaration required: FUN_00409294. */


void FUN_00408c3c(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 14 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  int *piVar7;
  unsigned int in_fpscr;
  float temp_v6;
  unsigned int temp_v7;
  float temp_v8;
  unsigned long long temp_v9;
  float temp_v10;
  float temp_v11;
  unsigned long long temp_v12;
  float temp_v13;
  float temp_v14;
  unsigned int uStack_4c;
  float temp_v15;
  float temp_v16;
  
  temp_v14 = *(float *)(param_1 + 0x68);
  uStack_4c = *(unsigned int *)(param_1 + 0x6c);
  temp_v13 = *(float *)(param_1 + 0xb0);
  if (*(char *)(param_1 + 0xa4) != '\0') {
    temp_v8 = *(float *)(param_1 + 0x74);
    temp_v11 = *(float *)(param_1 + 0x70);
    temp_v15 = temp_v11;
  }
  else {
    temp_v11 = *(float *)(param_1 + 0x78);
    temp_v8 = *(float *)(param_1 + 0x7c);
    temp_v15 = *(float *)(param_1 + 0x98) + temp_v11;
    temp_v13 = -*(float *)(param_1 + 0xb0);
  }
  temp_v16 = temp_v8 + 10.0f;
  temp_v10 = 0.7f;
  temp_v6 = temp_v10;
  FUN_001879d0(DAT_0059dbb4);
  temp_v9 = CONCAT44(temp_v8,(int)temp_v10);
  temp_v0 = FUN_001879d0(DAT_0059dbb4);
  temp_v12 = CONCAT44(temp_v11,(int)temp_v6);
  temp_v7 = (unsigned int)temp_v9;
  temp_v8 = (float)VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v11 = (float)VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v14 = temp_v14 + temp_v8;
  temp_v15 = temp_v15 + temp_v11;
  temp_v1 = (int)*(char *)(param_1 + 0x56);
  if (temp_v1 == 0) {
    temp_v0 = (unsigned int)*(unsigned char *)(param_1 + 0x57);
  }
  if (temp_v1 != 0 || temp_v0 != 0) {
    VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_003d3020(0x41,temp_v1,(int)*(char *)(param_1 + 0x57));
  }
  if (*(char *)(param_1 + 0xa5) != '\0') {
    temp_v11 = *(float *)(param_1 + 0xa8);
    temp_v8 = *(float *)(param_1 + 0xac) * 0.5f;
    in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v8 <= temp_v11) << 0x1d);
    if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
      temp_v8 = (temp_v11 * 3.0f) / temp_v8;
    }
    else {
      temp_v8 = 3.0f - ((temp_v11 - temp_v8) * 3.0f) / temp_v8;
    }
    temp_v9 = CONCAT44(temp_v8 + (float)((unsigned long long)temp_v9 >> 0x20) + 0.5f,(int)temp_v9);
  }
  FUN_001692d4();
  temp_v1 = DAT_0059dbb4;
  temp_v5 = 0;
  if (*(int *)(DAT_0059dbb4 + *(int *)(DAT_0059dbb4 + 0x1318) * 4 + 0x1320) == 3) {
    temp_v3 = DAT_0059dbb4 + 0x1318 + *(int *)(DAT_0059dbb4 + 0x1318) * 4;
    temp_v2 = *(int *)(temp_v3 + 8);
    *(unsigned int *)(temp_v3 + 8) = 0;
    if (*(char *)(temp_v1 + 0x1330) != '\0' || temp_v2 != 0) {
      (**(romwright_code **)(temp_v1 + 0x1334))();
      *(unsigned char *)(temp_v1 + 0x1330) = 0;
    }
    temp_v5 = 1;
  }
  temp_v1 = (int)temp_v13;
  temp_v13 = (float)VectorSignedToFloat((int)temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v2 = (int)(*(float *)(param_1 + 0x68) + temp_v13);
  if (temp_v1 < 0) {
    temp_v2 = temp_v2 + temp_v1;
    temp_v1 = -temp_v1;
  }
  if (temp_v2 < 0) {
    temp_v1 = temp_v1 + temp_v2;
    temp_v2 = 0;
  }
  if (temp_v2 + temp_v1 >= 401) {
    temp_v1 = 400 - temp_v2;
  }
  FUN_00168e00(temp_v2,0,temp_v1,0xf0);
  FUN_00409294(param_1,&temp_v14,&temp_v15,
               *(unsigned int *)(param_1 + (unsigned int)(*(char *)(param_1 + 0x55) != '\0') * 4 + 0x9c),0x41)
  ;
  temp_v13 = (float)VectorSignedToFloat((int)temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_001835b4(2,0xc,0x36,(int)((float)((unsigned long long)temp_v12 >> 0x20) + temp_v13),
               (int)(float)((unsigned long long)temp_v9 >> 0x20),0x41);
  if (*(char *)(param_1 + 0xec) != '\0') {
    temp_v1 = FUN_001834a4(0xc,0x7f);
    temp_v11 = (float)VectorSignedToFloat((int)temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v13 = (float)VectorSignedToFloat((int)*(short *)(temp_v1 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v8 = (float)VectorSignedToFloat((int)*(short *)(temp_v1 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_001835b4(2,0xc,0x7e,(int)((float)((unsigned long long)temp_v12 >> 0x20) + temp_v11 + temp_v8),
                 (int)(temp_v13 + (float)((unsigned long long)temp_v9 >> 0x20)),0x42);
  }
  FUN_001677c0();
  temp_v13 = (float)VectorSignedToFloat((int)temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00180310(0,(int)(*(float *)(param_1 + 0x80) + (float)((unsigned long long)temp_v12 >> 0x20) + temp_v13),
               (int)(*(float *)(param_1 + 0x84) + (float)((unsigned long long)temp_v9 >> 0x20)),1,
               *(unsigned int *)(param_1 + 0xf0),0x42,&LAB_00409014,*(unsigned int *)(param_1 + 0x28));
  temp_v13 = (float)VectorSignedToFloat((int)temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)(*(float *)(param_1 + 0x88) + (float)((unsigned long long)temp_v12 >> 0x20) + temp_v13
                           ),(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)(*(float *)(param_1 + 0x8c) + (float)((unsigned long long)temp_v9 >> 0x20)),
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(1,0xff,param_1 + 0x2c);
  temp_v13 = (float)VectorSignedToFloat((int)temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)(*(float *)(param_1 + 0x90) + (float)((unsigned long long)temp_v12 >> 0x20) + temp_v13
                           ),(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)(*(float *)(param_1 + 0x94) + (float)((unsigned long long)temp_v9 >> 0x20)),
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(1,0xffffffff,param_1 + 4);
  temp_v1 = DAT_0059dbb4;
  temp_v7 = (unsigned int)temp_v9;
  if (temp_v5) {
    piVar7 = (int *)(DAT_0059dbb4 + 0x1318);
    temp_v2 = piVar7[*piVar7 + 2];
    piVar7[*piVar7 + 2] = 3;
    if (*(char *)(temp_v1 + 0x1330) != '\0' || temp_v2 != 3) {
      (**(romwright_code **)(temp_v1 + 0x1334))();
      *(unsigned char *)(temp_v1 + 0x1330) = 0;
    }
  }
  FUN_00168770();
  if (*(char *)(param_1 + 0x24) == '\0') {
    temp_v1 = 3;
  }
  else {
    switch(*(unsigned char *)(param_1 + 0x54)) {
    case 0:
    case 5:
      if (*(char *)(param_1 + 0x55) != '\0') {
        temp_v1 = 1;
        break;
      }
    default:
      temp_v1 = 0;
      break;
    case 1:
      if (*(char *)(param_1 + 0x59) == '\0') {
        temp_v1 = 4;
      }
      else {
        temp_v1 = 8;
      }
      break;
    case 2:
      if (*(char *)(param_1 + 0x58) == '\0') {
        temp_v1 = 2;
      }
      else {
        temp_v1 = 7;
      }
      break;
    case 3:
      temp_v1 = 5;
      break;
    case 4:
      if (*(char *)(param_1 + 0x59) == '\0') {
        temp_v1 = 6;
      }
      else {
        temp_v1 = 9;
      }
    }
  }
  temp_v4 = 0x33;
                    /* WARNING: Switch table taken from the stored dispatch table */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(temp_v1) {
  case 1:
    temp_v4 = 0x34;
    break;
  case 2:
    temp_v4 = 0x71;
    if (0 < *(int *)(param_1 + 0xe0)) {
      temp_v4 = 0x72;
    }
    break;
  case 3:
    temp_v4 = 0x73;
    if (0 < *(int *)(param_1 + 0xe0)) {
      temp_v4 = 0x74;
    }
    break;
  case 4:
  case 5:
  case 6:
    temp_v4 = 0x75;
    if (0 < *(int *)(param_1 + 0xe0)) {
      temp_v4 = 0x76;
    }
    break;
  case 7:
    temp_v4 = 0x7a;
    if (0 < *(int *)(param_1 + 0xe0)) {
      temp_v4 = 0x7b;
    }
    break;
  case 8:
    temp_v4 = 0x7c;
    if (0 < *(int *)(param_1 + 0xe0)) {
      temp_v4 = 0x7d;
    }
  }
  temp_v13 = (float)VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_001835b4(2,0xc,temp_v4,(int)(*(float *)(param_1 + 0x68) + temp_v13),
               (int)*(float *)(param_1 + 0x6c),0x42);
  if (temp_v1 == 4 || temp_v1 == 8) {
    temp_v13 = (float)VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_001835b4(2,0xc,0x77,(int)(*(float *)(param_1 + 0x68) + temp_v13),
                 (int)*(float *)(param_1 + 0x6c),0x43);
  }
  if (temp_v1 == 5) {
    temp_v13 = (float)VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_001835b4(2,0xc,0x78,(int)(*(float *)(param_1 + 0x68) + temp_v13),
                 (int)*(float *)(param_1 + 0x6c),0x43);
    return;
  }
  if (temp_v1 == 6 || temp_v1 == 9) {
    temp_v13 = (float)VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_001835b4(2,0xc,0x79,(int)(*(float *)(param_1 + 0x68) + temp_v13),
                 (int)*(float *)(param_1 + 0x6c),0x43);
  }
  return;
}
