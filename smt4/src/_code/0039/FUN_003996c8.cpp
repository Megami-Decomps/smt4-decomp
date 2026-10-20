/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003996c8` (_code @ 0x3996c8, 0x468 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00231bcc(...);
int FUN_00231d2c(int);
int FUN_00231dec(...);
int FUN_00232554(...);
int FUN_00287aec(void);
int FUN_002bedb0(...);
int FUN_002bee04(unsigned int, int, unsigned int);
int FUN_0039af94(int);
int FUN_0039cddc(int);
int FUN_0039d0d0(int);
int FUN_0039e56c(int);
int FUN_0039e9cc(int);
int FUN_0039edf0(int);
int NaviMain_GetCurrentMap(int);
int NaviMain_GetState(int);
int VectorSignedToFloat(...);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern unsigned char DAT_0044cdc8; /* 0x44cdc8 */
extern unsigned int g_titleScene; /* 0x44ea00 */
extern unsigned char g_gameState; /* 0x49f91c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00231bcc. */
extern int FUN_00231ca4(int);
/* Supplied declaration required: FUN_00231d2c. */
/* Supplied declaration required: FUN_00231dec. */
/* Supplied declaration required: FUN_00232554. */
extern float *lmapSceneGetObj(void);
/* Supplied declaration required: FUN_00287aec. */
extern int FUN_00288f78(unsigned int);
/* Supplied declaration required: FUN_002bedb0. */
/* Supplied declaration required: FUN_002bee04. */
extern int gameGetMapBlock(void);
extern unsigned int FUN_002c5d80(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0039af94. */
/* Supplied declaration required: FUN_0039cddc. */
/* Supplied declaration required: FUN_0039d0d0. */
/* Supplied declaration required: FUN_0039e56c. */
/* Supplied declaration required: FUN_0039e9cc. */
/* Supplied declaration required: FUN_0039edf0. */
/* Supplied declaration required: NaviMain_GetCurrentMap. */
extern float *NaviMain_GetCursorPos(int);
extern int NaviMain_GetPosX(int);
extern int NaviMain_GetPosY(int);
/* Supplied declaration required: NaviMain_GetState. */


void FUN_003996c8(int param_1)

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
  
  temp_v2 = gameGetMapBlock();
  temp_v3 = param_1 + 0x162;
  temp_v1 = 0;
  pfVar5 = (float *)lmapSceneGetObj();
  temp_v8 = *pfVar5;
  temp_v10 = pfVar5[1];
  temp_v9 = pfVar5[2];
  temp_v4 = NaviMain_GetCurrentMap(temp_v3);
  temp_v5 = NaviMain_GetPosY(temp_v3);
  if ((*(int *)((unsigned char *)&g_gameState + 0x8)) != 0x73) {
    if ((*(int *)((unsigned char *)&g_gameState + 0x8)) == 0x77) {
      temp_v8 = -(temp_v8 - 1050.0f);
    }
  }
  else {
    temp_v8 = -(temp_v8 - 1000.0f);
  }
  if ((*(unsigned int *)(param_1 + 0x10) & 2) != 0) {
    return;
  }
  if (((*(int *)((unsigned char *)&g_gameState + 0x8)) != 0xb6) && ((*(int *)((unsigned char *)&g_gameState + 0x8)) != 0xb7 && (*(int *)((unsigned char *)&g_gameState + 0x8)) != 0xb8)) {
    temp_v6 = FUN_00288f78(temp_v4);
    if (temp_v6 == 2 || temp_v6 == 3) {
      (*(int *)((unsigned char *)&DAT_0044cdc8 + 0x10)) = 0xf1;
      FUN_00231dec(param_1);
      (*(int *)((unsigned char *)&DAT_0044cdc8 + 0x10)) = (*(int *)((unsigned char *)&DAT_0044cdc8 + 0x10)) + 1;
      return;
    }
    if (temp_v6 != 0) {
      return;
    }
  }
  FUN_00232554(param_1,1);
  (*(int *)((unsigned char *)&DAT_0044cdc8 + 0x10)) = 0xb;
  if ((*(unsigned int *)(param_1 + 0x10) & 0x20) == 0) {
    if (*(char *)(param_1 + 0x5a8d) == '\0') {
      temp_v6 = *(int *)(param_1 + 0x121d8);
      FUN_00287aec();
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
          if (temp_v7 && temp_v0 == '\0') goto LAB_003998fc;
        }
      }
    }
    temp_v5 = param_1 + temp_v5 * 8;
    *(int *)(param_1 + 0xb80) = (int)(temp_v8 * 0.024f) + *(int *)(temp_v5 + 0xb88);
    *(int *)(param_1 + 0xb84) = *(int *)(temp_v5 + 0xb8c) + (int)(temp_v9 * 0.024f);
    if (*(char *)(param_1 + 0x5a8c) != '\0') {
      FUN_0039edf0(param_1);
      *(unsigned char *)(param_1 + 0x5a8d) = 1;
      *(unsigned char *)(param_1 + 0x5a8e) = 1;
      FUN_0039e9cc(param_1);
      *(unsigned char *)(param_1 + 0x5a8f) = 1;
    }
    else if (*(char *)(param_1 + 0x5a8e) != '\0') {
      FUN_0039e9cc(param_1);
      *(unsigned char *)(param_1 + 0x5a8f) = 1;
    }
    if (*(char *)(param_1 + 0x5a8d) != '\0') {
      FUN_0039e56c(param_1);
      temp_v1 = 1;
      *(unsigned char *)(param_1 + 0x5a8f) = 1;
      FUN_0039cddc(param_1);
    }
    else if (*(char *)(param_1 + 0x5a8f) != '\0') {
      FUN_0039cddc(param_1);
    }
  }
LAB_003998fc:
  FUN_0039d0d0(param_1);
  FUN_0039af94(param_1);
  temp_v5 = NaviMain_GetPosX(temp_v3);
  temp_v6 = NaviMain_GetCurrentMap(temp_v3);
  if ((temp_v5 == temp_v6) && ((int)*(char *)(param_1 + 0x60) == *(int *)(param_1 + 0x121cc))) {
    pfVar5 = (float *)NaviMain_GetCursorPos(temp_v3);
    temp_v11 = *pfVar5;
    temp_v12 = pfVar5[1];
    temp_v4 = FUN_002c5d80(1,0);
    FUN_002bee04(g_titleScene,3,temp_v4);
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
      if (!((*(int *)((unsigned char *)&g_gameState + 0x8)) == 0x73 || (*(int *)((unsigned char *)&g_gameState + 0x8)) == 0x77)) {
        NaviMain_GetState(temp_v3);
        *(float *)(param_1 + 0x121d0) = temp_v11;
        FUN_00231d2c(temp_v3);
      }
      else {
        NaviMain_GetState(temp_v3);
        temp_v11 = -temp_v11;
        *(float *)(param_1 + 0x121d0) = temp_v11;
        FUN_00231d2c(temp_v3);
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
    temp_v3 = FUN_00231ca4(param_1);
    if (*(char *)(temp_v2 + 0xd5a) != '\f') {
      FUN_00231bcc(param_1 + 0x164,temp_v3 + 0xbd5,(int)temp_v8,(int)temp_v9,0xb,1);
    }
    else {
      FUN_00231bcc(param_1 + 0x164,temp_v3 + 0xbc1,(int)temp_v8,(int)temp_v9,0xb,1);
    }
    temp_v3 = FUN_00231ca4(param_1);
    if (*(char *)(temp_v2 + 0xd5a) != '\f') {
      FUN_00231bcc(param_1 + 0x164,temp_v3 + 0xbcd,(int)temp_v8,(int)temp_v9,0xb,1);
    }
    else {
      FUN_00231bcc(param_1 + 0x164,temp_v3 + 0xbb9,(int)temp_v8,(int)temp_v9,0xb,1);
    }
    FUN_002bedb0(g_titleScene,3);
  }
  FUN_00232554(param_1,0);
  (*(int *)((unsigned char *)&DAT_0044cdc8 + 0x10)) = 0xf1;
  FUN_00231dec(param_1);
  (*(int *)((unsigned char *)&DAT_0044cdc8 + 0x10)) = (*(int *)((unsigned char *)&DAT_0044cdc8 + 0x10)) + 1;
  return;
}

} /* extern "C" */
