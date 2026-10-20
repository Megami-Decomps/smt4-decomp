/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033b100` (_code @ 0x33b100, 0x694 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001bbf0c(void);
int FUN_001bc124(void);
int FUN_002b5cb4(void);
int FUN_0032714c(void);
int FUN_00352bc4(void);
int FUN_00367fac(void);
int FUN_00368374(...);
int FUN_00379310(int);
int FUN_00379344(int);
int FUN_00384830(void);
int FUN_003856f8(int);
int FUN_00385798(int);
int FUN_003d4ed8(unsigned int);
int countersAddSaturating(int, int);
int SBORROW4(int, int);
int VectorSignedToFloat(...);

extern int g_lmapScene; /* 0x581288 */
extern int g_gameState; /* 0x5f15fc */
extern signed char DAT_005f17ac; /* 0x5f17ac */
extern float DAT_005f17b0; /* 0x5f17b0 */
extern short DAT_005f17c2; /* 0x5f17c2 */
extern short DAT_005f17c4; /* 0x5f17c4 */
extern unsigned short DAT_005f17c6; /* 0x5f17c6 */
extern signed char DAT_005f17c9; /* 0x5f17c9 */
extern unsigned int DAT_005f17d8; /* 0x5f17d8 */
extern float DAT_005f17dc; /* 0x5f17dc */
extern unsigned int DAT_005f17e0; /* 0x5f17e0 */
extern unsigned int DAT_005f17e4; /* 0x5f17e4 */
extern unsigned int DAT_005f18fc; /* 0x5f18fc */
extern unsigned int DAT_005f19c4; /* 0x5f19c4 */
extern signed char DAT_005f19d4; /* 0x5f19d4 */
extern float DAT_005f19d8; /* 0x5f19d8 */
extern unsigned short DAT_005f19e8; /* 0x5f19e8 */

/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int gameFlagsGetBlock(void);
extern int gameGetPlayerData(void);
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
extern unsigned int FUN_00261424(void);
/* Supplied declaration required: FUN_002b5cb4. */
/* Supplied declaration required: FUN_0032714c. */
/* Supplied declaration required: FUN_00352bc4. */
extern int FUN_00367f98(void);
/* Supplied declaration required: FUN_00367fac. */
/* Supplied declaration required: FUN_00368374. */
extern int FUN_0036d984(int, unsigned int *, unsigned int);
/* Supplied declaration required: FUN_00379310. */
/* Supplied declaration required: FUN_00379344. */
/* Supplied declaration required: FUN_00384830. */
/* Supplied declaration required: FUN_003856f8. */
/* Supplied declaration required: FUN_00385798. */
extern int FUN_003d21dc(void);
/* Supplied declaration required: FUN_003d4ed8. */
extern int gameDataFlagTestBit(unsigned int);
/* Supplied declaration required: countersAddSaturating. */


/* WARNING: Type propagation algorithm not settling */

unsigned int FUN_0033b100(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 18 native warning(s); review required */
  unsigned int temp_v0;
  short temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int *puVar7;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned char temp_v9;
  unsigned int in_fpscr;
  unsigned int temp_v10;
  unsigned int temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  
  temp_v3 = gameFlagsGetBlock();
  temp_v4 = gameGetPlayerData();
  temp_v5 = gameFlagIsSet(0x300);
  if ((((temp_v5 != 0) || (temp_v5 = gameFlagIsSet(0x301), temp_v5 != 0)) &&
      (g_gameState != 0x29 && g_gameState != 0x2a)) &&
     ((g_gameState != 0x2b && g_gameState != 0x2c &&
      ((g_gameState != 0x2d && g_gameState != 0x2e) && g_gameState != 0x2f)))) {
    return 0;
  }
  puVar7 = &DAT_005f18fc;
  temp_v14 = 110.0f;
  if (DAT_005f19d4 != '\0') {
    puVar7 = (unsigned int *)(unsigned int)DAT_005f19e8;
  }
  if (DAT_005f19d4 != '\0' && puVar7 != (unsigned int *)0x0) {
    temp_v12 = DAT_005f19d8;
    FUN_002b5cb4();
    temp_v13 = *(float *)(temp_v3 + 0x1528);
    temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v13 < temp_v12) << 0x1f) |
            ((unsigned int)(temp_v13 == temp_v12) << 0x1e);
    in_fpscr = temp_v0 | ((unsigned int)((temp_v13 != temp_v13) || (temp_v12 != temp_v12)) << 0x1c);
    temp_v2 = (unsigned char)(temp_v0 >> 0x18);
    if (!(unsigned char)((temp_v2 >> 6) & 1) && temp_v2 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
      temp_v5 = FUN_0036d984(param_1 + 0x20,(unsigned int *)&DAT_005f19d8,0);
      if (temp_v5 != -1) {
        return 0;
      }
      temp_v13 = DAT_005f19d8;
      FUN_00384830();
      temp_v5 = FUN_00367f98();
      if (temp_v5 != 3) {
        temp_v5 = FUN_00367f98();
        if (temp_v5 == 6) {
          temp_v9 = SBORROW4((int)temp_v12,0x447a0000);
          temp_v5 = (int)temp_v12 - 0x447a0000;
          if ((int)temp_v12 < 0x447a0000) {
            temp_v9 = SBORROW4((int)temp_v13,0x42a00000);
            temp_v5 = (int)temp_v13 - 0x42a00000;
          }
          if (temp_v5 < 0 != temp_v9) {
            temp_v5 = param_1 + 0x20;
            FUN_00367fac();
            if (temp_v5 != 0) {
              FUN_0032714c();
            }
          }
        }
      }
      else if (((int)temp_v12 < 0x43fa0000) && ((int)temp_v13 < 0x428c0000)) {
        temp_v5 = param_1 + 0x20;
        FUN_00367fac();
        if (temp_v5 != 0) {
          FUN_0032714c();
        }
      }
      if (((((int)temp_v12 < 0x43480000) && (temp_v5 = FUN_00367f98(), temp_v5 != 8)) &&
          (temp_v5 = FUN_00367f98(), temp_v5 != 0xb)) && (temp_v5 = FUN_00367f98(), temp_v5 != 0xf)) {
        temp_v3 = FUN_00367f98();
        if (temp_v3 == 3) {
          temp_v6 = 6;
        }
        else {
          temp_v6 = 5;
        }
        FUN_00368374(temp_v6);
        if (*(char *)(param_1 + 0x50) != '\0') {
          FUN_00368374(8);
          FUN_00379344(5);
          FUN_00385798(5);
          FUN_003856f8(1);
          FUN_00379310(2);
          return 0;
        }
        if (((*(int *)(param_1 + 0x17c) == 0) || (*(int *)(param_1 + 0x17c) >= 11)) ||
           ((int)(unsigned int)*(unsigned short *)(temp_v4 + 0x62) <= (int)*(short *)(param_1 + 0x174))) {
          FUN_00368374(8);
          FUN_00379344(5);
          FUN_00385798(5);
          FUN_003856f8(1);
          FUN_00379310(2);
          return 0;
        }
        if (DAT_005f17c4 != 0) {
          return 1;
        }
        DAT_005f17c4 = 8;
        DAT_005f17c6 = (unsigned short)*(unsigned int *)(param_1 + 4);
        temp_v6 = *(unsigned int *)(param_1 + 0x20);
        FUN_00352bc4();
        DAT_005f17d8 = *(unsigned int *)(param_1 + 0x20);
        DAT_005f17dc = *(float *)(param_1 + 0x24) + temp_v14;
        DAT_005f17e0 = *(unsigned int *)(param_1 + 0x28);
        DAT_005f17c9 = '\0';
        temp_v11 = *(unsigned int *)(param_1 + 0x20);
        DAT_005f17e4 = temp_v6;
        FUN_00352bc4();
        *(unsigned int *)(param_1 + 0x2c) = temp_v11;
        if (*(char *)(param_1 + 0x50) == '\0') {
          if (((*(int *)(param_1 + 0x17c) != 0) && (10 >= *(int *)(param_1 + 0x17c))) &&
             ((int)(unsigned int)*(unsigned short *)(temp_v4 + 0x62) > (int)*(short *)(param_1 + 0x174))) {
            countersAddSaturating(0x18,1);
            DAT_005f17c9 = '\x01';
          }
          else {
            DAT_005f17c9 = '\0';
          }
        }
        if (DAT_005f17c9 == '\0') {
          temp_v6 = 0x1000223;
        }
        else {
          temp_v6 = 0x1000225;
        }
        FUN_003d4ed8(temp_v6);
        return 1;
      }
    }
  }
  temp_v1 = 0;
  if (DAT_005f17ac != '\0') {
    temp_v1 = DAT_005f17c2;
  }
  if (DAT_005f17ac == '\0' || temp_v1 == 0) {
    DAT_005f19c4 = 2;
    return 0;
  }
  if ((*(int *)(temp_v3 + 0x109c) != 0) && (*(char *)(g_lmapScene + 0x224) != '\0')) {
    return 0;
  }
  temp_v12 = DAT_005f17b0;
  FUN_002b5cb4();
  temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(350.0f < temp_v12) << 0x1f) |
          ((unsigned int)(temp_v12 == 350.0f) << 0x1e);
  temp_v10 = temp_v0 | ((unsigned int)(temp_v12 != temp_v12) << 0x1c);
  temp_v2 = (unsigned char)(temp_v0 >> 0x18);
  if (((unsigned char)((temp_v2 >> 6) & 1) || temp_v2 >> 7 != ((unsigned char)(temp_v10 >> 0x1c) & 1)) ||
     ((temp_v13 = DAT_005f17b0, FUN_00384830(), (int)temp_v13 >= 0x42a00000 &&
      (((int)temp_v13 >= 0x43250000 || ((int)temp_v12 >= 0x43160000)))))) {
    temp_v5 = *(int *)(param_1 + 0x17c);
    temp_v9 = temp_v5 == 6 || temp_v5 == 0x10;
    if (temp_v5 == 6 || temp_v5 == 0x10) {
      temp_v9 = *(int *)(param_1 + 0x30) == 4;
    }
    if (!temp_v9) {
      DAT_005f19c4 = 2;
      return 0;
    }
    FUN_001bc124();
    FUN_001bbf0c();
    temp_v12 = DAT_005f17b0;
    FUN_002b5cb4();
    if ((int)temp_v12 >= 0x43af0000) {
      DAT_005f19c4 = 2;
      return 0;
    }
    temp_v13 = DAT_005f17b0;
    FUN_00384830();
    if ((int)temp_v13 >= 0x42a00000) {
      if ((int)temp_v13 >= 0x43250000) {
        DAT_005f19c4 = 2;
        return 0;
      }
      if ((int)temp_v12 >= 0x43160000) {
        DAT_005f19c4 = 2;
        return 0;
      }
    }
  }
  if (DAT_005f17c4 != 0) {
    return 1;
  }
  DAT_005f17c4 = 8;
  DAT_005f17c6 = (unsigned short)*(unsigned int *)(param_1 + 4);
  temp_v6 = *(unsigned int *)(param_1 + 0x20);
  FUN_00352bc4();
  DAT_005f17d8 = *(unsigned int *)(param_1 + 0x20);
  DAT_005f17dc = *(float *)(param_1 + 0x24) + temp_v14;
  DAT_005f17e0 = *(unsigned int *)(param_1 + 0x28);
  DAT_005f17c9 = '\0';
  temp_v11 = *(unsigned int *)(param_1 + 0x20);
  DAT_005f17e4 = temp_v6;
  FUN_00352bc4();
  *(unsigned int *)(param_1 + 0x2c) = temp_v11;
  if (*(char *)(param_1 + 0x50) == '\0') {
    temp_v8 = 0;
    temp_v5 = gameDataFlagTestBit(0x8b);
    temp_v1 = *(short *)(param_1 + 0x174);
    if (temp_v5 != 0) {
      temp_v8 = 9;
    }
    temp_v7 = FUN_003d21dc();
    temp_v5 = (int)temp_v1;
    if (temp_v7 != 0) {
      temp_v6 = FUN_00261424();
      temp_v14 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(temp_v10 >> 0x16) & 3);
      temp_v12 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x174),
                                          (unsigned char)(temp_v10 >> 0x16) & 3);
      temp_v5 = (int)(temp_v12 * (temp_v14 * 0.55f + 1.0f) + temp_v14 * temp_v14 * 5.0f);
      if (temp_v5 >= 0x3e7) {
        temp_v5 = 999;
      }
    }
    if (*(int *)(temp_v3 + 0xdf4) != 0) {
      if ((*(int *)(param_1 + 0x17c) == 0) || (*(int *)(param_1 + 0x17c) >= 11)) {
        DAT_005f17c9 = '\0';
      }
      else if (temp_v5 < (int)((unsigned int)*(unsigned short *)(temp_v4 + 0x62) + temp_v8)) {
        DAT_005f17c9 = '\x01';
      }
      else {
        DAT_005f17c9 = '\0';
      }
    }
  }
  if (DAT_005f17c9 == '\0') {
    temp_v6 = 0x1000223;
  }
  else {
    temp_v6 = 0x1000225;
  }
  FUN_003d4ed8(temp_v6);
  return 1;
}

} /* extern "C" */
