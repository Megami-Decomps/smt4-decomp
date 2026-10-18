/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003998e4` (_code @ 0x3998e4, 0x468 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern int DAT_0044cdd8; /* 0x44cdd8 */
extern unsigned int DAT_0044ea00; /* 0x44ea00 */
extern int DAT_0049f924; /* 0x49f924 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00231d60. */
extern int FUN_00231e38(int);
/* Supplied declaration required: FUN_00231ec0. */
/* Supplied declaration required: FUN_00231f44. */
extern float *FUN_00231f58(int);
extern int FUN_00231f6c(int);
/* Supplied declaration required: FUN_00231f80. */
/* Supplied declaration required: FUN_002326e8. */
extern int FUN_002327c4(int);
/* Supplied declaration required: FUN_002327d8. */
extern float *FUN_002327ec(void);
/* Supplied declaration required: FUN_00287d54. */
extern int FUN_002891e0(unsigned int);
/* Supplied declaration required: FUN_002bef88. */
/* Supplied declaration required: FUN_002befdc. */
extern int FUN_002c2b1c(void);
extern unsigned int FUN_002c5f7c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0039b1b0. */
/* Supplied declaration required: FUN_0039cff8. */
/* Supplied declaration required: FUN_0039d2ec. */
/* Supplied declaration required: FUN_0039e788. */
/* Supplied declaration required: FUN_0039ebe8. */
/* Supplied declaration required: FUN_0039f00c. */


void FUN_003998e4(int param_1)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 16 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  float *pfVar5;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned char temp_v7;
  unsigned int in_fpscr;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  
  temp_v2 = FUN_002c2b1c();
  temp_v3 = param_1 + 0x162;
  temp_v1 = 0;
  pfVar5 = (float *)FUN_002327ec();
  temp_v8 = *pfVar5;
  temp_v10 = pfVar5[1];
  temp_v9 = pfVar5[2];
  temp_v4 = FUN_002327d8(temp_v3);
  temp_v5 = FUN_002327c4(temp_v3);
  if (DAT_0049f924 != 0x73) {
    if (DAT_0049f924 == 0x77) {
      temp_v8 = -(temp_v8 - 1050.0f);
    }
  }
  else {
    temp_v8 = -(temp_v8 - 1000.0f);
  }
  if ((*(unsigned int *)(param_1 + 0x10) & 2) != 0) {
    return;
  }
  if ((DAT_0049f924 != 0xb6) && (DAT_0049f924 != 0xb7 && DAT_0049f924 != 0xb8)) {
    temp_v6 = FUN_002891e0(temp_v4);
    if (temp_v6 == 2 || temp_v6 == 3) {
      DAT_0044cdd8 = 0xf1;
      FUN_00231f80(param_1);
      DAT_0044cdd8 = DAT_0044cdd8 + 1;
      return;
    }
    if (temp_v6 != 0) {
      return;
    }
  }
  FUN_002326e8(param_1,1);
  DAT_0044cdd8 = 0xb;
  if ((*(unsigned int *)(param_1 + 0x10) & 0x20) == 0) {
    if (*(char *)(param_1 + 0x5a8d) == '\0') {
      temp_v6 = *(int *)(param_1 + 0x121d8);
      FUN_00287d54();
      if (temp_v6 >= 0x3f800001) {
        *(unsigned char *)(param_1 + 0x5a8d) = 1;
      }
      else {
        temp_v0 = *(char *)(param_1 + 0x5a8d);
        temp_v7 = temp_v0 == '\0';
        if (temp_v7) {
          temp_v0 = *(char *)(param_1 + 0x5a8c);
        }
        if (temp_v7 && temp_v0 == '\0') {
          temp_v0 = *(char *)(param_1 + 0x5a8e);
          temp_v7 = temp_v0 == '\0';
          if (temp_v7) {
            temp_v0 = *(char *)(param_1 + 0x5a8f);
          }
          if (temp_v7 && temp_v0 == '\0') goto LAB_00399b18;
        }
      }
    }
    temp_v5 = param_1 + temp_v5 * 8;
    *(int *)(param_1 + 0xb80) = (int)(temp_v8 * 0.024f) + *(int *)(temp_v5 + 0xb88);
    *(int *)(param_1 + 0xb84) = *(int *)(temp_v5 + 0xb8c) + (int)(temp_v9 * 0.024f);
    if (*(char *)(param_1 + 0x5a8c) != '\0') {
      FUN_0039f00c(param_1);
      *(unsigned char *)(param_1 + 0x5a8d) = 1;
      *(unsigned char *)(param_1 + 0x5a8e) = 1;
      FUN_0039ebe8(param_1);
      *(unsigned char *)(param_1 + 0x5a8f) = 1;
    }
    else if (*(char *)(param_1 + 0x5a8e) != '\0') {
      FUN_0039ebe8(param_1);
      *(unsigned char *)(param_1 + 0x5a8f) = 1;
    }
    if (*(char *)(param_1 + 0x5a8d) != '\0') {
      FUN_0039e788(param_1);
      temp_v1 = 1;
      *(unsigned char *)(param_1 + 0x5a8f) = 1;
      FUN_0039cff8(param_1);
    }
    else if (*(char *)(param_1 + 0x5a8f) != '\0') {
      FUN_0039cff8(param_1);
    }
  }
LAB_00399b18:
  FUN_0039d2ec(param_1);
  FUN_0039b1b0(param_1);
  temp_v5 = FUN_00231f6c(temp_v3);
  temp_v6 = FUN_002327d8(temp_v3);
  if ((temp_v5 == temp_v6) && ((int)*(char *)(param_1 + 0x60) == *(int *)(param_1 + 0x121cc))) {
    pfVar5 = (float *)FUN_00231f58(temp_v3);
    temp_v11 = *pfVar5;
    temp_v12 = pfVar5[1];
    temp_v4 = FUN_002c5f7c(1,0);
    FUN_002befdc(DAT_0044ea00,3,temp_v4);
    if ((*(unsigned int *)(param_1 + 0x10) & 0x20000) == 0) {
      temp_v1 = 1;
    }
    if (((*(unsigned int *)(param_1 + 0x10) & 0x20) == 0) && (temp_v1)) {
      temp_v11 = (float)((int)temp_v11 + 0xa0);
      *(float *)(param_1 + 0x121c4) = temp_v11;
      *(int *)(param_1 + 0x121c8) = (int)temp_v12 + 0x78;
      *(float *)(param_1 + 0x121d8) = temp_v8;
      *(float *)(param_1 + 0x121dc) = temp_v10;
      *(float *)(param_1 + 0x121e0) = temp_v9;
      temp_v8 = (float)VectorSignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v9 = (float)VectorSignedToFloat((int)temp_v12 + 0x78,(unsigned char)(in_fpscr >> 0x16) & 3);
      if (!(DAT_0049f924 == 0x73 || DAT_0049f924 == 0x77)) {
        FUN_00231f44(temp_v3);
        *(float *)(param_1 + 0x121d0) = temp_v11;
        FUN_00231ec0(temp_v3);
      }
      else {
        FUN_00231f44(temp_v3);
        temp_v11 = -temp_v11;
        *(float *)(param_1 + 0x121d0) = temp_v11;
        FUN_00231ec0(temp_v3);
        temp_v11 = -temp_v11;
      }
      *(float *)(param_1 + 0x121d4) = temp_v11;
    }
    else {
      temp_v8 = (float)VectorSignedToFloat(*(unsigned int *)(param_1 + 0x121c4),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v9 = (float)VectorSignedToFloat(*(unsigned int *)(param_1 + 0x121c8),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
    }
    temp_v3 = FUN_00231e38(param_1);
    if (*(char *)(temp_v2 + 0xd5a) != '\f') {
      FUN_00231d60(param_1 + 0x164,temp_v3 + 0xbd5,(int)temp_v8,(int)temp_v9,0xb,1);
    }
    else {
      FUN_00231d60(param_1 + 0x164,temp_v3 + 0xbc1,(int)temp_v8,(int)temp_v9,0xb,1);
    }
    temp_v3 = FUN_00231e38(param_1);
    if (*(char *)(temp_v2 + 0xd5a) != '\f') {
      FUN_00231d60(param_1 + 0x164,temp_v3 + 0xbcd,(int)temp_v8,(int)temp_v9,0xb,1);
    }
    else {
      FUN_00231d60(param_1 + 0x164,temp_v3 + 0xbb9,(int)temp_v8,(int)temp_v9,0xb,1);
    }
    FUN_002bef88(DAT_0044ea00,3);
  }
  FUN_002326e8(param_1,0);
  DAT_0044cdd8 = 0xf1;
  FUN_00231f80(param_1);
  DAT_0044cdd8 = DAT_0044cdd8 + 1;
  return;
}
