/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004b6bc4` (_code @ 0x4b6bc4, 0x3e8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(unsigned char [32], unsigned char *, int);
int FUN_001b4a74(int);
int scrScriptProcessStartEntry(unsigned int, unsigned int);
int sysMemClear(char [256], int);
int FUN_0046eb24(int, int);
int contentEntryGetFromFilesByKind(int, int, int);
int FUN_004b75d0(...);
int FUN_004b9ff4(...);
int menu4CScrollToKind(int, int);
int FUN_004baa7c(int, int, int);
int menu4CReset(...);
int FUN_004bb064(int);
int dataTable33Type0Count(void);
int dataTable33GroupCount(unsigned char *, unsigned int);
int VectorSignedToFloat(...);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp68; /* 0x68: local_68 */
} param_3_stack;

extern unsigned char DAT_005328fc; /* 0x5328fc */
extern int g_aocSystem; /* 0x570280 */
extern int DAT_0058800c; /* 0x58800c */
extern unsigned char g_gameState; /* 0x5f15fc */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: textFormatBuffer. */
extern int gameFlagIsSet(void);
/* Supplied declaration required: FUN_001b4a74. */
extern int FUN_00224880(unsigned int);
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: sysMemClear. */
extern int gameStateIsFlagSetAndLarge(void);
extern unsigned int tableGroupFindEntryIndex(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_0046eb24. */
/* Supplied declaration required: contentEntryGetFromFilesByKind. */
/* Supplied declaration required: FUN_004b75d0. */
/* Supplied declaration required: FUN_004b9ff4. */
extern int menu4CGetCurrentEntry(int);
/* Supplied declaration required: menu4CScrollToKind. */
/* Supplied declaration required: FUN_004baa7c. */
/* Supplied declaration required: menu4CReset. */
/* Supplied declaration required: FUN_004bb064. */
extern int dataTable33Type0GetEntry(unsigned char *, unsigned int);
extern int dataTable33GetEntryByGroup(unsigned char *, unsigned int, unsigned int);
/* Supplied declaration required: dataTable33Type0Count. */
/* Supplied declaration required: dataTable33GroupCount. */


void FUN_004b6bc4(int param_1,int param_2,int param_3)

{
/* irregular: 2 goto(s); irregular input(s): in_fpscr; 15 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int in_fpscr;
  float temp_v6;
  float temp_v7;
  char acStack_168 [256];
  unsigned int temp_v8;
  unsigned char temp_v9 [32];
  unsigned char temp_v10 [20];
  
  temp_v0 = dataTable33Type0GetEntry(temp_v10,0);
  puVar2 = temp_v10;
  dataTable33Type0Count();
  temp_v1 = 0;
  *(unsigned int *)(param_1 + 0x1118) = 0;
  if (0 < (int)puVar2) {
    do {
      if (*(char *)(temp_v0 + temp_v1 * 0x88) == param_2) {
        *(int *)(param_1 + 0x1118) = temp_v0 + temp_v1 * 0x88;
        break;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < (int)puVar2);
  }
  FUN_001b4a74(param_1 + 0x9c);
  if (param_3 != -1) {
    *(int *)(param_1 + 0x1120) = param_3;
  }
  else {
    *(int *)(param_1 + 0x1120) = (int)*(char *)(*(int *)(param_1 + 0x1118) + 1);
  }
  temp_v0 = dataTable33GetEntryByGroup(temp_v10,*(unsigned int *)(param_1 + 0x1120),0);
  puVar2 = temp_v10;
  dataTable33GroupCount(puVar2,*(unsigned int *)(param_1 + 0x1120));
  sysMemClear(acStack_168,0x100);
  temp_v1 = 0;
  if (temp_v1 < (int)puVar2) {
    do {
      temp_v3 = temp_v0 + temp_v1 * 0xd0;
      if ((*(unsigned char *)(temp_v3 + 0x20) == 0) || (acStack_168[*(unsigned char *)(temp_v3 + 0x20)] == '\0')) {
        temp_v4 = *(unsigned int *)(param_1 + 0x114c);
        temp_v8 = *(unsigned int *)(param_1 + 0x1144);
        if (*(char *)(temp_v3 + 0x2c) != '0') {
          DAT_0058800c = 0;
          textFormatBuffer(temp_v9,&DAT_005328fc,temp_v3 + 0x2c);
          temp_v5 = tableGroupFindEntryIndex(temp_v8,temp_v9);
          scrScriptProcessStartEntry(temp_v4,temp_v5);
          do {
            temp_v2 = FUN_00224880(temp_v4);
          } while (temp_v2 != 2);
          if (DAT_0058800c != 0) goto LAB_004b6d80;
        }
        if (((*(short *)(temp_v3 + 0x3c) == 0) || (temp_v2 = gameFlagIsSet(), temp_v2 != 0)) &&
           ((*(short *)(temp_v3 + 0x3e) == 0 || (temp_v2 = gameFlagIsSet(), temp_v2 == 0)))) {
          acStack_168[*(unsigned char *)(temp_v3 + 0x20)] = '\x01';
          FUN_004baa7c(param_1 + 0x9c,temp_v3,param_2);
        }
      }
LAB_004b6d80:
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < (int)puVar2);
  }
  temp_v0 = g_aocSystem;
  FUN_0046eb24(g_aocSystem,*(int *)(param_1 + 0x1120) + 1);
  temp_v1 = 0;
  if (temp_v1 < temp_v0) {
    do {
      temp_v3 = g_aocSystem;
      contentEntryGetFromFilesByKind(g_aocSystem,*(int *)(param_1 + 0x1120) + 1,temp_v1);
      if ((*(unsigned char *)(temp_v3 + 0x20) == 0) || (acStack_168[*(unsigned char *)(temp_v3 + 0x20)] == '\0')) {
        temp_v4 = *(unsigned int *)(param_1 + 0x1144);
        temp_v5 = *(unsigned int *)(param_1 + 0x114c);
        if (*(char *)(temp_v3 + 0x2c) != '0') {
          DAT_0058800c = 0;
          textFormatBuffer(temp_v9,&DAT_005328fc,temp_v3 + 0x2c);
          temp_v4 = tableGroupFindEntryIndex(temp_v4,temp_v9);
          scrScriptProcessStartEntry(temp_v5,temp_v4);
          do {
            temp_v2 = FUN_00224880(temp_v5);
          } while (temp_v2 != 2);
          if (DAT_0058800c != 0) goto LAB_004b6ea0;
        }
        if (((*(short *)(temp_v3 + 0x3c) == 0) || (temp_v2 = gameFlagIsSet(), temp_v2 != 0)) &&
           ((*(short *)(temp_v3 + 0x3e) == 0 || (temp_v2 = gameFlagIsSet(), temp_v2 == 0)))) {
          acStack_168[*(unsigned char *)(temp_v3 + 0x20)] = '\x01';
          FUN_004baa7c(param_1 + 0x9c,temp_v3,param_2);
        }
      }
LAB_004b6ea0:
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < temp_v0);
  }
  FUN_004bb064(param_1 + 0x9c);
  temp_v1 = gameStateIsFlagSetAndLarge();
  temp_v0 = -1;
  if (temp_v1 != 0) {
    temp_v0 = (*(int *)((unsigned char *)&g_gameState + 0x57c));
  }
  if (*(short *)(param_1 + 0x40) != 0) {
    temp_v0 = (int)*(short *)(param_1 + 0x40);
  }
  if (temp_v0 != -1) {
    menu4CScrollToKind(param_1 + 0x9c,temp_v0);
  }
  temp_v0 = menu4CGetCurrentEntry(param_1 + 0x9c);
  temp_v1 = (int)*(short *)(temp_v0 + 0x22);
  temp_v0 = (int)*(short *)(temp_v0 + 0x24);
  *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_1 + 0x20) | 0x1000;
  temp_v7 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v6 = (float)VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(param_1 + 0x60) = *(unsigned int *)(param_1 + 0x58);
  *(unsigned int *)(param_1 + 100) = *(unsigned int *)(param_1 + 0x5c);
  *(float *)(param_1 + 0x68) = temp_v7 - 200.0f;
  *(float *)(param_1 + 0x6c) = temp_v6 - 120.0f;
  FUN_004b9ff4(param_1,param_1 + 0x60);
  FUN_004b9ff4(param_1,param_1 + 0x68);
  *(unsigned int *)(param_1 + 0x78) = *(unsigned int *)(param_1 + 0x70);
  temp_v5 = VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v4 = VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(param_1 + 0x7c) = *(unsigned int *)(param_1 + 0x74);
  *(unsigned int *)(param_1 + 0x80) = temp_v5;
  *(unsigned int *)(param_1 + 0x84) = temp_v4;
  *(unsigned int *)(param_1 + 0x88) = 0;
  *(unsigned int *)(param_1 + 0x8c) = 1;
  FUN_004b75d0(param_1);
  menu4CReset(param_1 + 0x9c);
  return;
}

} /* extern "C" */
