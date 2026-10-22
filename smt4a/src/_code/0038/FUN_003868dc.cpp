/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003868dc` (_code @ 0x3868dc, 0x738 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001bbf0c(void);
int FUN_001bc124(void);
int FUN_0025ef68(int, int, int);
int FUN_00294c28(void);
int FUN_00295108(int);
int distSpatial(void);
int FUN_002b80b8(void);
int FUN_00317af8(float *, unsigned int [12], int);
int FUN_00325998(int, int);
int FUN_0033f8a4(void);
int FUN_0033f9f4(void);
int FUN_003d4ed8(int);
int FUN_00408184(int, int);
int FUN_004a01c8(int, int);
int FUN_004a0524(void);
int FUN_004a08f0(void);
int FUN_0050d8e4(void);
int SBORROW4(int, int);
int VectorSignedToFloat(unsigned int, int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_1_stack;

extern int g_lmapMainState; /* 0x580238 */
extern int g_lmapScene; /* 0x581288 */
extern signed char DAT_005f1614; /* 0x5f1614 */
extern signed char DAT_005f161d; /* 0x5f161d */
extern float DAT_005f1894; /* 0x5f1894 */
extern float DAT_005f1898; /* 0x5f1898 */
extern int DAT_005f189c; /* 0x5f189c */
extern signed char DAT_005f1bc4; /* 0x5f1bc4 */
extern int DAT_005f1be4; /* 0x5f1be4 */
extern signed char DAT_005f1c48; /* 0x5f1c48 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
extern int gameFlagsGetBlock(void);
extern int padButtonRepeat(unsigned int);
extern int padButtonIsPressed(unsigned int);
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: FUN_0025ef68. */
extern unsigned int FUN_0029202c(void);
/* Supplied declaration required: FUN_00294c28. */
/* Supplied declaration required: FUN_00295108. */
/* Supplied declaration required: distSpatial. */
/* Supplied declaration required: FUN_002b80b8. */
/* Supplied declaration required: FUN_00317af8. */
/* Supplied declaration required: FUN_00325998. */
/* Supplied declaration required: FUN_0033f8a4. */
/* Supplied declaration required: FUN_0033f9f4. */
/* Supplied declaration required: FUN_003d4ed8. */
extern int gameDataFlagTestBit(unsigned int);
/* Supplied declaration required: FUN_00408184. */
/* Supplied declaration required: FUN_004a01c8. */
/* Supplied declaration required: FUN_004a0524. */
/* Supplied declaration required: FUN_004a08f0. */
extern int partyAnyMemberHasFlagBit(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0050d8e4. */


void FUN_003868dc(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 19 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  unsigned char temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  unsigned int in_fpscr;
  float temp_v7;
  float temp_v8;
  unsigned long long temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  unsigned long long temp_v13;
  float temp_v14;
  float temp_v15;
  unsigned int temp_v16 [12];
  
  temp_v0 = gameFlagsGetBlock();
  temp_v11 = 35.0f;
  temp_v5 = 0;
  if ((DAT_005f1bc4 != '\0') || (DAT_005f1614 != '\0')) {
    *(unsigned int *)(temp_v0 + 0xdc8) = 0;
  }
  else {
    temp_v10 = 0.0f;
    temp_v8 = temp_v11;
    temp_v1 = FUN_0029202c();
    temp_v7 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v7 = temp_v7 * 0.01f;
    temp_v6 = SBORROW4((int)temp_v7,0x40000000);
    temp_v2 = (int)temp_v7 - 0x40000000;
    temp_v4 = temp_v7 == 2.0f;
    if ((int)temp_v7 >= 0x40000001) {
      temp_v7 = 2.0f;
    }
    else {
      temp_v6 = SBORROW4((int)temp_v7,0x3f800000);
      temp_v2 = (int)temp_v7 - 0x3f800000;
      temp_v4 = temp_v7 == 1.0f;
    }
    if ((!temp_v4 && temp_v2 < 0 == temp_v6) && (temp_v8 = temp_v8 * temp_v7, (int)temp_v8 >= 0x42200001)) {
      temp_v8 = 40.0f;
    }
    if (0 < *(int *)(temp_v0 + 0xdcc)) {
      *(int *)(temp_v0 + 0xdcc) = *(int *)(temp_v0 + 0xdcc) - 1;
    }
    temp_v7 = *(float *)(g_lmapScene + 0x1c);
    temp_v9 = *(unsigned long long *)(g_lmapScene + 0x20);
    FUN_00317af8(&temp_v15,temp_v16,0);
    if (((((unsigned int)temp_v15 < 0xbf000000) && ((int)temp_v15 < 0x3f000000)) &&
        (temp_v16[0] < 0xbf000000)) && ((int)temp_v16[0] < 0x3f000000)) {
      temp_v5 = 1;
    }
    FUN_0033f9f4();
    if (DAT_005f161d == '\0') {
      if (DAT_005f1be4 == 1) {
        if (DAT_005f1c48 != '\0') {
          temp_v2 = padButtonIsPressed(1);
          if (temp_v2 != 0) {
            DAT_005f1c48 = '\0';
          }
          temp_v2 = padButtonRepeat(5);
          temp_v12 = 50.0f;
          if (temp_v2 != 0) {
            *(float *)(g_lmapScene + 0x2c) = *(float *)(g_lmapScene + 0x2c) + 50.0f;
          }
          temp_v2 = padButtonRepeat(6);
          if (temp_v2 != 0) {
            *(float *)(g_lmapScene + 0x2c) = *(float *)(g_lmapScene + 0x2c) - temp_v12;
          }
        }
        else {
          temp_v2 = padButtonIsPressed(1);
          if (temp_v2 != 0) {
            DAT_005f1c48 = '\x01';
          }
        }
      }
      *(unsigned int *)(param_1 + 0xc0) = 0;
      *(unsigned int *)(param_1 + 200) = 0x3f800000;
      temp_v13 = 0x3f80000044bb8000;
      *(unsigned int *)(param_1 + 0xc4) = 0x3f800000;
      if (!temp_v5) {
        *(unsigned int *)(temp_v0 + 0xdc8) = 0;
        FUN_0050d8e4();
        temp_v12 = temp_v15 * 57.32484f - *(float *)(param_1 + 0x50);
        if (temp_v12 < temp_v10) {
          temp_v12 = temp_v12 + 360.0f;
        }
        if ((int)temp_v12 >= 0x43b40001) {
          temp_v12 = temp_v12 - 360.0f;
        }
        temp_v14 = 0.017453292f;
        *(float *)(g_lmapScene + 0x50) = -temp_v12;
        temp_v12 = -temp_v12 * 0.017453292f;
        FUN_001bc124();
        temp_v2 = g_lmapScene;
        *(float *)(g_lmapScene + 0x28) = *(float *)(g_lmapScene + 0x28) + temp_v12 * temp_v8;
        temp_v14 = *(float *)(temp_v2 + 0x50) * temp_v14;
        FUN_001bbf0c();
        temp_v2 = g_lmapScene;
        *(float *)(g_lmapScene + 0x30) = *(float *)(g_lmapScene + 0x30) + temp_v14 * temp_v8;
        *(unsigned int *)(param_1 + 0xc0) = 1;
        if (DAT_005f1c48 == '\0') {
          FUN_0025ef68(temp_v2 + 0x28,temp_v2 + 0x34,0);
        }
        DAT_005f1894 = DAT_005f1894 + (float)((unsigned long long)temp_v13 >> 0x20);
        if ((int)DAT_005f1894 >= 0x44bb8001) {
          DAT_005f1894 = (float)temp_v13;
        }
        temp_v8 = DAT_005f1898 + 0.05f;
        DAT_005f1898 = temp_v11;
        if ((int)temp_v8 < 0x420c0001) {
          DAT_005f1898 = temp_v8;
        }
      }
      else {
        if ((*(int *)(temp_v0 + 0xdcc) == 0) &&
           (temp_v2 = *(int *)(temp_v0 + 0xdc8) + 1, *(int *)(temp_v0 + 0xdc8) = temp_v2, temp_v2 >= 901)) {
          FUN_00295108(0);
          FUN_00294c28();
          FUN_002b80b8();
          *(unsigned int *)(temp_v0 + 0xdcc) = 0xe10;
          *(unsigned int *)(temp_v0 + 0xdc8) = 0;
        }
        temp_v2 = *(int *)(temp_v0 + 0xdec);
        temp_v3 = temp_v2 + 1;
        *(int *)(temp_v0 + 0xdec) = temp_v3;
        if (temp_v3 >= 0x1f) {
          *(int *)(temp_v0 + 0xdec) = temp_v2 - 0x1d;
          FUN_00408184(0x1d,1);
        }
        DAT_005f1894 = DAT_005f1894 + 0.2f;
        if ((int)DAT_005f1894 >= 0x44bb8001) {
          DAT_005f1894 = (float)temp_v13;
        }
      }
      temp_v2 = g_lmapScene;
      temp_v11 = (float)temp_v13;
      if (0 < DAT_005f189c) {
        DAT_005f189c = DAT_005f189c - 1;
      }
      puVar5 = (unsigned int *)(g_lmapScene + 0x40);
      *(float *)(g_lmapScene + 0x1c) =
           (*(float *)(g_lmapScene + 0x28) - *(float *)(g_lmapScene + 0x1c)) +
           *(float *)(g_lmapScene + 0x1c);
      *(float *)(temp_v2 + 0x20) =
           (*(float *)(temp_v2 + 0x2c) - *(float *)(temp_v2 + 0x20)) + *(float *)(temp_v2 + 0x20);
      temp_v8 = (*(float *)(temp_v2 + 0x30) - *(float *)(temp_v2 + 0x24)) + *(float *)(temp_v2 + 0x24);
      *(float *)(temp_v2 + 0x24) = temp_v8;
      *(unsigned int *)(temp_v2 + 0x4c) = *(unsigned int *)(temp_v2 + 0x50);
      temp_v1 = *(unsigned int *)(temp_v2 + 0x20);
      *puVar5 = *(unsigned int *)(temp_v2 + 0x1c);
      *(unsigned int *)(temp_v2 + 0x44) = temp_v1;
      *(float *)(temp_v2 + 0x48) = temp_v8;
      *(float *)(temp_v2 + 0x34) = temp_v7;
      *(int *)(temp_v2 + 0x38) = (int)temp_v9;
      *(int *)(temp_v2 + 0x3c) = (int)((unsigned long long)temp_v9 >> 0x20);
      temp_v2 = partyAnyMemberHasFlagBit(2,5);
      if ((temp_v2 != 0) && (!temp_v5)) {
        temp_v8 = temp_v7;
        distSpatial();
        temp_v12 = *(float *)(g_lmapScene + 0x160) - temp_v7;
        *(float *)(g_lmapScene + 0x160) = temp_v12;
        temp_v7 = temp_v8;
        if (temp_v12 < temp_v10) {
          FUN_004a01c8(2,5);
          *(unsigned int *)(g_lmapScene + 0x160) = 0x453b8000;
          FUN_00325998(0xf,0x1e0);
          FUN_003d4ed8(0x1000224);
        }
      }
      temp_v2 = (int)(short)*(unsigned int *)(param_1 + 0x48);
      FUN_0033f8a4();
      temp_v8 = temp_v7;
      if (temp_v2 != 0) {
        if ((!temp_v5) && (temp_v2 = gameDataFlagTestBit(0x85), temp_v8 = temp_v7, temp_v2 == 0)) {
          distSpatial();
          temp_v2 = g_lmapScene;
          temp_v7 = *(float *)(g_lmapScene + 0x15c) - temp_v7;
          *(float *)(g_lmapScene + 0x15c) = temp_v7;
          if ((temp_v7 < temp_v10) &&
             (*(unsigned int *)(temp_v2 + 0x15c) = 0x450ca000, temp_v2 = g_lmapMainState,
             *(int *)(g_lmapMainState + 0xcc) != 7)) {
            *(unsigned int *)(g_lmapMainState + 0xcc) = 7;
            *(unsigned int *)(temp_v2 + 0xd0) = 0;
            *(unsigned int *)(temp_v2 + 0xd4) = 0;
          }
        }
      }
      else {
        if (temp_v10 < *(float *)(g_lmapScene + 0x15c)) {
          distSpatial();
          *(float *)(g_lmapScene + 0x15c) = *(float *)(g_lmapScene + 0x15c) - temp_v7;
        }
        temp_v7 = *(float *)(g_lmapScene + 0x15c);
        if (*(float *)(g_lmapScene + 0x15c) <= temp_v10) {
          temp_v7 = temp_v10;
        }
        *(float *)(g_lmapScene + 0x15c) = temp_v7;
      }
      distSpatial();
      temp_v8 = temp_v8 * 0.5f;
      temp_v7 = *(float *)(temp_v0 + 0xde8) + temp_v8;
      *(float *)(temp_v0 + 0xde8) = temp_v7;
      if ((int)temp_v7 >= 0x47c35001) {
        *(float *)(temp_v0 + 0xde8) = temp_v7 - 100000.0f;
        FUN_00408184(0x12,1);
      }
      temp_v7 = *(float *)(temp_v0 + 0xdf0) + temp_v8;
      *(float *)(temp_v0 + 0xdf0) = temp_v7;
      if ((int)temp_v7 >= 0x44bb8001) {
        *(float *)(temp_v0 + 0xdf0) = temp_v7 - temp_v11;
        FUN_004a0524();
        FUN_004a08f0();
      }
      temp_v11 = *(float *)(temp_v0 + 0xdf8) + temp_v8;
      *(float *)(temp_v0 + 0xdf8) = temp_v11;
      if (*(int *)(temp_v0 + 0xdf4) == 0) {
        *(float *)(temp_v0 + 0xdf8) = temp_v10;
      }
      else if ((int)temp_v11 >= 0x476a6001) {
        *(float *)(temp_v0 + 0xdf8) = temp_v10;
        *(unsigned int *)(temp_v0 + 0xdf4) = 0;
        *(unsigned char *)(temp_v0 + 0xdfc) = 1;
        *(unsigned int *)(temp_v0 + 0x15b4) = 3;
      }
      temp_v8 = *(float *)(temp_v0 + 0x14ec) + temp_v8;
      *(float *)(temp_v0 + 0x14ec) = temp_v8;
      temp_v5 = *(int *)(temp_v0 + 0x14e8) != 0;
      if (temp_v5) {
        temp_v11 = 30000.0f;
        temp_v2 = (int)temp_v8 - 0x46ea6000;
      }
      else {
        *(float *)(temp_v0 + 0x14ec) = temp_v10;
        temp_v2 = 0;
        temp_v11 = 0.0f;
      }
      if ((temp_v5 && temp_v8 != temp_v11) && temp_v2 < 0 == (temp_v5 && SBORROW4((int)temp_v8,(int)temp_v11)))
      {
        *(float *)(temp_v0 + 0x14ec) = temp_v10;
        *(int *)(temp_v0 + 0x14e8) = 0;
        *(unsigned int *)(temp_v0 + 0x14f0) = 1;
        return;
      }
    }
  }
  return;
}

} /* extern "C" */
