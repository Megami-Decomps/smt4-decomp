/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ec950` (_code @ 0x4ec950, 0x418 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysMemClear(int, int);
int FUN_003e8bb0(unsigned char [2], int, unsigned int);
int gameFlagSetValue(int, int, int);
int FUN_004abdfc(unsigned int, int, int);
int btlUnitSetParam(...);
int FUN_004e5b5c(int *);
int FUN_004e7c04(int *, int);
int FUN_004e8454(int *);
int FUN_004e9f74(int *, int, int);
int FUN_004eb838(...);

/* stack frame of param_2: 2 slot(s), 3 byte(s) */
typedef struct {
    unsigned char sp34; /* 0x34: local_34 */
    unsigned short sp4E; /* 0x4e: local_4e */
} param_2_stack;

extern unsigned int g_btlAiScript; /* 0x571130 */
extern int g_btlScriptUnit; /* 0x57113c */
extern unsigned int DAT_00571210; /* 0x571210 */
extern unsigned int DAT_00571214; /* 0x571214 */
extern unsigned int DAT_005712b8; /* 0x5712b8 */
extern unsigned int DAT_005712bc; /* 0x5712bc */
extern unsigned int DAT_005712c0; /* 0x5712c0 */
extern unsigned int DAT_005712c4; /* 0x5712c4 */
extern unsigned int g_btlUiBlock; /* 0x57a9c8 */

extern int jobIsValid(unsigned int);
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: sysMemClear. */
extern int stateAtCIs4(unsigned int);
extern int btlScriptUnitHasFlags(int);
extern int FUN_003e84fc(int);
/* Supplied declaration required: FUN_003e8bb0. */
extern int FUN_003eb1cc(int);
extern int FUN_003ef738(int);
extern int FUN_003efb18(int);
extern unsigned short FUN_003f0bd8(int, unsigned int);
extern unsigned short FUN_003f1a9c(int, unsigned int);
extern unsigned short FUN_003f217c(int);
extern int FUN_003f23fc(int);
extern int FUN_003f25e8(int);
/* Supplied declaration required: gameFlagSetValue. */
/* Supplied declaration required: FUN_004abdfc. */
extern int FUN_004c87e0(void);
/* Supplied declaration required: btlUnitSetParam. */
/* Supplied declaration required: FUN_004e5b5c. */
/* Supplied declaration required: FUN_004e7c04. */
/* Supplied declaration required: FUN_004e8454. */
/* Supplied declaration required: FUN_004e9f74. */
/* Supplied declaration required: FUN_004eb838. */


unsigned int FUN_004ec950(int *param_1,int param_2)

{
/* irregular: 10 native warning(s); review required */
  short temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7 [2];
  short temp_v8;
  char temp_v9;
  
  temp_v2 = btlScriptUnitHasFlags(*param_1);
  if ((((temp_v2 != 0) || (temp_v2 = FUN_004c87e0(), temp_v2 == 0)) &&
      (temp_v2 = stateAtCIs4(g_btlAiScript), temp_v2 != 0)) &&
     (temp_v2 = jobIsValid(*(unsigned int *)(*param_1 + 0x80)), temp_v2 == 0)) {
    temp_v3 = *(unsigned int *)(*param_1 + 0x45a0);
    temp_v5 = *(unsigned int *)(*param_1 + 0x45a4);
    if (((DAT_00571214 & temp_v5) != 0 || (DAT_00571210 & temp_v3) != 0) &&
       ((temp_v3 & DAT_005712c0) == 0 && (temp_v5 & DAT_005712c4) == 0)) {
      temp_v2 = *(int *)(param_2 + 0x28);
      temp_v0 = *(short *)(temp_v2 + 0x1be);
      temp_v6 = temp_v0 == 0;
      if (temp_v6) {
        temp_v0 = *(short *)(temp_v2 + 0x1c0);
      }
      if (temp_v6 && temp_v0 == 0) {
        *(unsigned short *)(temp_v2 + 0x1be) = 1;
        FUN_003e8bb0(temp_v7,*param_1,*(unsigned int *)(param_2 + 0x20));
        if (temp_v8 == 1) {
          *(unsigned short *)(temp_v2 + 0x1c0) = 2;
        }
        else {
          *(unsigned short *)(temp_v2 + 0x1c0) = 1;
        }
        FUN_004e7c04(param_1,0);
        if (temp_v9 != '\0') {
          if (temp_v9 != '\x01') {
            if (temp_v9 == '\x02') {
              FUN_004e9f74(param_1,0,2);
            }
          }
          else {
            FUN_004e9f74(param_1,0,1);
          }
        }
        else {
          FUN_004e5b5c(param_1);
        }
      }
      temp_v2 = gameFlagIsSet(0x596);
      if (temp_v2 != 0) {
        *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x1be) = 2;
        *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x1c0) = 0x9b;
        FUN_004e8454(param_1);
        sysMemClear(param_2 + 0x38,0x85);
        btlUnitSetParam(param_1,2,0,1);
        gameFlagSetValue(0x596,0,1);
      }
      temp_v2 = *param_1;
      temp_v3 = temp_v2 + 0x4c00;
      temp_v6 = *(short *)(temp_v2 + 0x4c74) == 0;
      if (temp_v6) {
        temp_v3 = (unsigned int)*(unsigned short *)(temp_v2 + 0x4c76);
      }
      if (temp_v6 && temp_v3 == 0) {
        *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x1be) = 0x10;
        *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x1c0) = 0;
        sysMemClear(param_2 + 0x38,0x85);
      }
    }
    if ((*(unsigned int *)(*param_1 + 0x45a4) & DAT_005712bc) != 0 ||
        (DAT_005712b8 & *(unsigned int *)(*param_1 + 0x45a0)) != 0) {
      sysMemClear(param_2 + 0x38,0x85);
      FUN_004e8454(param_1);
      temp_v1 = FUN_003f0bd8(*param_1,0);
      *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x1be) = 2;
      *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x1c0) = temp_v1;
      btlUnitSetParam(param_1,1,0);
    }
    if ((*(unsigned int *)(*param_1 + 0x45a4) & DAT_005712c4) != 0 ||
        (*(unsigned int *)(*param_1 + 0x45a0) & DAT_005712c0) != 0) {
      sysMemClear(param_2 + 0x38,0x85);
      FUN_004e8454(param_1);
      temp_v1 = FUN_003f1a9c(*param_1,0);
      *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x1be) = 2;
      *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x1c0) = temp_v1;
      btlUnitSetParam(param_1,1,0);
    }
    temp_v2 = FUN_003efb18(*param_1);
    if (temp_v2 != 0) {
      *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x1be) = 2;
      temp_v1 = FUN_003f217c(*param_1);
      *(unsigned short *)(*(int *)(param_2 + 0x28) + 0x1c0) = temp_v1;
      btlUnitSetParam(param_1,1,0);
    }
    temp_v2 = FUN_003ef738(*param_1);
    temp_v4 = FUN_003f23fc(*param_1);
    if ((((temp_v4 != 0) || (temp_v4 = FUN_003e84fc(*param_1), temp_v4 != 0)) ||
        (temp_v4 = FUN_003f25e8(*param_1), temp_v4 != 0)) &&
       (((temp_v4 = btlScriptUnitHasFlags(*param_1), temp_v4 == 0 && (temp_v4 = FUN_003eb1cc(*param_1), temp_v4 == 0)
         ) && (temp_v2 != 0)))) {
      FUN_004abdfc(g_btlUiBlock,(int)(short)temp_v2,1);
      *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 4;
    }
    else {
      FUN_004eb838(param_1,param_2);
    }
    return 1;
  }
  return 0;
}

} /* extern "C" */
