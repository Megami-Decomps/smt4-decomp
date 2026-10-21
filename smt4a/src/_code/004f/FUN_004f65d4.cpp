/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f65d4` (_code @ 0x4f65d4, 0x4bc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "battle/btlMain.h"

extern "C" {

int FUN_001a79e8(...);
int FUN_003fd7c0(...);
int handleRegistryRegisterObject(...);

int asdOperatorNew(void);
int FUN_00178b04(...);
int FUN_003478dc(unsigned int, char *);
int FUN_003afd30(void);
int pairSourceGet(unsigned int, unsigned int *, int);
int FUN_003d8f24(unsigned int);
int FUN_003fd924(...);
int FUN_0040619c(...);
int FUN_0040a884(void);
int FUN_00420e4c(unsigned int, float *);
int FUN_00420f08(...);
int FUN_00420fc0(...);
int FUN_00421078(unsigned int);
int deadEffectStartLoad(void);
int FUN_004f913c(int);
int FUN_004fa15c(int);
void btlUpdateAttackAnimation(BtlAuxA *);
int FUN_004fa414(...);
int FUN_004fa64c(int);
int FUN_004fb43c(...);
int ownerSlotSetText(...);
int rt_memcpy_w(float *, int, int);

/* stack frame of param_1: 5 slot(s), 17 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned char sp28; /* 0x28: local_28 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
} param_1_stack;

extern unsigned int g_handleRegistry; /* 0x56fcc0 */
extern int g_btlStageModel; /* 0x57a4f8 */

/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_001a79e8. */
extern int rangeIsValid(void);
extern unsigned int keyedRecordRegisterName(int);
/* Supplied declaration required: FUN_003478dc. */
/* Supplied declaration required: FUN_003afd30. */
extern int FUN_003c5d8c(void);
/* Supplied declaration required: pairSourceGet. */
/* Supplied declaration required: FUN_003d8f24. */
/* Supplied declaration required: FUN_003fd7c0. */
/* Supplied declaration required: FUN_003fd924. */
extern unsigned int FUN_003fdadc(void);
/* Supplied declaration required: FUN_0040619c. */
/* Supplied declaration required: FUN_0040a884. */
extern unsigned int modelListInit(void);
/* Supplied declaration required: handleRegistryRegisterObject. */
/* Supplied declaration required: FUN_00420e4c. */
/* Supplied declaration required: FUN_00420f08. */
/* Supplied declaration required: FUN_00420fc0. */
/* Supplied declaration required: FUN_00421078. */
/* Supplied declaration required: deadEffectStartLoad. */
extern unsigned int FUN_004218dc(void);
/* Supplied declaration required: FUN_004f913c. */
/* Supplied declaration required: FUN_004fa15c. */
/* Supplied declaration required: FUN_004fa414. */
/* Supplied declaration required: FUN_004fa64c. */
/* Supplied declaration required: FUN_004fb43c. */
/* Supplied declaration required: ownerSlotSetText. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_004f65d4(int param_1)

{
/* irregular: 3 goto(s); irregular input(s): in_d8; 26 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  char *pcVar8;
  unsigned char temp_v7;
  unsigned char temp_v8;
  unsigned int temp_v9;
  unsigned long long in_d8;
  float temp_v10;
  float temp_v11;
  unsigned int temp_v12;
  unsigned long long temp_v13;
  unsigned long long uStack_20;
  
  temp_v9 = 0;
  uStack_20 = in_d8;
  if (*(int *)(param_1 + 0x33cc) != 0) {
    temp_v4 = rangeIsValid();
    if (temp_v4 != 0) {
      *(unsigned int *)(param_1 + 0x33d8) = temp_v9;
      *(unsigned int *)(param_1 + 0x33d4) = temp_v9;
    }
    else {
      FUN_003d8f24(*(unsigned int *)(param_1 + 0x33cc));
      pairSourceGet(*(unsigned int *)(param_1 + 0x33cc),(unsigned int *)(param_1 + 0x33d4),
                   param_1 + 0x33d8);
    }
    if (*(int *)(param_1 + 0x33c0) != 0) {
      temp_v4 = *(int *)(param_1 + 0x33bc);
      temp_v12 = *(unsigned int *)(temp_v4 + 0x14);
      temp_v10 = *(float *)(temp_v4 + 0xc) + *(float *)(param_1 + 0x33d4);
      temp_v11 = *(float *)(temp_v4 + 0x10) + *(float *)(param_1 + 0x33d8);
      FUN_00420e4c(*(unsigned int *)(param_1 + 0x33c0),&temp_v10);
    }
  }
  if (*(int *)(param_1 + 0x33d0) != 0) {
    temp_v4 = rangeIsValid();
    if (temp_v4 != 0) {
      *(unsigned int *)(param_1 + 0x33e0) = temp_v9;
      *(unsigned int *)(param_1 + 0x33dc) = temp_v9;
    }
    else {
      FUN_003d8f24(*(unsigned int *)(param_1 + 0x33d0));
      pairSourceGet(*(unsigned int *)(param_1 + 0x33d0),(unsigned int *)(param_1 + 0x33dc),
                   param_1 + 0x33e0);
    }
    temp_v4 = g_btlStageModel;
    *(unsigned int *)(g_btlStageModel + 0xb0) = *(unsigned int *)(param_1 + 0x33d4);
    *(unsigned int *)(temp_v4 + 0xb4) = *(unsigned int *)(param_1 + 0x33d8);
  }
  switch(*(unsigned char *)(param_1 + 0x33b4)) {
  case 1:
    FUN_004f913c(param_1);
    *(unsigned char *)(param_1 + 0x33b4) = 2;
    break;
  case 2:
    temp_v4 = 0;
    do {
      rt_memcpy_w(&temp_v10,param_1 + temp_v4 * 0x8c + 0x33e4,0x8c);
      if (((temp_v13 & 1) != 0) && (temp_v11 == 0.0f)) goto LAB_004f6a68;
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 3);
    temp_v4 = 0;
    do {
      temp_v5 = param_1 + temp_v4 * 0x8c;
      pcVar8 = *(char **)(temp_v5 + 0x33e8);
      temp_v0 = *pcVar8;
      temp_v7 = temp_v0 == 'V';
      if (temp_v7) {
        temp_v0 = pcVar8[1];
      }
      temp_v8 = temp_v7 && temp_v0 == 'E';
      if (temp_v7 && temp_v0 == 'E') {
        temp_v8 = pcVar8[2] == 'R';
      }
      if (temp_v8) {
        temp_v9 = keyedRecordRegisterName(temp_v5 + 0x33ec);
        *(char *)(temp_v5 + 0x33e4) = (char)temp_v9;
        FUN_003478dc(temp_v9,pcVar8);
        *(char *)(temp_v5 + 0x33e4) = (char)temp_v9;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 3);
    FUN_003afd30();
    *(unsigned char *)(param_1 + 0x33b4) = 4;
    break;
  case 3:
    temp_v4 = 0;
    do {
      temp_v5 = param_1 + temp_v4 * 0x8c;
      pcVar8 = *(char **)(temp_v5 + 0x33e8);
      temp_v0 = *pcVar8;
      temp_v7 = temp_v0 == 'V';
      if (temp_v7) {
        temp_v0 = pcVar8[1];
      }
      temp_v8 = temp_v7 && temp_v0 == 'E';
      if (temp_v7 && temp_v0 == 'E') {
        temp_v8 = pcVar8[2] == 'R';
      }
      if (temp_v8) {
        temp_v9 = keyedRecordRegisterName(temp_v5 + 0x33ec);
        *(char *)(temp_v5 + 0x33e4) = (char)temp_v9;
        FUN_003478dc(temp_v9,pcVar8);
        *(char *)(temp_v5 + 0x33e4) = (char)temp_v9;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 3);
    FUN_003afd30();
    *(unsigned char *)(param_1 + 0x33b4) = 4;
    break;
  case 4:
    temp_v4 = FUN_003c5d8c();
    if (temp_v4 != 0) {
      temp_v4 = *(int *)(param_1 + 0x33c0);
      if (temp_v4 != 0) goto code_r0x0042138c;
      temp_v4 = 0x44;
      asdOperatorNew();
      temp_v9 = 0;
      if (temp_v4 != 0) {
        temp_v9 = FUN_004218dc();
      }
      *(unsigned int *)(param_1 + 0x33c0) = temp_v9;
      deadEffectStartLoad();
      *(unsigned char *)(param_1 + 0x33b4) = 6;
    }
    break;
  case 5:
    temp_v4 = *(int *)(param_1 + 0x33c0);
    if (temp_v4 != 0) goto code_r0x0042138c;
    temp_v4 = 0x44;
    asdOperatorNew();
    temp_v9 = 0;
    if (temp_v4 != 0) {
      temp_v9 = FUN_004218dc();
    }
    *(unsigned int *)(param_1 + 0x33c0) = temp_v9;
    deadEffectStartLoad();
    *(unsigned char *)(param_1 + 0x33b4) = 6;
    break;
  case 6:
    FUN_004fa64c(param_1);
    break;
  case 7:
    FUN_00421078(*(unsigned int *)(param_1 + 0x33c0));
    *(unsigned char *)(param_1 + 0x33b4) = 8;
    FUN_004fa15c(param_1);
    temp_v1 = *(short *)(*(int *)(param_1 + 0x33c8) + 4);
    temp_v10 = 0.0f;
    temp_v11 = 0.0f;
    temp_v12 = 0;
    if (!(temp_v1 == 0xf || temp_v1 == 0x10)) {
      FUN_004fb43c(0,0,0x1000133,0);
    }
    else {
      FUN_004fb43c(0,0,0x1000131,0);
    }
    break;
  case 8:
    FUN_004fa15c(param_1);
    break;
  case 9:
    FUN_00420fc0(*(unsigned int *)(param_1 + 0x33c0));
    *(unsigned char *)(param_1 + 0x33b4) = 10;
    btlUpdateAttackAnimation((BtlAuxA *)param_1);
    break;
  case 10:
    btlUpdateAttackAnimation((BtlAuxA *)param_1);
    break;
  case 0xb:
    FUN_00420f08(*(unsigned int *)(param_1 + 0x33c0));
    *(unsigned char *)(param_1 + 0x33b4) = 0xc;
    FUN_004fa414(param_1);
    temp_v1 = *(short *)(*(int *)(param_1 + 0x33c8) + 4);
    temp_v10 = 0.0f;
    temp_v11 = 0.0f;
    temp_v12 = 0;
    if (!(temp_v1 == 0xf || temp_v1 == 0x10)) {
      FUN_004fb43c(0,0,0x1000134,0);
    }
    else {
      FUN_004fb43c(0,0,0x1000132,0);
    }
    break;
  case 0xc:
    FUN_004fa414(param_1);
  }
LAB_004f6a68:
  temp_v4 = *(int *)(param_1 + 0x33c0);
  if (temp_v4 == 0) {
    return;
  }
code_r0x0042138c:
  temp_v13 = uStack_20;
  switch(*(unsigned int *)(temp_v4 + 0x2c)) {
  case 1:
    if (*(int *)(temp_v4 + 0x24) != 0) {
      temp_v5 = 0x20;
      FUN_00178b04(0x20,
                   "c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\EnemyDraw\\DeadEffectModelChange.cpp",
                   0x451);
      temp_v9 = 0;
      if (temp_v5 != 0) {
        temp_v9 = modelListInit();
      }
      *(unsigned int *)(temp_v4 + 8) = temp_v9;
      FUN_0040a884();
      temp_v5 = 0;
      temp_v6 = *(int *)(*(int *)(*(int *)(temp_v4 + 8) + 8) + 0x10);
      if (0 < temp_v6) {
        do {
          temp_v2 = *(int *)(*(int *)(temp_v4 + 8) + 8);
          FUN_0040619c(temp_v2,temp_v5);
          if (temp_v2 != 0) {
            temp_v9 = FUN_003fdadc();
            temp_v3 = temp_v2;
            ownerSlotSetText(temp_v2,temp_v9);
            if (temp_v3 != 0xffff) {
              FUN_003fd924(temp_v2,temp_v3,2);
            }
            temp_v3 = temp_v2;
            FUN_001a79e8(temp_v2,temp_v9);
            if (temp_v3 != 0xffff) {
              FUN_003fd7c0(temp_v2,temp_v3,2);
            }
            handleRegistryRegisterObject(g_handleRegistry,temp_v2);
          }
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < temp_v6);
      }
      if (*(int *)(temp_v4 + 8) != 0) {
        temp_v5 = 0;
        temp_v6 = *(int *)(*(int *)(*(int *)(temp_v4 + 8) + 8) + 0x10);
        if (0 < temp_v6) {
          do {
            temp_v2 = *(int *)(*(int *)(temp_v4 + 8) + 8);
            FUN_0040619c(temp_v2,temp_v5);
            if (temp_v2 != 0) {
              *(unsigned int *)(temp_v2 + 4) = *(unsigned int *)(temp_v2 + 4) | 3;
            }
            temp_v5 = temp_v5 + 1;
          } while (temp_v5 < temp_v6);
        }
      }
      *(unsigned int *)(temp_v4 + 0x2c) = 2;
    }
  }
  return;
}

} /* extern "C" */
